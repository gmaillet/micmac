#include "include/MMVII_all.h"
#include <boost/algorithm/cxx14/equal.hpp>


/** \file BenchSerial.cpp
    \brief Bench correction of Serialization


*/


namespace MMVII
{
template <class Type> bool EqualCont(const Type &aV1,const Type & aV2)
{
    return  boost::algorithm::equal(aV1.begin(),aV1.end(),aV2.begin(),aV2.end());
}


/***********************************************************/

/// class to illustrate basic serialization

class cTestSerial0
{
     public :
        cTestSerial0() : 
             mP1 (1,2) , 
             mP2(3,3) 
        {
        }
        bool operator ==   (const cTestSerial0 & aT0) const {return (mP1==aT0.mP1) && (mP2==aT0.mP2);}
        cPt2dr mP1;
        cPt2dr mP2;
};

void f()
{
    cPt2dr aP;
    (aP==aP);
}

///  To serialize cTestSerial0, just indicate that it is made of mP1 and mP2

void AddData(const cAuxAr2007 & anAux, cTestSerial0 &    aTS0) 
{
    AddData(cAuxAr2007("P1",anAux),aTS0.mP1);
    AddData(cAuxAr2007("P2",anAux),aTS0.mP2);
}

///  a more complex class to illustrate serializaion
/**
    This class illustrate that there is no problem to use
  recursively the  serializain: once AddData has been defined
  in cTestSerial0 it can be used in AddData
*/
class cTestSerial1
{
     public :
        cTestSerial1() : 
             mS("Hello"), 
             mP3(3.1,3.2) ,
             mLI{1,22,333},
             mO2 (cPt2dr(100,1000))
        {
        }
        bool operator ==   (const cTestSerial1 & aT1) const 
        {
            return     (mTS0==aT1.mTS0) 
                    && (mS==aT1.mS) 
                    && (mP3==aT1.mP3) 
                    && (mO1==aT1.mO1) 
                    && (mO2==aT1.mO2)
                    && EqualCont(mLI,aT1.mLI)   ;
        }
        cTestSerial0            mTS0;
        std::string             mS;
        cPt2dr                  mP3;
        std::list<int>          mLI;
        boost::optional<cPt2dr> mO1;
        boost::optional<cPt2dr> mO2;


/*
        bool operator() == (const cTestSerial1 & aS)
        {
             return (mS==aTS.
        }
        /// Check a TS is OK, as all the object are the same  just check its value
        void Check(const cTestSerial1 & aS)
*/
};


void AddData(const cAuxAr2007 & anAux, cTestSerial1 &    aTS1) 
{
    AddData(cAuxAr2007("TS0",anAux),aTS1.mTS0);
    AddData(cAuxAr2007("S",anAux),aTS1.mS);
    AddData(cAuxAr2007("P3",anAux),aTS1.mP3);
    AddData(cAuxAr2007("LI",anAux),aTS1.mLI);
    OptAddData(anAux,"O1",aTS1.mO1);
    OptAddData(anAux,"O2",aTS1.mO2);
}


///  a class to illustrate flexibility in serialization
/**  This class illusrate that the serialization protocol
  is very flexible, in this class we save the mTS0.mP1 data
  field at the same xml-level 
*/

class cTestSerial2 : public cTestSerial1
{
};

void AddData(const cAuxAr2007 & anAux, cTestSerial2 &    aTS2) 
{
    AddData(cAuxAr2007("TS0:P1",anAux),aTS2.mTS0.mP1);
    AddData(cAuxAr2007("TS0:P2",anAux),aTS2.mTS0.mP2);
    AddData(cAuxAr2007("S",anAux),aTS2.mS);
    AddData(cAuxAr2007("P3",anAux),aTS2.mP3);
    AddData(cAuxAr2007("LI",anAux),aTS2.mLI);
    OptAddData(anAux,"O1",aTS2.mO1);
    OptAddData(anAux,"O2",aTS2.mO2);
}

void BenchSerialization()
{
    std::string aDir= DirCur();

    SaveInFile(cTestSerial1(),aDir+"F1.xml");

    cTestSerial1 aP12;
    ReadFromFile(aP12,aDir+"F1.xml");
    // Check the value read is the same
    MMVII_INTERNAL_ASSERT_bench(aP12==cTestSerial1(),"cAppli_MMVII_TestSerial");
    {
       // Check that == return false if we change a few
       cTestSerial1 aPModif = aP12;
       aPModif.mO1 = cPt2dr(14,18);
       MMVII_INTERNAL_ASSERT_bench(!(aPModif==cTestSerial1()),"cAppli_MMVII_TestSerial");
    }
    SaveInFile(aP12,aDir+"F2.xml");

    cTestSerial1 aP23;
    ReadFromFile(aP23,aDir+"F2.xml");
    SaveInFile(aP23,aDir+"F3.dmp");


    cTestSerial1 aP34;
    ReadFromFile(aP34,aDir+"F3.dmp");
    // Check dump value are preserved
    MMVII_INTERNAL_ASSERT_bench(aP34==cTestSerial1(),"cAppli_MMVII_TestSerial");
    SaveInFile(aP34,aDir+"F4.xml");


    SaveInFile(cTestSerial2(),aDir+"F_T2.xml");
    cTestSerial2 aT2;
    // Generate an error
    if (0)
      ReadFromFile(aT2,aDir+"F2.xml");
    ReadFromFile(aT2,aDir+"F_T2.xml"); // OK , read what we wrote as usual
    // and the value is the same
    MMVII_INTERNAL_ASSERT_bench(aT2==cTestSerial1(),"cAppli_MMVII_TestSerial");
    
    ReadFromFile(aT2,aDir+"F3.dmp");   // OK also in binary, the format has no influence
    // And the value is still the same as dump is compatible at binary level
    MMVII_INTERNAL_ASSERT_bench(aT2==cTestSerial1(),"cAppli_MMVII_TestSerial");

    // return EXIT_SUCCESS;
}



};


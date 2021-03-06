// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxDy_Polyn0.h"


cREgDistDxDy_Polyn0::cREgDistDxDy_Polyn0():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,3));
   Close(false);
}



void cREgDistDxDy_Polyn0::ComputeVal()
{

  mVal[0] = (mLocRegDistxy1_x + mLocRegDistxy2_x) - (mLocRegDistxy3_x + mLocRegDistxy4_x);

  mVal[1] = (mLocRegDistxy1_y + mLocRegDistxy2_y) - (mLocRegDistxy3_y + mLocRegDistxy4_y);

}


void cREgDistDxDy_Polyn0::ComputeValDeriv()
{

  mVal[0] = (mLocRegDistxy1_x + mLocRegDistxy2_x) - (mLocRegDistxy3_x + mLocRegDistxy4_x);

  mCompDer[0][0] = 0;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 0;
  mVal[1] = (mLocRegDistxy1_y + mLocRegDistxy2_y) - (mLocRegDistxy3_y + mLocRegDistxy4_y);

  mCompDer[1][0] = 0;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 0;
}


void cREgDistDxDy_Polyn0::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxDy_Polyn0 Has no Der Sec");
}

void cREgDistDxDy_Polyn0::SetRegDistxy1_x(double aVal){ mLocRegDistxy1_x = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy1_y(double aVal){ mLocRegDistxy1_y = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy2_x(double aVal){ mLocRegDistxy2_x = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy2_y(double aVal){ mLocRegDistxy2_y = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy3_x(double aVal){ mLocRegDistxy3_x = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy3_y(double aVal){ mLocRegDistxy3_y = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy4_x(double aVal){ mLocRegDistxy4_x = aVal;}
void cREgDistDxDy_Polyn0::SetRegDistxy4_y(double aVal){ mLocRegDistxy4_y = aVal;}



double * cREgDistDxDy_Polyn0::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistxy1_x") return & mLocRegDistxy1_x;
   if (aName == "RegDistxy1_y") return & mLocRegDistxy1_y;
   if (aName == "RegDistxy2_x") return & mLocRegDistxy2_x;
   if (aName == "RegDistxy2_y") return & mLocRegDistxy2_y;
   if (aName == "RegDistxy3_x") return & mLocRegDistxy3_x;
   if (aName == "RegDistxy3_y") return & mLocRegDistxy3_y;
   if (aName == "RegDistxy4_x") return & mLocRegDistxy4_x;
   if (aName == "RegDistxy4_y") return & mLocRegDistxy4_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxDy_Polyn0::mTheAuto("cREgDistDxDy_Polyn0",cREgDistDxDy_Polyn0::Alloc);


cElCompiledFonc *  cREgDistDxDy_Polyn0::Alloc()
{  return new cREgDistDxDy_Polyn0();
}



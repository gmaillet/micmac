// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_Droite_GL__PTInc_M2CNoVar.h"


cEqAppui_Droite_GL__PTInc_M2CNoVar::cEqAppui_Droite_GL__PTInc_M2CNoVar():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Orient",0,6));
   AddIntRef (cIncIntervale("Tmp_PTer",6,9));
   Close(false);
}



void cEqAppui_Droite_GL__PTInc_M2CNoVar::ComputeVal()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = mCompCoord[1];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[2];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[6];
   double tmp14_ = mCompCoord[3];
   double tmp15_ = tmp13_-tmp14_;
   double tmp16_ = -(tmp5_);
   double tmp17_ = tmp16_*tmp10_;
   double tmp18_ = tmp3_*tmp11_;
   double tmp19_ = tmp18_*tmp12_;
   double tmp20_ = tmp17_+tmp19_;
   double tmp21_ = tmp3_*tmp10_;
   double tmp22_ = tmp5_*tmp11_;
   double tmp23_ = tmp22_*tmp12_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp2_*tmp12_;
   double tmp26_ = mCompCoord[7];
   double tmp27_ = mCompCoord[4];
   double tmp28_ = tmp26_-tmp27_;
   double tmp29_ = mCompCoord[8];
   double tmp30_ = mCompCoord[5];
   double tmp31_ = tmp29_-tmp30_;
   double tmp32_ = tmp16_*tmp12_;
   double tmp33_ = tmp18_*tmp9_;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = tmp3_*tmp12_;
   double tmp36_ = tmp22_*tmp9_;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = tmp2_*tmp9_;
   double tmp39_ = (tmp20_)*mLocGL_0_0;
   double tmp40_ = (tmp24_)*mLocGL_1_0;
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = tmp25_*mLocGL_2_0;
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = (tmp43_)*(tmp15_);
   double tmp45_ = (tmp20_)*mLocGL_0_1;
   double tmp46_ = (tmp24_)*mLocGL_1_1;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = tmp25_*mLocGL_2_1;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp28_);
   double tmp51_ = tmp44_+tmp50_;
   double tmp52_ = (tmp20_)*mLocGL_0_2;
   double tmp53_ = (tmp24_)*mLocGL_1_2;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = tmp25_*mLocGL_2_2;
   double tmp56_ = tmp54_+tmp55_;
   double tmp57_ = (tmp56_)*(tmp31_);
   double tmp58_ = tmp51_+tmp57_;
   double tmp59_ = 1.000000/(tmp58_);

  mVal[0] = (mLocXIm-cos(mLocYIm)*((tmp4_*mLocGL_0_0+tmp6_*mLocGL_1_0+tmp7_*mLocGL_2_0)*(tmp15_)+(tmp4_*mLocGL_0_1+tmp6_*mLocGL_1_1+tmp7_*mLocGL_2_1)*(tmp28_)+(tmp4_*mLocGL_0_2+tmp6_*mLocGL_1_2+tmp7_*mLocGL_2_2)*(tmp31_))*(tmp59_)-sin(mLocYIm)*(((tmp34_)*mLocGL_0_0+(tmp37_)*mLocGL_1_0+tmp38_*mLocGL_2_0)*(tmp15_)+((tmp34_)*mLocGL_0_1+(tmp37_)*mLocGL_1_1+tmp38_*mLocGL_2_1)*(tmp28_)+((tmp34_)*mLocGL_0_2+(tmp37_)*mLocGL_1_2+tmp38_*mLocGL_2_2)*(tmp31_))*(tmp59_))*mLocScNorm;

}


void cEqAppui_Droite_GL__PTInc_M2CNoVar::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[0];
   double tmp1_ = mCompCoord[1];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[2];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[6];
   double tmp14_ = mCompCoord[3];
   double tmp15_ = tmp13_-tmp14_;
   double tmp16_ = -(tmp5_);
   double tmp17_ = tmp16_*tmp10_;
   double tmp18_ = tmp3_*tmp11_;
   double tmp19_ = tmp18_*tmp12_;
   double tmp20_ = tmp17_+tmp19_;
   double tmp21_ = tmp3_*tmp10_;
   double tmp22_ = tmp5_*tmp11_;
   double tmp23_ = tmp22_*tmp12_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp2_*tmp12_;
   double tmp26_ = mCompCoord[7];
   double tmp27_ = mCompCoord[4];
   double tmp28_ = tmp26_-tmp27_;
   double tmp29_ = mCompCoord[8];
   double tmp30_ = mCompCoord[5];
   double tmp31_ = tmp29_-tmp30_;
   double tmp32_ = tmp16_*tmp12_;
   double tmp33_ = tmp18_*tmp9_;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = tmp3_*tmp12_;
   double tmp36_ = tmp22_*tmp9_;
   double tmp37_ = tmp35_+tmp36_;
   double tmp38_ = tmp2_*tmp9_;
   double tmp39_ = (tmp20_)*mLocGL_0_0;
   double tmp40_ = (tmp24_)*mLocGL_1_0;
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = tmp25_*mLocGL_2_0;
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = (tmp43_)*(tmp15_);
   double tmp45_ = (tmp20_)*mLocGL_0_1;
   double tmp46_ = (tmp24_)*mLocGL_1_1;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = tmp25_*mLocGL_2_1;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp28_);
   double tmp51_ = tmp44_+tmp50_;
   double tmp52_ = (tmp20_)*mLocGL_0_2;
   double tmp53_ = (tmp24_)*mLocGL_1_2;
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = tmp25_*mLocGL_2_2;
   double tmp56_ = tmp54_+tmp55_;
   double tmp57_ = (tmp56_)*(tmp31_);
   double tmp58_ = tmp51_+tmp57_;
   double tmp59_ = 1.000000/(tmp58_);
   double tmp60_ = -(1);
   double tmp61_ = tmp60_*tmp5_;
   double tmp62_ = tmp61_*tmp2_;
   double tmp63_ = -(tmp3_);
   double tmp64_ = tmp63_*tmp10_;
   double tmp65_ = tmp61_*tmp11_;
   double tmp66_ = tmp65_*tmp12_;
   double tmp67_ = tmp64_+tmp66_;
   double tmp68_ = tmp61_*tmp10_;
   double tmp69_ = tmp68_+tmp19_;
   double tmp70_ = tmp4_*mLocGL_0_0;
   double tmp71_ = tmp6_*mLocGL_1_0;
   double tmp72_ = tmp70_+tmp71_;
   double tmp73_ = tmp7_*mLocGL_2_0;
   double tmp74_ = tmp72_+tmp73_;
   double tmp75_ = (tmp74_)*(tmp15_);
   double tmp76_ = tmp4_*mLocGL_0_1;
   double tmp77_ = tmp6_*mLocGL_1_1;
   double tmp78_ = tmp76_+tmp77_;
   double tmp79_ = tmp7_*mLocGL_2_1;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = (tmp80_)*(tmp28_);
   double tmp82_ = tmp75_+tmp81_;
   double tmp83_ = tmp4_*mLocGL_0_2;
   double tmp84_ = tmp6_*mLocGL_1_2;
   double tmp85_ = tmp83_+tmp84_;
   double tmp86_ = tmp7_*mLocGL_2_2;
   double tmp87_ = tmp85_+tmp86_;
   double tmp88_ = (tmp87_)*(tmp31_);
   double tmp89_ = tmp82_+tmp88_;
   double tmp90_ = cos(mLocYIm);
   double tmp91_ = tmp63_*tmp12_;
   double tmp92_ = tmp65_*tmp9_;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = tmp61_*tmp12_;
   double tmp95_ = tmp94_+tmp33_;
   double tmp96_ = (tmp67_)*mLocGL_0_0;
   double tmp97_ = (tmp69_)*mLocGL_1_0;
   double tmp98_ = tmp96_+tmp97_;
   double tmp99_ = (tmp98_)*(tmp15_);
   double tmp100_ = (tmp67_)*mLocGL_0_1;
   double tmp101_ = (tmp69_)*mLocGL_1_1;
   double tmp102_ = tmp100_+tmp101_;
   double tmp103_ = (tmp102_)*(tmp28_);
   double tmp104_ = tmp99_+tmp103_;
   double tmp105_ = (tmp67_)*mLocGL_0_2;
   double tmp106_ = (tmp69_)*mLocGL_1_2;
   double tmp107_ = tmp105_+tmp106_;
   double tmp108_ = (tmp107_)*(tmp31_);
   double tmp109_ = tmp104_+tmp108_;
   double tmp110_ = -(tmp109_);
   double tmp111_ = ElSquare(tmp58_);
   double tmp112_ = tmp110_/tmp111_;
   double tmp113_ = (tmp34_)*mLocGL_0_0;
   double tmp114_ = (tmp37_)*mLocGL_1_0;
   double tmp115_ = tmp113_+tmp114_;
   double tmp116_ = tmp38_*mLocGL_2_0;
   double tmp117_ = tmp115_+tmp116_;
   double tmp118_ = (tmp117_)*(tmp15_);
   double tmp119_ = (tmp34_)*mLocGL_0_1;
   double tmp120_ = (tmp37_)*mLocGL_1_1;
   double tmp121_ = tmp119_+tmp120_;
   double tmp122_ = tmp38_*mLocGL_2_1;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp123_)*(tmp28_);
   double tmp125_ = tmp118_+tmp124_;
   double tmp126_ = (tmp34_)*mLocGL_0_2;
   double tmp127_ = (tmp37_)*mLocGL_1_2;
   double tmp128_ = tmp126_+tmp127_;
   double tmp129_ = tmp38_*mLocGL_2_2;
   double tmp130_ = tmp128_+tmp129_;
   double tmp131_ = (tmp130_)*(tmp31_);
   double tmp132_ = tmp125_+tmp131_;
   double tmp133_ = sin(mLocYIm);
   double tmp134_ = tmp60_*tmp7_;
   double tmp135_ = tmp134_*tmp3_;
   double tmp136_ = tmp134_*tmp5_;
   double tmp137_ = -(tmp2_);
   double tmp138_ = tmp137_*tmp3_;
   double tmp139_ = tmp138_*tmp12_;
   double tmp140_ = tmp137_*tmp5_;
   double tmp141_ = tmp140_*tmp12_;
   double tmp142_ = tmp134_*tmp12_;
   double tmp143_ = tmp138_*tmp9_;
   double tmp144_ = tmp140_*tmp9_;
   double tmp145_ = tmp134_*tmp9_;
   double tmp146_ = tmp139_*mLocGL_0_0;
   double tmp147_ = tmp141_*mLocGL_1_0;
   double tmp148_ = tmp146_+tmp147_;
   double tmp149_ = tmp142_*mLocGL_2_0;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp150_)*(tmp15_);
   double tmp152_ = tmp139_*mLocGL_0_1;
   double tmp153_ = tmp141_*mLocGL_1_1;
   double tmp154_ = tmp152_+tmp153_;
   double tmp155_ = tmp142_*mLocGL_2_1;
   double tmp156_ = tmp154_+tmp155_;
   double tmp157_ = (tmp156_)*(tmp28_);
   double tmp158_ = tmp151_+tmp157_;
   double tmp159_ = tmp139_*mLocGL_0_2;
   double tmp160_ = tmp141_*mLocGL_1_2;
   double tmp161_ = tmp159_+tmp160_;
   double tmp162_ = tmp142_*mLocGL_2_2;
   double tmp163_ = tmp161_+tmp162_;
   double tmp164_ = (tmp163_)*(tmp31_);
   double tmp165_ = tmp158_+tmp164_;
   double tmp166_ = -(tmp165_);
   double tmp167_ = tmp166_/tmp111_;
   double tmp168_ = -(tmp12_);
   double tmp169_ = tmp60_*tmp9_;
   double tmp170_ = tmp168_*tmp16_;
   double tmp171_ = tmp169_*tmp18_;
   double tmp172_ = tmp170_+tmp171_;
   double tmp173_ = tmp168_*tmp3_;
   double tmp174_ = tmp169_*tmp22_;
   double tmp175_ = tmp173_+tmp174_;
   double tmp176_ = tmp169_*tmp2_;
   double tmp177_ = tmp169_*tmp16_;
   double tmp178_ = tmp12_*tmp18_;
   double tmp179_ = tmp177_+tmp178_;
   double tmp180_ = tmp169_*tmp3_;
   double tmp181_ = tmp12_*tmp22_;
   double tmp182_ = tmp180_+tmp181_;
   double tmp183_ = tmp12_*tmp2_;
   double tmp184_ = (tmp172_)*mLocGL_0_0;
   double tmp185_ = (tmp175_)*mLocGL_1_0;
   double tmp186_ = tmp184_+tmp185_;
   double tmp187_ = tmp176_*mLocGL_2_0;
   double tmp188_ = tmp186_+tmp187_;
   double tmp189_ = (tmp188_)*(tmp15_);
   double tmp190_ = (tmp172_)*mLocGL_0_1;
   double tmp191_ = (tmp175_)*mLocGL_1_1;
   double tmp192_ = tmp190_+tmp191_;
   double tmp193_ = tmp176_*mLocGL_2_1;
   double tmp194_ = tmp192_+tmp193_;
   double tmp195_ = (tmp194_)*(tmp28_);
   double tmp196_ = tmp189_+tmp195_;
   double tmp197_ = (tmp172_)*mLocGL_0_2;
   double tmp198_ = (tmp175_)*mLocGL_1_2;
   double tmp199_ = tmp197_+tmp198_;
   double tmp200_ = tmp176_*mLocGL_2_2;
   double tmp201_ = tmp199_+tmp200_;
   double tmp202_ = (tmp201_)*(tmp31_);
   double tmp203_ = tmp196_+tmp202_;
   double tmp204_ = -(tmp203_);
   double tmp205_ = tmp204_/tmp111_;
   double tmp206_ = tmp60_*(tmp43_);
   double tmp207_ = -(tmp206_);
   double tmp208_ = tmp207_/tmp111_;
   double tmp209_ = tmp60_*(tmp49_);
   double tmp210_ = -(tmp209_);
   double tmp211_ = tmp210_/tmp111_;
   double tmp212_ = tmp60_*(tmp56_);
   double tmp213_ = -(tmp212_);
   double tmp214_ = tmp213_/tmp111_;
   double tmp215_ = -(tmp43_);
   double tmp216_ = tmp215_/tmp111_;
   double tmp217_ = -(tmp49_);
   double tmp218_ = tmp217_/tmp111_;
   double tmp219_ = -(tmp56_);
   double tmp220_ = tmp219_/tmp111_;

  mVal[0] = (mLocXIm-tmp90_*(tmp89_)*(tmp59_)-tmp133_*(tmp132_)*(tmp59_))*mLocScNorm;

  mCompDer[0][0] = (-((((tmp62_*mLocGL_0_0+tmp4_*mLocGL_1_0)*(tmp15_)+(tmp62_*mLocGL_0_1+tmp4_*mLocGL_1_1)*(tmp28_)+(tmp62_*mLocGL_0_2+tmp4_*mLocGL_1_2)*(tmp31_))*(tmp59_)+(tmp112_)*(tmp89_))*tmp90_)-((((tmp93_)*mLocGL_0_0+(tmp95_)*mLocGL_1_0)*(tmp15_)+((tmp93_)*mLocGL_0_1+(tmp95_)*mLocGL_1_1)*(tmp28_)+((tmp93_)*mLocGL_0_2+(tmp95_)*mLocGL_1_2)*(tmp31_))*(tmp59_)+(tmp112_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][1] = (-((((tmp135_*mLocGL_0_0+tmp136_*mLocGL_1_0+tmp2_*mLocGL_2_0)*(tmp15_)+(tmp135_*mLocGL_0_1+tmp136_*mLocGL_1_1+tmp2_*mLocGL_2_1)*(tmp28_)+(tmp135_*mLocGL_0_2+tmp136_*mLocGL_1_2+tmp2_*mLocGL_2_2)*(tmp31_))*(tmp59_)+(tmp167_)*(tmp89_))*tmp90_)-(((tmp143_*mLocGL_0_0+tmp144_*mLocGL_1_0+tmp145_*mLocGL_2_0)*(tmp15_)+(tmp143_*mLocGL_0_1+tmp144_*mLocGL_1_1+tmp145_*mLocGL_2_1)*(tmp28_)+(tmp143_*mLocGL_0_2+tmp144_*mLocGL_1_2+tmp145_*mLocGL_2_2)*(tmp31_))*(tmp59_)+(tmp167_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][2] = (-((tmp205_)*(tmp89_)*tmp90_)-((((tmp179_)*mLocGL_0_0+(tmp182_)*mLocGL_1_0+tmp183_*mLocGL_2_0)*(tmp15_)+((tmp179_)*mLocGL_0_1+(tmp182_)*mLocGL_1_1+tmp183_*mLocGL_2_1)*(tmp28_)+((tmp179_)*mLocGL_0_2+(tmp182_)*mLocGL_1_2+tmp183_*mLocGL_2_2)*(tmp31_))*(tmp59_)+(tmp205_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][3] = (-((tmp60_*(tmp74_)*(tmp59_)+(tmp208_)*(tmp89_))*tmp90_)-(tmp60_*(tmp117_)*(tmp59_)+(tmp208_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][4] = (-((tmp60_*(tmp80_)*(tmp59_)+(tmp211_)*(tmp89_))*tmp90_)-(tmp60_*(tmp123_)*(tmp59_)+(tmp211_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][5] = (-((tmp60_*(tmp87_)*(tmp59_)+(tmp214_)*(tmp89_))*tmp90_)-(tmp60_*(tmp130_)*(tmp59_)+(tmp214_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][6] = (-(((tmp74_)*(tmp59_)+(tmp216_)*(tmp89_))*tmp90_)-((tmp117_)*(tmp59_)+(tmp216_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][7] = (-(((tmp80_)*(tmp59_)+(tmp218_)*(tmp89_))*tmp90_)-((tmp123_)*(tmp59_)+(tmp218_)*(tmp132_))*tmp133_)*mLocScNorm;
  mCompDer[0][8] = (-(((tmp87_)*(tmp59_)+(tmp220_)*(tmp89_))*tmp90_)-((tmp130_)*(tmp59_)+(tmp220_)*(tmp132_))*tmp133_)*mLocScNorm;
}


void cEqAppui_Droite_GL__PTInc_M2CNoVar::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Droite_GL__PTInc_M2CNoVar Has no Der Sec");
}

void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_0_0(double aVal){ mLocGL_0_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_0_1(double aVal){ mLocGL_0_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_0_2(double aVal){ mLocGL_0_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_1_0(double aVal){ mLocGL_1_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_1_1(double aVal){ mLocGL_1_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_1_2(double aVal){ mLocGL_1_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_2_0(double aVal){ mLocGL_2_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_2_1(double aVal){ mLocGL_2_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetGL_2_2(double aVal){ mLocGL_2_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CNoVar::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_Droite_GL__PTInc_M2CNoVar::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "GL_0_0") return & mLocGL_0_0;
   if (aName == "GL_0_1") return & mLocGL_0_1;
   if (aName == "GL_0_2") return & mLocGL_0_2;
   if (aName == "GL_1_0") return & mLocGL_1_0;
   if (aName == "GL_1_1") return & mLocGL_1_1;
   if (aName == "GL_1_2") return & mLocGL_1_2;
   if (aName == "GL_2_0") return & mLocGL_2_0;
   if (aName == "GL_2_1") return & mLocGL_2_1;
   if (aName == "GL_2_2") return & mLocGL_2_2;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Droite_GL__PTInc_M2CNoVar::mTheAuto("cEqAppui_Droite_GL__PTInc_M2CNoVar",cEqAppui_Droite_GL__PTInc_M2CNoVar::Alloc);


cElCompiledFonc *  cEqAppui_Droite_GL__PTInc_M2CNoVar::Alloc()
{  return new cEqAppui_Droite_GL__PTInc_M2CNoVar();
}



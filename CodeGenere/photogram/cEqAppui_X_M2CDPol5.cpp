// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_X_M2CDPol5.h"


cEqAppui_X_M2CDPol5::cEqAppui_X_M2CDPol5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,42));
   AddIntRef (cIncIntervale("Orient",42,48));
   Close(false);
}



void cEqAppui_X_M2CDPol5::ComputeVal()
{
   double tmp0_ = mCompCoord[42];
   double tmp1_ = mCompCoord[44];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[43];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[45];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[46];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[47];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = tmp9_*tmp13_;
   double tmp21_ = tmp10_*tmp3_;
   double tmp22_ = tmp20_+tmp21_;
   double tmp23_ = (tmp22_)*(tmp12_);
   double tmp24_ = tmp2_*tmp13_;
   double tmp25_ = tmp14_*tmp3_;
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = (tmp26_)*(tmp16_);
   double tmp28_ = tmp23_+tmp27_;
   double tmp29_ = tmp17_*tmp3_;
   double tmp30_ = tmp29_*(tmp19_);
   double tmp31_ = tmp28_+tmp30_;
   double tmp32_ = tmp9_*tmp3_;
   double tmp33_ = tmp10_*tmp8_;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp12_);
   double tmp36_ = tmp2_*tmp3_;
   double tmp37_ = tmp14_*tmp8_;
   double tmp38_ = tmp36_+tmp37_;
   double tmp39_ = (tmp38_)*(tmp16_);
   double tmp40_ = tmp35_+tmp39_;
   double tmp41_ = tmp17_*tmp8_;
   double tmp42_ = tmp41_*(tmp19_);
   double tmp43_ = tmp40_+tmp42_;
   double tmp44_ = (tmp43_)/(tmp31_);
   double tmp45_ = tmp2_*tmp17_;
   double tmp46_ = tmp45_*(tmp12_);
   double tmp47_ = tmp4_*tmp17_;
   double tmp48_ = tmp47_*(tmp16_);
   double tmp49_ = tmp46_+tmp48_;
   double tmp50_ = tmp6_*(tmp19_);
   double tmp51_ = tmp49_+tmp50_;
   double tmp52_ = (tmp51_)/(tmp31_);
   double tmp53_ = ElSquare(tmp44_);
   double tmp54_ = ElSquare(tmp52_);
   double tmp55_ = VCube(tmp44_);
   double tmp56_ = VCube(tmp52_);
   double tmp57_ = VPow4(tmp44_);
   double tmp58_ = VPow4(tmp52_);

  mVal[0] = (mCompCoord[0]+mCompCoord[1]*(tmp44_)+mCompCoord[2]*(tmp52_)+mCompCoord[3]*tmp53_+mCompCoord[4]*(tmp52_)*(tmp44_)+mCompCoord[5]*tmp54_+mCompCoord[6]*tmp55_+mCompCoord[7]*(tmp52_)*tmp53_+mCompCoord[8]*tmp54_*(tmp44_)+mCompCoord[9]*tmp56_+mCompCoord[10]*tmp57_+mCompCoord[11]*(tmp52_)*tmp55_+mCompCoord[12]*tmp54_*tmp53_+mCompCoord[13]*tmp56_*(tmp44_)+mCompCoord[14]*tmp58_+mCompCoord[15]*VPow5(tmp44_)+mCompCoord[16]*(tmp52_)*tmp57_+mCompCoord[17]*tmp54_*tmp55_+mCompCoord[18]*tmp56_*tmp53_+mCompCoord[19]*tmp58_*(tmp44_)+mCompCoord[20]*VPow5(tmp52_))-mLocXIm;

}


void cEqAppui_X_M2CDPol5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[42];
   double tmp1_ = mCompCoord[44];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[43];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[45];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[46];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[47];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = tmp9_*tmp13_;
   double tmp21_ = tmp10_*tmp3_;
   double tmp22_ = tmp20_+tmp21_;
   double tmp23_ = (tmp22_)*(tmp12_);
   double tmp24_ = tmp2_*tmp13_;
   double tmp25_ = tmp14_*tmp3_;
   double tmp26_ = tmp24_+tmp25_;
   double tmp27_ = (tmp26_)*(tmp16_);
   double tmp28_ = tmp23_+tmp27_;
   double tmp29_ = tmp17_*tmp3_;
   double tmp30_ = tmp29_*(tmp19_);
   double tmp31_ = tmp28_+tmp30_;
   double tmp32_ = tmp9_*tmp3_;
   double tmp33_ = tmp10_*tmp8_;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp12_);
   double tmp36_ = tmp2_*tmp3_;
   double tmp37_ = tmp14_*tmp8_;
   double tmp38_ = tmp36_+tmp37_;
   double tmp39_ = (tmp38_)*(tmp16_);
   double tmp40_ = tmp35_+tmp39_;
   double tmp41_ = tmp17_*tmp8_;
   double tmp42_ = tmp41_*(tmp19_);
   double tmp43_ = tmp40_+tmp42_;
   double tmp44_ = (tmp43_)/(tmp31_);
   double tmp45_ = tmp2_*tmp17_;
   double tmp46_ = tmp45_*(tmp12_);
   double tmp47_ = tmp4_*tmp17_;
   double tmp48_ = tmp47_*(tmp16_);
   double tmp49_ = tmp46_+tmp48_;
   double tmp50_ = tmp6_*(tmp19_);
   double tmp51_ = tmp49_+tmp50_;
   double tmp52_ = (tmp51_)/(tmp31_);
   double tmp53_ = ElSquare(tmp44_);
   double tmp54_ = ElSquare(tmp52_);
   double tmp55_ = VCube(tmp44_);
   double tmp56_ = VCube(tmp52_);
   double tmp57_ = VPow4(tmp44_);
   double tmp58_ = VPow4(tmp52_);
   double tmp59_ = VPow5(tmp44_);
   double tmp60_ = VPow5(tmp52_);
   double tmp61_ = -(1);
   double tmp62_ = tmp61_*tmp4_;
   double tmp63_ = -(tmp2_);
   double tmp64_ = tmp62_*tmp7_;
   double tmp65_ = mCompCoord[1];
   double tmp66_ = tmp63_*tmp13_;
   double tmp67_ = tmp64_*tmp3_;
   double tmp68_ = tmp66_+tmp67_;
   double tmp69_ = (tmp68_)*(tmp12_);
   double tmp70_ = tmp62_*tmp13_;
   double tmp71_ = tmp70_+tmp21_;
   double tmp72_ = (tmp71_)*(tmp16_);
   double tmp73_ = tmp69_+tmp72_;
   double tmp74_ = ElSquare(tmp31_);
   double tmp75_ = mCompCoord[2];
   double tmp76_ = tmp63_*tmp3_;
   double tmp77_ = tmp64_*tmp8_;
   double tmp78_ = tmp76_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp12_);
   double tmp80_ = tmp62_*tmp3_;
   double tmp81_ = tmp80_+tmp33_;
   double tmp82_ = (tmp81_)*(tmp16_);
   double tmp83_ = tmp79_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp31_);
   double tmp85_ = (tmp43_)*(tmp73_);
   double tmp86_ = tmp84_-tmp85_;
   double tmp87_ = (tmp86_)/tmp74_;
   double tmp88_ = mCompCoord[3];
   double tmp89_ = tmp62_*tmp17_;
   double tmp90_ = tmp89_*(tmp12_);
   double tmp91_ = tmp45_*(tmp16_);
   double tmp92_ = tmp90_+tmp91_;
   double tmp93_ = (tmp92_)*(tmp31_);
   double tmp94_ = (tmp51_)*(tmp73_);
   double tmp95_ = tmp93_-tmp94_;
   double tmp96_ = (tmp95_)/tmp74_;
   double tmp97_ = mCompCoord[4];
   double tmp98_ = tmp97_*(tmp52_);
   double tmp99_ = mCompCoord[5];
   double tmp100_ = mCompCoord[6];
   double tmp101_ = mCompCoord[7];
   double tmp102_ = 2*(tmp87_);
   double tmp103_ = tmp102_*(tmp44_);
   double tmp104_ = tmp101_*(tmp52_);
   double tmp105_ = 2*(tmp96_);
   double tmp106_ = tmp105_*(tmp52_);
   double tmp107_ = mCompCoord[8];
   double tmp108_ = tmp107_*tmp54_;
   double tmp109_ = mCompCoord[9];
   double tmp110_ = mCompCoord[10];
   double tmp111_ = mCompCoord[11];
   double tmp112_ = 3*(tmp87_);
   double tmp113_ = tmp112_*tmp53_;
   double tmp114_ = tmp111_*(tmp52_);
   double tmp115_ = mCompCoord[12];
   double tmp116_ = tmp115_*tmp54_;
   double tmp117_ = 3*(tmp96_);
   double tmp118_ = tmp117_*tmp54_;
   double tmp119_ = mCompCoord[13];
   double tmp120_ = tmp119_*tmp56_;
   double tmp121_ = mCompCoord[14];
   double tmp122_ = mCompCoord[15];
   double tmp123_ = mCompCoord[16];
   double tmp124_ = 4*(tmp87_);
   double tmp125_ = tmp124_*tmp55_;
   double tmp126_ = tmp123_*(tmp52_);
   double tmp127_ = mCompCoord[17];
   double tmp128_ = tmp127_*tmp54_;
   double tmp129_ = mCompCoord[18];
   double tmp130_ = tmp129_*tmp56_;
   double tmp131_ = 4*(tmp96_);
   double tmp132_ = tmp131_*tmp56_;
   double tmp133_ = mCompCoord[19];
   double tmp134_ = tmp133_*tmp58_;
   double tmp135_ = mCompCoord[20];
   double tmp136_ = -(tmp17_);
   double tmp137_ = tmp136_*tmp2_;
   double tmp138_ = tmp136_*tmp4_;
   double tmp139_ = tmp61_*tmp6_;
   double tmp140_ = tmp137_*tmp3_;
   double tmp141_ = tmp140_*(tmp12_);
   double tmp142_ = tmp138_*tmp3_;
   double tmp143_ = tmp142_*(tmp16_);
   double tmp144_ = tmp141_+tmp143_;
   double tmp145_ = tmp139_*tmp3_;
   double tmp146_ = tmp145_*(tmp19_);
   double tmp147_ = tmp144_+tmp146_;
   double tmp148_ = tmp137_*tmp8_;
   double tmp149_ = tmp148_*(tmp12_);
   double tmp150_ = tmp138_*tmp8_;
   double tmp151_ = tmp150_*(tmp16_);
   double tmp152_ = tmp149_+tmp151_;
   double tmp153_ = tmp139_*tmp8_;
   double tmp154_ = tmp153_*(tmp19_);
   double tmp155_ = tmp152_+tmp154_;
   double tmp156_ = (tmp155_)*(tmp31_);
   double tmp157_ = (tmp43_)*(tmp147_);
   double tmp158_ = tmp156_-tmp157_;
   double tmp159_ = (tmp158_)/tmp74_;
   double tmp160_ = tmp139_*tmp2_;
   double tmp161_ = tmp160_*(tmp12_);
   double tmp162_ = tmp139_*tmp4_;
   double tmp163_ = tmp162_*(tmp16_);
   double tmp164_ = tmp161_+tmp163_;
   double tmp165_ = tmp17_*(tmp19_);
   double tmp166_ = tmp164_+tmp165_;
   double tmp167_ = (tmp166_)*(tmp31_);
   double tmp168_ = (tmp51_)*(tmp147_);
   double tmp169_ = tmp167_-tmp168_;
   double tmp170_ = (tmp169_)/tmp74_;
   double tmp171_ = 2*(tmp159_);
   double tmp172_ = tmp171_*(tmp44_);
   double tmp173_ = 2*(tmp170_);
   double tmp174_ = tmp173_*(tmp52_);
   double tmp175_ = 3*(tmp159_);
   double tmp176_ = tmp175_*tmp53_;
   double tmp177_ = 3*(tmp170_);
   double tmp178_ = tmp177_*tmp54_;
   double tmp179_ = 4*(tmp159_);
   double tmp180_ = tmp179_*tmp55_;
   double tmp181_ = 4*(tmp170_);
   double tmp182_ = tmp181_*tmp56_;
   double tmp183_ = tmp61_*tmp8_;
   double tmp184_ = -(tmp3_);
   double tmp185_ = tmp184_*tmp9_;
   double tmp186_ = tmp183_*tmp10_;
   double tmp187_ = tmp185_+tmp186_;
   double tmp188_ = (tmp187_)*(tmp12_);
   double tmp189_ = tmp184_*tmp2_;
   double tmp190_ = tmp183_*tmp14_;
   double tmp191_ = tmp189_+tmp190_;
   double tmp192_ = (tmp191_)*(tmp16_);
   double tmp193_ = tmp188_+tmp192_;
   double tmp194_ = tmp183_*tmp17_;
   double tmp195_ = tmp194_*(tmp19_);
   double tmp196_ = tmp193_+tmp195_;
   double tmp197_ = tmp183_*tmp9_;
   double tmp198_ = tmp3_*tmp10_;
   double tmp199_ = tmp197_+tmp198_;
   double tmp200_ = (tmp199_)*(tmp12_);
   double tmp201_ = tmp183_*tmp2_;
   double tmp202_ = tmp3_*tmp14_;
   double tmp203_ = tmp201_+tmp202_;
   double tmp204_ = (tmp203_)*(tmp16_);
   double tmp205_ = tmp200_+tmp204_;
   double tmp206_ = tmp3_*tmp17_;
   double tmp207_ = tmp206_*(tmp19_);
   double tmp208_ = tmp205_+tmp207_;
   double tmp209_ = (tmp208_)*(tmp31_);
   double tmp210_ = (tmp43_)*(tmp196_);
   double tmp211_ = tmp209_-tmp210_;
   double tmp212_ = (tmp211_)/tmp74_;
   double tmp213_ = (tmp51_)*(tmp196_);
   double tmp214_ = -(tmp213_);
   double tmp215_ = tmp214_/tmp74_;
   double tmp216_ = 2*(tmp212_);
   double tmp217_ = tmp216_*(tmp44_);
   double tmp218_ = 2*(tmp215_);
   double tmp219_ = tmp218_*(tmp52_);
   double tmp220_ = 3*(tmp212_);
   double tmp221_ = tmp220_*tmp53_;
   double tmp222_ = 3*(tmp215_);
   double tmp223_ = tmp222_*tmp54_;
   double tmp224_ = 4*(tmp212_);
   double tmp225_ = tmp224_*tmp55_;
   double tmp226_ = 4*(tmp215_);
   double tmp227_ = tmp226_*tmp56_;
   double tmp228_ = tmp61_*(tmp22_);
   double tmp229_ = tmp61_*(tmp34_);
   double tmp230_ = tmp229_*(tmp31_);
   double tmp231_ = (tmp43_)*tmp228_;
   double tmp232_ = tmp230_-tmp231_;
   double tmp233_ = (tmp232_)/tmp74_;
   double tmp234_ = tmp61_*tmp45_;
   double tmp235_ = tmp234_*(tmp31_);
   double tmp236_ = (tmp51_)*tmp228_;
   double tmp237_ = tmp235_-tmp236_;
   double tmp238_ = (tmp237_)/tmp74_;
   double tmp239_ = 2*(tmp233_);
   double tmp240_ = tmp239_*(tmp44_);
   double tmp241_ = 2*(tmp238_);
   double tmp242_ = tmp241_*(tmp52_);
   double tmp243_ = 3*(tmp233_);
   double tmp244_ = tmp243_*tmp53_;
   double tmp245_ = 3*(tmp238_);
   double tmp246_ = tmp245_*tmp54_;
   double tmp247_ = 4*(tmp233_);
   double tmp248_ = tmp247_*tmp55_;
   double tmp249_ = 4*(tmp238_);
   double tmp250_ = tmp249_*tmp56_;
   double tmp251_ = tmp61_*(tmp26_);
   double tmp252_ = tmp61_*(tmp38_);
   double tmp253_ = tmp252_*(tmp31_);
   double tmp254_ = (tmp43_)*tmp251_;
   double tmp255_ = tmp253_-tmp254_;
   double tmp256_ = (tmp255_)/tmp74_;
   double tmp257_ = tmp61_*tmp47_;
   double tmp258_ = tmp257_*(tmp31_);
   double tmp259_ = (tmp51_)*tmp251_;
   double tmp260_ = tmp258_-tmp259_;
   double tmp261_ = (tmp260_)/tmp74_;
   double tmp262_ = 2*(tmp256_);
   double tmp263_ = tmp262_*(tmp44_);
   double tmp264_ = 2*(tmp261_);
   double tmp265_ = tmp264_*(tmp52_);
   double tmp266_ = 3*(tmp256_);
   double tmp267_ = tmp266_*tmp53_;
   double tmp268_ = 3*(tmp261_);
   double tmp269_ = tmp268_*tmp54_;
   double tmp270_ = 4*(tmp256_);
   double tmp271_ = tmp270_*tmp55_;
   double tmp272_ = 4*(tmp261_);
   double tmp273_ = tmp272_*tmp56_;
   double tmp274_ = tmp61_*tmp29_;
   double tmp275_ = tmp61_*tmp41_;
   double tmp276_ = tmp275_*(tmp31_);
   double tmp277_ = (tmp43_)*tmp274_;
   double tmp278_ = tmp276_-tmp277_;
   double tmp279_ = (tmp278_)/tmp74_;
   double tmp280_ = tmp139_*(tmp31_);
   double tmp281_ = (tmp51_)*tmp274_;
   double tmp282_ = tmp280_-tmp281_;
   double tmp283_ = (tmp282_)/tmp74_;
   double tmp284_ = 2*(tmp279_);
   double tmp285_ = tmp284_*(tmp44_);
   double tmp286_ = 2*(tmp283_);
   double tmp287_ = tmp286_*(tmp52_);
   double tmp288_ = 3*(tmp279_);
   double tmp289_ = tmp288_*tmp53_;
   double tmp290_ = 3*(tmp283_);
   double tmp291_ = tmp290_*tmp54_;
   double tmp292_ = 4*(tmp279_);
   double tmp293_ = tmp292_*tmp55_;
   double tmp294_ = 4*(tmp283_);
   double tmp295_ = tmp294_*tmp56_;

  mVal[0] = (mCompCoord[0]+tmp65_*(tmp44_)+tmp75_*(tmp52_)+tmp88_*tmp53_+tmp98_*(tmp44_)+tmp99_*tmp54_+tmp100_*tmp55_+tmp104_*tmp53_+tmp108_*(tmp44_)+tmp109_*tmp56_+tmp110_*tmp57_+tmp114_*tmp55_+tmp116_*tmp53_+tmp120_*(tmp44_)+tmp121_*tmp58_+tmp122_*tmp59_+tmp126_*tmp57_+tmp128_*tmp55_+tmp130_*tmp53_+tmp134_*(tmp44_)+tmp135_*tmp60_)-mLocXIm;

  mCompDer[0][0] = 1;
  mCompDer[0][1] = tmp44_;
  mCompDer[0][2] = tmp52_;
  mCompDer[0][3] = tmp53_;
  mCompDer[0][4] = (tmp52_)*(tmp44_);
  mCompDer[0][5] = tmp54_;
  mCompDer[0][6] = tmp55_;
  mCompDer[0][7] = (tmp52_)*tmp53_;
  mCompDer[0][8] = tmp54_*(tmp44_);
  mCompDer[0][9] = tmp56_;
  mCompDer[0][10] = tmp57_;
  mCompDer[0][11] = (tmp52_)*tmp55_;
  mCompDer[0][12] = tmp54_*tmp53_;
  mCompDer[0][13] = tmp56_*(tmp44_);
  mCompDer[0][14] = tmp58_;
  mCompDer[0][15] = tmp59_;
  mCompDer[0][16] = (tmp52_)*tmp57_;
  mCompDer[0][17] = tmp54_*tmp55_;
  mCompDer[0][18] = tmp56_*tmp53_;
  mCompDer[0][19] = tmp58_*(tmp44_);
  mCompDer[0][20] = tmp60_;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = 0;
  mCompDer[0][28] = 0;
  mCompDer[0][29] = 0;
  mCompDer[0][30] = 0;
  mCompDer[0][31] = 0;
  mCompDer[0][32] = 0;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = 0;
  mCompDer[0][40] = 0;
  mCompDer[0][41] = 0;
  mCompDer[0][42] = (tmp87_)*tmp65_+(tmp96_)*tmp75_+tmp103_*tmp88_+(tmp96_)*tmp97_*(tmp44_)+(tmp87_)*tmp98_+tmp106_*tmp99_+tmp113_*tmp100_+(tmp96_)*tmp101_*tmp53_+tmp103_*tmp104_+tmp106_*tmp107_*(tmp44_)+(tmp87_)*tmp108_+tmp118_*tmp109_+tmp125_*tmp110_+(tmp96_)*tmp111_*tmp55_+tmp113_*tmp114_+tmp106_*tmp115_*tmp53_+tmp103_*tmp116_+tmp118_*tmp119_*(tmp44_)+(tmp87_)*tmp120_+tmp132_*tmp121_+5*(tmp87_)*tmp57_*tmp122_+(tmp96_)*tmp123_*tmp57_+tmp125_*tmp126_+tmp106_*tmp127_*tmp55_+tmp113_*tmp128_+tmp118_*tmp129_*tmp53_+tmp103_*tmp130_+tmp132_*tmp133_*(tmp44_)+(tmp87_)*tmp134_+5*(tmp96_)*tmp58_*tmp135_;
  mCompDer[0][43] = (tmp159_)*tmp65_+(tmp170_)*tmp75_+tmp172_*tmp88_+(tmp170_)*tmp97_*(tmp44_)+(tmp159_)*tmp98_+tmp174_*tmp99_+tmp176_*tmp100_+(tmp170_)*tmp101_*tmp53_+tmp172_*tmp104_+tmp174_*tmp107_*(tmp44_)+(tmp159_)*tmp108_+tmp178_*tmp109_+tmp180_*tmp110_+(tmp170_)*tmp111_*tmp55_+tmp176_*tmp114_+tmp174_*tmp115_*tmp53_+tmp172_*tmp116_+tmp178_*tmp119_*(tmp44_)+(tmp159_)*tmp120_+tmp182_*tmp121_+5*(tmp159_)*tmp57_*tmp122_+(tmp170_)*tmp123_*tmp57_+tmp180_*tmp126_+tmp174_*tmp127_*tmp55_+tmp176_*tmp128_+tmp178_*tmp129_*tmp53_+tmp172_*tmp130_+tmp182_*tmp133_*(tmp44_)+(tmp159_)*tmp134_+5*(tmp170_)*tmp58_*tmp135_;
  mCompDer[0][44] = (tmp212_)*tmp65_+(tmp215_)*tmp75_+tmp217_*tmp88_+(tmp215_)*tmp97_*(tmp44_)+(tmp212_)*tmp98_+tmp219_*tmp99_+tmp221_*tmp100_+(tmp215_)*tmp101_*tmp53_+tmp217_*tmp104_+tmp219_*tmp107_*(tmp44_)+(tmp212_)*tmp108_+tmp223_*tmp109_+tmp225_*tmp110_+(tmp215_)*tmp111_*tmp55_+tmp221_*tmp114_+tmp219_*tmp115_*tmp53_+tmp217_*tmp116_+tmp223_*tmp119_*(tmp44_)+(tmp212_)*tmp120_+tmp227_*tmp121_+5*(tmp212_)*tmp57_*tmp122_+(tmp215_)*tmp123_*tmp57_+tmp225_*tmp126_+tmp219_*tmp127_*tmp55_+tmp221_*tmp128_+tmp223_*tmp129_*tmp53_+tmp217_*tmp130_+tmp227_*tmp133_*(tmp44_)+(tmp212_)*tmp134_+5*(tmp215_)*tmp58_*tmp135_;
  mCompDer[0][45] = (tmp233_)*tmp65_+(tmp238_)*tmp75_+tmp240_*tmp88_+(tmp238_)*tmp97_*(tmp44_)+(tmp233_)*tmp98_+tmp242_*tmp99_+tmp244_*tmp100_+(tmp238_)*tmp101_*tmp53_+tmp240_*tmp104_+tmp242_*tmp107_*(tmp44_)+(tmp233_)*tmp108_+tmp246_*tmp109_+tmp248_*tmp110_+(tmp238_)*tmp111_*tmp55_+tmp244_*tmp114_+tmp242_*tmp115_*tmp53_+tmp240_*tmp116_+tmp246_*tmp119_*(tmp44_)+(tmp233_)*tmp120_+tmp250_*tmp121_+5*(tmp233_)*tmp57_*tmp122_+(tmp238_)*tmp123_*tmp57_+tmp248_*tmp126_+tmp242_*tmp127_*tmp55_+tmp244_*tmp128_+tmp246_*tmp129_*tmp53_+tmp240_*tmp130_+tmp250_*tmp133_*(tmp44_)+(tmp233_)*tmp134_+5*(tmp238_)*tmp58_*tmp135_;
  mCompDer[0][46] = (tmp256_)*tmp65_+(tmp261_)*tmp75_+tmp263_*tmp88_+(tmp261_)*tmp97_*(tmp44_)+(tmp256_)*tmp98_+tmp265_*tmp99_+tmp267_*tmp100_+(tmp261_)*tmp101_*tmp53_+tmp263_*tmp104_+tmp265_*tmp107_*(tmp44_)+(tmp256_)*tmp108_+tmp269_*tmp109_+tmp271_*tmp110_+(tmp261_)*tmp111_*tmp55_+tmp267_*tmp114_+tmp265_*tmp115_*tmp53_+tmp263_*tmp116_+tmp269_*tmp119_*(tmp44_)+(tmp256_)*tmp120_+tmp273_*tmp121_+5*(tmp256_)*tmp57_*tmp122_+(tmp261_)*tmp123_*tmp57_+tmp271_*tmp126_+tmp265_*tmp127_*tmp55_+tmp267_*tmp128_+tmp269_*tmp129_*tmp53_+tmp263_*tmp130_+tmp273_*tmp133_*(tmp44_)+(tmp256_)*tmp134_+5*(tmp261_)*tmp58_*tmp135_;
  mCompDer[0][47] = (tmp279_)*tmp65_+(tmp283_)*tmp75_+tmp285_*tmp88_+(tmp283_)*tmp97_*(tmp44_)+(tmp279_)*tmp98_+tmp287_*tmp99_+tmp289_*tmp100_+(tmp283_)*tmp101_*tmp53_+tmp285_*tmp104_+tmp287_*tmp107_*(tmp44_)+(tmp279_)*tmp108_+tmp291_*tmp109_+tmp293_*tmp110_+(tmp283_)*tmp111_*tmp55_+tmp289_*tmp114_+tmp287_*tmp115_*tmp53_+tmp285_*tmp116_+tmp291_*tmp119_*(tmp44_)+(tmp279_)*tmp120_+tmp295_*tmp121_+5*(tmp279_)*tmp57_*tmp122_+(tmp283_)*tmp123_*tmp57_+tmp293_*tmp126_+tmp287_*tmp127_*tmp55_+tmp289_*tmp128_+tmp291_*tmp129_*tmp53_+tmp285_*tmp130_+tmp295_*tmp133_*(tmp44_)+(tmp279_)*tmp134_+5*(tmp283_)*tmp58_*tmp135_;
}


void cEqAppui_X_M2CDPol5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_X_M2CDPol5 Has no Der Sec");
}

void cEqAppui_X_M2CDPol5::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_X_M2CDPol5::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_X_M2CDPol5::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_X_M2CDPol5::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_X_M2CDPol5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_X_M2CDPol5::mTheAuto("cEqAppui_X_M2CDPol5",cEqAppui_X_M2CDPol5::Alloc);


cElCompiledFonc *  cEqAppui_X_M2CDPol5::Alloc()
{  return new cEqAppui_X_M2CDPol5();
}



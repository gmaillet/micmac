// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqCoplanEbnerId.h"


cEqCoplanEbnerId::cEqCoplanEbnerId():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr1",0,15));
   AddIntRef (cIncIntervale("Or1",15,21));
   AddIntRef (cIncIntervale("Or2",21,27));
   Close(false);
}



void cEqCoplanEbnerId::ComputeVal()
{
   double tmp0_ = mLocEbner_State_0_0*mLocEbner_State_0_0;
   double tmp1_ = tmp0_*0.666667;
   double tmp2_ = mLocYL1*mLocYL1;
   double tmp3_ = tmp2_-tmp1_;
   double tmp4_ = mLocXL1*mLocXL1;
   double tmp5_ = tmp4_-tmp1_;
   double tmp6_ = mCompCoord[15];
   double tmp7_ = sin(tmp6_);
   double tmp8_ = mCompCoord[16];
   double tmp9_ = mCompCoord[17];
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mCompCoord[4];
   double tmp12_ = mCompCoord[5];
   double tmp13_ = mLocXL1*mLocYL1;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = mCompCoord[0];
   double tmp16_ = cos(tmp6_);
   double tmp17_ = sin(tmp9_);
   double tmp18_ = sin(tmp8_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = tmp7_*tmp19_;
   double tmp21_ = cos(tmp9_);
   double tmp22_ = 1+tmp10_;
   double tmp23_ = tmp12_*2;
   double tmp24_ = mCompCoord[7];
   double tmp25_ = mLocEbner_State_0_1*mLocEbner_State_0_1;
   double tmp26_ = tmp25_*0.666667;
   double tmp27_ = mCompCoord[9];
   double tmp28_ = mLocYL2*mLocYL2;
   double tmp29_ = tmp28_-tmp26_;
   double tmp30_ = mCompCoord[11];
   double tmp31_ = mLocXL2*mLocXL2;
   double tmp32_ = tmp31_-tmp26_;
   double tmp33_ = mCompCoord[13];
   double tmp34_ = mCompCoord[1];
   double tmp35_ = mCompCoord[22];
   double tmp36_ = 1-tmp10_;
   double tmp37_ = mLocXL2*mLocYL2;
   double tmp38_ = tmp14_*2;
   double tmp39_ = mCompCoord[8];
   double tmp40_ = mCompCoord[10];
   double tmp41_ = mCompCoord[12];
   double tmp42_ = mCompCoord[14];
   double tmp43_ = mCompCoord[2];
   double tmp44_ = cos(tmp35_);
   double tmp45_ = mCompCoord[23];
   double tmp46_ = (tmp22_)*mLocXL1;
   double tmp47_ = tmp11_*mLocYL1;
   double tmp48_ = tmp46_+tmp47_;
   double tmp49_ = tmp23_*(tmp5_);
   double tmp50_ = (tmp48_)-tmp49_;
   double tmp51_ = tmp14_*tmp13_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp24_*(tmp3_);
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = tmp27_*mLocXL1;
   double tmp56_ = tmp55_*(tmp3_);
   double tmp57_ = tmp54_+tmp56_;
   double tmp58_ = tmp30_*mLocYL1;
   double tmp59_ = tmp58_*(tmp5_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp33_*(tmp5_);
   double tmp62_ = tmp61_*(tmp3_);
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = (tmp63_)-tmp34_;
   double tmp65_ = (tmp64_)/tmp15_;
   double tmp66_ = cos(tmp8_);
   double tmp67_ = (tmp36_)*mLocYL1;
   double tmp68_ = tmp11_*mLocXL1;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = tmp12_*tmp13_;
   double tmp71_ = tmp69_+tmp70_;
   double tmp72_ = tmp38_*(tmp3_);
   double tmp73_ = (tmp71_)-tmp72_;
   double tmp74_ = tmp39_*(tmp5_);
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = tmp40_*mLocYL1;
   double tmp77_ = tmp76_*(tmp5_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = tmp41_*mLocXL1;
   double tmp80_ = tmp79_*(tmp3_);
   double tmp81_ = tmp78_+tmp80_;
   double tmp82_ = tmp42_*(tmp5_);
   double tmp83_ = tmp82_*(tmp3_);
   double tmp84_ = tmp81_+tmp83_;
   double tmp85_ = (tmp84_)-tmp43_;
   double tmp86_ = (tmp85_)/tmp15_;
   double tmp87_ = (tmp22_)*mLocXL2;
   double tmp88_ = tmp11_*mLocYL2;
   double tmp89_ = tmp87_+tmp88_;
   double tmp90_ = tmp23_*(tmp32_);
   double tmp91_ = (tmp89_)-tmp90_;
   double tmp92_ = tmp14_*tmp37_;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = tmp24_*(tmp29_);
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = tmp27_*mLocXL2;
   double tmp97_ = tmp96_*(tmp29_);
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = tmp30_*mLocYL2;
   double tmp100_ = tmp99_*(tmp32_);
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp33_*(tmp32_);
   double tmp103_ = tmp102_*(tmp29_);
   double tmp104_ = tmp101_+tmp103_;
   double tmp105_ = (tmp104_)-tmp34_;
   double tmp106_ = (tmp105_)/tmp15_;
   double tmp107_ = mCompCoord[21];
   double tmp108_ = cos(tmp45_);
   double tmp109_ = sin(tmp107_);
   double tmp110_ = sin(tmp35_);
   double tmp111_ = sin(tmp45_);
   double tmp112_ = (tmp36_)*mLocYL2;
   double tmp113_ = tmp11_*mLocXL2;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = tmp12_*tmp37_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = tmp38_*(tmp29_);
   double tmp118_ = (tmp116_)-tmp117_;
   double tmp119_ = tmp39_*(tmp32_);
   double tmp120_ = tmp118_+tmp119_;
   double tmp121_ = tmp40_*mLocYL2;
   double tmp122_ = tmp121_*(tmp32_);
   double tmp123_ = tmp120_+tmp122_;
   double tmp124_ = tmp41_*mLocXL2;
   double tmp125_ = tmp124_*(tmp29_);
   double tmp126_ = tmp123_+tmp125_;
   double tmp127_ = tmp42_*(tmp32_);
   double tmp128_ = tmp127_*(tmp29_);
   double tmp129_ = tmp126_+tmp128_;
   double tmp130_ = (tmp129_)-tmp43_;
   double tmp131_ = (tmp130_)/tmp15_;
   double tmp132_ = cos(tmp107_);
   double tmp133_ = -(tmp110_);
   double tmp134_ = tmp109_*tmp133_;
   double tmp135_ = tmp18_*(tmp65_);
   double tmp136_ = tmp66_*tmp17_;
   double tmp137_ = tmp136_*(tmp86_);
   double tmp138_ = tmp135_+tmp137_;
   double tmp139_ = tmp66_*tmp21_;
   double tmp140_ = tmp138_+tmp139_;
   double tmp141_ = -(tmp109_);
   double tmp142_ = -(tmp111_);
   double tmp143_ = tmp132_*tmp133_;
   double tmp144_ = -(tmp7_);
   double tmp145_ = -(tmp17_);
   double tmp146_ = tmp16_*tmp19_;
   double tmp147_ = tmp110_*(tmp106_);
   double tmp148_ = tmp44_*tmp111_;
   double tmp149_ = tmp148_*(tmp131_);
   double tmp150_ = tmp147_+tmp149_;
   double tmp151_ = tmp44_*tmp108_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = tmp16_*tmp66_;
   double tmp154_ = tmp153_*(tmp65_);
   double tmp155_ = tmp144_*tmp21_;
   double tmp156_ = tmp146_*tmp17_;
   double tmp157_ = tmp155_+tmp156_;
   double tmp158_ = (tmp157_)*(tmp86_);
   double tmp159_ = tmp154_+tmp158_;
   double tmp160_ = tmp144_*tmp145_;
   double tmp161_ = tmp146_*tmp21_;
   double tmp162_ = tmp160_+tmp161_;
   double tmp163_ = tmp159_+tmp162_;
   double tmp164_ = tmp109_*tmp44_;
   double tmp165_ = tmp164_*(tmp106_);
   double tmp166_ = tmp132_*tmp108_;
   double tmp167_ = tmp134_*tmp111_;
   double tmp168_ = tmp166_+tmp167_;
   double tmp169_ = (tmp168_)*(tmp131_);
   double tmp170_ = tmp165_+tmp169_;
   double tmp171_ = tmp132_*tmp142_;
   double tmp172_ = tmp134_*tmp108_;
   double tmp173_ = tmp171_+tmp172_;
   double tmp174_ = tmp170_+tmp173_;
   double tmp175_ = tmp7_*tmp66_;
   double tmp176_ = tmp175_*(tmp65_);
   double tmp177_ = tmp16_*tmp21_;
   double tmp178_ = tmp20_*tmp17_;
   double tmp179_ = tmp177_+tmp178_;
   double tmp180_ = (tmp179_)*(tmp86_);
   double tmp181_ = tmp176_+tmp180_;
   double tmp182_ = tmp16_*tmp145_;
   double tmp183_ = tmp20_*tmp21_;
   double tmp184_ = tmp182_+tmp183_;
   double tmp185_ = tmp181_+tmp184_;
   double tmp186_ = tmp132_*tmp44_;
   double tmp187_ = tmp186_*(tmp106_);
   double tmp188_ = tmp141_*tmp108_;
   double tmp189_ = tmp143_*tmp111_;
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = (tmp190_)*(tmp131_);
   double tmp192_ = tmp187_+tmp191_;
   double tmp193_ = tmp141_*tmp142_;
   double tmp194_ = tmp143_*tmp108_;
   double tmp195_ = tmp193_+tmp194_;
   double tmp196_ = tmp192_+tmp195_;
   double tmp197_ = mCompCoord[24];
   double tmp198_ = mCompCoord[18];
   double tmp199_ = tmp197_-tmp198_;
   double tmp200_ = mCompCoord[25];
   double tmp201_ = mCompCoord[19];
   double tmp202_ = tmp200_-tmp201_;
   double tmp203_ = mCompCoord[26];
   double tmp204_ = mCompCoord[20];
   double tmp205_ = tmp203_-tmp204_;

  mVal[0] = (((tmp185_)*(tmp152_)-(tmp140_)*(tmp174_))*(tmp199_)+((tmp140_)*(tmp196_)-(tmp163_)*(tmp152_))*(tmp202_)+((tmp163_)*(tmp174_)-(tmp185_)*(tmp196_))*(tmp205_))/sqrt((tmp199_)*(tmp199_)+(tmp202_)*(tmp202_)+(tmp205_)*(tmp205_));

}


void cEqCoplanEbnerId::ComputeValDeriv()
{
   double tmp0_ = mLocEbner_State_0_0*mLocEbner_State_0_0;
   double tmp1_ = tmp0_*0.666667;
   double tmp2_ = mLocYL1*mLocYL1;
   double tmp3_ = tmp2_-tmp1_;
   double tmp4_ = mLocXL1*mLocXL1;
   double tmp5_ = tmp4_-tmp1_;
   double tmp6_ = mCompCoord[15];
   double tmp7_ = sin(tmp6_);
   double tmp8_ = mCompCoord[16];
   double tmp9_ = mCompCoord[17];
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mCompCoord[4];
   double tmp12_ = mCompCoord[5];
   double tmp13_ = mLocXL1*mLocYL1;
   double tmp14_ = mCompCoord[6];
   double tmp15_ = mCompCoord[0];
   double tmp16_ = cos(tmp6_);
   double tmp17_ = sin(tmp9_);
   double tmp18_ = sin(tmp8_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = tmp7_*tmp19_;
   double tmp21_ = cos(tmp9_);
   double tmp22_ = 1+tmp10_;
   double tmp23_ = tmp12_*2;
   double tmp24_ = mCompCoord[7];
   double tmp25_ = mLocEbner_State_0_1*mLocEbner_State_0_1;
   double tmp26_ = tmp25_*0.666667;
   double tmp27_ = mCompCoord[9];
   double tmp28_ = mLocYL2*mLocYL2;
   double tmp29_ = tmp28_-tmp26_;
   double tmp30_ = mCompCoord[11];
   double tmp31_ = mLocXL2*mLocXL2;
   double tmp32_ = tmp31_-tmp26_;
   double tmp33_ = mCompCoord[13];
   double tmp34_ = mCompCoord[1];
   double tmp35_ = mCompCoord[22];
   double tmp36_ = 1-tmp10_;
   double tmp37_ = mLocXL2*mLocYL2;
   double tmp38_ = tmp14_*2;
   double tmp39_ = mCompCoord[8];
   double tmp40_ = mCompCoord[10];
   double tmp41_ = mCompCoord[12];
   double tmp42_ = mCompCoord[14];
   double tmp43_ = mCompCoord[2];
   double tmp44_ = cos(tmp35_);
   double tmp45_ = mCompCoord[23];
   double tmp46_ = (tmp22_)*mLocXL1;
   double tmp47_ = tmp11_*mLocYL1;
   double tmp48_ = tmp46_+tmp47_;
   double tmp49_ = tmp23_*(tmp5_);
   double tmp50_ = (tmp48_)-tmp49_;
   double tmp51_ = tmp14_*tmp13_;
   double tmp52_ = tmp50_+tmp51_;
   double tmp53_ = tmp24_*(tmp3_);
   double tmp54_ = tmp52_+tmp53_;
   double tmp55_ = tmp27_*mLocXL1;
   double tmp56_ = tmp55_*(tmp3_);
   double tmp57_ = tmp54_+tmp56_;
   double tmp58_ = tmp30_*mLocYL1;
   double tmp59_ = tmp58_*(tmp5_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp33_*(tmp5_);
   double tmp62_ = tmp61_*(tmp3_);
   double tmp63_ = tmp60_+tmp62_;
   double tmp64_ = (tmp63_)-tmp34_;
   double tmp65_ = (tmp64_)/tmp15_;
   double tmp66_ = cos(tmp8_);
   double tmp67_ = (tmp36_)*mLocYL1;
   double tmp68_ = tmp11_*mLocXL1;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = tmp12_*tmp13_;
   double tmp71_ = tmp69_+tmp70_;
   double tmp72_ = tmp38_*(tmp3_);
   double tmp73_ = (tmp71_)-tmp72_;
   double tmp74_ = tmp39_*(tmp5_);
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = tmp40_*mLocYL1;
   double tmp77_ = tmp76_*(tmp5_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = tmp41_*mLocXL1;
   double tmp80_ = tmp79_*(tmp3_);
   double tmp81_ = tmp78_+tmp80_;
   double tmp82_ = tmp42_*(tmp5_);
   double tmp83_ = tmp82_*(tmp3_);
   double tmp84_ = tmp81_+tmp83_;
   double tmp85_ = (tmp84_)-tmp43_;
   double tmp86_ = (tmp85_)/tmp15_;
   double tmp87_ = (tmp22_)*mLocXL2;
   double tmp88_ = tmp11_*mLocYL2;
   double tmp89_ = tmp87_+tmp88_;
   double tmp90_ = tmp23_*(tmp32_);
   double tmp91_ = (tmp89_)-tmp90_;
   double tmp92_ = tmp14_*tmp37_;
   double tmp93_ = tmp91_+tmp92_;
   double tmp94_ = tmp24_*(tmp29_);
   double tmp95_ = tmp93_+tmp94_;
   double tmp96_ = tmp27_*mLocXL2;
   double tmp97_ = tmp96_*(tmp29_);
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = tmp30_*mLocYL2;
   double tmp100_ = tmp99_*(tmp32_);
   double tmp101_ = tmp98_+tmp100_;
   double tmp102_ = tmp33_*(tmp32_);
   double tmp103_ = tmp102_*(tmp29_);
   double tmp104_ = tmp101_+tmp103_;
   double tmp105_ = (tmp104_)-tmp34_;
   double tmp106_ = (tmp105_)/tmp15_;
   double tmp107_ = mCompCoord[21];
   double tmp108_ = cos(tmp45_);
   double tmp109_ = sin(tmp107_);
   double tmp110_ = sin(tmp35_);
   double tmp111_ = sin(tmp45_);
   double tmp112_ = (tmp36_)*mLocYL2;
   double tmp113_ = tmp11_*mLocXL2;
   double tmp114_ = tmp112_+tmp113_;
   double tmp115_ = tmp12_*tmp37_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = tmp38_*(tmp29_);
   double tmp118_ = (tmp116_)-tmp117_;
   double tmp119_ = tmp39_*(tmp32_);
   double tmp120_ = tmp118_+tmp119_;
   double tmp121_ = tmp40_*mLocYL2;
   double tmp122_ = tmp121_*(tmp32_);
   double tmp123_ = tmp120_+tmp122_;
   double tmp124_ = tmp41_*mLocXL2;
   double tmp125_ = tmp124_*(tmp29_);
   double tmp126_ = tmp123_+tmp125_;
   double tmp127_ = tmp42_*(tmp32_);
   double tmp128_ = tmp127_*(tmp29_);
   double tmp129_ = tmp126_+tmp128_;
   double tmp130_ = (tmp129_)-tmp43_;
   double tmp131_ = (tmp130_)/tmp15_;
   double tmp132_ = cos(tmp107_);
   double tmp133_ = -(tmp110_);
   double tmp134_ = tmp109_*tmp133_;
   double tmp135_ = tmp18_*(tmp65_);
   double tmp136_ = tmp66_*tmp17_;
   double tmp137_ = tmp136_*(tmp86_);
   double tmp138_ = tmp135_+tmp137_;
   double tmp139_ = tmp66_*tmp21_;
   double tmp140_ = tmp138_+tmp139_;
   double tmp141_ = -(tmp109_);
   double tmp142_ = -(tmp111_);
   double tmp143_ = tmp132_*tmp133_;
   double tmp144_ = -(tmp7_);
   double tmp145_ = -(tmp17_);
   double tmp146_ = tmp16_*tmp19_;
   double tmp147_ = tmp110_*(tmp106_);
   double tmp148_ = tmp44_*tmp111_;
   double tmp149_ = tmp148_*(tmp131_);
   double tmp150_ = tmp147_+tmp149_;
   double tmp151_ = tmp44_*tmp108_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = tmp16_*tmp66_;
   double tmp154_ = tmp153_*(tmp65_);
   double tmp155_ = tmp144_*tmp21_;
   double tmp156_ = tmp146_*tmp17_;
   double tmp157_ = tmp155_+tmp156_;
   double tmp158_ = (tmp157_)*(tmp86_);
   double tmp159_ = tmp154_+tmp158_;
   double tmp160_ = tmp144_*tmp145_;
   double tmp161_ = tmp146_*tmp21_;
   double tmp162_ = tmp160_+tmp161_;
   double tmp163_ = tmp159_+tmp162_;
   double tmp164_ = tmp109_*tmp44_;
   double tmp165_ = tmp164_*(tmp106_);
   double tmp166_ = tmp132_*tmp108_;
   double tmp167_ = tmp134_*tmp111_;
   double tmp168_ = tmp166_+tmp167_;
   double tmp169_ = (tmp168_)*(tmp131_);
   double tmp170_ = tmp165_+tmp169_;
   double tmp171_ = tmp132_*tmp142_;
   double tmp172_ = tmp134_*tmp108_;
   double tmp173_ = tmp171_+tmp172_;
   double tmp174_ = tmp170_+tmp173_;
   double tmp175_ = tmp7_*tmp66_;
   double tmp176_ = tmp175_*(tmp65_);
   double tmp177_ = tmp16_*tmp21_;
   double tmp178_ = tmp20_*tmp17_;
   double tmp179_ = tmp177_+tmp178_;
   double tmp180_ = (tmp179_)*(tmp86_);
   double tmp181_ = tmp176_+tmp180_;
   double tmp182_ = tmp16_*tmp145_;
   double tmp183_ = tmp20_*tmp21_;
   double tmp184_ = tmp182_+tmp183_;
   double tmp185_ = tmp181_+tmp184_;
   double tmp186_ = tmp132_*tmp44_;
   double tmp187_ = tmp186_*(tmp106_);
   double tmp188_ = tmp141_*tmp108_;
   double tmp189_ = tmp143_*tmp111_;
   double tmp190_ = tmp188_+tmp189_;
   double tmp191_ = (tmp190_)*(tmp131_);
   double tmp192_ = tmp187_+tmp191_;
   double tmp193_ = tmp141_*tmp142_;
   double tmp194_ = tmp143_*tmp108_;
   double tmp195_ = tmp193_+tmp194_;
   double tmp196_ = tmp192_+tmp195_;
   double tmp197_ = mCompCoord[24];
   double tmp198_ = mCompCoord[18];
   double tmp199_ = tmp197_-tmp198_;
   double tmp200_ = mCompCoord[25];
   double tmp201_ = mCompCoord[19];
   double tmp202_ = tmp200_-tmp201_;
   double tmp203_ = mCompCoord[26];
   double tmp204_ = mCompCoord[20];
   double tmp205_ = tmp203_-tmp204_;
   double tmp206_ = ElSquare(tmp15_);
   double tmp207_ = -(tmp64_);
   double tmp208_ = tmp207_/tmp206_;
   double tmp209_ = -(tmp85_);
   double tmp210_ = tmp209_/tmp206_;
   double tmp211_ = -(tmp105_);
   double tmp212_ = tmp211_/tmp206_;
   double tmp213_ = -(tmp130_);
   double tmp214_ = tmp213_/tmp206_;
   double tmp215_ = (tmp208_)*tmp18_;
   double tmp216_ = (tmp210_)*tmp136_;
   double tmp217_ = tmp215_+tmp216_;
   double tmp218_ = (tmp212_)*tmp110_;
   double tmp219_ = (tmp214_)*tmp148_;
   double tmp220_ = tmp218_+tmp219_;
   double tmp221_ = (tmp208_)*tmp153_;
   double tmp222_ = (tmp210_)*(tmp157_);
   double tmp223_ = tmp221_+tmp222_;
   double tmp224_ = (tmp212_)*tmp164_;
   double tmp225_ = (tmp214_)*(tmp168_);
   double tmp226_ = tmp224_+tmp225_;
   double tmp227_ = (tmp208_)*tmp175_;
   double tmp228_ = (tmp210_)*(tmp179_);
   double tmp229_ = tmp227_+tmp228_;
   double tmp230_ = (tmp212_)*tmp186_;
   double tmp231_ = (tmp214_)*(tmp190_);
   double tmp232_ = tmp230_+tmp231_;
   double tmp233_ = (tmp199_)*(tmp199_);
   double tmp234_ = (tmp202_)*(tmp202_);
   double tmp235_ = tmp233_+tmp234_;
   double tmp236_ = (tmp205_)*(tmp205_);
   double tmp237_ = tmp235_+tmp236_;
   double tmp238_ = sqrt(tmp237_);
   double tmp239_ = -(1);
   double tmp240_ = tmp239_*tmp15_;
   double tmp241_ = (tmp240_)/tmp206_;
   double tmp242_ = (tmp241_)*tmp18_;
   double tmp243_ = (tmp241_)*tmp110_;
   double tmp244_ = (tmp241_)*tmp153_;
   double tmp245_ = (tmp241_)*tmp164_;
   double tmp246_ = (tmp241_)*tmp175_;
   double tmp247_ = (tmp241_)*tmp186_;
   double tmp248_ = ElSquare(tmp238_);
   double tmp249_ = (tmp241_)*tmp136_;
   double tmp250_ = (tmp241_)*tmp148_;
   double tmp251_ = (tmp241_)*(tmp157_);
   double tmp252_ = (tmp241_)*(tmp168_);
   double tmp253_ = (tmp241_)*(tmp179_);
   double tmp254_ = (tmp241_)*(tmp190_);
   double tmp255_ = mLocXL1*tmp15_;
   double tmp256_ = (tmp255_)/tmp206_;
   double tmp257_ = tmp239_*mLocYL1;
   double tmp258_ = tmp257_*tmp15_;
   double tmp259_ = (tmp258_)/tmp206_;
   double tmp260_ = mLocXL2*tmp15_;
   double tmp261_ = (tmp260_)/tmp206_;
   double tmp262_ = tmp239_*mLocYL2;
   double tmp263_ = tmp262_*tmp15_;
   double tmp264_ = (tmp263_)/tmp206_;
   double tmp265_ = (tmp256_)*tmp18_;
   double tmp266_ = (tmp259_)*tmp136_;
   double tmp267_ = tmp265_+tmp266_;
   double tmp268_ = (tmp261_)*tmp110_;
   double tmp269_ = (tmp264_)*tmp148_;
   double tmp270_ = tmp268_+tmp269_;
   double tmp271_ = (tmp256_)*tmp153_;
   double tmp272_ = (tmp259_)*(tmp157_);
   double tmp273_ = tmp271_+tmp272_;
   double tmp274_ = (tmp261_)*tmp164_;
   double tmp275_ = (tmp264_)*(tmp168_);
   double tmp276_ = tmp274_+tmp275_;
   double tmp277_ = (tmp256_)*tmp175_;
   double tmp278_ = (tmp259_)*(tmp179_);
   double tmp279_ = tmp277_+tmp278_;
   double tmp280_ = (tmp261_)*tmp186_;
   double tmp281_ = (tmp264_)*(tmp190_);
   double tmp282_ = tmp280_+tmp281_;
   double tmp283_ = mLocYL1*tmp15_;
   double tmp284_ = (tmp283_)/tmp206_;
   double tmp285_ = mLocYL2*tmp15_;
   double tmp286_ = (tmp285_)/tmp206_;
   double tmp287_ = (tmp284_)*tmp18_;
   double tmp288_ = (tmp256_)*tmp136_;
   double tmp289_ = tmp287_+tmp288_;
   double tmp290_ = (tmp286_)*tmp110_;
   double tmp291_ = (tmp261_)*tmp148_;
   double tmp292_ = tmp290_+tmp291_;
   double tmp293_ = (tmp284_)*tmp153_;
   double tmp294_ = (tmp256_)*(tmp157_);
   double tmp295_ = tmp293_+tmp294_;
   double tmp296_ = (tmp286_)*tmp164_;
   double tmp297_ = (tmp261_)*(tmp168_);
   double tmp298_ = tmp296_+tmp297_;
   double tmp299_ = (tmp284_)*tmp175_;
   double tmp300_ = (tmp256_)*(tmp179_);
   double tmp301_ = tmp299_+tmp300_;
   double tmp302_ = (tmp286_)*tmp186_;
   double tmp303_ = (tmp261_)*(tmp190_);
   double tmp304_ = tmp302_+tmp303_;
   double tmp305_ = 2*(tmp5_);
   double tmp306_ = -(tmp305_);
   double tmp307_ = tmp306_*tmp15_;
   double tmp308_ = (tmp307_)/tmp206_;
   double tmp309_ = tmp13_*tmp15_;
   double tmp310_ = (tmp309_)/tmp206_;
   double tmp311_ = 2*(tmp32_);
   double tmp312_ = -(tmp311_);
   double tmp313_ = tmp312_*tmp15_;
   double tmp314_ = (tmp313_)/tmp206_;
   double tmp315_ = tmp37_*tmp15_;
   double tmp316_ = (tmp315_)/tmp206_;
   double tmp317_ = (tmp308_)*tmp18_;
   double tmp318_ = (tmp310_)*tmp136_;
   double tmp319_ = tmp317_+tmp318_;
   double tmp320_ = (tmp314_)*tmp110_;
   double tmp321_ = (tmp316_)*tmp148_;
   double tmp322_ = tmp320_+tmp321_;
   double tmp323_ = (tmp308_)*tmp153_;
   double tmp324_ = (tmp310_)*(tmp157_);
   double tmp325_ = tmp323_+tmp324_;
   double tmp326_ = (tmp314_)*tmp164_;
   double tmp327_ = (tmp316_)*(tmp168_);
   double tmp328_ = tmp326_+tmp327_;
   double tmp329_ = (tmp308_)*tmp175_;
   double tmp330_ = (tmp310_)*(tmp179_);
   double tmp331_ = tmp329_+tmp330_;
   double tmp332_ = (tmp314_)*tmp186_;
   double tmp333_ = (tmp316_)*(tmp190_);
   double tmp334_ = tmp332_+tmp333_;
   double tmp335_ = 2*(tmp3_);
   double tmp336_ = -(tmp335_);
   double tmp337_ = tmp336_*tmp15_;
   double tmp338_ = (tmp337_)/tmp206_;
   double tmp339_ = 2*(tmp29_);
   double tmp340_ = -(tmp339_);
   double tmp341_ = tmp340_*tmp15_;
   double tmp342_ = (tmp341_)/tmp206_;
   double tmp343_ = (tmp310_)*tmp18_;
   double tmp344_ = (tmp338_)*tmp136_;
   double tmp345_ = tmp343_+tmp344_;
   double tmp346_ = (tmp316_)*tmp110_;
   double tmp347_ = (tmp342_)*tmp148_;
   double tmp348_ = tmp346_+tmp347_;
   double tmp349_ = (tmp310_)*tmp153_;
   double tmp350_ = (tmp338_)*(tmp157_);
   double tmp351_ = tmp349_+tmp350_;
   double tmp352_ = (tmp316_)*tmp164_;
   double tmp353_ = (tmp342_)*(tmp168_);
   double tmp354_ = tmp352_+tmp353_;
   double tmp355_ = (tmp310_)*tmp175_;
   double tmp356_ = (tmp338_)*(tmp179_);
   double tmp357_ = tmp355_+tmp356_;
   double tmp358_ = (tmp316_)*tmp186_;
   double tmp359_ = (tmp342_)*(tmp190_);
   double tmp360_ = tmp358_+tmp359_;
   double tmp361_ = (tmp3_)*tmp15_;
   double tmp362_ = (tmp361_)/tmp206_;
   double tmp363_ = (tmp29_)*tmp15_;
   double tmp364_ = (tmp363_)/tmp206_;
   double tmp365_ = (tmp362_)*tmp18_;
   double tmp366_ = (tmp364_)*tmp110_;
   double tmp367_ = (tmp362_)*tmp153_;
   double tmp368_ = (tmp364_)*tmp164_;
   double tmp369_ = (tmp362_)*tmp175_;
   double tmp370_ = (tmp364_)*tmp186_;
   double tmp371_ = (tmp5_)*tmp15_;
   double tmp372_ = (tmp371_)/tmp206_;
   double tmp373_ = (tmp32_)*tmp15_;
   double tmp374_ = (tmp373_)/tmp206_;
   double tmp375_ = (tmp372_)*tmp136_;
   double tmp376_ = (tmp374_)*tmp148_;
   double tmp377_ = (tmp372_)*(tmp157_);
   double tmp378_ = (tmp374_)*(tmp168_);
   double tmp379_ = (tmp372_)*(tmp179_);
   double tmp380_ = (tmp374_)*(tmp190_);
   double tmp381_ = mLocXL1*(tmp3_);
   double tmp382_ = tmp381_*tmp15_;
   double tmp383_ = (tmp382_)/tmp206_;
   double tmp384_ = mLocXL2*(tmp29_);
   double tmp385_ = tmp384_*tmp15_;
   double tmp386_ = (tmp385_)/tmp206_;
   double tmp387_ = (tmp383_)*tmp18_;
   double tmp388_ = (tmp386_)*tmp110_;
   double tmp389_ = (tmp383_)*tmp153_;
   double tmp390_ = (tmp386_)*tmp164_;
   double tmp391_ = (tmp383_)*tmp175_;
   double tmp392_ = (tmp386_)*tmp186_;
   double tmp393_ = mLocYL1*(tmp5_);
   double tmp394_ = tmp393_*tmp15_;
   double tmp395_ = (tmp394_)/tmp206_;
   double tmp396_ = mLocYL2*(tmp32_);
   double tmp397_ = tmp396_*tmp15_;
   double tmp398_ = (tmp397_)/tmp206_;
   double tmp399_ = (tmp395_)*tmp136_;
   double tmp400_ = (tmp398_)*tmp148_;
   double tmp401_ = (tmp395_)*(tmp157_);
   double tmp402_ = (tmp398_)*(tmp168_);
   double tmp403_ = (tmp395_)*(tmp179_);
   double tmp404_ = (tmp398_)*(tmp190_);
   double tmp405_ = (tmp395_)*tmp18_;
   double tmp406_ = (tmp398_)*tmp110_;
   double tmp407_ = (tmp395_)*tmp153_;
   double tmp408_ = (tmp398_)*tmp164_;
   double tmp409_ = (tmp395_)*tmp175_;
   double tmp410_ = (tmp398_)*tmp186_;
   double tmp411_ = (tmp383_)*tmp136_;
   double tmp412_ = (tmp386_)*tmp148_;
   double tmp413_ = (tmp383_)*(tmp157_);
   double tmp414_ = (tmp386_)*(tmp168_);
   double tmp415_ = (tmp383_)*(tmp179_);
   double tmp416_ = (tmp386_)*(tmp190_);
   double tmp417_ = (tmp5_)*(tmp3_);
   double tmp418_ = tmp417_*tmp15_;
   double tmp419_ = (tmp418_)/tmp206_;
   double tmp420_ = (tmp32_)*(tmp29_);
   double tmp421_ = tmp420_*tmp15_;
   double tmp422_ = (tmp421_)/tmp206_;
   double tmp423_ = (tmp419_)*tmp18_;
   double tmp424_ = (tmp422_)*tmp110_;
   double tmp425_ = (tmp419_)*tmp153_;
   double tmp426_ = (tmp422_)*tmp164_;
   double tmp427_ = (tmp419_)*tmp175_;
   double tmp428_ = (tmp422_)*tmp186_;
   double tmp429_ = (tmp419_)*tmp136_;
   double tmp430_ = (tmp422_)*tmp148_;
   double tmp431_ = (tmp419_)*(tmp157_);
   double tmp432_ = (tmp422_)*(tmp168_);
   double tmp433_ = (tmp419_)*(tmp179_);
   double tmp434_ = (tmp422_)*(tmp190_);
   double tmp435_ = tmp239_*tmp7_;
   double tmp436_ = -(tmp16_);
   double tmp437_ = tmp435_*tmp19_;
   double tmp438_ = tmp435_*tmp66_;
   double tmp439_ = tmp438_*(tmp65_);
   double tmp440_ = tmp436_*tmp21_;
   double tmp441_ = tmp437_*tmp17_;
   double tmp442_ = tmp440_+tmp441_;
   double tmp443_ = (tmp442_)*(tmp86_);
   double tmp444_ = tmp439_+tmp443_;
   double tmp445_ = tmp436_*tmp145_;
   double tmp446_ = tmp437_*tmp21_;
   double tmp447_ = tmp445_+tmp446_;
   double tmp448_ = tmp444_+tmp447_;
   double tmp449_ = tmp435_*tmp21_;
   double tmp450_ = tmp449_+tmp156_;
   double tmp451_ = (tmp450_)*(tmp86_);
   double tmp452_ = tmp154_+tmp451_;
   double tmp453_ = tmp435_*tmp145_;
   double tmp454_ = tmp453_+tmp161_;
   double tmp455_ = tmp452_+tmp454_;
   double tmp456_ = -(tmp66_);
   double tmp457_ = tmp456_*tmp7_;
   double tmp458_ = tmp239_*tmp18_;
   double tmp459_ = tmp66_*(tmp65_);
   double tmp460_ = tmp458_*tmp17_;
   double tmp461_ = tmp460_*(tmp86_);
   double tmp462_ = tmp459_+tmp461_;
   double tmp463_ = tmp458_*tmp21_;
   double tmp464_ = tmp462_+tmp463_;
   double tmp465_ = tmp456_*tmp16_;
   double tmp466_ = tmp458_*tmp16_;
   double tmp467_ = tmp466_*(tmp65_);
   double tmp468_ = tmp465_*tmp17_;
   double tmp469_ = tmp468_*(tmp86_);
   double tmp470_ = tmp467_+tmp469_;
   double tmp471_ = tmp465_*tmp21_;
   double tmp472_ = tmp470_+tmp471_;
   double tmp473_ = tmp458_*tmp7_;
   double tmp474_ = tmp473_*(tmp65_);
   double tmp475_ = tmp457_*tmp17_;
   double tmp476_ = tmp475_*(tmp86_);
   double tmp477_ = tmp474_+tmp476_;
   double tmp478_ = tmp457_*tmp21_;
   double tmp479_ = tmp477_+tmp478_;
   double tmp480_ = tmp239_*tmp17_;
   double tmp481_ = tmp21_*tmp66_;
   double tmp482_ = tmp481_*(tmp86_);
   double tmp483_ = tmp480_*tmp66_;
   double tmp484_ = tmp482_+tmp483_;
   double tmp485_ = -(tmp21_);
   double tmp486_ = tmp480_*tmp144_;
   double tmp487_ = tmp21_*tmp146_;
   double tmp488_ = tmp486_+tmp487_;
   double tmp489_ = (tmp488_)*(tmp86_);
   double tmp490_ = tmp485_*tmp144_;
   double tmp491_ = tmp480_*tmp146_;
   double tmp492_ = tmp490_+tmp491_;
   double tmp493_ = tmp489_+tmp492_;
   double tmp494_ = tmp480_*tmp16_;
   double tmp495_ = tmp21_*tmp20_;
   double tmp496_ = tmp494_+tmp495_;
   double tmp497_ = (tmp496_)*(tmp86_);
   double tmp498_ = tmp485_*tmp16_;
   double tmp499_ = tmp480_*tmp20_;
   double tmp500_ = tmp498_+tmp499_;
   double tmp501_ = tmp497_+tmp500_;
   double tmp502_ = (tmp185_)*(tmp152_);
   double tmp503_ = (tmp140_)*(tmp174_);
   double tmp504_ = tmp502_-tmp503_;
   double tmp505_ = (tmp504_)*(tmp199_);
   double tmp506_ = (tmp140_)*(tmp196_);
   double tmp507_ = (tmp163_)*(tmp152_);
   double tmp508_ = tmp506_-tmp507_;
   double tmp509_ = (tmp508_)*(tmp202_);
   double tmp510_ = tmp505_+tmp509_;
   double tmp511_ = (tmp163_)*(tmp174_);
   double tmp512_ = (tmp185_)*(tmp196_);
   double tmp513_ = tmp511_-tmp512_;
   double tmp514_ = (tmp513_)*(tmp205_);
   double tmp515_ = tmp510_+tmp514_;
   double tmp516_ = tmp239_*(tmp199_);
   double tmp517_ = tmp239_*(tmp202_);
   double tmp518_ = tmp239_*(tmp205_);
   double tmp519_ = tmp239_*tmp109_;
   double tmp520_ = -(tmp132_);
   double tmp521_ = tmp519_*tmp133_;
   double tmp522_ = tmp519_*tmp108_;
   double tmp523_ = tmp522_+tmp189_;
   double tmp524_ = (tmp523_)*(tmp131_);
   double tmp525_ = tmp187_+tmp524_;
   double tmp526_ = tmp519_*tmp142_;
   double tmp527_ = tmp526_+tmp194_;
   double tmp528_ = tmp525_+tmp527_;
   double tmp529_ = tmp519_*tmp44_;
   double tmp530_ = tmp529_*(tmp106_);
   double tmp531_ = tmp520_*tmp108_;
   double tmp532_ = tmp521_*tmp111_;
   double tmp533_ = tmp531_+tmp532_;
   double tmp534_ = (tmp533_)*(tmp131_);
   double tmp535_ = tmp530_+tmp534_;
   double tmp536_ = tmp520_*tmp142_;
   double tmp537_ = tmp521_*tmp108_;
   double tmp538_ = tmp536_+tmp537_;
   double tmp539_ = tmp535_+tmp538_;
   double tmp540_ = tmp239_*tmp110_;
   double tmp541_ = -(tmp44_);
   double tmp542_ = tmp541_*tmp109_;
   double tmp543_ = tmp541_*tmp132_;
   double tmp544_ = tmp44_*(tmp106_);
   double tmp545_ = tmp540_*tmp111_;
   double tmp546_ = tmp545_*(tmp131_);
   double tmp547_ = tmp544_+tmp546_;
   double tmp548_ = tmp540_*tmp108_;
   double tmp549_ = tmp547_+tmp548_;
   double tmp550_ = tmp540_*tmp109_;
   double tmp551_ = tmp550_*(tmp106_);
   double tmp552_ = tmp542_*tmp111_;
   double tmp553_ = tmp552_*(tmp131_);
   double tmp554_ = tmp551_+tmp553_;
   double tmp555_ = tmp542_*tmp108_;
   double tmp556_ = tmp554_+tmp555_;
   double tmp557_ = tmp540_*tmp132_;
   double tmp558_ = tmp557_*(tmp106_);
   double tmp559_ = tmp543_*tmp111_;
   double tmp560_ = tmp559_*(tmp131_);
   double tmp561_ = tmp558_+tmp560_;
   double tmp562_ = tmp543_*tmp108_;
   double tmp563_ = tmp561_+tmp562_;
   double tmp564_ = tmp239_*tmp111_;
   double tmp565_ = -(tmp108_);
   double tmp566_ = tmp108_*tmp44_;
   double tmp567_ = tmp566_*(tmp131_);
   double tmp568_ = tmp564_*tmp44_;
   double tmp569_ = tmp567_+tmp568_;
   double tmp570_ = tmp564_*tmp132_;
   double tmp571_ = tmp108_*tmp134_;
   double tmp572_ = tmp570_+tmp571_;
   double tmp573_ = (tmp572_)*(tmp131_);
   double tmp574_ = tmp565_*tmp132_;
   double tmp575_ = tmp564_*tmp134_;
   double tmp576_ = tmp574_+tmp575_;
   double tmp577_ = tmp573_+tmp576_;
   double tmp578_ = tmp564_*tmp141_;
   double tmp579_ = tmp108_*tmp143_;
   double tmp580_ = tmp578_+tmp579_;
   double tmp581_ = (tmp580_)*(tmp131_);
   double tmp582_ = tmp565_*tmp141_;
   double tmp583_ = tmp564_*tmp143_;
   double tmp584_ = tmp582_+tmp583_;
   double tmp585_ = tmp581_+tmp584_;

  mVal[0] = (tmp515_)/tmp238_;

  mCompDer[0][0] = (((((tmp229_)*(tmp152_)+(tmp220_)*(tmp185_))-((tmp217_)*(tmp174_)+(tmp226_)*(tmp140_)))*(tmp199_)+(((tmp217_)*(tmp196_)+(tmp232_)*(tmp140_))-((tmp223_)*(tmp152_)+(tmp220_)*(tmp163_)))*(tmp202_)+(((tmp223_)*(tmp174_)+(tmp226_)*(tmp163_))-((tmp229_)*(tmp196_)+(tmp232_)*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][1] = ((((tmp246_*(tmp152_)+tmp243_*(tmp185_))-(tmp242_*(tmp174_)+tmp245_*(tmp140_)))*(tmp199_)+((tmp242_*(tmp196_)+tmp247_*(tmp140_))-(tmp244_*(tmp152_)+tmp243_*(tmp163_)))*(tmp202_)+((tmp244_*(tmp174_)+tmp245_*(tmp163_))-(tmp246_*(tmp196_)+tmp247_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][2] = ((((tmp253_*(tmp152_)+tmp250_*(tmp185_))-(tmp249_*(tmp174_)+tmp252_*(tmp140_)))*(tmp199_)+((tmp249_*(tmp196_)+tmp254_*(tmp140_))-(tmp251_*(tmp152_)+tmp250_*(tmp163_)))*(tmp202_)+((tmp251_*(tmp174_)+tmp252_*(tmp163_))-(tmp253_*(tmp196_)+tmp254_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][3] = (((((tmp279_)*(tmp152_)+(tmp270_)*(tmp185_))-((tmp267_)*(tmp174_)+(tmp276_)*(tmp140_)))*(tmp199_)+(((tmp267_)*(tmp196_)+(tmp282_)*(tmp140_))-((tmp273_)*(tmp152_)+(tmp270_)*(tmp163_)))*(tmp202_)+(((tmp273_)*(tmp174_)+(tmp276_)*(tmp163_))-((tmp279_)*(tmp196_)+(tmp282_)*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][4] = (((((tmp301_)*(tmp152_)+(tmp292_)*(tmp185_))-((tmp289_)*(tmp174_)+(tmp298_)*(tmp140_)))*(tmp199_)+(((tmp289_)*(tmp196_)+(tmp304_)*(tmp140_))-((tmp295_)*(tmp152_)+(tmp292_)*(tmp163_)))*(tmp202_)+(((tmp295_)*(tmp174_)+(tmp298_)*(tmp163_))-((tmp301_)*(tmp196_)+(tmp304_)*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][5] = (((((tmp331_)*(tmp152_)+(tmp322_)*(tmp185_))-((tmp319_)*(tmp174_)+(tmp328_)*(tmp140_)))*(tmp199_)+(((tmp319_)*(tmp196_)+(tmp334_)*(tmp140_))-((tmp325_)*(tmp152_)+(tmp322_)*(tmp163_)))*(tmp202_)+(((tmp325_)*(tmp174_)+(tmp328_)*(tmp163_))-((tmp331_)*(tmp196_)+(tmp334_)*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][6] = (((((tmp357_)*(tmp152_)+(tmp348_)*(tmp185_))-((tmp345_)*(tmp174_)+(tmp354_)*(tmp140_)))*(tmp199_)+(((tmp345_)*(tmp196_)+(tmp360_)*(tmp140_))-((tmp351_)*(tmp152_)+(tmp348_)*(tmp163_)))*(tmp202_)+(((tmp351_)*(tmp174_)+(tmp354_)*(tmp163_))-((tmp357_)*(tmp196_)+(tmp360_)*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][7] = ((((tmp369_*(tmp152_)+tmp366_*(tmp185_))-(tmp365_*(tmp174_)+tmp368_*(tmp140_)))*(tmp199_)+((tmp365_*(tmp196_)+tmp370_*(tmp140_))-(tmp367_*(tmp152_)+tmp366_*(tmp163_)))*(tmp202_)+((tmp367_*(tmp174_)+tmp368_*(tmp163_))-(tmp369_*(tmp196_)+tmp370_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][8] = ((((tmp379_*(tmp152_)+tmp376_*(tmp185_))-(tmp375_*(tmp174_)+tmp378_*(tmp140_)))*(tmp199_)+((tmp375_*(tmp196_)+tmp380_*(tmp140_))-(tmp377_*(tmp152_)+tmp376_*(tmp163_)))*(tmp202_)+((tmp377_*(tmp174_)+tmp378_*(tmp163_))-(tmp379_*(tmp196_)+tmp380_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][9] = ((((tmp391_*(tmp152_)+tmp388_*(tmp185_))-(tmp387_*(tmp174_)+tmp390_*(tmp140_)))*(tmp199_)+((tmp387_*(tmp196_)+tmp392_*(tmp140_))-(tmp389_*(tmp152_)+tmp388_*(tmp163_)))*(tmp202_)+((tmp389_*(tmp174_)+tmp390_*(tmp163_))-(tmp391_*(tmp196_)+tmp392_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][10] = ((((tmp403_*(tmp152_)+tmp400_*(tmp185_))-(tmp399_*(tmp174_)+tmp402_*(tmp140_)))*(tmp199_)+((tmp399_*(tmp196_)+tmp404_*(tmp140_))-(tmp401_*(tmp152_)+tmp400_*(tmp163_)))*(tmp202_)+((tmp401_*(tmp174_)+tmp402_*(tmp163_))-(tmp403_*(tmp196_)+tmp404_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][11] = ((((tmp409_*(tmp152_)+tmp406_*(tmp185_))-(tmp405_*(tmp174_)+tmp408_*(tmp140_)))*(tmp199_)+((tmp405_*(tmp196_)+tmp410_*(tmp140_))-(tmp407_*(tmp152_)+tmp406_*(tmp163_)))*(tmp202_)+((tmp407_*(tmp174_)+tmp408_*(tmp163_))-(tmp409_*(tmp196_)+tmp410_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][12] = ((((tmp415_*(tmp152_)+tmp412_*(tmp185_))-(tmp411_*(tmp174_)+tmp414_*(tmp140_)))*(tmp199_)+((tmp411_*(tmp196_)+tmp416_*(tmp140_))-(tmp413_*(tmp152_)+tmp412_*(tmp163_)))*(tmp202_)+((tmp413_*(tmp174_)+tmp414_*(tmp163_))-(tmp415_*(tmp196_)+tmp416_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][13] = ((((tmp427_*(tmp152_)+tmp424_*(tmp185_))-(tmp423_*(tmp174_)+tmp426_*(tmp140_)))*(tmp199_)+((tmp423_*(tmp196_)+tmp428_*(tmp140_))-(tmp425_*(tmp152_)+tmp424_*(tmp163_)))*(tmp202_)+((tmp425_*(tmp174_)+tmp426_*(tmp163_))-(tmp427_*(tmp196_)+tmp428_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][14] = ((((tmp433_*(tmp152_)+tmp430_*(tmp185_))-(tmp429_*(tmp174_)+tmp432_*(tmp140_)))*(tmp199_)+((tmp429_*(tmp196_)+tmp434_*(tmp140_))-(tmp431_*(tmp152_)+tmp430_*(tmp163_)))*(tmp202_)+((tmp431_*(tmp174_)+tmp432_*(tmp163_))-(tmp433_*(tmp196_)+tmp434_*(tmp185_)))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][15] = (((tmp455_)*(tmp152_)*(tmp199_)+-((tmp448_)*(tmp152_))*(tmp202_)+((tmp448_)*(tmp174_)-(tmp455_)*(tmp196_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][16] = ((((tmp479_)*(tmp152_)-(tmp464_)*(tmp174_))*(tmp199_)+((tmp464_)*(tmp196_)-(tmp472_)*(tmp152_))*(tmp202_)+((tmp472_)*(tmp174_)-(tmp479_)*(tmp196_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][17] = ((((tmp501_)*(tmp152_)-(tmp484_)*(tmp174_))*(tmp199_)+((tmp484_)*(tmp196_)-(tmp493_)*(tmp152_))*(tmp202_)+((tmp493_)*(tmp174_)-(tmp501_)*(tmp196_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][18] = (tmp239_*(tmp504_)*tmp238_-(tmp515_)*((0.500000*(tmp516_+tmp516_))/tmp238_))/tmp248_;
  mCompDer[0][19] = (tmp239_*(tmp508_)*tmp238_-(tmp515_)*((0.500000*(tmp517_+tmp517_))/tmp238_))/tmp248_;
  mCompDer[0][20] = (tmp239_*(tmp513_)*tmp238_-(tmp515_)*((0.500000*(tmp518_+tmp518_))/tmp238_))/tmp248_;
  mCompDer[0][21] = ((-((tmp528_)*(tmp140_))*(tmp199_)+(tmp539_)*(tmp140_)*(tmp202_)+((tmp528_)*(tmp163_)-(tmp539_)*(tmp185_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][22] = ((((tmp549_)*(tmp185_)-(tmp556_)*(tmp140_))*(tmp199_)+((tmp563_)*(tmp140_)-(tmp549_)*(tmp163_))*(tmp202_)+((tmp556_)*(tmp163_)-(tmp563_)*(tmp185_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][23] = ((((tmp569_)*(tmp185_)-(tmp577_)*(tmp140_))*(tmp199_)+((tmp585_)*(tmp140_)-(tmp569_)*(tmp163_))*(tmp202_)+((tmp577_)*(tmp163_)-(tmp585_)*(tmp185_))*(tmp205_))*tmp238_)/tmp248_;
  mCompDer[0][24] = ((tmp504_)*tmp238_-(tmp515_)*((0.500000*(tmp199_+tmp199_))/tmp238_))/tmp248_;
  mCompDer[0][25] = ((tmp508_)*tmp238_-(tmp515_)*((0.500000*(tmp202_+tmp202_))/tmp238_))/tmp248_;
  mCompDer[0][26] = ((tmp513_)*tmp238_-(tmp515_)*((0.500000*(tmp205_+tmp205_))/tmp238_))/tmp248_;
}


void cEqCoplanEbnerId::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqCoplanEbnerId Has no Der Sec");
}

void cEqCoplanEbnerId::SetEbner_State_0_0(double aVal){ mLocEbner_State_0_0 = aVal;}
void cEqCoplanEbnerId::SetEbner_State_0_1(double aVal){ mLocEbner_State_0_1 = aVal;}
void cEqCoplanEbnerId::SetXL1(double aVal){ mLocXL1 = aVal;}
void cEqCoplanEbnerId::SetXL2(double aVal){ mLocXL2 = aVal;}
void cEqCoplanEbnerId::SetYL1(double aVal){ mLocYL1 = aVal;}
void cEqCoplanEbnerId::SetYL2(double aVal){ mLocYL2 = aVal;}



double * cEqCoplanEbnerId::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Ebner_State_0_0") return & mLocEbner_State_0_0;
   if (aName == "Ebner_State_0_1") return & mLocEbner_State_0_1;
   if (aName == "XL1") return & mLocXL1;
   if (aName == "XL2") return & mLocXL2;
   if (aName == "YL1") return & mLocYL1;
   if (aName == "YL2") return & mLocYL2;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqCoplanEbnerId::mTheAuto("cEqCoplanEbnerId",cEqCoplanEbnerId::Alloc);


cElCompiledFonc *  cEqCoplanEbnerId::Alloc()
{  return new cEqCoplanEbnerId();
}


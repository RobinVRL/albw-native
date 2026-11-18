#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_003249B4(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern int DAT_00513fdc;
extern int DAT_00513fe0;
extern float DAT_00513fe4;
extern float DAT_00513fe8;
extern float DAT_00513fec;
extern int DAT_00513ff0;
extern int DAT_00513ff4;
extern float DAT_00513ff8;
extern int DAT_00513ffc;
extern int DAT_00514000;
extern char s_SE_KinSta_APPEAR_00513fc8[];

// USA 00513E50 <- EU 00513E28 (Ghidra, non-matching)
// GLOBAL DAT_00513fdc int
// GLOBAL DAT_00513fe0 int
// GLOBAL DAT_00513fe4 float
// GLOBAL DAT_00513fe8 float
// GLOBAL DAT_00513fec float
// GLOBAL DAT_00513ff0 int
// GLOBAL DAT_00513ff4 int
// GLOBAL DAT_00513ff8 float
// GLOBAL DAT_00513ffc int
// GLOBAL DAT_00514000 int
// GLOBAL s_SE_KinSta_APPEAR_00513fc8 string

void func_00513E50(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define iStack_3c (*(int *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define afStack_28 ((float *)(albw_frame + 0x18))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  if ((char)param_1[0x152] == '\0') {
    func_003249B4((int)param_1);
  }
  local_2c = s_SE_KinSta_APPEAR_00513fc8;
  local_30 = DAT_00513fdc;
  func_00150A84(param_1,&local_30,0);
  func_00151148(param_1[0x148],1);
  func_004CF478(param_1[0x147],1);
  iVar5 = DAT_00513fe0;
  fVar6 = DAT_00513fe4;
  if ((((char)param_1[0x157] == '\0') ||
      (func_00115C70(&fStack_40,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x158)),
      iStack_3c < 0x3f000001)) ||
     (fVar4 = SQRT(fStack_40 * fStack_40 + fStack_38 * fStack_38), (int)ALBW_AS_U32(fVar4) < 0x3f800001)) {
    iVar2 = DAT_00513ffc;
    iVar7 = DAT_00513ff4;
    cVar1 = (char)param_1[0x152];
    if (cVar1 == '\0') {
      func_004D8240((float *)(param_1 + 0xf7),param_1[0x131] + 0xc0000000,param_1[0xfa],DAT_00513ff8
                   );
    }
    else {
      if (cVar1 != '\x01' && cVar1 != '\x02') goto LAB_00513f94;
      param_1[0xf7] = iVar5;
      param_1[0xf9] = iVar2;
    }
    param_1[0xf8] = iVar7;
  }
  else {
    fVar4 = DAT_00513fec + (fVar4 - fVar6) * DAT_00513fe8;
    iVar7 = DAT_00513ff0;
    func_00115C70(afStack_28,(float *)(param_1 + 0x158),(float *)(param_1 + 0xf4));
    fStack_40 = afStack_28[0];
    fStack_38 = ALBW_AS_F32(iStack_20);
    iStack_3c = iVar5;
    func_00115DC8(&fStack_40);
    func_00115D70(afStack_28,&fStack_40,fVar4);
    param_1[0xf7] = (int)ALBW_AS_U32(afStack_28[0]);
    param_1[0xf9] = iStack_20;
    param_1[0xf8] = iVar7;
  }
LAB_00513f94:
  iVar7 = DAT_00514000;
  piVar3 = (int *)param_1[0x146];
  piVar3[5] = param_1[0x131];
  piVar3[6] = 0;
  piVar3[2] = iVar7;
  *piVar3 = iVar5;
  piVar3[1] = (int)ALBW_AS_U32(fVar6);
  piVar3[4] = iVar5;
  piVar3[3] = iVar5;
  return;
}


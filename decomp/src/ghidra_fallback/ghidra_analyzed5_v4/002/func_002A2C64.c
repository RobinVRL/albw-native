#include "ghidra_types.h"

extern int func_002A27C4(int param_1,int param_2);
extern int func_002A363C(int param_1,uint param_2);
extern int func_002A49F8(int param_1,int param_2,int param_3);
extern int func_002A6B54(int param_1);
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern float func_004FAD90(int param_1);
extern int func_004FC570();
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int DAT_002a2e24;
extern int DAT_002a2e28;
extern float DAT_002a2e2c;
extern float DAT_002a2e30;
extern int DAT_002a2e34;
extern float DAT_002a2e38;
extern int DAT_002a2e3c;
extern int DAT_002a2e40;
extern int DAT_002a2e44;

// USA 002A2C64 <- EU 002A2C40 (Ghidra, non-matching)
// GLOBAL DAT_002a2e24 int
// GLOBAL DAT_002a2e28 int
// GLOBAL DAT_002a2e2c float
// GLOBAL DAT_002a2e30 float
// GLOBAL DAT_002a2e34 int
// GLOBAL DAT_002a2e38 float
// GLOBAL DAT_002a2e3c int
// GLOBAL DAT_002a2e40 int
// GLOBAL DAT_002a2e44 int

undefined4 func_002A2C64(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  
  func_002A27C4((int)param_1,1);
  fVar3 = func_0058AA40(param_1);
  if (((int)ALBW_AS_U32(fVar3) < DAT_002a2e24) || (fVar3 = func_0058AA40(param_1), DAT_002a2e28 < (int)ALBW_AS_U32(fVar3))) {
    func_004FAD90((int)param_1);
    func_002A6B54((int)param_1);
  }
  else {
    func_004FC570(param_1);
    param_1[0x167] = param_1[0x167] | 8;
  }
  lVar4 = func_0058ACC8((int)param_1,DAT_002a2e2c);
  if ((int)lVar4 != 0) {
    func_0036C09C(param_1 + 0x235,2);
  }
  lVar4 = func_0058ACC8((int)param_1,DAT_002a2e30);
  if ((int)lVar4 != 0) {
    param_1[0x2c9] = DAT_002a2e34;
  }
  fVar3 = ALBW_AS_F32(param_1[0x2c9]);
  param_1[0x2c9] = (int)ALBW_AS_U32((fVar3 + -fVar3 * DAT_002a2e38));
  func_002A363C((int)param_1,param_1[0xfa]);
  iVar1 = func_0058A8F0((int)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  pfVar2 = (float *)func_00520FC0();
  if ((int)ALBW_AS_U32(((*pfVar2 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar2 - ALBW_AS_F32(param_1[0xf4])) +
           (pfVar2[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar2[2] - ALBW_AS_F32(param_1[0xf6])))) < DAT_002a2e3c)
  {
    if (1 < *(byte *)((int)param_1 + 0xb93)) {
      *(undefined1 *)((int)param_1 + 0xb9d) = 1;
      return func_00662128(param_1 + 0x278,10);
    }
    iVar1 = func_002A49F8((int)param_1,*(int *)(DAT_002a2e40 + 0x78),0);
    if (iVar1 != 0) {
      return func_00662128(param_1 + 0x278,9);
    }
  }
  pfVar2 = (float *)func_00520FC0();
  if ((int)ALBW_AS_U32(((*pfVar2 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar2 - ALBW_AS_F32(param_1[0xf4])) +
           (pfVar2[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar2[2] - ALBW_AS_F32(param_1[0xf6])))) <= DAT_002a2e44)
  {
    return func_00662128(param_1 + 0x278,1);
  }
  return func_00662128(param_1 + 0x278,6);
}


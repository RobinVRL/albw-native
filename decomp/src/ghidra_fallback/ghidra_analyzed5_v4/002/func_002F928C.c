#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern float DAT_002f9390;
extern float DAT_002f9394;
extern int DAT_002f9398;
extern int DAT_002f939c;
extern uint DAT_002f93a0;

// USA 002F928C <- EU 002F9268 (Ghidra, non-matching)
// GLOBAL DAT_002f9390 float
// GLOBAL DAT_002f9394 float
// GLOBAL DAT_002f9398 int
// GLOBAL DAT_002f939c int
// GLOBAL DAT_002f93a0 uint

undefined4 func_002F928C(int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 ((int *)(albw_frame + 0x10))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_2c,pfVar1,(float *)(param_1 + 0x3d0));
  iVar5 = *(int *)(param_1 + 1000) + *(int *)(param_1 + 0x8cc);
  local_20[0] = func_004904CC(local_2c,local_24);
  if (param_2 != (int *)0x0) {
    local_30 = iVar5 - local_20[0];
    iVar2 = func_0058E2B8(&local_30);
    *param_2 = iVar2;
  }
  if (*(short *)(param_1 + 0x32) == 0) {
    fVar6 = *(float *)(param_1 + 0x8e8) + DAT_002f9390;
    fVar8 = *(float *)(param_1 + 0x10) - pfVar1[2];
    fVar7 = *(float *)(param_1 + 8) - *pfVar1;
    if (fVar6 * fVar6 <= fVar7 * fVar7 + fVar8 * fVar8) {
      uVar3 = 2;
    }
    else {
      if (local_28 <= DAT_002f9394) {
        local_28 = -local_28;
      }
      if (((int)ALBW_AS_U32(local_28) <= DAT_002f9398) &&
         ((int)ALBW_AS_U32((local_2c * local_2c + local_24 * local_24)) < DAT_002f939c)) {
        local_20[0] = iVar5 - local_20[0];
        uVar4 = func_0058E2B8(local_20);
        if (uVar4 < DAT_002f93a0) {
          return 0;
        }
      }
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052F654(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00663FA8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002e6220;
extern uint DAT_002e6224;

// USA 002E61A8 <- EU 002E6184 (Ghidra, non-matching)
// GLOBAL DAT_002e6220 undefined4
// GLOBAL DAT_002e6224 uint

void func_002E61A8(int param_1)

{
  uint uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  fVar2 = func_0051CF68((float *)(param_1 + 0xa34),*(float *)(param_1 + 0xa28),
                        *(float *)(param_1 + 0xa2c),*(float *)(param_1 + 0xa30));
  *(float *)(param_1 + 0xa38) = fVar2;
  uVar1 = func_0052F654(param_1 + 0xa28);
  *(uint *)(param_1 + 1000) = uVar1;
  func_004D80A4((float *)(param_1 + 0x3dc),uVar1,*(float *)(param_1 + 0xa54));
  *(undefined4 *)(param_1 + 0x3e0) = DAT_002e6220;
  local_10 = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0xa24);
  uVar1 = func_0058E2B8(&local_10);
  if (uVar1 < DAT_002e6224) {
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa44);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0xa48);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa4c);
    func_00663FA8((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}


#include "ghidra_types.h"

extern int func_004E2880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined2 param_5,float fparam_0);
extern int func_00549010(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065AD50(undefined4 *param_1,undefined1 param_2);
extern float DAT_001ae3e0;
extern float DAT_001ae3e4;
extern float DAT_001ae3e8;
extern float DAT_001ae3ec;
extern undefined4 DAT_001ae3f0;

// USA 001AE2F4 <- EU 001AE2F4 (Ghidra, non-matching)
// GLOBAL DAT_001ae3e0 float
// GLOBAL DAT_001ae3e4 float
// GLOBAL DAT_001ae3e8 float
// GLOBAL DAT_001ae3ec float
// GLOBAL DAT_001ae3f0 undefined4

undefined4 func_001AE2F4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  lVar3 = func_0058ACC8(param_1,DAT_001ae3e0);
  if ((int)lVar3 == 0) {
    lVar3 = func_0058ACC8(param_1,DAT_001ae3ec);
    uVar1 = DAT_001ae3f0;
    if ((int)lVar3 != 0) {
      *(undefined1 *)(param_1 + 0x9e0) = 1;
      *(undefined4 *)(param_1 + 0x9d8) = uVar1;
      *(undefined4 *)(param_1 + 0x9dc) = *(undefined4 *)(*(int *)(param_1 + 0x994) + 8);
      return 0;
    }
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      return func_0065AD50((undefined4 *)(param_1 + 0x90c),9);
    }
  }
  else {
    iVar2 = func_00549010(param_1);
    local_14 = *(undefined4 *)(iVar2 + 0xc);
    local_c = *(undefined4 *)(iVar2 + 0x2c);
    local_10 = *(float *)(param_1 + 0x3d4) + DAT_001ae3e4;
    func_004E2880(&local_14,*(undefined4 *)(param_1 + 1000),1,*(undefined4 *)(param_1 + 0x2cc),
                  (short)*(undefined4 *)(param_1 + 0x9d0),DAT_001ae3e8);
    *(undefined1 *)(param_1 + 0x9e0) = 0;
  }
  return 0;
}


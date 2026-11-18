#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00663FA8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_002e675c;
extern float DAT_002e6760;
extern float DAT_002e6764;

// USA 002E669C <- EU 002E6678 (Ghidra, non-matching)
// GLOBAL DAT_002e675c undefined4
// GLOBAL DAT_002e6760 float
// GLOBAL DAT_002e6764 float

void func_002E669C(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  }
  if (*(uint *)(param_1 + 0x8e8) <= *(uint *)(param_1 + 0x8e4)) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_1c,pfVar2,(float *)(param_1 + 0x3d0));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    iVar3 = func_0068C690(&local_28);
    *(int *)(param_1 + 0x8e0) = iVar3;
    *(int *)(param_1 + 0xa24) = iVar3;
    uVar1 = DAT_002e675c;
    *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 1000);
    *(undefined4 *)(param_1 + 0x8e8) = 0x32;
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    uVar5 = *(uint *)(param_1 + 0xa24);
    func_004D80A4((float *)(param_1 + 0xa64),uVar5,DAT_002e6760);
    func_004D80A4((float *)(param_1 + 0x3dc),uVar5,DAT_002e6764);
    *(undefined4 *)(param_1 + 0xa50) = 3;
    if (*(uint *)(param_1 + 0x8e0) == *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
      uVar4 = 1;
    }
    else {
      uVar4 = 5;
    }
    func_00663FA8((undefined4 *)(param_1 + 0x8bc),uVar4);
  }
  return;
}


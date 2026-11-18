#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern undefined4 DAT_0013f33c;
extern undefined4 DAT_0013f340;
extern undefined DAT_0013f344;

// USA 0013F2C0 <- EU 0013F2C0 (Ghidra, non-matching)
// GLOBAL DAT_0013f33c undefined4
// GLOBAL DAT_0013f340 undefined4
// GLOBAL DAT_0013f344 undefined

void func_0013F2C0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  uVar2 = DAT_0013f340;
  uVar1 = DAT_0013f33c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0013f33c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  if (*(int *)(param_1 + 0x344) == 0) {
    iStack_14 = 0;
    local_18 = 0.0;
  }
  else {
    func_004A1B9C((int *)&local_18,*(int *)(param_1 + 0x344),(uint *)&DAT_0013f344);
  }
  fVar4 = *(float *)(param_1 + 0x3d0);
  uStack_10 = *(undefined4 *)(param_1 + 0x3d8);
  if ((local_18 != 0.0) && (*(int *)((int)ALBW_AS_U32(local_18) + 0x1c) == iStack_14)) {
    fVar3 = local_18;
    local_18 = fVar4;
    iStack_14 = *(undefined4 *)(param_1 + 0x510);
    func_004A2F38((int)ALBW_AS_U32(fVar3),&local_18);
  }
  return;
}


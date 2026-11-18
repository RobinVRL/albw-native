#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern float DAT_00306210;
extern undefined4 DAT_00306214;

// USA 00306160 <- EU 0030613C (Ghidra, non-matching)
// GLOBAL DAT_00306210 float
// GLOBAL DAT_00306214 undefined4

void func_00306160(int param_1)

{
  uint *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 1;
  puVar1 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x438),puVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
  if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
    *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  puVar1 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x43c),puVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x43c) + 0x14);
  if (*(float *)(iVar2 + 8) != DAT_00306210) {
    *(float *)(iVar2 + 8) = DAT_00306210;
    *(undefined1 *)(iVar2 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x43c) + 0x14) + 0x10) = DAT_00306214;
  return;
}


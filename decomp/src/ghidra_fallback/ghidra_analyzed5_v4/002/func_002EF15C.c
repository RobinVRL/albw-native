#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002EEB98(int param_1);
extern undefined4 DAT_002ef1e0;
extern int DAT_002ef1e4;

// USA 002EF15C <- EU 002EF138 (Ghidra, non-matching)
// GLOBAL DAT_002ef1e0 undefined4
// GLOBAL DAT_002ef1e4 int

void func_002EF15C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  *(undefined1 *)(param_1 + 0xe0e) = 1;
  func_002EEB98(param_1);
  iVar2 = DAT_002ef1e4;
  uVar1 = DAT_002ef1e0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff8;
  *(undefined4 *)(param_1 + 0xe10) = uVar1;
  *(undefined4 *)(param_1 + 0xe14) = *(undefined4 *)(iVar2 + 0x10);
  fVar4 = *(float *)(iVar2 + 0xc);
  *(float *)(param_1 + 0xe1c) = fVar4;
  if (*(char *)(param_1 + 0xe2c) == '\0') {
    *(float *)(param_1 + 0xe1c) = -fVar4;
  }
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  puVar3 = (uint *)func_002C11E8(aiStack_70,1,0,0);
  func_0016898C(*(int *)(param_1 + 0xdb4),puVar3);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdb4) + 0x14) + 0x10) = *(undefined4 *)(iVar2 + 0x18)
  ;
  return;
}


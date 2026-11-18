#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004FD038(int param_1,undefined1 param_2);
extern undefined4 uRam0035539c;
extern undefined4 uRam003553a0;

// USA 00355334 <- EU 00355310 (Ghidra, non-matching)
// GLOBAL UNK_0035539c undefined4
// GLOBAL UNK_003553a0 undefined4

undefined4 func_00355334(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 0x33;
  func_004FD038(param_1 + 0x5a8,0);
  func_00151148(*(int *)(param_1 + 0xa88),1);
  uVar1 = uRam0035539c;
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = uRam003553a0;
  *(undefined4 *)(param_1 + 0x9d4) = uVar1;
  *(undefined4 *)(param_1 + 0x9dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x9d0) = *(undefined4 *)(param_1 + 0x3d4);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x410) != 0) {
    iVar4 = **(int **)(*(int *)(param_1 + 0x410) + 0x14);
  }
  if (iVar4 == 0) {
    if (-1 < *(int *)(param_1 + 0x5a0) << 0x14) {
      puVar3 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
      *puVar3 = *puVar3 & 0xfffe;
    }
  }
  else if (-1 < *(int *)(param_1 + 0x5a0) << 0x14) {
    if (*(undefined4 **)(param_1 + 0x81c) == (undefined4 *)0x0) {
      puVar2 = (uint *)func_002C11E8(aiStack_68,0,(uint)*(byte *)(param_1 + 0x655),0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar2);
    }
    else {
      (**(code **)**(undefined4 **)(param_1 + 0x81c))();
    }
    puVar3 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar3 = *puVar3 & 0xfffe;
    *(undefined1 *)(param_1 + 0x82a) = 1;
    *(undefined4 *)(param_1 + 0x414) = 0;
    return 1;
  }
  return 0;
}


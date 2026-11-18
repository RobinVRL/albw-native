#include "ghidra_types.h"

extern int func_0046982C(int param_1);
extern int func_00469878(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined1 param_5 );
extern int func_0048C258(int *param_1,undefined *param_2);
extern undefined *DAT_00467098;

// USA 00466FE0 <- EU 00466FB8 (Ghidra, non-matching)
// GLOBAL DAT_00467098 undefined *

undefined4 func_00466FE0(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar3 = *(int *)(param_1 + 0x148);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(uint **)(param_1 + 0x150);
  }
  bVar5 = *(char *)(uVar1 + 0xd) == '\0';
  if (bVar5) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xe);
  }
  if (!bVar5 || uVar1 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x150);
    }
    if (*(byte *)(iVar2 + 0x88) == param_3) {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(param_1 + 0x150);
      }
      func_0046982C(iVar3);
      bVar5 = *(int *)(param_1 + 0x148) != 0;
      iVar3 = 0;
      if (bVar5) {
        iVar3 = **(int **)(param_1 + 0x150);
      }
      uVar4 = param_2[1];
      if (!bVar5) {
        iVar3 = 0;
      }
      *(undefined4 *)(iVar3 + 0x8c) = *param_2;
      *(undefined4 *)(iVar3 + 0x90) = uVar4;
      *(undefined1 *)(iVar3 + 0xb0) = 1;
      *(undefined1 *)(iVar3 + 0xa4) = 0;
      return 0;
    }
  }
  local_18 = *param_2;
  uStack_14 = param_2[1];
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x150);
  }
  func_00469878(iVar3,param_3,&local_18,param_4,0);
  return func_0048C258((int *)(param_1 + 0x148),DAT_00467098);
}


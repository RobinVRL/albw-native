#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004A19EC(int *param_1,int param_2);
extern int func_004A1D58(int param_1);
extern int func_004A2754(int param_1,int param_2);
extern undefined *DAT_004a1c9c;

// USA 004A1BFC <- EU 004A1BD4 (Ghidra, non-matching)
// GLOBAL DAT_004a1c9c undefined *

undefined4 func_004A1BFC(int param_1,int *param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      func_004A19EC((int *)(*(int *)(param_1 + 0x38) + iVar3 * 0xc),param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
  }
  func_004A2754(*(int *)(param_1 + 0xc),*(int *)(*(int *)(param_1 + 8) + 0x2c));
  uVar1 = func_0010CEE0(*(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 4) << 3,param_2,4);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  iVar4 = *(int *)(**(int **)(*(int *)(param_1 + 0xc) + 0xc) + 8);
  iVar2 = func_0010CEE0(iVar4 << 4,param_2,4);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = func_00100118(iVar2,DAT_004a1c9c,0x10,iVar4);
  }
  *(int *)(param_1 + 0x58) = iVar3;
  return func_004A1D58(param_1);
}


#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined *DAT_00496c8c;
extern undefined *DAT_00496c90;

// USA 00496C18 <- EU 00496BF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00496c8c undefined *
// GLOBAL DAT_00496c90 undefined *

void func_00496C18(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = func_0010CEE0(param_4 * 0xc,param_2,4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_00100118(iVar1,DAT_00496c8c,0xc,param_4);
  }
  *(int *)(param_3 + 0x7a0) = iVar2;
  iVar1 = func_0010CEE0(param_4 << 3,param_2,4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = func_00100118(iVar1,DAT_00496c90,8,param_4);
  }
  *(int *)(param_3 + 0x7a4) = iVar2;
  uVar3 = func_0010CEE0(param_4 << 2,param_2,4);
  *(undefined4 *)(param_3 + 0x7a8) = uVar3;
  uVar3 = func_0010CEE0(param_5 << 1,param_2,4);
  *(undefined4 *)(param_3 + 0x790) = uVar3;
  return;
}


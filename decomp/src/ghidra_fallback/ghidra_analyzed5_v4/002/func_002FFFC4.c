#include "ghidra_types.h"

extern int func_0010AC54(int param_1,int param_2,int param_3,undefined2 param_4,ushort param_5, undefined1 param_6);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int *DAT_00300000;

// USA 002FFFC4 <- EU 002FFFA0 (Ghidra, non-matching)
// GLOBAL DAT_00300000 int *

undefined4 func_002FFFC4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *DAT_00300000;
  piVar2 = (int *)(iVar3 + 0x58);
  func_0010C0C0(piVar2);
  uVar1 = func_0010AC54(iVar3,param_1,4,0,0,0);
  func_0010C160(piVar2);
  return uVar1;
}


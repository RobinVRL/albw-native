#include "ghidra_types.h"

extern int func_0016C004(int param_1,int *param_2);
extern int func_0016C3C8(int param_1,int *param_2);
extern int *DAT_0035200c;

// USA 00351FC0 <- EU 00351F9C (Ghidra, non-matching)
// GLOBAL DAT_0035200c int *

undefined4 func_00351FC0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar1 = DAT_0035200c;
  uVar4 = param_2[0x66];
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*param_2 + 0xc) + param_2[100] * 4) + 0x18) +
                  param_2[0x65] * 0x3c + 0xc) << 0xf;
  if (-1 < iVar2) {
    iVar2 = func_0016C004(*DAT_0035200c,param_2);
  }
  if ((uVar4 & 0xff) < 2 || (uVar4 & 0xff) == 9) {
    uVar3 = func_0016C3C8(*piVar1,param_2);
    return uVar3;
  }
  return iVar2;
}


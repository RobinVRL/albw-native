#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054fa60;
extern undefined4 DAT_0054fa64;
extern undefined4 *DAT_0054fa68;
extern undefined4 DAT_0054fa6c;

// USA 0054FA10 <- EU 0054F9E8 (Ghidra, non-matching)
// GLOBAL DAT_0054fa60 uint *
// GLOBAL DAT_0054fa64 undefined4
// GLOBAL DAT_0054fa68 undefined4 *
// GLOBAL DAT_0054fa6c undefined4

undefined4 * func_0054FA10(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    iVar4 = param_1 + 0x10;
    if (param_2 < 0x14) {
      iVar4 = iVar4 + param_2 * 0x34;
    }
    return (undefined4 *)(iVar4 + 0x24);
  }
  if (((*DAT_0054fa60 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_0054fa60), uVar3 = DAT_0054fa6c, puVar2 = DAT_0054fa68,
     uVar1 = DAT_0054fa64, iVar4 != 0)) {
    *DAT_0054fa68 = DAT_0054fa64;
    puVar2[1] = uVar1;
    puVar2[2] = uVar3;
  }
  return DAT_0054fa68;
}


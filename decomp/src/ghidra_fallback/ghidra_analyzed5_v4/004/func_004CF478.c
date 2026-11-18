#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_001300D4(int param_1,undefined4 param_2);
extern int *DAT_004cf4e8;

// USA 004CF478 <- EU 004CF450 (Ghidra, non-matching)
// GLOBAL DAT_004cf4e8 int *

undefined4 func_004CF478(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  
  piVar1 = DAT_004cf4e8;
  if (*(char *)(param_1 + 0x30) == param_2) {
    return 0;
  }
  iVar2 = *DAT_004cf4e8;
  func_0010C0B8(iVar2 + 0x2bc8);
  iVar3 = *(int *)(param_1 + 0x4c);
  if (param_2 == 0) {
    if ((iVar3 == 0) || ((~*(uint *)(param_1 + 0x164) & 0x3e) != 0)) goto LAB_004cf49c;
    uVar5 = 1;
  }
  else {
    if (iVar3 == 0) {
      puVar4 = func_001300D4(*piVar1,param_1);
      *(undefined4 **)(param_1 + 0x4c) = puVar4;
      goto LAB_004cf49c;
    }
    uVar5 = 0;
  }
  *(undefined1 *)(iVar3 + 4) = uVar5;
LAB_004cf49c:
  *(char *)(param_1 + 0x30) = (char)param_2;
  return func_0010EEE0(iVar2 + 0x2bc8);
}


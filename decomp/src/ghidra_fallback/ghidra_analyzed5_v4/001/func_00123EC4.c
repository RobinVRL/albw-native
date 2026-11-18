#include "ghidra_types.h"

extern int func_004F7E8C();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_00123fac;
extern int *DAT_00123fb0;
extern int *DAT_00123fb4;
extern int *DAT_00123fb8;

// USA 00123EC4 <- EU 00123EC4 (Ghidra, non-matching)
// GLOBAL DAT_00123fac undefined4
// GLOBAL DAT_00123fb0 int *
// GLOBAL DAT_00123fb4 int *
// GLOBAL DAT_00123fb8 int *

undefined4 func_00123EC4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar1 = param_1 + 0x900;
  bVar5 = *(char *)(param_1 + 0x959) != '\0';
  if (!bVar5) {
    uVar1 = (uint)*(byte *)(param_1 + 0x95a);
  }
  if (bVar5 || uVar1 != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    if (*(short *)(*(int *)(param_2 + 0x2c) + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x959) = 1;
      uVar4 = DAT_00123fac;
      *(undefined4 *)(param_1 + 0x948) = 0x14;
      *(undefined4 *)(param_1 + 0x94c) = uVar4;
      *(undefined4 *)(param_1 + 0x944) = 0;
      if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00123f44;
    }
    if (*(char *)(*(int *)(param_2 + 0x2c) + 1) != '\x1f') goto LAB_00123f9c;
  }
LAB_00123f44:
  iVar2 = func_0052FBA0(*DAT_00123fb0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((iVar2 != 0) && (iVar3 = func_00588BE4(iVar2), iVar3 != *DAT_00123fb4)) &&
     (iVar2 = func_00588BE4(iVar2), iVar2 != *DAT_00123fb8)) {
    return 0;
  }
LAB_00123f9c:
  uVar4 = func_004F7E8C(param_1,param_2);
  return uVar4;
}


#include "ghidra_types.h"

extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_00664740(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00302f34;
extern int *DAT_00302f38;
extern undefined4 DAT_00302f3c;
extern int DAT_00302f40;
extern int DAT_00302f44;

// USA 00302D8C <- EU 00302D68 (Ghidra, non-matching)
// GLOBAL DAT_00302f34 int *
// GLOBAL DAT_00302f38 int *
// GLOBAL DAT_00302f3c undefined4
// GLOBAL DAT_00302f40 int
// GLOBAL DAT_00302f44 int

undefined4 func_00302D8C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((*(int *)(*DAT_00302f34 + 0x18) != 0) &&
     (-1 < *(int *)(*(int *)(*DAT_00302f34 + 0x18) + 0x10c))) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x4d4);
  iVar3 = *DAT_00302f38;
  puVar4 = (undefined4 *)(param_1 + 0x498);
  if (cVar1 == '\0') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4bc) + 0x14) + 0x10) = DAT_00302f3c;
    iVar2 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x14);
    if ((*(char *)(iVar2 + 0x1c) == '\0') && (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14))) {
      func_004CDF40(iVar3,DAT_00302f40,1);
      return func_00664740(puVar4,2);
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c0) + 0x14) + 0x10) = DAT_00302f3c;
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c0) + 0x14);
    if ((*(char *)(iVar2 + 0x1c) == '\0') && (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14))) {
      func_004CDF40(iVar3,0x2c9,1);
      return func_00664740(puVar4,2);
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c4) + 0x14) + 0x10) = DAT_00302f3c;
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x14);
    if ((*(char *)(iVar2 + 0x1c) == '\0') && (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14))) {
      func_004CDF40(iVar3,DAT_00302f44,1);
      return func_00664740(puVar4,2);
    }
  }
  else if (cVar1 == '\x03') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c8) + 0x14) + 0x10) = DAT_00302f3c;
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
    if ((*(char *)(iVar2 + 0x1c) == '\0') && (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14))) {
      func_004CDF40(iVar3,0x2cd,1);
      func_00664740(puVar4,2);
    }
  }
  return 0;
}


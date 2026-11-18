// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_00556E64(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0016f8b0;
extern int *DAT_0016f8b4;
extern int *DAT_0016f8b8;
extern int *DAT_0016f8bc;
extern int *DAT_0016f8c0;

// USA 0016F814 <- EU 0016F814 (Ghidra, non-matching)
// GLOBAL DAT_0016f8b0 int *
// GLOBAL DAT_0016f8b4 int *
// GLOBAL DAT_0016f8b8 int *
// GLOBAL DAT_0016f8bc int *
// GLOBAL DAT_0016f8c0 int *

void func_0016F814(int param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = DAT_0016f8b0;
  uVar3 = func_005568E8(*DAT_0016f8b0);
  if (*param_2 == uVar3) {
    bVar2 = func_00556E64(*piVar1);
    if (bVar2) {
      return;
    }
  }
  else {
    iVar4 = func_0052FBA0(*DAT_0016f8b4 + 0x3dbbc,*param_2);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = func_00588BE4(iVar4);
    if ((iVar4 == *DAT_0016f8b8) || (iVar4 == *DAT_0016f8bc)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    if (iVar4 != *DAT_0016f8c0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x37) = 1;
  return;
}


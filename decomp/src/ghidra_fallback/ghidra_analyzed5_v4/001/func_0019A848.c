#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00110DB8(int param_1,int param_2);
extern int func_001E05CC(int param_1,undefined4 param_2);
extern int func_0052F210(int param_1);
extern int func_00588224(int param_1,uint param_2,uint param_3);
extern int *DAT_0019a9d8;

// USA 0019A848 <- EU 0019A848 (Ghidra, non-matching)
// GLOBAL DAT_0019a9d8 int *

/* WARNING: Removing unreachable block (ram,0x0019a8f8) */

void func_0019A848(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float in_s0;
  
  piVar1 = DAT_0019a9d8;
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x2c) - iVar6;
    iVar5 = *(int *)(iVar4 + iVar6 + 4);
    while (iVar4 != (param_1 + 0x28) - iVar6) {
      uVar2 = func_0052F210(iVar4);
      iVar3 = func_00588224(*piVar1,uVar2,0x8000000);
      if ((iVar3 != 0) || ((*(char *)(iVar4 + 0x109) != '\0' && (*(char *)(iVar4 + 0x10a) != '\0')))
         ) {
        func_00110DB8(iVar4,0);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x34) + iVar4),in_s0);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      }
      iVar4 = iVar5 - iVar6;
      iVar5 = *(int *)(iVar5 + 4);
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar5 = *(int *)(param_1 + 0x34);
      for (iVar4 = *(int *)(param_1 + 0x2c) - iVar5; iVar4 != (param_1 + 0x28) - iVar5;
          iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5) {
        func_001E05CC(iVar4,5);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar6 = *(int *)(param_1 + 0x34);
      iVar4 = *(int *)(param_1 + 0x2c) - iVar6;
      iVar5 = *(int *)(iVar4 + iVar6 + 4);
      while (iVar4 != (param_1 + 0x28) - iVar6) {
        func_00110DB8(iVar4,5);
        iVar4 = iVar5 - iVar6;
        iVar5 = *(int *)(iVar5 + 4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  return;
}


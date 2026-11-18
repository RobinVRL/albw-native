#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int func_0051B240(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int *DAT_00437de4;
extern int *DAT_00437de8;

// USA 00437D50 <- EU 00437D30 (Ghidra, non-matching)
// GLOBAL DAT_00437de4 int *
// GLOBAL DAT_00437de8 int *

undefined4 func_00437D50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_r1;
  bool bVar3;
  
  func_001B6DE0(param_1);
  piVar2 = *(int **)(param_1 + 0x74);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)piVar2 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x74));
  piVar2 = *(int **)(param_1 + 0x78);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)piVar2 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0xd) = 0;
  }
  func_004B9528(param_1,*(int *)(param_1 + 0x78));
  piVar2 = DAT_00437de4;
  func_00166620(*DAT_00437de4,param_1);
  func_00166C00(*piVar2,1);
  return func_0051B240(*DAT_00437de8,extraout_r1,param_3,param_4);
}


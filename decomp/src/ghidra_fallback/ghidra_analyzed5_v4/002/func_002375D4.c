#include "ghidra_types.h"

extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_00588BE4(int param_1);
extern int DAT_002376e0;
extern int DAT_002376e4;
extern int DAT_002376e8;
extern int DAT_002376ec;
extern int *DAT_002376f0;
extern int *DAT_002376f4;
extern int *DAT_002376f8;
extern int *DAT_002376fc;
extern int *DAT_00237700;

// USA 002375D4 <- EU 002375D4 (Ghidra, non-matching)
// GLOBAL DAT_002376e0 int
// GLOBAL DAT_002376e4 int
// GLOBAL DAT_002376e8 int
// GLOBAL DAT_002376ec int
// GLOBAL DAT_002376f0 int *
// GLOBAL DAT_002376f4 int *
// GLOBAL DAT_002376f8 int *
// GLOBAL DAT_002376fc int *
// GLOBAL DAT_00237700 int *

int * func_002375D4(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  
  piVar3 = func_001E56CC(param_1,param_2);
  iVar2 = DAT_002376e8;
  iVar4 = DAT_002376e0;
  piVar3[200] = DAT_002376e8 + 0x78;
  iVar1 = DAT_002376e4;
  *piVar3 = iVar2;
  piVar3[0x187] = iVar4;
  piVar3[0x188] = iVar1;
  iVar4 = DAT_002376ec;
  piVar3[0x189] = 0;
  piVar3[0x18a] = 5;
  piVar3[0x18b] = iVar4;
  piVar3[0x18c] = 0;
  piVar3[0x18d] = 0;
  func_0010FD28((uint *)(piVar3 + 0x18e),0);
  uVar5 = 1;
  *(undefined1 *)(piVar3 + 0x192) = 1;
  *(undefined1 *)((int)piVar3 + 0x649) = 0;
  *(undefined1 *)((int)piVar3 + 0x64a) = 0;
  iVar4 = func_00588BE4((int)piVar3);
  if (iVar4 == *DAT_002376f0) {
LAB_002376d4:
    *(undefined1 *)((int)piVar3 + 0x64b) = 0;
  }
  else {
    iVar4 = func_00588BE4((int)piVar3);
    if (iVar4 != *DAT_002376f4) {
      iVar4 = func_00588BE4((int)piVar3);
      uVar5 = 2;
      if ((iVar4 != *DAT_002376f8) && (iVar4 = func_00588BE4((int)piVar3), iVar4 != *DAT_002376fc))
      {
        iVar4 = func_00588BE4((int)piVar3);
        if (iVar4 == *DAT_00237700) {
          *(undefined1 *)((int)piVar3 + 0x64b) = 3;
          return piVar3;
        }
        goto LAB_002376d4;
      }
    }
    *(undefined1 *)((int)piVar3 + 0x64b) = uVar5;
  }
  return piVar3;
}


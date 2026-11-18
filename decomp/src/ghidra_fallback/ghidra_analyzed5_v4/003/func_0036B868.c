// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_004FD068(int param_1);
extern int func_004FD130(int param_1,int param_2);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_005568F4(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_0036b9b4;
extern int *DAT_0036b9b8;
extern undefined4 DAT_0036b9bc;
extern int *DAT_0036b9c0;
extern undefined *DAT_0036b9c4;

// USA 0036B868 <- EU 0036B844 (Ghidra, non-matching)
// GLOBAL DAT_0036b9b4 int *
// GLOBAL DAT_0036b9b8 int *
// GLOBAL DAT_0036b9bc undefined4
// GLOBAL DAT_0036b9c0 int *
// GLOBAL DAT_0036b9c4 undefined *

undefined4 func_0036B868(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *DAT_0036b9b4;
  if (iVar5 != 0) {
    uVar3 = func_005568F4(iVar5);
    if ((((uVar3 != 0) || (bVar2 = func_00556EAC(iVar5,0x3b), bVar2)) ||
        (bVar2 = func_00556EAC(iVar5,0x3c), bVar2)) ||
       ((bVar2 = func_00556EAC(iVar5,0x3d), bVar2 || (bVar2 = func_00556EAC(iVar5,0x30), bVar2)))) {
      func_00361658(iVar5);
    }
    else {
      *(undefined1 *)((int)param_1 + 0xfb) = 1;
    }
  }
  if (*DAT_0036b9b8 != 0) {
    *(undefined1 *)(*DAT_0036b9b8 + 0xa0) = 0;
  }
  iVar4 = param_1[2];
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x85a) = 0;
    uVar1 = DAT_0036b9bc;
    *(undefined1 *)(iVar4 + 0x859) = 0;
    *(undefined4 *)(iVar4 + 0x86c) = 0;
    *(undefined4 *)(iVar4 + 0x870) = uVar1;
    *(undefined4 *)(iVar4 + 0x868) = 0;
    *(uint *)(iVar4 + 0x5a0) = *(uint *)(iVar4 + 0x5a0) & 0xffdfffff;
    func_004FD068(iVar4 + 0x5a8);
    func_004FD130(iVar4 + 0x5a8,1);
    func_004F8DF4((int *)param_1[2],0);
  }
  (**(code **)(*param_1 + 8))(param_1);
  if (*(char *)((int)param_1 + 0xf7) == '\0') {
    param_1[8] = -1;
    param_1[0x3b] = 3;
    param_1[9] = -1;
    return func_0052FD7C(*DAT_0036b9c0 + 0x3dbbc,DAT_0036b9c4,0);
  }
  if (*(char *)((int)param_1 + 0xfb) != '\0') {
    if (iVar5 != 0) {
      func_00361658(iVar5);
    }
    *(undefined1 *)((int)param_1 + 0xfb) = 0;
  }
  return 0;
}


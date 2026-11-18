#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010C484(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int DAT_00109a58;
extern int DAT_00109a5c;
extern int DAT_00109a60;

// USA 00109994 <- EU 00109994 (Ghidra, non-matching)
// GLOBAL DAT_00109a58 int
// GLOBAL DAT_00109a5c int
// GLOBAL DAT_00109a60 int

int * func_00109994(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = func_0010DA7C((undefined4 *)(param_1 + 4),0,3);
  iVar2 = DAT_00109a58 + 0x34;
  piVar1[-1] = DAT_00109a58;
  *piVar1 = iVar2;
  iVar2 = func_0010BAB4(0x88);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0010C484((undefined4 *)(iVar2 + 4));
    iVar2 = DAT_00109a5c;
    iVar5 = DAT_00109a5c + 0x48;
    piVar3[0x16] = DAT_00109a5c + 0x6c;
    piVar4 = piVar3 + -1;
    *piVar3 = iVar5;
    *piVar4 = iVar2;
  }
  piVar1[4] = (int)piVar4;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[8] = 0;
  piVar1[0xb] = 0;
  piVar1[10] = (int)(piVar1 + 9);
  piVar1[9] = (int)(piVar1 + 9);
  iVar2 = DAT_00109a60;
  piVar1[0xd] = 0;
  piVar1[0xe] = -1;
  piVar1[0xf] = iVar2;
  piVar1[0x10] = iVar2;
  *(undefined1 *)(piVar1 + 0x11) = 0;
  *(undefined1 *)((int)piVar1 + 0x45) = 1;
  *(undefined1 *)((int)piVar1 + 0x46) = 1;
  *(undefined1 *)((int)piVar1 + 0x47) = 0;
  *(undefined1 *)(piVar1 + 0x12) = 0;
  *(undefined1 *)((int)piVar1 + 0x49) = 0;
  piVar1[0xc] = 0;
  return piVar1 + -1;
}


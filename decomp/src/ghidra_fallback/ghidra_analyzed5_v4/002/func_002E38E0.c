#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_002e395c;
extern undefined4 DAT_002e3960;
extern undefined4 DAT_002e3964;
extern undefined *DAT_002e3968;

// USA 002E38E0 <- EU 002E38BC (Ghidra, non-matching)
// GLOBAL DAT_002e395c int *
// GLOBAL DAT_002e3960 undefined4
// GLOBAL DAT_002e3964 undefined4
// GLOBAL DAT_002e3968 undefined *

void func_002E38E0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = DAT_002e395c;
  if (*DAT_002e395c == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0xf4,param_1,4);
    if (puVar3 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      iVar5 = 0;
    }
    else {
      puVar4 = func_0010DA7C(puVar3,param_1,3);
      uVar2 = DAT_002e3964;
      *puVar4 = DAT_002e3960;
      piVar1[1] = (int)puVar4;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = uVar2;
      puVar3[8] = 0;
      puVar3[9] = uVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      *(undefined1 *)(puVar3 + 0x28) = 0;
      *(undefined1 *)((int)puVar3 + 0xa1) = 0;
      iVar5 = func_00100118((int)(puVar3 + 0x29),DAT_002e3968,0x14,4);
      iVar5 = iVar5 + -0xa4;
    }
    *piVar1 = iVar5;
  }
  return;
}


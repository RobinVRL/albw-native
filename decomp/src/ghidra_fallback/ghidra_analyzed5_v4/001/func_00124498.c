#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00124550;
extern undefined4 *DAT_00124554;
extern int DAT_00124558;

// USA 00124498 <- EU 00124498 (Ghidra, non-matching)
// GLOBAL DAT_00124550 int *
// GLOBAL DAT_00124554 undefined4 *
// GLOBAL DAT_00124558 int

void func_00124498(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = DAT_00124554;
  piVar1 = DAT_00124550;
  if ((*(int *)(param_1 + 0x8bc) == 1) &&
     (piVar3 = (int *)func_005841A8(*DAT_00124550,*DAT_00124554,
                                    *(int **)(DAT_00124558 + *DAT_00124550)),
     *(int **)(*piVar1 + 0x3dbc8) != piVar3)) {
    do {
      if (*(int *)(*piVar3 + 0x50) == *(int *)(param_1 + 0x2cc)) {
        *(undefined4 *)(param_1 + 0x8fc) = *(undefined4 *)(*piVar3 + 0x2cc);
      }
      piVar3 = (int *)func_005841A8(*piVar1,*puVar2,piVar3 + 1);
    } while (*(int **)(*piVar1 + 0x3dbc8) != piVar3);
  }
  if ((1 < *(int *)(param_1 + 0x8bc)) &&
     (iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x8fc)), iVar4 == 0)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}


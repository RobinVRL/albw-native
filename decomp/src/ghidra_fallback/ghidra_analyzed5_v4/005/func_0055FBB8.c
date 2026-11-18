#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002C44C4(int param_1,undefined4 param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int *DAT_0055fc9c;
extern undefined4 *DAT_0055fca0;
extern int DAT_0055fca4;
extern uint *DAT_0055fca8;
extern undefined4 DAT_0055fcac;
extern undefined4 *DAT_0055fcb0;

// USA 0055FBB8 <- EU 0055FB90 (Ghidra, non-matching)
// GLOBAL DAT_0055fc9c int *
// GLOBAL DAT_0055fca0 undefined4 *
// GLOBAL DAT_0055fca4 int
// GLOBAL DAT_0055fca8 uint *
// GLOBAL DAT_0055fcac undefined4
// GLOBAL DAT_0055fcb0 undefined4 *

undefined4 func_0055FBB8(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  iVar4 = *DAT_0055fc9c;
  if (iVar4 != 0) {
    piVar3 = (int *)func_005841A8(iVar4,*DAT_0055fca0,*(int **)(DAT_0055fca4 + iVar4));
    uVar2 = DAT_0055fcac;
    puVar1 = DAT_0055fca8;
    piVar6 = *(int **)(iVar4 + 0x3dbc8);
    for (; piVar3 != piVar6; piVar3 = piVar3 + 1) {
      puVar5 = (undefined4 *)*piVar3;
      if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0055fca8), iVar4 != 0)) {
        *DAT_0055fcb0 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar5)(puVar5,DAT_0055fcb0), iVar4 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if ((puVar5 != (undefined4 *)0x0) &&
         ((**(char **)(param_1 + 0x10) == '\0' ||
          ((*(int **)(*piVar3 + 0x2c0) != (int *)0x0 &&
           (iVar4 = func_00691884(*(int **)(*piVar3 + 0x2c0),(int *)(param_1 + 0xc)), iVar4 != 0))))
         )) {
        return func_002C44C4((int)puVar5,uVar7);
      }
    }
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00391558(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00665A3C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00336870;
extern undefined4 *DAT_00336874;
extern int DAT_00336878;
extern uint *DAT_0033687c;
extern undefined4 *DAT_00336880;
extern undefined4 DAT_00336884;

// USA 003367F0 <- EU 003367CC (Ghidra, non-matching)
// GLOBAL DAT_00336870 int *
// GLOBAL DAT_00336874 undefined4 *
// GLOBAL DAT_00336878 int
// GLOBAL DAT_0033687c uint *
// GLOBAL DAT_00336880 undefined4 *
// GLOBAL DAT_00336884 undefined4

undefined4 func_003367F0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  func_00665A3C((undefined4 *)(param_1 + 0x414),1);
  puVar1 = (undefined4 *)
           func_005841A8(*DAT_00336870,*DAT_00336874,*(int **)(DAT_00336878 + *DAT_00336870));
  puVar1 = (undefined4 *)*puVar1;
  if (((*DAT_0033687c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0033687c), iVar2 != 0)) {
    *DAT_00336880 = DAT_00336884;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00336880), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = func_00391558((int)puVar1);
    return uVar3;
  }
  return 0;
}


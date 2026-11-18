#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004bdcac;
extern undefined4 *DAT_004bdcb0;
extern int DAT_004bdcb4;

// USA 004BDC4C <- EU 004BDC24 (Ghidra, non-matching)
// GLOBAL DAT_004bdcac int *
// GLOBAL DAT_004bdcb0 undefined4 *
// GLOBAL DAT_004bdcb4 int

void func_004BDC4C(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = DAT_004bdcb0;
  if ((*(int *)(param_1 + 0x950) == 0) && (iVar3 = *DAT_004bdcac, iVar3 != 0)) {
    piVar2 = (int *)func_005841A8(iVar3,*DAT_004bdcb0,*(int **)(DAT_004bdcb4 + iVar3));
    if (*(int **)(iVar3 + 0x3dbc8) != piVar2) {
      while (*piVar2 == 0) {
        piVar2 = (int *)func_005841A8(iVar3,*puVar1,piVar2 + 1);
        if (*(int **)(iVar3 + 0x3dbc8) == piVar2) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(*piVar2 + 0x2cc);
    }
  }
  return;
}


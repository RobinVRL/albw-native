#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004bd74c;
extern undefined4 *DAT_004bd750;
extern int DAT_004bd754;

// USA 004BD6EC <- EU 004BD6C4 (Ghidra, non-matching)
// GLOBAL DAT_004bd74c int *
// GLOBAL DAT_004bd750 undefined4 *
// GLOBAL DAT_004bd754 int

void func_004BD6EC(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = DAT_004bd750;
  if ((*(int *)(param_1 + 0x814) == 0) && (iVar3 = *DAT_004bd74c, iVar3 != 0)) {
    piVar2 = (int *)func_005841A8(iVar3,*DAT_004bd750,*(int **)(DAT_004bd754 + iVar3));
    if (*(int **)(iVar3 + 0x3dbc8) != piVar2) {
      while (*piVar2 == 0) {
        piVar2 = (int *)func_005841A8(iVar3,*puVar1,piVar2 + 1);
        if (*(int **)(iVar3 + 0x3dbc8) == piVar2) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(*piVar2 + 0x2cc);
    }
  }
  return;
}


#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_003127dc;
extern undefined4 *DAT_003127e0;
extern int DAT_003127e4;

// USA 00312754 <- EU 00312730 (Ghidra, non-matching)
// GLOBAL DAT_003127dc int *
// GLOBAL DAT_003127e0 undefined4 *
// GLOBAL DAT_003127e4 int

int func_00312754(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = DAT_003127e0;
  piVar1 = DAT_003127dc;
  if ((*(int *)(param_1 + 0xa10) == 0) && (iVar4 = *DAT_003127dc, iVar4 != 0)) {
    piVar3 = (int *)func_005841A8(iVar4,*DAT_003127e0,*(int **)(DAT_003127e4 + iVar4));
    if (*(int **)(iVar4 + 0x3dbc8) != piVar3) {
      do {
        if (*piVar3 != 0) {
          *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(*piVar3 + 0x2cc);
        }
        piVar3 = (int *)func_005841A8(iVar4,*puVar2,piVar3 + 1);
      } while (*(int **)(iVar4 + 0x3dbc8) != piVar3);
    }
  }
  if ((*piVar1 == 0) ||
     (iVar4 = func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0xa10)), iVar4 == 0)) {
    iVar4 = 0;
  }
  return iVar4;
}


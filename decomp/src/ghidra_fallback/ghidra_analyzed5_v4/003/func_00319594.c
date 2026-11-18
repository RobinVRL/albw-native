#include "ghidra_types.h"

extern int func_00318BBC(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_003195f4;
extern undefined4 *DAT_003195f8;
extern int DAT_003195fc;

// USA 00319594 <- EU 00319570 (Ghidra, non-matching)
// GLOBAL DAT_003195f4 int *
// GLOBAL DAT_003195f8 undefined4 *
// GLOBAL DAT_003195fc int

void func_00319594(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  func_00318BBC(param_1,1);
  puVar1 = DAT_003195f8;
  iVar3 = *DAT_003195f4;
  if (iVar3 != 0) {
    piVar2 = (int *)func_005841A8(iVar3,*DAT_003195f8,*(int **)(DAT_003195fc + iVar3));
    if (*(int **)(iVar3 + 0x3dbc8) != piVar2) {
      while (*piVar2 == 0) {
        piVar2 = (int *)func_005841A8(iVar3,*puVar1,piVar2 + 1);
        if (*(int **)(iVar3 + 0x3dbc8) == piVar2) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(*piVar2 + 0x2cc);
    }
  }
  return;
}


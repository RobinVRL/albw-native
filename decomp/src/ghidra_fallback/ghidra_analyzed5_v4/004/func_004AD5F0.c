#include "ghidra_types.h"

extern int func_004D15E8(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004ad63c;
extern undefined4 *DAT_004ad640;
extern int DAT_004ad644;

// USA 004AD5F0 <- EU 004AD5C8 (Ghidra, non-matching)
// GLOBAL DAT_004ad63c int *
// GLOBAL DAT_004ad640 undefined4 *
// GLOBAL DAT_004ad644 int

void func_004AD5F0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *extraout_r1;
  int iVar4;
  
  puVar1 = DAT_004ad640;
  iVar4 = *DAT_004ad63c;
  if (iVar4 != 0) {
    piVar2 = (int *)func_005841A8(iVar4,*DAT_004ad640,*(int **)(DAT_004ad644 + iVar4));
    piVar3 = *(int **)(iVar4 + 0x3dbc8);
    if (piVar3 != piVar2) {
      do {
        if (*piVar2 != 0) {
          func_004D15E8(*piVar2,(int)piVar3);
        }
        piVar2 = (int *)func_005841A8(iVar4,*puVar1,piVar2 + 1);
        piVar3 = extraout_r1;
      } while (*(int **)(iVar4 + 0x3dbc8) != piVar2);
    }
  }
  return;
}


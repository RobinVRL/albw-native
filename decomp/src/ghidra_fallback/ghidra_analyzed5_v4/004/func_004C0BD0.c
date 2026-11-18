#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004c0c4c;
extern undefined4 *DAT_004c0c50;
extern int DAT_004c0c54;

// USA 004C0BD0 <- EU 004C0BA8 (Ghidra, non-matching)
// GLOBAL DAT_004c0c4c int *
// GLOBAL DAT_004c0c50 undefined4 *
// GLOBAL DAT_004c0c54 int

void func_004C0BD0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_004c0c50;
  if ((*(int *)(param_1 + 0x94c) == 0) && (iVar4 = *DAT_004c0c4c, iVar4 != 0)) {
    piVar2 = (int *)func_005841A8(iVar4,*DAT_004c0c50,*(int **)(DAT_004c0c54 + iVar4));
    if (*(int **)(iVar4 + 0x3dbc8) != piVar2) {
      while (iVar3 = *piVar2, iVar3 == 0) {
        piVar2 = (int *)func_005841A8(iVar4,*puVar1,piVar2 + 1);
        if (*(int **)(iVar4 + 0x3dbc8) == piVar2) {
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(iVar3 + 0x2cc);
      *(undefined4 *)(iVar3 + 1000) = *(undefined4 *)(param_1 + 1000);
      if (param_2 != 0) {
        *(undefined4 *)(iVar3 + 0x4c0) = *(undefined4 *)(param_1 + 0x2cc);
      }
    }
  }
  return;
}


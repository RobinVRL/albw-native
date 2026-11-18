#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004c6bf8;
extern undefined4 *DAT_004c6bfc;
extern int DAT_004c6c00;

// USA 004C6B5C <- EU 004C6B34 (Ghidra, non-matching)
// GLOBAL DAT_004c6bf8 int *
// GLOBAL DAT_004c6bfc undefined4 *
// GLOBAL DAT_004c6c00 int

void func_004C6B5C(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = DAT_004c6bfc;
  piVar1 = DAT_004c6bf8;
  if (*(int *)(param_1 + 0x51c) != 0) {
    iVar4 = *DAT_004c6bf8;
    if ((iVar4 != 0) &&
       (piVar3 = (int *)func_005841A8(iVar4,*DAT_004c6bfc,*(int **)(DAT_004c6c00 + iVar4)),
       *(int **)(*piVar1 + 0x3dbc8) != piVar3)) {
      do {
        if ((int)*(short *)(*piVar3 + 0x32) == (int)*(char *)(*(int *)(param_1 + 0x51c) + 6)) {
          *(undefined1 *)(*piVar3 + 0x2d7) = 1;
        }
        piVar3 = (int *)func_005841A8(*piVar1,*puVar2,piVar3 + 1);
      } while (*(int **)(*piVar1 + 0x3dbc8) != piVar3);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x51c) + 6) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0x51c) + 5) = 0;
    *(int *)(param_1 + 0x51c) = 0;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00554EA8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004c78a8;
extern int *DAT_004c78ac;
extern int *DAT_004c78b0;
extern undefined4 *DAT_004c78b4;
extern int DAT_004c78b8;

// USA 004C77C8 <- EU 004C77A0 (Ghidra, non-matching)
// GLOBAL DAT_004c78a8 int *
// GLOBAL DAT_004c78ac int *
// GLOBAL DAT_004c78b0 int *
// GLOBAL DAT_004c78b4 undefined4 *
// GLOBAL DAT_004c78b8 int

void func_004C77C8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(*DAT_004c78a8 + 0x18) == '\a' || *(char *)(*DAT_004c78a8 + 0x18) == '%') {
    func_00554EA8(*(int *)(param_1 + 0x5b0),param_1 + 0x56c,(undefined4 *)(param_1 + 0x574),
                  (undefined4 *)(param_1 + 0x578));
    piVar4 = DAT_004c78ac;
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    puVar2 = DAT_004c78b4;
    piVar1 = DAT_004c78b0;
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x51c) != 0) {
      iVar3 = *DAT_004c78b0;
      if ((iVar3 != 0) &&
         (piVar4 = (int *)func_005841A8(iVar3,*DAT_004c78b4,*(int **)(DAT_004c78b8 + iVar3)),
         *(int **)(*piVar1 + 0x3dbc8) != piVar4)) {
        do {
          if ((int)*(short *)(*piVar4 + 0x32) == (int)*(char *)(*(int *)(iVar5 + 0x51c) + 6)) {
            *(undefined1 *)(*piVar4 + 0x2d7) = 1;
          }
          piVar4 = (int *)func_005841A8(*piVar1,*puVar2,piVar4 + 1);
        } while (*(int **)(*piVar1 + 0x3dbc8) != piVar4);
      }
      *(undefined1 *)(*(int *)(iVar5 + 0x51c) + 6) = 0xff;
      *(undefined1 *)(*(int *)(iVar5 + 0x51c) + 5) = 0;
      *(int *)(iVar5 + 0x51c) = 0;
    }
    return;
  }
  return;
}


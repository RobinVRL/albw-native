// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052114C();
extern int func_00588BE4(int param_1);
extern int *DAT_004c9754;
extern int DAT_004c9758;
extern uint *DAT_004c975c;
extern undefined4 DAT_004c9760;
extern undefined4 *DAT_004c9764;
extern float DAT_004c9768;

// USA 004C9684 <- EU 004C965C (Ghidra, non-matching)
// GLOBAL DAT_004c9754 int *
// GLOBAL DAT_004c9758 int
// GLOBAL DAT_004c975c uint *
// GLOBAL DAT_004c9760 undefined4
// GLOBAL DAT_004c9764 undefined4 *
// GLOBAL DAT_004c9768 float

void func_004C9684(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar3 = *DAT_004c9754;
  piVar6 = *(int **)(DAT_004c9758 + iVar3);
  *(undefined1 *)(param_1 + 0x990) = 1;
  *(undefined4 *)(param_1 + 0x930) = 0;
  uVar2 = DAT_004c9760;
  puVar1 = DAT_004c975c;
  piVar4 = *(int **)(iVar3 + 0x3dbc0);
  if (piVar4 != piVar6) {
    while( true ) {
      puVar5 = (undefined4 *)*piVar4;
      if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004c975c), iVar3 != 0)) {
        *DAT_004c9764 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar5)(puVar5,DAT_004c9764), iVar3 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if ((puVar5 != (undefined4 *)0x0) && (iVar3 = func_00588BE4(*piVar4), iVar3 == param_2))
      break;
      piVar4 = piVar4 + 1;
      if (piVar4 == piVar6) {
        return;
      }
    }
    iVar3 = func_0052114C(param_1,ALBW_AS_F32(puVar5[0xf5]),DAT_004c9768);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x990) = 0;
    }
    *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(*piVar4 + 0x2cc);
  }
  return;
}


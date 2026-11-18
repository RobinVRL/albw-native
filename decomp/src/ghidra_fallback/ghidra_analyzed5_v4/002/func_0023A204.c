#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0023a368;
extern int *DAT_0023a36c;
extern undefined4 *DAT_0023a370;
extern int DAT_0023a374;
extern uint *DAT_0023a378;
extern undefined4 DAT_0023a37c;
extern undefined4 *DAT_0023a380;

// USA 0023A204 <- EU 0023A204 (Ghidra, non-matching)
// GLOBAL DAT_0023a368 int *
// GLOBAL DAT_0023a36c int *
// GLOBAL DAT_0023a370 undefined4 *
// GLOBAL DAT_0023a374 int
// GLOBAL DAT_0023a378 uint *
// GLOBAL DAT_0023a37c undefined4
// GLOBAL DAT_0023a380 undefined4 *

undefined1 func_0023A204(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar2 = DAT_0023a370;
  piVar1 = DAT_0023a36c;
  switch(param_3) {
  case 0:
    if (99 < *(uint *)(*DAT_0023a368 + 0x2cc)) {
      return 0;
    }
    break;
  case 1:
    if (*(char *)(*DAT_0023a368 + 0x2e0) != '\0') {
      return 0;
    }
    break;
  case 2:
    puVar5 = (undefined4 *)
             func_005841A8(*DAT_0023a36c,*DAT_0023a370,*(int **)(DAT_0023a374 + *DAT_0023a36c));
    uVar4 = DAT_0023a37c;
    puVar3 = DAT_0023a378;
    puVar8 = *(undefined4 **)(*piVar1 + 0x3dbc8);
    while( true ) {
      if (puVar5 == puVar8) {
        return 0;
      }
      puVar7 = (undefined4 *)*puVar5;
      if (((*puVar3 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_0023a378), iVar6 != 0)) {
        *DAT_0023a380 = uVar4;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar7)(puVar7,DAT_0023a380), iVar6 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if ((puVar7 != (undefined4 *)0x0) && (*(char *)(puVar7 + 0x13f) == '\0')) break;
      puVar5 = (undefined4 *)func_005841A8(*piVar1,*puVar2,puVar5 + 1);
    }
    break;
  case 3:
    iVar6 = *(int *)(param_1 + 0x480);
    goto joined_r0x0023a344;
  case 4:
    iVar6 = *(int *)(param_1 + 0x47c);
joined_r0x0023a344:
    if (4 < iVar6) {
switchD_0023a214_default:
      return 0;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x485) == '\0') {
      return 0;
    }
    break;
  default:
    goto switchD_0023a214_default;
  }
  return 1;
}


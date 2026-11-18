#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0018372c;
extern undefined4 *DAT_00183730;
extern int *DAT_00183734;

// USA 001833BC <- EU 001833BC (Ghidra, non-matching)
// GLOBAL DAT_0018372c int *
// GLOBAL DAT_00183730 undefined4 *
// GLOBAL DAT_00183734 int *

undefined4 func_001833BC(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar5 = DAT_00183734;
  puVar1 = DAT_00183730;
  iVar7 = *DAT_0018372c;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
    if (*(byte *)((int)param_1 + 0x9f9) == param_2) {
      iVar7 = *(int *)(*(int *)(*DAT_00183734 + 100) + 0x14);
      if (iVar7 != 0) {
        piVar5 = param_1 + 0x1d7;
        *(int **)(iVar7 + 0x24) = piVar5;
        if (*(int *)(iVar7 + 0x20) == 0) {
          *(int **)(iVar7 + 0x20) = piVar5;
        }
        *(int **)(iVar7 + 0x1c) = piVar5;
        (**(code **)(*param_1 + 100))(param_1);
        return 1;
      }
    }
    else if (iVar7 != 0) {
      piVar3 = (int *)func_005841A8(iVar7,*DAT_00183730,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar3) {
        do {
          piVar2 = (int *)*piVar3;
          if (((piVar2 != (int *)0x0) && (*(byte *)((int)piVar2 + 0x9f9) == param_2)) &&
             (iVar6 = *(int *)(*(int *)(*piVar5 + 100) + 0x14), iVar6 != 0)) {
            piVar5 = piVar2 + 0x1d7;
            *(int **)(iVar6 + 0x24) = piVar5;
            if (*(int *)(iVar6 + 0x20) == 0) {
              *(int **)(iVar6 + 0x20) = piVar5;
            }
            *(int **)(iVar6 + 0x1c) = piVar5;
            (**(code **)(*piVar2 + 100))(piVar2);
            return 1;
          }
          piVar3 = (int *)func_005841A8(iVar7,*puVar1,piVar3 + 1);
        } while (*(int **)(iVar7 + 0x3dbc8) != piVar3);
      }
    }
    break;
  case 3:
    if (iVar7 != 0) {
      piVar5 = (int *)func_005841A8(iVar7,*DAT_00183730,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar5) {
        do {
          piVar3 = (int *)*piVar5;
          if ((piVar3 != (int *)0x0) && (*(byte *)((int)piVar3 + 0x9f9) < 3)) {
            piVar3[0xb8] = piVar3[0xb8] | 2;
            (**(code **)(*piVar3 + 0x70))(piVar3);
          }
          piVar5 = (int *)func_005841A8(iVar7,*puVar1,piVar5 + 1);
        } while (*(int **)(iVar7 + 0x3dbc8) != piVar5);
      }
    }
    break;
  case 4:
    if (iVar7 != 0) {
      piVar5 = (int *)func_005841A8(iVar7,*DAT_00183730,*(int **)(iVar7 + 0x3dbc0));
      if (*(int **)(iVar7 + 0x3dbc8) != piVar5) {
        do {
          piVar3 = (int *)*piVar5;
          if ((piVar3 != (int *)0x0) && (*(byte *)((int)piVar3 + 0x9f9) < 3)) {
            piVar3[0xb8] = piVar3[0xb8] & 0xfffffffd;
            (**(code **)(*piVar3 + 0x74))(piVar3);
          }
          piVar5 = (int *)func_005841A8(iVar7,*puVar1,piVar5 + 1);
        } while (*(int **)(iVar7 + 0x3dbc8) != piVar5);
      }
    }
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x9c6) != '\x03') {
      if ((*(char *)((int)param_1 + 0x9c6) == '\x01') && ((short)param_1[0x270] == 0)) {
        *(undefined1 *)((int)param_1 + 0x9c6) = 2;
      }
      return 0;
    }
    break;
  case 6:
    if (iVar7 != 0) {
      puVar4 = (undefined4 *)func_005841A8(iVar7,*DAT_00183730,*(int **)(iVar7 + 0x3dbc0));
      if (*(undefined4 **)(iVar7 + 0x3dbc8) != puVar4) {
        do {
          piVar5 = (int *)*puVar4;
          if (piVar5 != (int *)0x0 && piVar5 != param_1) {
            piVar5[0xb8] = piVar5[0xb8] | 2;
          }
          puVar4 = (undefined4 *)func_005841A8(iVar7,*puVar1,puVar4 + 1);
        } while (*(undefined4 **)(iVar7 + 0x3dbc8) != puVar4);
      }
    }
    break;
  case 7:
    if (iVar7 != 0) {
      puVar4 = (undefined4 *)func_005841A8(iVar7,*DAT_00183730,*(int **)(iVar7 + 0x3dbc0));
      if (*(undefined4 **)(iVar7 + 0x3dbc8) != puVar4) {
        do {
          piVar5 = (int *)*puVar4;
          if (piVar5 != (int *)0x0 && piVar5 != param_1) {
            piVar5[0xb8] = piVar5[0xb8] & 0xfffffffd;
          }
          puVar4 = (undefined4 *)func_005841A8(iVar7,*puVar1,puVar4 + 1);
        } while (*(undefined4 **)(iVar7 + 0x3dbc8) != puVar4);
      }
    }
  }
  return 1;
}


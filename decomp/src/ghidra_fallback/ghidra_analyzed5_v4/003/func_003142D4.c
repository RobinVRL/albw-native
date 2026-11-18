#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00626FA4(int param_1,int param_2,undefined1 param_3);
extern int func_006278FC(int param_1);
extern int *DAT_0031493c;
extern int *DAT_00314940;
extern undefined4 *DAT_00314944;
extern int DAT_00314948;
extern undefined4 *DAT_0031494c;
extern int *DAT_00314950;

// USA 003142D4 <- EU 003142B0 (Ghidra, non-matching)
// GLOBAL DAT_0031493c int *
// GLOBAL DAT_00314940 int *
// GLOBAL DAT_00314944 undefined4 *
// GLOBAL DAT_00314948 int
// GLOBAL DAT_0031494c undefined4 *
// GLOBAL DAT_00314950 int *

undefined4 func_003142D4(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  
  puVar2 = DAT_0031494c;
  puVar1 = DAT_00314944;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    if (*(byte *)((int)param_1 + 0x996) == param_2) {
      iVar7 = *(int *)(*(int *)(*DAT_0031493c + 100) + 0x14);
      if (iVar7 != 0) {
        iVar10 = *(int *)(iVar7 + 0x20);
        piVar6 = param_1 + 0x1d7;
        *(int **)(iVar7 + 0x24) = piVar6;
joined_r0x003143c0:
        if (iVar10 == 0) {
          *(int **)(iVar7 + 0x20) = piVar6;
        }
        *(int **)(iVar7 + 0x1c) = piVar6;
        (**(code **)(*param_1 + 100))(param_1);
        return 1;
      }
    }
    else {
      iVar10 = *DAT_00314940;
      if (iVar10 != 0) {
        puVar2 = (undefined4 *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
        piVar6 = DAT_0031493c;
        if (*(undefined4 **)(iVar10 + 0x3dbc8) != puVar2) {
          do {
            param_1 = (int *)*puVar2;
            if (((param_1 != (int *)0x0) && (*(byte *)((int)param_1 + 0x996) == param_2)) &&
               (iVar7 = *(int *)(*(int *)(*piVar6 + 100) + 0x14), iVar7 != 0)) {
              iVar10 = *(int *)(iVar7 + 0x20);
              piVar6 = param_1 + 0x1d7;
              *(int **)(iVar7 + 0x24) = piVar6;
              goto joined_r0x003143c0;
            }
            puVar2 = (undefined4 *)func_005841A8(iVar10,*puVar1,puVar2 + 1);
          } while (*(undefined4 **)(iVar10 + 0x3dbc8) != puVar2);
        }
      }
    }
    break;
  case 5:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
      if (*(int **)(iVar10 + 0x3dbc8) != piVar6) {
        do {
          iVar7 = *piVar6;
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x2e0) = *(uint *)(iVar7 + 0x2e0) | 2;
            (**(code **)(*(int *)*piVar6 + 0x70))((int *)*piVar6);
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar6);
      }
    }
    break;
  case 6:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
      if (*(int **)(iVar10 + 0x3dbc8) != piVar6) {
        do {
          iVar7 = *piVar6;
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x2e0) = *(uint *)(iVar7 + 0x2e0) & 0xfffffffd;
            (**(code **)(*(int *)*piVar6 + 0x74))((int *)*piVar6);
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar6);
      }
    }
    break;
  case 7:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_0031494c,*(int **)(iVar10 + 0x3dbc0));
      piVar9 = (int *)(iVar10 + 0x3dbc8);
      if ((int *)*piVar9 != piVar6) {
        do {
          puVar1 = DAT_00314944;
          iVar7 = *piVar6;
          if (iVar7 != 0) {
            piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(iVar10 + 0x3dbc0));
            if ((int *)*piVar9 == piVar6) {
              return 1;
            }
            do {
              iVar3 = *piVar6;
              if (iVar3 != 0) {
                uVar8 = *(undefined4 *)(iVar7 + 0x2cc);
                *(undefined1 *)(iVar3 + 0x99c) = 1;
                *(undefined4 *)(iVar3 + 0x998) = uVar8;
              }
              piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
            } while ((int *)*piVar9 != piVar6);
            return 1;
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar2,piVar6 + 1);
        } while ((int *)*piVar9 != piVar6);
      }
    }
    break;
  case 8:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
      if (*(int **)(iVar10 + 0x3dbc8) != piVar6) {
        do {
          if (*piVar6 != 0) {
            *(undefined1 *)(*piVar6 + 0x99c) = 0;
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar6);
      }
    }
    break;
  case 9:
    if (*(short *)((int)param_1 + 0x95a) == 0) {
      iVar10 = *DAT_00314940;
      if (iVar10 != 0) {
        piVar9 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(iVar10 + 0x3dbc0));
        piVar6 = DAT_00314950;
        if (*(int **)(iVar10 + 0x3dbc8) != piVar9) {
          do {
            if (*piVar9 != 0) {
              uVar4 = func_005568E8(*piVar6);
              iVar7 = func_0052FBA0(iVar10 + 0x3dbbc,uVar4);
              if (iVar7 != 0) {
                (**(code **)(*(int *)*piVar9 + 0x8c))((int *)*piVar9,iVar7,1);
              }
            }
            piVar9 = (int *)func_005841A8(iVar10,*puVar1,piVar9 + 1);
          } while (*(int **)(iVar10 + 0x3dbc8) != piVar9);
        }
      }
LAB_0031473c:
      *(short *)((int)param_1 + 0x95a) = *(short *)((int)param_1 + 0x95a) + 1;
      return 0;
    }
    if (*(char *)((int)param_1 + 0x852) == (char)param_1[0x215]) {
      return 0;
    }
    goto LAB_00314680;
  case 10:
    if (*(short *)((int)param_1 + 0x95a) == 0) {
      iVar10 = *DAT_00314940;
      if (iVar10 != 0) {
        piVar6 = (int *)func_005841A8(iVar10,*DAT_0031494c,*(int **)(iVar10 + 0x3dbc0));
        piVar9 = (int *)(iVar10 + 0x3dbc8);
        if ((int *)*piVar9 != piVar6) {
          do {
            puVar1 = DAT_00314944;
            iVar7 = *piVar6;
            if (iVar7 != 0) {
              piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(iVar10 + 0x3dbc0));
              if ((int *)*piVar9 != piVar6) {
                do {
                  piVar5 = (int *)*piVar6;
                  if (piVar5 != (int *)0x0) {
                    (**(code **)(*piVar5 + 0x8c))(piVar5,iVar7,1);
                  }
                  piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
                } while ((int *)*piVar9 != piVar6);
              }
              break;
            }
            piVar6 = (int *)func_005841A8(iVar10,*puVar2,piVar6 + 1);
          } while ((int *)*piVar9 != piVar6);
        }
      }
      goto LAB_0031473c;
    }
    if (*(char *)((int)param_1 + 0x852) == (char)param_1[0x215]) {
      return 0;
    }
LAB_00314680:
    *(undefined2 *)((int)param_1 + 0x95a) = 0;
    break;
  case 0xb:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
      if (*(int **)(iVar10 + 0x3dbc8) != piVar6) {
        do {
          if (*piVar6 != 0) {
            func_00626FA4(*piVar6,5,0);
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar6);
      }
    }
    break;
  case 0xc:
    iVar10 = *DAT_00314940;
    if (iVar10 != 0) {
      piVar6 = (int *)func_005841A8(iVar10,*DAT_00314944,*(int **)(DAT_00314948 + iVar10));
      if (*(int **)(iVar10 + 0x3dbc8) != piVar6) {
        do {
          if (*piVar6 != 0) {
            func_006278FC(*piVar6);
          }
          piVar6 = (int *)func_005841A8(iVar10,*puVar1,piVar6 + 1);
        } while (*(int **)(iVar10 + 0x3dbc8) != piVar6);
      }
    }
  }
  return 1;
}


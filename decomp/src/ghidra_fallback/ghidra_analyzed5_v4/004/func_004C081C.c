#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_004c0aa0;
extern int DAT_004c0aa4;

// USA 004C081C <- EU 004C07F4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// GLOBAL DAT_004c0aa0 undefined4
// GLOBAL DAT_004c0aa4 int

undefined4 func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *unaff_r9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(uint *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define iStack_30 (*(int *)(albw_frame + 0x30))
  #define iStack_2c (*(int *)(albw_frame + 0x34))
  #define piStack_28 (*(int * *)(albw_frame + 0x38))
  *(undefined4 *)(param_1 + 0x79c) =
       *(undefined4 *)(*(int *)(param_1 + 0x2d0) + 0x1c8 + param_5 * 4);
  uVar7 = 0;
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  iVar2 = func_0014E428(param_1,param_6,param_5,0,0,0,0);
  *(int *)(local_34 + 0x7a4) = iVar2;
  if (param_4 != (int *)0x0) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x134) = DAT_004c0aa0;
    }
    uVar3 = func_00564A78(*(int *)(local_34 + 0x7a0),param_4);
    *(uint *)(local_34 + 0x8fc) = uVar3;
  }
  iVar8 = 0;
  iVar5 = *(int *)(local_34 + 0x79c);
  iVar2 = *(int *)(iVar5 + 0xd4);
  if (0 < iVar2) {
    uVar7 = *(uint *)(iVar5 + 0xd4);
  }
  uVar3 = 0;
  if (0 < iVar2) {
    do {
      if (((uVar3 < uVar7) &&
          (piVar6 = *(int **)(*(int *)(iVar5 + 0xdc) + uVar3 * 4), piVar6 != (int *)0x0)) &&
         (*(char *)(*piVar6 + 5) == '\0')) {
        iVar8 = iVar8 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar2);
    if (iVar8 != 0) {
      uVar4 = func_0014E904(local_34,iVar8,0);
      uVar7 = 0;
      *(undefined4 *)(local_34 + 0x7b8) = uVar4;
      *(int *)(local_34 + 0x794) = param_3;
      iVar5 = DAT_004c0aa4;
      local_5c = iVar8 - 1;
      if (0 < iVar2) {
        do {
          if (uVar7 < *(uint *)(*(int *)(local_34 + 0x79c) + 0xd4)) {
            piVar6 = *(int **)(*(int *)(*(int *)(local_34 + 0x79c) + 0xdc) + uVar7 * 4);
            if (piVar6 != (int *)0x0) {
              unaff_r9 = (int *)*piVar6;
            }
            if ((piVar6 != (int *)0x0 && unaff_r9 != (int *)0x0) &&
               (*(char *)((int)unaff_r9 + 5) == '\0')) {
              iVar8 = 0;
              if (0 < param_2) {
                do {
                  piVar9 = (int *)(param_3 + iVar8 * 0xc);
                  if (*(char *)((int)piVar9 + 9) != -1) {
                    local_44 = *unaff_r9;
                    local_48 = iVar5;
                    (**(code **)(*piVar9 + 8))(piVar9);
                    (**(code **)(*piVar9 + 8))(piVar9);
                    iVar10 = piVar9[1];
                    (**(code **)(local_48 + 8))(&local_48);
                    if (iVar10 == local_44) {
LAB_004c0a34:
                      bVar1 = true;
                    }
                    else {
                      iVar10 = 0;
                      do {
                        if (*(char *)(piVar9[1] + iVar10) != *(char *)(local_44 + iVar10)) break;
                        if (*(char *)(piVar9[1] + iVar10) == '\0') goto LAB_004c0a34;
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < 0x40001);
                      bVar1 = false;
                    }
                    if (bVar1) {
                      func_0016A2A4(*(uint **)(local_34 + 0x7b8),
                                    (int)*(char *)(param_3 + iVar8 * 0xc + 9),piVar6);
                      goto LAB_004c0a68;
                    }
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < param_2);
              }
              func_0016A2A4(*(uint **)(local_34 + 0x7b8),local_5c,piVar6);
              local_5c = local_5c - 1;
            }
          }
LAB_004c0a68:
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < iVar2);
      }
      return func_0016A02C(*(int *)(local_34 + 0x7b8),-1,(int *)0xffffffff,0);
    }
  }
  return 0;
}


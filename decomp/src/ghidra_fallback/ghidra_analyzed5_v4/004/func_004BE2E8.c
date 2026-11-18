#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_00522A28(int param_1,int *param_2,int param_3);
extern int DAT_004be824;
extern undefined DAT_004be828;

// USA 004BE2E8 <- EU 004BE2C0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_004be824 int
// GLOBAL DAT_004be828 undefined

void func_004BE2E8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *unaff_r11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(uint *)(albw_frame + 0xc))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define iStack_78 (*(int *)(albw_frame + 0x18))
  #define puStack_74 (*(undefined * *)(albw_frame + 0x1c))
  #define local_70 (*(int *)(albw_frame + 0x20))
  #define iStack_6c (*(int *)(albw_frame + 0x24))
  #define local_68 (*(int *)(albw_frame + 0x28))
  #define local_64 (*(uint *)(albw_frame + 0x2c))
  #define local_60 (*(int *)(albw_frame + 0x30))
  #define local_5c (*(int *)(albw_frame + 0x34))
  #define local_58 (*(int *)(albw_frame + 0x38))
  #define local_54 (*(int *)(albw_frame + 0x3c))
  #define local_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_40 (*(int * *)(albw_frame + 0x50))
  #define local_3c (*(int * *)(albw_frame + 0x54))
  #define local_34 (*(int *)(albw_frame + 0x5c))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define iStack_2c (*(int *)(albw_frame + 0x64))
  #define iStack_28 (*(int *)(albw_frame + 0x68))
  iVar7 = param_3 + param_6;
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  uVar3 = func_0014E904(param_1,iVar7,1);
  *(undefined4 *)(local_34 + 0x7ac) = uVar3;
  if (0 < param_4) {
    uVar3 = func_0014E904(local_34,param_4,0);
    *(undefined4 *)(local_34 + 0x7b0) = uVar3;
  }
  *(char *)(local_34 + 0x8b1) = (char)param_5;
  local_84 = iVar7 - 1;
  *(char *)(local_34 + 0x8b0) = (char)iVar7;
  local_80 = param_4 - 1;
  local_64 = 0;
  local_68 = DAT_004be824;
  if (0 < local_30) {
    do {
      if (local_64 < *(uint *)(*(int *)(local_34 + 0x798) + 0xd4)) {
        piVar4 = *(int **)(*(int *)(*(int *)(local_34 + 0x798) + 0xdc) + local_64 * 4);
        if (piVar4 != (int *)0x0) {
          unaff_r11 = (int *)*piVar4;
        }
        if (piVar4 != (int *)0x0 && unaff_r11 != (int *)0x0) {
          if (*(char *)((int)unaff_r11 + 5) == '\0') {
            uVar6 = 0;
            piVar9 = *(int **)(local_34 + 0x790);
            piVar8 = *(int **)(local_34 + 0x794);
            if (0 < param_5) {
              do {
                if (piVar8 == (int *)0x0) {
LAB_004be448:
                  if (piVar9 != (int *)0x0) {
                    local_54 = *unaff_r11;
                    local_58 = local_68;
                    local_40 = &local_58;
                    (**(code **)(*piVar9 + 8))(piVar9);
                    (**(code **)(*piVar9 + 8))(piVar9);
                    iVar7 = piVar9[1];
                    (**(code **)(local_58 + 8))(local_40);
                    if (iVar7 == local_54) goto LAB_004be4f8;
                    iVar7 = 0;
                    do {
                      if (*(char *)(piVar9[1] + iVar7) != *(char *)(local_54 + iVar7)) break;
                      if (*(char *)(piVar9[1] + iVar7) == '\0') goto LAB_004be4f8;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < 0x40001);
                  }
                  bVar2 = false;
                }
                else {
                  local_5c = *unaff_r11;
                  local_60 = local_68;
                  local_40 = &local_60;
                  (**(code **)(*piVar8 + 8))(piVar8);
                  (**(code **)(*piVar8 + 8))(piVar8);
                  iVar7 = piVar8[1];
                  (**(code **)(local_60 + 8))(local_40);
                  if (iVar7 != local_5c) {
                    iVar7 = 0;
                    do {
                      if (*(char *)(piVar8[1] + iVar7) != *(char *)(local_5c + iVar7)) break;
                      if (*(char *)(piVar8[1] + iVar7) == '\0') goto LAB_004be4f8;
                      iVar7 = iVar7 + 1;
                    } while (iVar7 < 0x40001);
                    goto LAB_004be448;
                  }
LAB_004be4f8:
                  bVar2 = true;
                }
                if (bVar2) {
                  puVar5 = *(uint **)(local_34 + 0x7ac);
                  goto LAB_004be6d0;
                }
                if (piVar8 == (int *)0x0) {
                  if (piVar9 != (int *)0x0) {
                    piVar9 = piVar9 + 3;
                  }
                }
                else {
                  piVar8 = piVar8 + 3;
                }
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < param_5);
            }
            func_0016A2A4(*(uint **)(local_34 + 0x7ac),local_84,piVar4);
            local_84 = local_84 - 1;
          }
          else if ((*(char *)((int)unaff_r11 + 5) == '\x01') && (*(int *)(local_34 + 0x7b0) != 0)) {
            iVar7 = 0;
            piVar9 = *(int **)(local_34 + 0x790);
            piVar8 = *(int **)(local_34 + 0x794);
            if (0 < param_5) {
              do {
                if (piVar8 != (int *)0x0) {
                  cVar1 = (char)piVar8[2];
LAB_004be578:
                  uVar6 = (uint)cVar1;
                  if (uVar6 == 0xffffffff) {
LAB_004be6f0:
                    if (piVar8 == (int *)0x0) {
                      if (piVar9 != (int *)0x0) {
                        piVar9 = piVar9 + 3;
                      }
                    }
                    else {
                      piVar8 = piVar8 + 3;
                    }
                    goto LAB_004be704;
                  }
                  local_44 = 0;
                  if (piVar8 == (int *)0x0) {
LAB_004be620:
                    if (piVar9 != (int *)0x0) {
                      local_5c = *unaff_r11;
                      local_60 = local_68;
                      local_3c = &local_60;
                      local_44 = 1;
                      (**(code **)(*piVar9 + 8))(piVar9);
                      (**(code **)(*piVar9 + 8))(piVar9);
                      iVar10 = piVar9[1];
                      (**(code **)(local_60 + 8))(local_3c);
                      if (iVar10 == local_5c) goto LAB_004be6e8;
                      iVar10 = 0;
                      do {
                        if (*(char *)(piVar9[1] + iVar10) != *(char *)(local_5c + iVar10)) break;
                        if (*(char *)(piVar9[1] + iVar10) == '\0') goto LAB_004be6e8;
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < 0x40001);
                    }
                    bVar2 = false;
                  }
                  else {
                    local_54 = *unaff_r11;
                    local_3c = &local_58;
                    local_58 = local_68;
                    (**(code **)(*piVar8 + 8))(piVar8);
                    (**(code **)(*piVar8 + 8))(piVar8);
                    iVar10 = piVar8[1];
                    (**(code **)(local_58 + 8))(local_3c);
                    if (iVar10 != local_54) {
                      iVar10 = 0;
                      do {
                        if (*(char *)(piVar8[1] + iVar10) != *(char *)(local_54 + iVar10)) break;
                        if (*(char *)(piVar8[1] + iVar10) == '\0') goto LAB_004be6e8;
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < 0x40001);
                      goto LAB_004be620;
                    }
LAB_004be6e8:
                    bVar2 = true;
                  }
                  if (!bVar2) goto LAB_004be6f0;
                  puVar5 = *(uint **)(local_34 + 0x7b0);
LAB_004be6d0:
                  func_0016A2A4(puVar5,uVar6,piVar4);
                  goto LAB_004be774;
                }
                if (piVar9 != (int *)0x0) {
                  cVar1 = (char)piVar9[2];
                  goto LAB_004be578;
                }
LAB_004be704:
                iVar7 = iVar7 + 1;
              } while (iVar7 < param_5);
            }
            if (*(int *)(local_34 + 0x7b4) == 0) {
LAB_004be79c:
              bVar2 = true;
            }
            else {
              iStack_6c = *unaff_r11;
              local_70 = local_68;
              uVar6 = func_00522A28(*(int *)(local_34 + 0x7b4),&local_70,0);
              if (uVar6 == 0xffffffff) goto LAB_004be79c;
              bVar2 = false;
            }
            if (bVar2) {
              func_0016A2A4(*(uint **)(local_34 + 0x7b0),local_80,piVar4);
              local_80 = local_80 - 1;
            }
          }
        }
      }
LAB_004be774:
      local_64 = local_64 + 1;
    } while ((int)local_64 < local_30);
  }
  if (param_6 == 0) {
    func_0016A02C(*(int *)(local_34 + 0x7ac),-1,(int *)0xffffffff,0);
    if (*(int *)(local_34 + 0x7b0) != 0) {
      func_0016A02C(*(int *)(local_34 + 0x7b0),-1,(int *)0xffffffff,0);
    }
  }
  iStack_78 = local_68;
  puStack_74 = &DAT_004be828;
  uVar6 = func_00522A28(*(int *)(local_34 + 0x7ac),&iStack_78,0);
  if (uVar6 == 0xffffffff) {
    *(uint *)(local_34 + 0x8ac) = *(uint *)(local_34 + 0x8ac) | 0x10;
  }
  return;
}


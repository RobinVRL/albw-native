#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00410300(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_0041044C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5 ,undefined1 param_6,undefined8 param_7);
extern int func_004104C4(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_0041365C(int *param_1,int *param_2);
extern int func_00413C2C(uint *param_1,char *param_2,int *param_3,uint param_4,int *param_5);
extern int func_0041B564(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 param_6);
extern int func_0041D5DC(int param_1,int param_2,uint *param_3);
extern int func_00569668(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569D88(int *param_1,undefined4 param_2);
extern int func_0056BAF0(int param_1,uint *param_2,undefined4 *param_3);
extern int func_0056CAD4(int param_1,uint param_2);
extern undefined4 DAT_0040bd00;
extern undefined4 DAT_0040bd04;
extern undefined *DAT_0040bd08;
extern undefined4 DAT_0040bd0c;
extern undefined4 DAT_0040bd10;

// USA 0040B7B8 <- EU 0040B798 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int *
// GLOBAL DAT_0040bd00 undefined4
// GLOBAL DAT_0040bd04 undefined4
// GLOBAL DAT_0040bd08 undefined *
// GLOBAL DAT_0040bd0c undefined4
// GLOBAL DAT_0040bd10 undefined4

/* WARNING: Variable defined which should be unmapped: objStack_d0 */

undefined4
func_0040B7B8(int param_1,int param_2,undefined4 *param_3,int *param_4,int param_5,
             undefined4 param_6,int *param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define in_stack_ffffff34 (*(int *)(albw_frame + 0x4)) /* V4: frame slot (callee-filled) */
  #define local_c0 ((uint *)(albw_frame + 0x10))
  #define local_a0 (*(int * *)(albw_frame + 0x30))
  #define local_9c (*(undefined4 *)(albw_frame + 0x34))
  #define local_98 (*(undefined4 *)(albw_frame + 0x38))
  #define local_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x40))
  #define local_8c (*(int *)(albw_frame + 0x44))
  #define local_88 (*(undefined4 *)(albw_frame + 0x48))
  #define local_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(char *)(albw_frame + 0x54))
  #define local_7b (*(undefined1 *)(albw_frame + 0x55))
  #define local_7a (*(undefined1 *)(albw_frame + 0x56))
  #define local_79 (*(undefined1 *)(albw_frame + 0x57))
  #define auStack_78 ((uint *)(albw_frame + 0x58))
  #define local_54 (*(int *)(albw_frame + 0x7c))
  #define local_50 ((char *)(albw_frame + 0x80))
  #define local_4c (*(uint *)(albw_frame + 0x84))
  #define local_48 (*(int *)(albw_frame + 0x88))
  #define piStack_44 (*(int * *)(albw_frame + 0x8c))
  #define local_40 (*(int *)(albw_frame + 0x90))
  #define local_3c (*(undefined1 *)(albw_frame + 0x94))
  #define local_38 (*(undefined4 *)(albw_frame + 0x98))
  #define iStack_34 (*(int *)(albw_frame + 0x9c))
  #define local_30 (*(int *)(albw_frame + 0xa0))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xa4))
  #define piStack_28 (*(int * *)(albw_frame + 0xa8))
  piVar10 = (int *)0x0;
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  piStack_28 = param_4;
  if ((*(int *)(param_1 + 0x114) != 0) &&
     (iVar3 = func_0056CAD4(*(int *)(param_1 + 4),*(undefined4 *)(param_2 + 0xac)), iVar3 != 0)) {
    piVar8 = *(int **)(param_1 + 0x114);
    piVar10 = (int *)0x0;
    if ((char)piVar8[1] != '\0') {
      objStack_d0[0] = 0;
      piVar10 = (int *)(**(code **)(*piVar8 + 0x10))(piVar8,iVar3,DAT_0040bd00,DAT_0040bd04);
    }
  }
  local_54 = *param_4;
  local_4c = param_4[5];
  if ((piVar10 == (int *)0x0) &&
     (piVar10 = (int *)func_00569D88(*(int **)(param_1 + 0x110),*param_3), param_7 != (int *)0x0)) {
    if ((int *)*param_7 != (int *)0x0) {
      piVar10 = (int *)*param_7;
    }
    func_0041365C((int *)objStack_d0,piVar10);
    if (param_7[1] != 0) {
      iVar3 = func_0056BAF0((int)objStack_d0,param_7[1],&local_54);
      if (iVar3 == 0) {
        return 0xf;
      }
      local_54 = func_0041D5DC(in_stack_ffffff34,local_54,&local_4c);
    }
  }
  uVar4 = (uint)(*(int *)(*(int *)(local_30 + 0x10) + 0x38) != 0);
  local_8c = 0;
  local_48 = -1;
  piStack_44 = (int *)0x0;
  func_00100118((int)local_c0,DAT_0040bd08,8,4);
  func_00100118((int)auStack_78,DAT_0040bd08,8,4);
  local_48 = *(int *)(local_30 + 0xac);
  if (piVar10 == (int *)0x0) {
    if (uVar4 == 0) {
      return 5;
    }
    local_8c = 1;
  }
  piStack_44 = piVar10;
  if ((*(int *)(param_1 + 0x114) != 0) &&
     (iVar3 = func_0056CAD4(*(int *)(param_1 + 4),*(undefined4 *)(local_30 + 0xac)), iVar3 != 0)) {
    uVar9 = 0;
    do {
      if (param_4[uVar9 + 1] != -1) {
        cVar1 = *(char *)(*(int *)(param_1 + 0x114) + 4);
        if (cVar1 == '\0') {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
          *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 1;
        }
        piVar8 = *(int **)(param_1 + 0x114);
        if ((char)piVar8[1] == '\0') {
          uVar5 = 0;
        }
        else {
          objStack_d0[0] = uVar9;
          uVar5 = (**(code **)(*piVar8 + 0x10))(piVar8,iVar3,DAT_0040bd00,DAT_0040bd0c);
        }
        piVar8 = *(int **)(param_1 + 0x114);
        if ((char)piVar8[1] == '\0') {
          uVar6 = 0;
        }
        else {
          objStack_d0[0] = uVar9;
          uVar6 = (**(code **)(*piVar8 + 0x10))(piVar8,iVar3,DAT_0040bd00,DAT_0040bd10);
        }
        if (cVar1 == '\0') {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x114) + 4) = 0;
        }
        if (uVar5 == 0 || uVar6 == 0) {
          local_c0[uVar9 * 2 + 1] = 0;
          auStack_78[uVar9 * 2 + 1] = 0;
        }
        else {
          local_c0[uVar9 * 2 + 1] = uVar5;
          auStack_78[uVar9 * 2 + 1] = uVar6;
          local_50[uVar9] = '\0';
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
  }
  if (param_7 == (int *)0x0) {
    local_c0[0] = param_4[1];
    local_c0[2] = param_4[2];
    local_c0[4] = param_4[3];
    local_c0[6] = param_4[4];
  }
  else {
    local_c0[0] = param_7[2];
    local_c0[2] = param_7[3];
    local_c0[4] = param_7[4];
    local_c0[6] = param_7[5];
  }
  uVar9 = 0;
  do {
    if (((*(int *)(param_1 + 0x114) == 0) || (local_c0[uVar9 * 2 + 1] == 0)) ||
       (auStack_78[uVar9 * 2 + 1] == 0)) {
      local_90 = 0xffffffff;
      bVar2 = func_00569668(*(int *)(param_1 + 4),local_c0[uVar9 * 2],&local_90);
      if (bVar2) {
        piVar8 = (int *)func_00569D88(*(int **)(param_1 + 0x110),local_90);
        local_c0[uVar9 * 2 + 1] = (uint)piVar8;
        if (piVar8 == (int *)0x0) {
          if (uVar4 != 0) {
            local_8c = 1;
            break;
          }
        }
        else {
          objStack_d0[0] = *(int *)(param_1 + 0x110);
          if ((int *)objStack_d0[0] != (int *)0x0) {
            objStack_d0[0] = objStack_d0[0] + 0xc;
          }
          uVar7 = func_00413C2C(auStack_78 + uVar9 * 2,local_50 + uVar9,piVar8,
                                *(uint *)(param_1 + 4),(int *)objStack_d0[0]);
          switch(uVar7) {
          case 0:
          case 1:
            break;
          case 2:
            if (uVar4 != 0) goto LAB_0040bb90;
            break;
          case 0xfffffffe:
            return 0x12;
          case 0xffffffff:
            if (uVar4 == 0) {
              return 8;
            }
LAB_0040bb90:
            local_8c = 1;
            break;
          default:
            return 0xff;
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  objStack_d0[0] = (uint)*(byte *)(param_4 + 6);
  piVar8 = (int *)(param_1 + 8);
  func_0041044C(local_30,*(undefined4 *)(param_1 + 0xf0),local_4c,piVar8,*(byte *)(param_4 + 6),
                *(undefined1 *)((int)param_4 + 0x19),*(undefined8 *)(param_1 + 0x10));
  if (param_5 == 0) {
    local_3c = 1;
  }
  else {
    uVar7 = extraout_r1;
    if (param_5 != 1) {
      uVar7 = 0;
    }
    local_3c = 0;
    if (param_5 != 1) {
      param_6 = uVar7;
    }
  }
  local_38 = param_6;
  local_40 = local_54;
  if (local_8c == 0) {
    local_9c = local_c0[1];
    local_8c = auStack_78[1];
    local_7c = local_50[0];
    local_98 = local_c0[3];
    local_88 = auStack_78[3];
    local_7b = local_50[1];
    local_94 = local_c0[5];
    local_84 = auStack_78[5];
    local_7a = local_50[2];
    local_90 = local_c0[7];
    local_80 = auStack_78[7];
    local_79 = local_50[3];
    local_a0 = piVar10;
    func_004104C4(local_30,&local_a0,&local_40,piVar8);
  }
  else {
    piVar10 = &local_48;
    objStack_d0[0] = (uint)local_c0;
    func_0041B564(&local_a0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x110),piVar10,
                  (int)local_c0,*(undefined4 *)(local_30 + 0x10));
    func_00410300(local_30,&local_a0,&local_40,piVar10);
  }
  return 0;
}


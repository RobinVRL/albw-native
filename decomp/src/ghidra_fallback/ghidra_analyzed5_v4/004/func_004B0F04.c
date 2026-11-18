#include "ghidra_types.h"

extern int func_001FE834(int *param_1,int *param_2);
extern int func_004F0810(int param_1,uint param_2,undefined4 *param_3);
extern int func_004F0930(int param_1,int param_2);
extern int func_00687AF0(float *param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b12e8;
extern undefined4 DAT_004b12ec;
extern undefined DAT_004b12f0;
extern int DAT_004b12f8;
extern undefined4 DAT_004b12fc;
extern undefined4 DAT_004b1300;
extern undefined4 DAT_004b1304;
extern undefined4 DAT_004b1308;
extern int DAT_004b130c;
extern undefined1 DAT_004b1310;
extern undefined DAT_004b1318;
extern undefined DAT_004b1410;
extern char s_Cylinder_004b1418[];
extern char s_Pyramid_004b1408[];
extern char s__Cone_004b131b[];
extern undefined4 _DAT_004b1318;

// USA 004B0F04 <- EU 004B0EDC (Ghidra, non-matching)
// GLOBAL DAT_004b12e8 undefined4
// GLOBAL DAT_004b12ec undefined4
// GLOBAL DAT_004b12f0 undefined
// GLOBAL DAT_004b12f8 int
// GLOBAL DAT_004b12fc undefined4
// GLOBAL DAT_004b1300 undefined4
// GLOBAL DAT_004b1304 undefined4
// GLOBAL DAT_004b1308 undefined4
// GLOBAL DAT_004b130c int
// GLOBAL DAT_004b1310 undefined1
// GLOBAL DAT_004b1318 undefined
// GLOBAL DAT_004b1410 undefined
// GLOBAL s_Cylinder_004b1418 string
// GLOBAL s_Pyramid_004b1408 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_004B0F04(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_138 (*(int *)(albw_frame + 0x8))
  #define local_134 (*(int *)(albw_frame + 0xc))
  #define auStack_12c ((undefined1 *)(albw_frame + 0x14))
  #define aiStack_114 ((int *)(albw_frame + 0x2c))
  #define auStack_108 ((undefined1 *)(albw_frame + 0x38))
  #define local_c8 (*(int *)(albw_frame + 0x78))
  #define local_c4 (*(char * *)(albw_frame + 0x7c))
  #define local_c0 (*(int *)(albw_frame + 0x80))
  #define local_bc ((undefined * *)(albw_frame + 0x84))
  #define aiStack_ac ((int *)(albw_frame + 0x94))
  #define auStack_a0 ((undefined1 *)(albw_frame + 0xa0))
  #define fStack_90 (*(float *)(albw_frame + 0xb0))
  #define fStack_8c (*(float *)(albw_frame + 0xb4))
  #define afStack_88 ((float *)(albw_frame + 0xb8))
  #define aiStack_7c ((int *)(albw_frame + 0xc4))
  #define auStack_70 ((undefined1 *)(albw_frame + 0xd0))
  #define local_60 (*(int *)(albw_frame + 0xe0))
  #define local_5c (*(undefined * *)(albw_frame + 0xe4))
  #define local_58 (*(int *)(albw_frame + 0xe8))
  #define local_54 (*(char * *)(albw_frame + 0xec))
  #define local_50 (*(int *)(albw_frame + 0xf0))
  #define local_4c (*(undefined * *)(albw_frame + 0xf4))
  #define local_48 (*(int *)(albw_frame + 0xf8))
  #define local_44 (*(char * *)(albw_frame + 0xfc))
  #define local_40 (*(int *)(albw_frame + 0x100))
  #define local_3c (*(char * *)(albw_frame + 0x104))
  #define iStack_34 (*(int *)(albw_frame + 0x10c))
  #define piStack_30 (*(int * *)(albw_frame + 0x110))
  #define local_2c (*(int *)(albw_frame + 0x114))
  #define local_28 (*(int *)(albw_frame + 0x118))
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar2 = func_00689A2C(aiStack_7c,auStack_70,0x10);
  uVar1 = DAT_004b12ec;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = uVar1;
  func_00688CA0(local_2c,aiStack_7c);
  iVar6 = DAT_004b12f8;
  local_c4 = &DAT_004b12f0;
  local_c8 = DAT_004b12f8;
  iVar3 = func_00691884(aiStack_7c,&local_c8);
  if (iVar3 == 0) {
    uVar4 = 0;
    if (0 < param_2[0x70]) {
      do {
        piVar7 = param_2 + uVar4 * 7;
        do {
          iVar3 = func_00691884(aiStack_7c,piVar7);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = uVar4 + 1;
          if (param_2[0x70] <= (int)uVar4) goto LAB_004b0fd8;
          piVar7 = param_2;
        } while (0xf < uVar4);
      } while( true );
    }
LAB_004b0fd8:
    piVar7 = param_2;
    if ((uint)param_2[0x70] < 0x10) {
      piVar7 = param_2 + param_2[0x70] * 7;
    }
    func_00689894((int)piVar7,aiStack_7c,0xffffffff);
    param_2[0x70] = param_2[0x70] + 1;
  }
  else {
    local_bc[0] = &DAT_004b12f0;
    local_c0 = iVar6;
    iVar3 = func_00691884(param_2 + 0x69,&local_c0);
    if (iVar3 != 0) {
      return;
    }
    func_00689894((int)(param_2 + 0x69),aiStack_7c,0xffffffff);
  }
  puVar2 = func_00689A2C(aiStack_114,auStack_108,0x40);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_004b1300;
  func_00688CA0(local_2c,aiStack_114);
  puVar2 = func_00689A2C(&local_138,auStack_12c,0x18);
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_004b1308;
  func_00688CA0(local_2c,&local_138);
  (**(code **)(local_138 + 8))(&local_138);
  iVar3 = 0;
  do {
    if (*(char *)(local_134 + iVar3) == '\0') {
      if (((iVar3 < 0x40001) && (iVar3 != 0)) && (uVar4 = iVar3 - 1, -1 < (int)uVar4))
      goto LAB_004b10b4;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40001);
  goto LAB_004b10c8;
  while( true ) {
    *(undefined1 *)(local_134 + uVar4) = 0;
    uVar4 = uVar4 - 1;
    if (0x7fffffff < uVar4) break;
LAB_004b10b4:
    if ((' ' < *(char *)(local_134 + uVar4)) && (*(char *)(local_134 + uVar4) != '\x7f')) break;
  }
LAB_004b10c8:
  local_5c = &DAT_004b12f0;
  local_60 = iVar6;
  iVar3 = func_00691884(aiStack_7c,&local_60);
  uVar4 = func_00691D84(param_2,aiStack_7c);
  if (iVar3 == 0) {
    piVar7 = (int *)(param_1 + 0x1d0);
    if (uVar4 < 0xf) {
      piVar7 = piVar7 + uVar4 * 0x4e;
    }
  }
  else {
    piVar7 = (int *)(param_1 + 0x80);
  }
  piVar7[1] = 0;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[4] = 0;
  piVar7[5] = 0;
  piVar7[6] = -1;
  piVar7[7] = 0;
  piVar7[8] = -1;
  piVar7[10] = 0;
  piVar7[9] = -1;
  piVar7[0xb] = 0;
  *(undefined1 *)((int)piVar7 + 0x32) = 0;
  *(undefined1 *)((int)piVar7 + 0x31) = 0;
  *(undefined1 *)(piVar7 + 0xc) = 0;
  piVar7[0xe] = 0;
  piVar7[0xf] = 0;
  iVar5 = DAT_004b130c;
  piVar7[0x10] = 0;
  piVar7[0x11] = 0;
  piVar7[0x12] = iVar5;
  piVar7[0x13] = iVar5;
  piVar7[0x14] = iVar5;
  local_c4 = &DAT_004b1310;
  local_c8 = iVar6;
  func_00689894((int)(piVar7 + 0x15),&local_c8,0xffffffff);
  iVar5 = _DAT_004b1318;
  *(undefined1 *)piVar7[0x21] = 0;
  piVar7[0x44] = 0;
  piVar7[0x45] = -1;
  *(undefined1 *)(piVar7 + 0x47) = 0;
  *(undefined1 *)((int)piVar7 + 0x11d) = 1;
  piVar7[0x4a] = iVar5;
  piVar7[0x49] = iVar5;
  piVar7[0x48] = iVar5;
  piVar7[0x4b] = 0;
  piVar7[0x4c] = 0;
  *(undefined1 *)(piVar7 + 0x4d) = 0;
  (**(code **)*piVar7)(piVar7,aiStack_114);
  if (((piVar7[1] != 0) && (iVar5 = func_001FE834(piVar7,&local_138), iVar5 != 0)) &&
     (iVar5 = func_004F0930((int)piVar7,*(int *)(param_1 + 0x28)), iVar5 != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0x1418);
    if (iVar3 == 0) {
      if (*(uint *)(param_1 + 0x23dc) < 0x10) {
        puVar2 = puVar2 + *(uint *)(param_1 + 0x23dc);
      }
      *puVar2 = piVar7;
      *(int *)(param_1 + 0x23dc) = *(int *)(param_1 + 0x23dc) + 1;
    }
    else {
      *(int **)(param_1 + 0x1454) = piVar7;
    }
    if (*(int *)(local_2c + 8) < *(int *)(local_28 + 8)) {
      puVar2 = func_00689A2C(&local_c8,local_bc,0x10);
      *(undefined1 *)puVar2[1] = 0;
      *puVar2 = uVar1;
      func_00688CA0(local_2c,&local_c8);
      if (*local_c4 != '\0') {
        local_3c = s__Cone_004b131b + 1;
        local_40 = iVar6;
        iVar3 = func_00691884(&local_c8,&local_40);
        if (iVar3 == 0) {
          local_54 = s_Pyramid_004b1408;
          local_58 = iVar6;
          iVar3 = func_00691884(&local_c8,&local_58);
          if (iVar3 == 0) {
            local_4c = &DAT_004b1410;
            local_50 = iVar6;
            iVar3 = func_00691884(&local_c8,&local_50);
            if (iVar3 == 0) {
              local_44 = s_Cylinder_004b1418;
              local_48 = iVar6;
              iVar6 = func_00691884(&local_c8,&local_48);
              if (iVar6 == 0) {
                return;
              }
              uVar4 = 3;
            }
            else {
              uVar4 = 2;
            }
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 0;
        }
        puVar2 = func_00689A2C(aiStack_ac,auStack_a0,0x10);
        *(undefined1 *)puVar2[1] = 0;
        *puVar2 = uVar1;
        func_00688CA0(local_2c,aiStack_ac);
        func_00687AF0(&fStack_90,aiStack_ac);
        func_00688CA0(local_2c,aiStack_ac);
        func_00687AF0(&fStack_8c,aiStack_ac);
        func_00688CA0(local_2c,aiStack_ac);
        func_00687AF0(afStack_88,aiStack_ac);
        func_004F0810((int)piVar7,uVar4,&fStack_90);
      }
    }
  }
  return;
}


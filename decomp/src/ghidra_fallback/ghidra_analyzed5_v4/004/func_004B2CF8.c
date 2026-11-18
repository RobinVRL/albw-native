#include "ghidra_types.h"

extern int func_001FE834(int *param_1,int *param_2);
extern int func_00537B38(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b3108;
extern undefined4 DAT_004b310c;
extern undefined4 DAT_004b3110;
extern undefined4 DAT_004b3114;
extern undefined4 DAT_004b3118;
extern undefined4 DAT_004b311c;
extern int DAT_004b3128;
extern int *DAT_004b3138;
extern undefined DAT_004b3144;
extern undefined DAT_004b3150;
extern undefined DAT_004b315c;
extern undefined DAT_004b3168;
extern char s_A_bch_004b3148[];
extern char s_Actor_Shield_004b3174[];
extern char s_Actor_Sword_004b312c[];
extern char s_B_bch_004b3154[];
extern char s_C_bch_004b3160[];
extern char s_D_bch_004b313c[];
extern char s_Shield_004b316c[];
extern char s_Sword_004b3120[];
extern char s_cf_004b312c[];
extern char s_cf_004b313c[];
extern char s_cf_004b3148[];
extern char s_cf_004b3154[];
extern char s_cf_004b3160[];
extern char s_cf_004b3174[];

// USA 004B2CF8 <- EU 004B2CD0 (Ghidra, non-matching)
// GLOBAL DAT_004b3108 undefined4
// GLOBAL DAT_004b310c undefined4
// GLOBAL DAT_004b3110 undefined4
// GLOBAL DAT_004b3114 undefined4
// GLOBAL DAT_004b3118 undefined4
// GLOBAL DAT_004b311c undefined4
// GLOBAL DAT_004b3128 int
// GLOBAL DAT_004b3138 int *
// GLOBAL DAT_004b3144 undefined
// GLOBAL DAT_004b3150 undefined
// GLOBAL DAT_004b315c undefined
// GLOBAL DAT_004b3168 undefined
// GLOBAL s_cf_004b3148 string
// GLOBAL s_cf_004b3174 string
// GLOBAL s_cf_004b312c string
// GLOBAL s_cf_004b3154 string
// GLOBAL s_cf_004b3160 string
// GLOBAL s_cf_004b313c string
// GLOBAL s_Shield_004b316c string
// GLOBAL s_Sword_004b3120 string

void func_004B2CF8(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define iStack_140 (*(int *)(albw_frame + 0x0))
  #define local_13c (*(char * *)(albw_frame + 0x4))
  #define auStack_134 ((undefined1 *)(albw_frame + 0xc))
  #define iStack_f0 (*(int *)(albw_frame + 0x50))
  #define local_ec (*(char * *)(albw_frame + 0x54))
  #define auStack_e4 ((undefined1 *)(albw_frame + 0x5c))
  #define local_c8 (*(int *)(albw_frame + 0x78))
  #define local_c4 (*(char * *)(albw_frame + 0x7c))
  #define aiStack_c0 ((int *)(albw_frame + 0x80))
  #define auStack_b4 ((undefined1 *)(albw_frame + 0x8c))
  #define aiStack_a4 ((int *)(albw_frame + 0x9c))
  #define auStack_98 ((undefined1 *)(albw_frame + 0xa8))
  #define aiStack_80 ((int *)(albw_frame + 0xc0))
  #define auStack_74 ((undefined1 *)(albw_frame + 0xcc))
  #define local_50 (*(int *)(albw_frame + 0xf0))
  #define local_4c (*(char * *)(albw_frame + 0xf4))
  #define local_48 (*(int *)(albw_frame + 0xf8))
  #define local_44 (*(char * *)(albw_frame + 0xfc))
  #define local_40 (*(int *)(albw_frame + 0x100))
  #define local_3c (*(char * *)(albw_frame + 0x104))
  #define iStack_34 (*(int *)(albw_frame + 0x10c))
  #define piStack_30 (*(int * *)(albw_frame + 0x110))
  #define local_2c (*(int *)(albw_frame + 0x114))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x118))
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  puVar4 = func_00689A2C(aiStack_c0,auStack_b4,0x10);
  uVar2 = DAT_004b310c;
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar2;
  func_00688CA0(local_2c,aiStack_c0);
  puVar4 = func_00689A2C(&iStack_140,auStack_134,0x40);
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = DAT_004b3114;
  puVar4 = func_00689A2C(&iStack_f0,auStack_e4,0x18);
  uVar3 = DAT_004b311c;
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar3;
  func_00688CA0(local_2c,&iStack_140);
  func_00688CA0(local_2c,&iStack_f0);
  iVar9 = DAT_004b3128;
  local_4c = s_Sword_004b3120;
  local_50 = DAT_004b3128;
  iVar5 = func_00691884(aiStack_c0,&local_50);
  if (iVar5 == 0) {
    local_c4 = s_Shield_004b316c;
    local_c8 = iVar9;
    iVar5 = func_00691884(aiStack_c0,&local_c8);
    if (iVar5 == 0) goto LAB_004b305c;
    cVar1 = *local_ec;
    if (*local_13c == '\0') {
      if (cVar1 != '\0') {
        return;
      }
      local_44 = s_Actor_Shield_004b3174;
      local_48 = iVar9;
      func_00689894((int)&iStack_140,&local_48,0xffffffff);
      local_44 = s_Shield_004b316c;
      local_48 = iVar9;
      func_00689894((int)&iStack_f0,&local_48,0xffffffff);
      uVar6 = func_0055696C(*DAT_004b3138,1);
      if (uVar6 == 0) {
        return;
      }
      local_40 = iVar9;
      if (uVar6 < 3) {
        local_3c = s_A_bch_004b3148;
        func_00689928(&iStack_140,&local_40,0xffffffff);
        local_3c = &DAT_004b3150;
        local_40 = iVar9;
        func_00689928(&iStack_f0,&local_40,0xffffffff);
      }
      else {
        local_3c = s_B_bch_004b3154;
        func_00689928(&iStack_140,&local_40,0xffffffff);
        local_3c = &DAT_004b315c;
        local_40 = iVar9;
        func_00689928(&iStack_f0,&local_40,0xffffffff);
      }
      goto LAB_004b305c;
    }
  }
  else {
    cVar1 = *local_ec;
    if (*local_13c == '\0') {
      if (cVar1 != '\0') {
        return;
      }
      local_c4 = s_Actor_Sword_004b312c;
      local_c8 = iVar9;
      func_00689894((int)&iStack_140,&local_c8,0xffffffff);
      local_c4 = s_Sword_004b3120;
      local_c8 = iVar9;
      func_00689894((int)&iStack_f0,&local_c8,0xffffffff);
      iVar5 = func_00537B38(*DAT_004b3138);
      if (iVar5 == 0) {
        local_44 = s_A_bch_004b3148;
        local_48 = iVar9;
        func_00689928(&iStack_140,&local_48,0xffffffff);
        local_44 = &DAT_004b3150;
        local_48 = iVar9;
        func_00689928(&iStack_f0,&local_48,0xffffffff);
      }
      else if (iVar5 == 1) {
        local_44 = s_B_bch_004b3154;
        local_48 = iVar9;
        func_00689928(&iStack_140,&local_48,0xffffffff);
        local_44 = &DAT_004b315c;
        local_48 = iVar9;
        func_00689928(&iStack_f0,&local_48,0xffffffff);
      }
      else if (iVar5 == 2) {
        local_44 = s_C_bch_004b3160;
        local_48 = iVar9;
        func_00689928(&iStack_140,&local_48,0xffffffff);
        local_44 = &DAT_004b3168;
        local_48 = iVar9;
        func_00689928(&iStack_f0,&local_48,0xffffffff);
      }
      else {
        if (iVar5 != 3) {
          return;
        }
        local_44 = s_D_bch_004b313c;
        local_48 = iVar9;
        func_00689928(&iStack_140,&local_48,0xffffffff);
        local_44 = &DAT_004b3144;
        local_48 = iVar9;
        func_00689928(&iStack_f0,&local_48,0xffffffff);
      }
      goto LAB_004b305c;
    }
  }
  if (cVar1 == '\0') {
    return;
  }
LAB_004b305c:
  puVar4 = func_00689A2C(aiStack_80,auStack_74,0x10);
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = uVar2;
  func_00688CA0(local_2c,aiStack_80);
  uVar6 = func_00691D84(param_2,aiStack_80);
  if (-1 < (int)uVar6) {
    puVar4 = func_00689A2C(aiStack_a4,auStack_98,0x18);
    *(undefined1 *)puVar4[1] = 0;
    *puVar4 = uVar3;
    func_00688CA0(local_2c,aiStack_a4);
    piVar7 = (int *)(param_1 + 0x1418);
    if (uVar6 < 0x10) {
      piVar7 = piVar7 + uVar6;
    }
    if ((*piVar7 != 0) && (uVar8 = func_00564A78(*(int *)(*piVar7 + 8),aiStack_a4), uVar8 != 0xffff)
       ) {
      piVar7 = param_2 + 0x71;
      uVar11 = 0;
      if (0 < param_2[0x9b]) {
        do {
          piVar10 = piVar7 + uVar11 * 7;
          do {
            iVar9 = func_00691884(aiStack_c0,piVar10);
            if (iVar9 != 0) {
              return;
            }
            uVar11 = uVar11 + 1;
            if (param_2[0x9b] <= (int)uVar11) goto LAB_004b31d4;
            piVar10 = piVar7;
          } while (5 < uVar11);
        } while( true );
      }
LAB_004b31d4:
      if ((uint)param_2[0x9b] < 6) {
        piVar7 = piVar7 + param_2[0x9b] * 7;
      }
      func_00689894((int)piVar7,aiStack_c0,0xffffffff);
      uVar11 = 0;
      param_2[0x9b] = param_2[0x9b] + 1;
      if (0 < param_2[0x9b]) {
        do {
          piVar7 = param_2 + 0x71 + uVar11 * 7;
          do {
            iVar9 = func_00691884(aiStack_c0,piVar7);
            if ((iVar9 != 0) || (uVar11 = uVar11 + 1, param_2[0x9b] <= (int)uVar11))
            goto LAB_004b325c;
            piVar7 = param_2 + 0x71;
          } while (5 < uVar11);
        } while( true );
      }
LAB_004b325c:
      piVar7 = (int *)(param_1 + 0x1458);
      if (*(uint *)(param_1 + 0x23e0) < 6) {
        piVar7 = piVar7 + *(uint *)(param_1 + 0x23e0) * 0x13;
      }
      (**(code **)*piVar7)(piVar7,&iStack_140);
      if ((piVar7[1] != 0) && (iVar9 = func_001FE834(piVar7,&iStack_f0), iVar9 != 0)) {
        piVar7[0x10] = uVar6;
        piVar7[0x11] = uVar8;
        *(int *)(param_1 + 0x23e0) = *(int *)(param_1 + 0x23e0) + 1;
      }
    }
  }
  return;
}


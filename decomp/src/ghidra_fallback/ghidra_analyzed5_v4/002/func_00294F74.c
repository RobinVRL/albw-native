#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0029450C(int param_1);
extern int func_00297140(int param_1,int *param_2);
extern int func_0048AC68(uint param_1);
extern int func_0052E410(undefined4 param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_002952e0;
extern int DAT_002952fc;
extern int *DAT_00295300;
extern int DAT_0029531c;
extern undefined4 *DAT_00295320;
extern int *DAT_00295378;
extern char s_BGM_BARD_B_DUNGEON_GANON_00295334[];
extern char s_BGM_BARD_D_FIELD_DARK_00295304[];
extern char s_BGM_BARD_D_MOUNTAIN_00295350[];
extern char s_BGM_BARD_D_MOUNTAIN_SP_0029537c[];
extern char s_BGM_BARD_END_00295324[];
extern char s_BGM_BARD_L_FIELD_LIGHT_002952e4[];
extern char s_BGM_BARD_L_LENTO_00295364[];

// USA 00294F74 <- EU 00294F9C (Ghidra, non-matching)
// GLOBAL DAT_002952e0 int *
// GLOBAL DAT_002952fc int
// GLOBAL DAT_00295300 int *
// GLOBAL DAT_0029531c int
// GLOBAL DAT_00295320 undefined4 *
// GLOBAL DAT_00295378 int *
// GLOBAL s_BGM_BARD_B_DUNGEON_GANON_00295334 string
// GLOBAL s_BGM_BARD_D_FIELD_DARK_00295304 string
// GLOBAL s_BGM_BARD_D_MOUNTAIN_00295350 string
// GLOBAL s_BGM_BARD_D_MOUNTAIN_SP_0029537c string
// GLOBAL s_BGM_BARD_END_00295324 string
// GLOBAL s_BGM_BARD_L_FIELD_LIGHT_002952e4 string
// GLOBAL s_BGM_BARD_L_LENTO_00295364 string

void func_00294F74(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  piVar2 = DAT_00295300;
  iVar1 = DAT_002952fc;
  iVar13 = *DAT_002952e0;
  if (iVar13 != 0) {
    local_34 = s_BGM_BARD_L_FIELD_LIGHT_002952e4;
    local_38 = DAT_002952fc;
    iVar8 = func_00587FCC(*DAT_00295300,&local_38);
    local_34 = s_BGM_BARD_D_FIELD_DARK_00295304;
    local_38 = iVar1;
    iVar9 = func_00587FCC(*piVar2,&local_38);
    iVar9 = iVar9 + -1;
    bVar5 = func_00584B94(iVar13,DAT_0029531c);
    cVar6 = func_0052E410(*DAT_00295320);
    if (cVar6 == '\0') {
      if (bVar5) {
        bVar7 = func_00584B94(iVar13,600);
        local_30 = iVar1;
        if (bVar7) {
          local_2c = s_BGM_BARD_B_DUNGEON_GANON_00295334;
          iVar9 = func_00587FCC(*DAT_00295300,&local_30);
          iVar9 = iVar9 + -1;
        }
        else {
          local_2c = s_BGM_BARD_D_MOUNTAIN_00295350;
          iVar9 = func_00587FCC(*DAT_00295300,&local_30);
          iVar9 = iVar9 + -1;
        }
      }
      else {
        bVar7 = func_00584B94(iVar13,0x104);
        if (!bVar7) {
          local_2c = s_BGM_BARD_L_LENTO_00295364;
          local_30 = iVar1;
          iVar9 = func_00587FCC(*DAT_00295300,&local_30);
          iVar9 = iVar9 + -1;
        }
      }
    }
    else {
      local_2c = s_BGM_BARD_END_00295324;
      local_30 = iVar1;
      iVar9 = func_00587FCC(*DAT_00295300,&local_30);
      iVar9 = iVar9 + -1;
      bVar5 = true;
    }
    piVar2 = DAT_00295378;
    local_30 = param_1 + 0x100;
    uVar12 = 0;
    uVar14 = (iVar9 - iVar8) + 1;
    if ((*(short *)(param_1 + 0x19e) < 0xb) ||
       (uVar10 = func_00111A64((uint *)(*DAT_00295378 + 0x660)),
       (int)((ulonglong)uVar10 * 10 >> 0x20) != 0)) {
      uVar12 = func_00111A64((uint *)(*piVar2 + 0x660));
      uVar12 = (uint)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
      iVar13 = uVar12 + iVar8;
      uVar10 = func_0048AC68(*(uint *)(param_1 + 0x1a0));
      pcVar4 = local_2c;
      if ((int)uVar10 < (int)uVar14) {
        local_2c = (char *)0x1;
        bVar5 = (*(uint *)(param_1 + 0x1a0) & 1 << (uVar12 & 0xff)) != 0;
        if (bVar5) {
          local_2c = (char *)(uVar14 * 5);
        }
        iVar9 = 0;
        while (bVar5) {
          uVar12 = func_00111A64((uint *)(*piVar2 + 0x660));
          uVar12 = (uint)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
          iVar9 = iVar9 + 1;
          iVar13 = uVar12 + iVar8;
          pcVar4 = local_2c;
          if (iVar9 == (int)local_2c * 2) {
            if (*(int *)(param_1 + 0x18c) == iVar13) {
              do {
                uVar12 = func_00111A64((uint *)(*piVar2 + 0x660));
                uVar12 = (uint)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
                iVar13 = uVar12 + iVar8;
                pcVar4 = local_2c;
              } while (*(int *)(param_1 + 0x18c) == iVar13);
            }
            break;
          }
          bVar5 = (*(uint *)(param_1 + 0x1a0) & 1 << (uVar12 & 0xff)) != 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        if (*(int *)(param_1 + 0x18c) == iVar13) {
          do {
            uVar12 = func_00111A64((uint *)(*piVar2 + 0x660));
            uVar12 = (uint)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
            iVar13 = uVar12 + iVar8;
            pcVar4 = local_2c;
          } while (*(int *)(param_1 + 0x18c) == iVar13);
        }
      }
    }
    else {
      iVar13 = *(int *)(param_1 + 0x194);
      if ((bVar5 != false) &&
         (uVar14 = func_00111A64((uint *)(*piVar2 + 0x660)),
         (int)((ulonglong)uVar14 * 2 >> 0x20) == 0)) {
        iVar13 = *(int *)(param_1 + 0x198);
      }
      *(undefined2 *)(local_30 + 0x9e) = 0;
      pcVar4 = local_2c;
    }
    local_2c = pcVar4;
    *(short *)(local_30 + 0x9c) = (short)uVar12;
    func_0029450C(param_1);
    piVar3 = DAT_00295300;
    *(int *)(param_1 + 400) = iVar13;
    local_34 = s_BGM_BARD_D_MOUNTAIN_00295350;
    local_38 = iVar1;
    iVar8 = func_00587FCC(*piVar3,&local_38);
    if ((iVar8 == iVar13) &&
       (uVar12 = func_00111A64((uint *)(*piVar2 + 0x660)),
       (int)((ulonglong)uVar12 * 10 >> 0x20) == 0)) {
      local_2c = s_BGM_BARD_D_MOUNTAIN_SP_0029537c;
      local_30 = iVar1;
      uVar11 = func_00587FCC(*piVar3,&local_30);
      *(undefined4 *)(param_1 + 400) = uVar11;
    }
    local_34 = (char *)func_00588154(*piVar3,*(undefined4 *)(param_1 + 400));
    local_38 = iVar1;
    func_00297140(param_1,&local_38);
  }
  return;
}


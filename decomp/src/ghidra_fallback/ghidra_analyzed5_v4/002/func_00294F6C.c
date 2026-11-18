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

// USA 00294F6C <- EU 00294F94 (Ghidra, non-matching)
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

void func_00294F6C(int param_1)

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
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define pcStack_2c (*(char * *)(albw_frame + 0x14))
  piVar2 = DAT_00295300;
  iVar1 = DAT_002952fc;
  iVar8 = *(int *)(param_1 + 0x4c);
  iVar14 = *DAT_002952e0;
  if (iVar14 != 0) {
    pcStack_34 = s_BGM_BARD_L_FIELD_LIGHT_002952e4;
    iStack_38 = DAT_002952fc;
    iVar9 = func_00587FCC(*DAT_00295300,&iStack_38);
    pcStack_34 = s_BGM_BARD_D_FIELD_DARK_00295304;
    iStack_38 = iVar1;
    iVar10 = func_00587FCC(*piVar2,&iStack_38);
    iVar10 = iVar10 + -1;
    bVar5 = func_00584B94(iVar14,DAT_0029531c);
    cVar6 = func_0052E410(*DAT_00295320);
    if (cVar6 == '\0') {
      if (bVar5) {
        bVar7 = func_00584B94(iVar14,600);
        iStack_30 = iVar1;
        if (bVar7) {
          pcStack_2c = s_BGM_BARD_B_DUNGEON_GANON_00295334;
          iVar10 = func_00587FCC(*DAT_00295300,&iStack_30);
          iVar10 = iVar10 + -1;
        }
        else {
          pcStack_2c = s_BGM_BARD_D_MOUNTAIN_00295350;
          iVar10 = func_00587FCC(*DAT_00295300,&iStack_30);
          iVar10 = iVar10 + -1;
        }
      }
      else {
        bVar7 = func_00584B94(iVar14,0x104);
        if (!bVar7) {
          pcStack_2c = s_BGM_BARD_L_LENTO_00295364;
          iStack_30 = iVar1;
          iVar10 = func_00587FCC(*DAT_00295300,&iStack_30);
          iVar10 = iVar10 + -1;
        }
      }
    }
    else {
      pcStack_2c = s_BGM_BARD_END_00295324;
      iStack_30 = iVar1;
      iVar10 = func_00587FCC(*DAT_00295300,&iStack_30);
      iVar10 = iVar10 + -1;
      bVar5 = true;
    }
    piVar2 = DAT_00295378;
    iStack_30 = iVar8 + 0x100;
    uVar13 = 0;
    uVar15 = (iVar10 - iVar9) + 1;
    if ((*(short *)(iVar8 + 0x19e) < 0xb) ||
       (uVar11 = func_00111A64((uint *)(*DAT_00295378 + 0x660)),
       (int)((ulonglong)uVar11 * 10 >> 0x20) != 0)) {
      uVar13 = func_00111A64((uint *)(*piVar2 + 0x660));
      uVar13 = (uint)((ulonglong)uVar15 * (ulonglong)uVar13 >> 0x20);
      iVar14 = uVar13 + iVar9;
      uVar11 = func_0048AC68(*(uint *)(iVar8 + 0x1a0));
      pcVar4 = pcStack_2c;
      if ((int)uVar11 < (int)uVar15) {
        pcStack_2c = (char *)0x1;
        bVar5 = (*(uint *)(iVar8 + 0x1a0) & 1 << (uVar13 & 0xff)) != 0;
        if (bVar5) {
          pcStack_2c = (char *)(uVar15 * 5);
        }
        iVar10 = 0;
        while (bVar5) {
          uVar13 = func_00111A64((uint *)(*piVar2 + 0x660));
          uVar13 = (uint)((ulonglong)uVar15 * (ulonglong)uVar13 >> 0x20);
          iVar10 = iVar10 + 1;
          iVar14 = uVar13 + iVar9;
          pcVar4 = pcStack_2c;
          if (iVar10 == (int)pcStack_2c * 2) {
            if (*(int *)(iVar8 + 0x18c) == iVar14) {
              do {
                uVar13 = func_00111A64((uint *)(*piVar2 + 0x660));
                uVar13 = (uint)((ulonglong)uVar15 * (ulonglong)uVar13 >> 0x20);
                iVar14 = uVar13 + iVar9;
                pcVar4 = pcStack_2c;
              } while (*(int *)(iVar8 + 0x18c) == iVar14);
            }
            break;
          }
          bVar5 = (*(uint *)(iVar8 + 0x1a0) & 1 << (uVar13 & 0xff)) != 0;
        }
      }
      else {
        *(undefined4 *)(iVar8 + 0x1a0) = 0;
        if (*(int *)(iVar8 + 0x18c) == iVar14) {
          do {
            uVar13 = func_00111A64((uint *)(*piVar2 + 0x660));
            uVar13 = (uint)((ulonglong)uVar15 * (ulonglong)uVar13 >> 0x20);
            iVar14 = uVar13 + iVar9;
            pcVar4 = pcStack_2c;
          } while (*(int *)(iVar8 + 0x18c) == iVar14);
        }
      }
    }
    else {
      iVar14 = *(int *)(iVar8 + 0x194);
      if ((bVar5 != false) &&
         (uVar15 = func_00111A64((uint *)(*piVar2 + 0x660)),
         (int)((ulonglong)uVar15 * 2 >> 0x20) == 0)) {
        iVar14 = *(int *)(iVar8 + 0x198);
      }
      *(undefined2 *)(iStack_30 + 0x9e) = 0;
      pcVar4 = pcStack_2c;
    }
    pcStack_2c = pcVar4;
    *(short *)(iStack_30 + 0x9c) = (short)uVar13;
    func_0029450C(iVar8);
    piVar3 = DAT_00295300;
    *(int *)(iVar8 + 400) = iVar14;
    pcStack_34 = s_BGM_BARD_D_MOUNTAIN_00295350;
    iStack_38 = iVar1;
    iVar9 = func_00587FCC(*piVar3,&iStack_38);
    if ((iVar9 == iVar14) &&
       (uVar13 = func_00111A64((uint *)(*piVar2 + 0x660)),
       (int)((ulonglong)uVar13 * 10 >> 0x20) == 0)) {
      pcStack_2c = s_BGM_BARD_D_MOUNTAIN_SP_0029537c;
      iStack_30 = iVar1;
      uVar12 = func_00587FCC(*piVar3,&iStack_30);
      *(undefined4 *)(iVar8 + 400) = uVar12;
    }
    pcStack_34 = (char *)func_00588154(*piVar3,*(undefined4 *)(iVar8 + 400));
    iStack_38 = iVar1;
    func_00297140(iVar8,&iStack_38);
  }
  return;
}


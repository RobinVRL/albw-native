#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int func_0037BCCC(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ECF6C(int param_1);
extern int func_00513A3C(int param_1);
extern int func_00513BE0(int param_1);
extern int func_00513DB4(int param_1);
extern int func_0052A01C(int param_1,uint param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int iRam0051521c;
extern int iRam00515224;
extern undefined4 uRam00515220;
extern undefined4 uRam00515ed0;
extern int *piRam00515b20;
extern int *piRam00515b24;
extern int DAT_005151f4;
extern int DAT_005151f8;
extern int DAT_005151fc;
extern undefined4 DAT_00515200;
extern undefined4 DAT_00515204;
extern undefined4 DAT_00515208;
extern undefined4 DAT_0051520c;
extern undefined4 DAT_00515210;
extern undefined4 *DAT_00515214;
extern undefined4 DAT_00515218;
extern int DAT_00515228;
extern undefined *DAT_00515600;
extern int DAT_00515610;
extern uint *DAT_00515b1c;
extern undefined4 *DAT_00515b28;
extern undefined4 DAT_00515b2c;
extern undefined4 *DAT_00515b30;
extern undefined4 *DAT_00515eb0;
extern undefined4 DAT_00515eb4;
extern undefined4 DAT_00515eb8;
extern undefined4 DAT_00515ebc;
extern undefined4 DAT_00515ec0;
extern undefined4 *DAT_00515ec4;
extern float DAT_00515ec8;
extern float DAT_00515ecc;
extern undefined *PTR_00515ed4;
extern undefined *PTR_00515ed8;
extern undefined *PTR_00515edc;
extern undefined *PTR_00515ee0;
extern undefined *PTR_00515ee4;
extern undefined *PTR_00515ee8;
extern undefined *PTR_00515eec;
extern char s_cState_BoundWait_005156c4[];
extern char s_cState_Bound_00515640[];
extern char s_cState_BrokeOut_00515620[];
extern char s_cState_Erase_005156b4[];
extern char s_cState_Fall_00515604[];
extern char s_cState_GetDemo_00515690[];
extern char s_cState_HardenHand_00515660[];
extern char s_cState_Harden_00515650[];
extern char s_cState_MotherAbsorb_00515b08[];
extern char s_cState_MotherJump_00515af4[];
extern char s_cState_MotherWalkEnd_00515adc[];
extern char s_cState_MotherWalkIn_00515ac8[];
extern char s_cState_SandBound_00515ab4[];
extern char s_cState_SandFall_00515630[];
extern char s_cState_Stop_00515614[];
extern char s_cState_WaitGetDemo_005156a0[];
extern char s_cState_Wait_00515674[];
extern char s_cState_Water_00515680[];

// USA 00514DC0 <- EU 00514D98 (Ghidra, non-matching)
// GLOBAL DAT_005151f4 int
// GLOBAL DAT_005151f8 int
// GLOBAL DAT_005151fc int
// GLOBAL DAT_00515200 undefined4
// GLOBAL DAT_00515204 undefined4
// GLOBAL DAT_00515208 undefined4
// GLOBAL DAT_0051520c undefined4
// GLOBAL DAT_00515210 undefined4
// GLOBAL DAT_00515214 undefined4 *
// GLOBAL DAT_00515218 undefined4
// GLOBAL DAT_00515228 int
// GLOBAL DAT_00515600 undefined *
// GLOBAL DAT_00515610 int
// GLOBAL DAT_00515b1c uint *
// GLOBAL DAT_00515b28 undefined4 *
// GLOBAL DAT_00515b2c undefined4
// GLOBAL DAT_00515b30 undefined4 *
// GLOBAL DAT_00515eb0 undefined4 *
// GLOBAL DAT_00515eb4 undefined4
// GLOBAL DAT_00515eb8 undefined4
// GLOBAL DAT_00515ebc undefined4
// GLOBAL DAT_00515ec0 undefined4
// GLOBAL DAT_00515ec4 undefined4 *
// GLOBAL DAT_00515ec8 float
// GLOBAL DAT_00515ecc float
// GLOBAL PTR_00515ed4 undefined *
// GLOBAL PTR_00515ed8 undefined *
// GLOBAL PTR_00515edc undefined *
// GLOBAL PTR_00515ee0 undefined *
// GLOBAL PTR_00515ee4 undefined *
// GLOBAL PTR_00515ee8 undefined *
// GLOBAL PTR_00515eec undefined *
// GLOBAL UNK_0051521c int
// GLOBAL UNK_00515220 undefined4
// GLOBAL UNK_00515224 int
// GLOBAL UNK_00515b20 int *
// GLOBAL UNK_00515b24 int *
// GLOBAL UNK_00515ed0 undefined4
// GLOBAL s_cState_BoundWait_005156c4 string
// GLOBAL s_cState_Bound_00515640 string
// GLOBAL s_cState_BrokeOut_00515620 string
// GLOBAL s_cState_Erase_005156b4 string
// GLOBAL s_cState_Fall_00515604 string
// GLOBAL s_cState_GetDemo_00515690 string
// GLOBAL s_cState_HardenHand_00515660 string
// GLOBAL s_cState_Harden_00515650 string
// GLOBAL s_cState_MotherAbsorb_00515b08 string
// GLOBAL s_cState_MotherJump_00515af4 string
// GLOBAL s_cState_MotherWalkEnd_00515adc string
// GLOBAL s_cState_MotherWalkIn_00515ac8 string
// GLOBAL s_cState_SandBound_00515ab4 string
// GLOBAL s_cState_SandFall_00515630 string
// GLOBAL s_cState_Stop_00515614 string
// GLOBAL s_cState_WaitGetDemo_005156a0 string
// GLOBAL s_cState_Wait_00515674 string
// GLOBAL s_cState_Water_00515680 string

int func_00514DC0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define iStack_98 (*(int *)(albw_frame + 0x8))
  #define pcStack_94 (*(char * *)(albw_frame + 0xc))
  #define aiStack_90 ((int *)(albw_frame + 0x10))
  piVar4 = (int *)func_00324A30(param_1,param_2);
  iVar12 = DAT_005151f4;
  piVar16 = (int *)(DAT_005151f4 + -0x100);
  piVar4[0x11f] = DAT_005151f8;
  iVar17 = *piVar16;
  piVar4[0x122] = *(int *)(iVar12 + -0xfc);
  piVar4[0x120] = (int)(piVar4 + 0x11e);
  piVar4[0x121] = iVar17;
  iVar17 = DAT_005151fc;
  *piVar4 = DAT_005151fc;
  piVar4[200] = iVar17 + 0x5c;
  piVar4[0x11e] = iVar17 + 0xc0;
  puVar5 = func_0010A794(piVar4 + 0x123);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  uVar13 = DAT_00515200;
  puVar5[10] = 0;
  uVar14 = DAT_00515204;
  puVar5[0xc] = uVar13;
  puVar5[0xd] = uVar14;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x13] = 0;
  uVar13 = *(undefined4 *)(iVar12 + 0x5c);
  puVar5[0x14] = *(undefined4 *)(iVar12 + 0x58);
  puVar5[0x15] = uVar13;
  uVar13 = DAT_0051520c;
  puVar5[0x12] = DAT_0051520c;
  puVar5[0x17] = 0;
  uVar14 = *(undefined4 *)(iVar12 + 0x58);
  uVar18 = *(undefined4 *)(iVar12 + 0x5c);
  puVar5[0x16] = uVar13;
  puVar5[0x18] = uVar14;
  puVar5[0x19] = uVar18;
  uVar14 = *(undefined4 *)(iVar12 + -0xf8);
  uVar18 = *(undefined4 *)(iVar12 + -0xf4);
  puVar5[0x1a] = uVar13;
  puVar5[0x1b] = puVar5 + -0x123;
  puVar5[0x1c] = uVar14;
  puVar5[0x1d] = uVar18;
  puVar5[0x1f] = 0;
  uVar13 = DAT_00515208;
  uVar14 = *(undefined4 *)(iVar12 + 100);
  puVar5[0x20] = *(undefined4 *)(iVar12 + 0x60);
  puVar5[0x21] = uVar14;
  uVar14 = DAT_00515218;
  puVar9 = DAT_00515214;
  uVar22 = CONCAT44(uVar13,DAT_00515218);
  puVar5[0x1e] = DAT_00515210;
  *(undefined1 *)(puVar5 + 0x22) = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  uVar18 = puVar9[1];
  uVar19 = puVar9[2];
  puVar5[0x26] = *puVar9;
  puVar5[0x27] = uVar18;
  puVar5[0x28] = uVar19;
  uVar18 = puVar9[1];
  uVar19 = puVar9[2];
  puVar5[0x29] = *puVar9;
  puVar5[0x2a] = uVar18;
  puVar5[0x2b] = uVar19;
  uVar18 = puVar9[1];
  uVar19 = puVar9[2];
  puVar5[0x2c] = *puVar9;
  puVar5[0x2d] = uVar18;
  puVar5[0x2e] = uVar19;
  *(undefined1 *)(puVar5 + 0x2f) = 0;
  *(undefined1 *)(puVar5 + 0x33) = 0;
  *(undefined1 *)((int)puVar5 + 0xcd) = 0;
  puVar5[0x38] = uVar13;
  puVar5[0x39] = puVar5[-0x2e];
  uVar13 = puVar9[1];
  uVar18 = puVar9[2];
  puVar5[0x3a] = *puVar9;
  puVar5[0x3b] = uVar13;
  puVar5[0x3c] = uVar18;
  uVar13 = *puVar9;
  uVar18 = puVar9[1];
  puVar5[0x3f] = puVar9[2];
  puVar5[0x3d] = uVar13;
  puVar5[0x3e] = uVar18;
  puVar5[0x40] = uVar14;
  puVar5[0x41] = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = uVar14;
  iVar17 = func_0037BCCC(puVar5 + 0x44);
  iVar6 = iVar17 + -0x59c;
  *(undefined4 *)(iVar17 + 0x30) = 0;
  *(char *)(iVar17 + -0x54) = (char)*(undefined2 *)((int)param_2 + 0x2a);
  iVar7 = func_0054D89C(iVar6,0);
  *(int *)(iVar17 + -0x7c) = iVar7;
  func_00151148(iVar7,0);
  *(int *)(iVar17 + -0x1b0) = iVar17 + -0xa8;
  if (*(char *)(iVar17 + -0x54) == '\x04') {
    uVar13 = func_0014E428(iVar6,1,1,0,1,0,0);
    *(undefined4 *)(iVar17 + -0x80) = uVar13;
    puVar8 = (uint *)func_0014E904(iVar6,1,1);
    *(uint **)(iVar17 + -0xec) = puVar8;
    func_00169688(puVar8,0,piRam00515b20,*(int *)(*(int *)(iVar17 + -0x2cc) + 0x1cc));
    func_00133870(*(int *)(iVar17 + -0xec),0,*(int *)(iVar17 + -0x80));
    func_0016A02C(*(int *)(iVar17 + -0xec),-1,(int *)0xffffffff,0);
    puVar8 = (uint *)func_002C11E8(aiStack_90,0,10,0);
    func_0016898C(*(int *)(iVar17 + -0xec),puVar8);
    puVar9 = (undefined4 *)func_0010BAB4(0xa8);
    puVar8 = (uint *)0x0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar8 = func_0016A2FC(puVar9,1,uRam00515220,1);
    }
    *(uint **)(iVar17 + -0xe8) = puVar8;
    func_00169608(puVar8,0,piRam00515b24,*(int *)(*(int *)(iVar17 + -0x2cc) + 0x1cc));
    func_0016A02C(*(int *)(iVar17 + -0xe8),-1,(int *)0xffffffff,0);
    puVar8 = (uint *)func_002C11E8(aiStack_90,0,10,0);
    func_0016898C(*(int *)(iVar17 + -0xe8),puVar8);
    *(int *)(*(int *)(*(int *)(iVar17 + -0xe8) + 0x14) + 0x10) = (int)((ulonglong)uVar22 >> 0x20);
  }
  else {
    uVar13 = func_0014E428(iVar6,1,0,0,1,0,0);
    *(undefined4 *)(iVar17 + -0x80) = uVar13;
    uVar13 = func_0014E904(iVar6,0xb,1);
    iVar7 = iRam0051521c;
    uVar15 = 0;
    *(undefined4 *)(iVar17 + -0xec) = uVar13;
    do {
      func_00169688(*(uint **)(iVar17 + -0xec),uVar15,(int *)(iVar7 + uVar15 * 8),
                    *(int *)(*(int *)(iVar17 + -0x2cc) + 0x1c8));
      func_00133870(*(int *)(iVar17 + -0xec),uVar15,*(int *)(iVar17 + -0x80));
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 0xb);
    func_0016A02C(*(int *)(iVar17 + -0xec),-1,(int *)0xffffffff,0);
    puVar8 = (uint *)func_002C11E8(aiStack_90,0,10,0);
    func_0016898C(*(int *)(iVar17 + -0xec),puVar8);
    puVar5 = (undefined4 *)func_0010BAB4(0xa8);
    puVar9 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar9 = func_0016A2FC(puVar5,2,uRam00515220,1);
    }
    iVar7 = iRam00515224;
    uVar15 = 0;
    *(undefined4 **)(iVar17 + -0xe8) = puVar9;
    do {
      func_00169608(*(uint **)(iVar17 + -0xe8),uVar15,(int *)(iVar7 + uVar15 * 8),
                    *(int *)(*(int *)(iVar17 + -0x2cc) + 0x1c8));
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 2);
    func_0016A02C(*(int *)(iVar17 + -0xe8),-1,(int *)0xffffffff,0);
    puVar8 = (uint *)func_002C11E8(aiStack_90,0,10,0);
    func_0016898C(*(int *)(iVar17 + -0xe8),puVar8);
    *(int *)(*(int *)(*(int *)(iVar17 + -0xe8) + 0x14) + 0x10) = (int)uVar22;
  }
  *(int *)(iVar17 + -0xfc) = iVar6;
  puVar5 = (undefined4 *)(iVar17 + -0x110);
  *(undefined1 *)(iVar17 + -0x10a) = 0x12;
  iVar7 = func_0010BA78(0x120);
  *(int *)(iVar17 + -0xf8) = iVar7;
  *(uint *)(iVar17 + -0xf4) = iVar7 + (uint)*(byte *)(iVar17 + -0x10a) * 8;
  iVar11 = 0x12;
  puVar9 = (undefined4 *)(iVar7 + -8);
  do {
    uVar13 = *(undefined4 *)(DAT_00515228 + 0x154);
    iVar11 = iVar11 + -1;
    puVar9[2] = *(undefined4 *)(DAT_00515228 + 0x150);
    puVar9[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar12 + 0x54);
    puVar9[4] = *(undefined4 *)(iVar12 + 0x50);
    puVar9[5] = uVar13;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar17 + -0x10a);
  uVar15 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar17 + -0xf0) = puVar9;
  if (uVar15 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar12 + -0xdc);
      *puVar9 = *(undefined4 *)(iVar12 + -0xe0);
      puVar9[1] = uVar13;
      puVar10 = puVar9;
    }
    for (iVar7 = (int)uVar15 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar13 = *(undefined4 *)(iVar12 + -0xdc);
      puVar10[2] = *(undefined4 *)(iVar12 + -0xe0);
      puVar10[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar12 + -0xdc);
      puVar10[4] = *(undefined4 *)(iVar12 + -0xe0);
      puVar10[5] = uVar13;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x290,(int *)0x0,4);
  iVar7 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 0x12;
    iVar7 = func_00100118((int)(puVar9 + 2),DAT_00515600,0x24,0x12);
  }
  if (iVar7 != 0) {
    *(int *)(iVar17 + -0x104) = iVar7;
    *(undefined4 *)(iVar17 + -0x108) = 0x12;
  }
  *(undefined4 **)(iVar17 + -0x248) = puVar5;
  *(undefined2 *)(iVar17 + -0x242) = 0x12;
  iVar7 = DAT_00515610;
  pcStack_94 = s_cState_Fall_00515604;
  iStack_98 = DAT_00515610;
  func_0010BEC4((int)puVar5,0,&iStack_98);
  puVar9 = *(undefined4 **)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0xe8);
  uVar14 = *(undefined4 *)(iVar12 + -0xec);
  uVar18 = *(undefined4 *)(iVar12 + -0xe4);
  uVar23 = *(undefined8 *)(iVar12 + -0xe0);
  *puVar9 = *(undefined4 *)(iVar12 + -0xf0);
  puVar9[1] = uVar14;
  puVar9 = *(undefined4 **)(iVar17 + -0xf4);
  *puVar9 = uVar13;
  puVar9[1] = uVar18;
  puVar9 = *(undefined4 **)(iVar17 + -0xf0);
  *puVar9 = (int)uVar23;
  puVar9[1] = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Stop_00515614;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,1,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0xd4);
  uVar14 = *(undefined4 *)(iVar12 + -0xd0);
  uVar18 = *(undefined4 *)(iVar12 + -0xcc);
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar12 + -0xd8);
  *(undefined4 *)(iVar11 + 0xc) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 8) = uVar14;
  *(undefined4 *)(iVar11 + 0xc) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 8) = (int)uVar23;
  *(int *)(iVar11 + 0xc) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_BrokeOut_00515620;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,2,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0xc4);
  uVar14 = *(undefined4 *)(iVar12 + -0xc0);
  uVar18 = *(undefined4 *)(iVar12 + -0xbc);
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar12 + -200);
  *(undefined4 *)(iVar11 + 0x14) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x10) = uVar14;
  *(undefined4 *)(iVar11 + 0x14) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x10) = (int)uVar23;
  *(int *)(iVar11 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_SandFall_00515630;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,3,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0xb4);
  uVar14 = *(undefined4 *)(iVar12 + -0xb0);
  uVar18 = *(undefined4 *)(iVar12 + -0xac);
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar12 + -0xb8);
  *(undefined4 *)(iVar11 + 0x1c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x18) = uVar14;
  *(undefined4 *)(iVar11 + 0x1c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x18) = (int)uVar23;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Bound_00515640;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,4,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0xa4);
  uVar14 = *(undefined4 *)(iVar12 + -0x9c);
  uVar18 = *(undefined4 *)(iVar12 + -0xa0);
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar12 + -0xa8);
  *(undefined4 *)(iVar11 + 0x24) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x20) = uVar18;
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x20) = (int)uVar23;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Harden_00515650;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,6,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x90);
  uVar14 = *(undefined4 *)(iVar12 + -0x94);
  uVar18 = *(undefined4 *)(iVar12 + -0x8c);
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar12 + -0x98);
  *(undefined4 *)(iVar11 + 0x34) = uVar14;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x30) = uVar13;
  *(undefined4 *)(iVar11 + 0x34) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x30) = (int)uVar23;
  *(int *)(iVar11 + 0x34) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_HardenHand_00515660;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,7,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x84);
  uVar14 = *(undefined4 *)(iVar12 + -0x80);
  uVar18 = *(undefined4 *)(iVar12 + -0x7c);
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar12 + -0x88);
  *(undefined4 *)(iVar11 + 0x3c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x38) = uVar14;
  *(undefined4 *)(iVar11 + 0x3c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x38) = (int)uVar23;
  *(int *)(iVar11 + 0x3c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Wait_00515674;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,5,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x74);
  uVar14 = *(undefined4 *)(iVar12 + -0x70);
  uVar18 = *(undefined4 *)(iVar12 + -0x6c);
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar12 + -0x78);
  *(undefined4 *)(iVar11 + 0x2c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x28) = uVar14;
  *(undefined4 *)(iVar11 + 0x2c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x28) = (int)uVar23;
  *(int *)(iVar11 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Water_00515680;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,8,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -100);
  uVar14 = *(undefined4 *)(iVar12 + -0x60);
  uVar18 = *(undefined4 *)(iVar12 + -0x5c);
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar12 + -0x68);
  *(undefined4 *)(iVar11 + 0x44) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x40) = uVar14;
  *(undefined4 *)(iVar11 + 0x44) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x40) = (int)uVar23;
  *(int *)(iVar11 + 0x44) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_GetDemo_00515690;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,9,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x54);
  uVar14 = *(undefined4 *)(iVar12 + -0x50);
  uVar18 = *(undefined4 *)(iVar12 + -0x4c);
  *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar12 + -0x58);
  *(undefined4 *)(iVar11 + 0x4c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x48) = uVar14;
  *(undefined4 *)(iVar11 + 0x4c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x48) = (int)uVar23;
  *(int *)(iVar11 + 0x4c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_WaitGetDemo_005156a0;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,10,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x44);
  uVar14 = *(undefined4 *)(iVar12 + -0x40);
  uVar18 = *(undefined4 *)(iVar12 + -0x3c);
  *(undefined4 *)(iVar11 + 0x50) = *(undefined4 *)(iVar12 + -0x48);
  *(undefined4 *)(iVar11 + 0x54) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x50) = uVar14;
  *(undefined4 *)(iVar11 + 0x54) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x50) = (int)uVar23;
  *(int *)(iVar11 + 0x54) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_Erase_005156b4;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0xb,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x34);
  uVar14 = *(undefined4 *)(iVar12 + -0x30);
  uVar18 = *(undefined4 *)(iVar12 + -0x2c);
  *(undefined4 *)(iVar11 + 0x58) = *(undefined4 *)(iVar12 + -0x38);
  *(undefined4 *)(iVar11 + 0x5c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x58) = uVar14;
  *(undefined4 *)(iVar11 + 0x5c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x58) = (int)uVar23;
  *(int *)(iVar11 + 0x5c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_BoundWait_005156c4;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0xc,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x24);
  uVar14 = *(undefined4 *)(iVar12 + -0x20);
  uVar18 = *(undefined4 *)(iVar12 + -0x1c);
  *(undefined4 *)(iVar11 + 0x60) = *(undefined4 *)(iVar12 + -0x28);
  *(undefined4 *)(iVar11 + 100) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x60) = uVar14;
  *(undefined4 *)(iVar11 + 100) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x60) = (int)uVar23;
  *(int *)(iVar11 + 100) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_SandBound_00515ab4;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0xd,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + -0x14);
  uVar14 = *(undefined4 *)(iVar12 + -0x10);
  uVar18 = *(undefined4 *)(iVar12 + -0xc);
  *(undefined4 *)(iVar11 + 0x68) = *(undefined4 *)(iVar12 + -0x18);
  *(undefined4 *)(iVar11 + 0x6c) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x68) = uVar14;
  *(undefined4 *)(iVar11 + 0x6c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x68) = (int)uVar23;
  *(int *)(iVar11 + 0x6c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_MotherWalkIn_00515ac8;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0xe,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(DAT_00515228 + 0x100);
  uVar18 = *(undefined4 *)(DAT_00515228 + 0xfc);
  uVar14 = *(undefined4 *)(DAT_00515228 + 0x104);
  *(undefined4 *)(iVar11 + 0x70) = *(undefined4 *)(DAT_00515228 + 0xf8);
  *(undefined4 *)(iVar11 + 0x74) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x70) = uVar13;
  *(undefined4 *)(iVar11 + 0x74) = uVar14;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x70) = (int)uVar23;
  *(int *)(iVar11 + 0x74) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_MotherWalkEnd_00515adc;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0xf,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + 0x10);
  uVar14 = *(undefined4 *)(iVar12 + 0x14);
  uVar18 = *(undefined4 *)(DAT_00515228 + 0x10c);
  *(undefined4 *)(iVar11 + 0x78) = *(undefined4 *)(DAT_00515228 + 0x108);
  *(undefined4 *)(iVar11 + 0x7c) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x78) = uVar13;
  *(undefined4 *)(iVar11 + 0x7c) = uVar14;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x78) = (int)uVar23;
  *(int *)(iVar11 + 0x7c) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_MotherJump_00515af4;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0x10,&iStack_98);
  iVar11 = *(int *)(iVar17 + -0xf8);
  uVar13 = *(undefined4 *)(iVar12 + 0x1c);
  uVar14 = *(undefined4 *)(iVar12 + 0x20);
  uVar18 = *(undefined4 *)(iVar12 + 0x24);
  *(undefined4 *)(iVar11 + 0x80) = *(undefined4 *)(iVar12 + 0x18);
  *(undefined4 *)(iVar11 + 0x84) = uVar13;
  iVar11 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar11 + 0x80) = uVar14;
  *(undefined4 *)(iVar11 + 0x84) = uVar18;
  iVar11 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar11 + 0x80) = (int)uVar23;
  *(int *)(iVar11 + 0x84) = (int)((ulonglong)uVar23 >> 0x20);
  pcStack_94 = s_cState_MotherAbsorb_00515b08;
  iStack_98 = iVar7;
  func_0010BEC4((int)puVar5,0x11,&iStack_98);
  iVar7 = *(int *)(iVar17 + -0xf8);
  uVar14 = *(undefined4 *)(iVar12 + 0x2c);
  uVar13 = *(undefined4 *)(iVar12 + 0x30);
  uVar18 = *(undefined4 *)(iVar12 + 0x34);
  *(undefined4 *)(iVar7 + 0x88) = *(undefined4 *)(iVar12 + 0x28);
  *(undefined4 *)(iVar7 + 0x8c) = uVar14;
  iVar12 = *(int *)(iVar17 + -0xf4);
  *(undefined4 *)(iVar12 + 0x88) = uVar13;
  *(undefined4 *)(iVar12 + 0x8c) = uVar18;
  iVar12 = *(int *)(iVar17 + -0xf0);
  *(int *)(iVar12 + 0x88) = (int)uVar23;
  *(int *)(iVar12 + 0x8c) = (int)((ulonglong)uVar23 >> 0x20);
  puVar9 = (undefined4 *)func_0054D964(iVar6,0);
  if (((*DAT_00515b1c & 1) == 0) && (iVar12 = func_00100174((int *)DAT_00515b1c), iVar12 != 0)) {
    *DAT_00515b28 = DAT_00515b2c;
  }
  if ((puVar9 == (undefined4 *)0x0) ||
     (iVar12 = (**(code **)*puVar9)(puVar9,DAT_00515b28), iVar12 == 0)) {
    puVar9 = (undefined4 *)0x0;
  }
  *(undefined4 **)(iVar17 + -0xd0) = puVar9;
  *(undefined2 *)(puVar9 + 10) = 0x244;
  iVar12 = *(int *)(iVar17 + -0xd0);
  *(undefined4 *)(iVar12 + 4) = *(undefined4 *)(iVar17 + -0x1cc);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar17 + -0x1c8);
  *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(iVar17 + -0x1c4);
  func_004356B4(*(int **)(iVar17 + -0xd0));
  uVar13 = *DAT_00515b30;
  uVar14 = DAT_00515b30[1];
  *(int *)(iVar17 + -0xc4) = iVar6;
  *(undefined4 *)(iVar17 + -0xc0) = uVar13;
  *(undefined4 *)(iVar17 + -0xbc) = uVar14;
  sVar3 = *(short *)((int)param_2 + 0x2e);
  if (sVar3 == 0) {
    if (*(char *)(iVar17 + -0x54) == '\x04') {
      func_0066B94C(puVar5,8);
      goto LAB_00515b4c;
    }
  }
  else {
    if (sVar3 == 1) {
      *(uint *)(iVar17 + -0x28) = param_2[4];
      *(uint *)(iVar17 + -0x24) = param_2[5];
      *(uint *)(iVar17 + -0x20) = param_2[6];
      func_0066B94C(puVar5,0xe);
      goto LAB_00515b4c;
    }
    if (sVar3 == 2) {
      func_0066B94C(puVar5,0xf);
      goto LAB_00515b4c;
    }
  }
  func_0066B94C(puVar5,1);
LAB_00515b4c:
  puVar9 = (undefined4 *)func_0010BAB4(0x74);
  uVar13 = DAT_00515eb8;
  if (puVar9 != (undefined4 *)0x0) {
    uVar14 = *DAT_00515214;
    uVar18 = DAT_00515214[1];
    puVar9[0x18] = DAT_00515214[2];
    puVar9[0x16] = uVar14;
    puVar9[0x17] = uVar18;
    uVar14 = DAT_00515eb4;
    uVar18 = DAT_00515eb0[1];
    uVar19 = DAT_00515eb0[2];
    puVar9[0x19] = *DAT_00515eb0;
    puVar9[0x1a] = uVar18;
    puVar9[0x1b] = uVar19;
    uVar18 = (undefined4)uVar22;
    puVar9[0x1c] = uVar18;
    *puVar9 = uVar14;
    puVar9[1] = uVar18;
    puVar9[2] = uVar18;
    puVar9[3] = uVar18;
    puVar9[4] = uVar18;
    puVar9[5] = uVar18;
    puVar9[6] = uVar18;
    puVar9[7] = uVar18;
    puVar9[8] = uVar18;
    puVar9[9] = uVar18;
    *(undefined2 *)(puVar9 + 10) = 0;
    puVar9[0xb] = 0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = uVar13;
    puVar9[0xe] = uVar13;
    puVar9[0xf] = uVar13;
    uVar14 = DAT_00515ec0;
    uVar13 = DAT_00515ebc;
    puVar9[0x10] = DAT_00515ebc;
    puVar9[0x11] = uVar13;
    puVar9[0x12] = uVar13;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
    *(undefined2 *)(puVar9 + 0x15) = 9;
    *puVar9 = uVar14;
  }
  *(undefined4 **)(iVar17 + -0xcc) = puVar9;
  *(undefined2 *)(puVar9 + 10) = 0xe0;
  *(undefined2 *)(*(int *)(iVar17 + -0xcc) + 0x28) = 0xe4;
  func_00513BE0(iVar6);
  func_004356B4(*(int **)(iVar17 + -0xcc));
  uVar13 = *DAT_00515ec4;
  uVar14 = DAT_00515ec4[1];
  *(int *)(iVar17 + -0xb4) = iVar6;
  *(undefined4 *)(iVar17 + -0xb0) = uVar13;
  *(undefined4 *)(iVar17 + -0xac) = uVar14;
  *(uint *)(iVar17 + -0xd8) = param_2[7];
  if ((*(char *)(iVar17 + -0x54) == '\0') && (*(short *)((int)param_2 + 0x2e) != 1)) {
    func_003249E0(iVar6,1);
    func_00324964(iVar6);
  }
  func_00513DB4(iVar6);
  if (*(char *)(iVar17 + -0x54) == '\x05') {
    *(float *)(iVar17 + -0x1c8) = *(float *)(iVar17 + -0x1c8) + DAT_00515ec8;
  }
  else if (*(char *)(iVar17 + -0x54) == '\x04') {
    *(float *)(iVar17 + -0x1c8) = *(float *)(iVar17 + -0x1c8) + DAT_00515ecc;
  }
  func_00513A3C(iVar6);
  func_004ECF6C(iVar6);
  puVar9 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[2] = uRam00515ed0;
    uVar13 = (undefined4)uVar22;
    *puVar9 = uVar13;
    puVar9[1] = (int)((ulonglong)uVar22 >> 0x20);
    puVar9[3] = uVar13;
    puVar9[4] = uVar13;
    puVar9[5] = 0;
    puVar9[6] = 0;
  }
  *(undefined4 **)(iVar17 + -0x84) = puVar9;
  if (*(short *)((int)param_2 + 0x2e) == 0) {
    uVar15 = (uint)*(char *)(*(int *)PTR_00515ed4 + 0x18);
    bVar21 = 4 < uVar15;
    bVar20 = uVar15 == 5;
    if (5 < uVar15) {
      bVar21 = 3 < uVar15 - 0x16;
      bVar20 = uVar15 - 0x16 == 4;
    }
    if ((!bVar21 || bVar20) &&
       (iVar12 = func_0052A01C(*(int *)PTR_00515ed8,(int)*(short *)(iVar17 + -0x570)),
       iVar12 != 0)) {
      *(undefined1 *)(iVar17 + -0x2c5) = 1;
    }
  }
  cVar2 = *(char *)(iVar17 + -0x54);
  if ((cVar2 == '\x03' || cVar2 == '\x06') || ((cVar2 == '\a' || cVar2 == '\x02') || cVar2 == '\b'))
  {
    func_004CF478(*(int *)(iVar17 + -0x80),0);
  }
  puVar9 = (undefined4 *)func_0052FBA0(*(int *)PTR_00515edc + 0x3dbbc,param_2[0x13]);
  if (puVar9 != (undefined4 *)0x0) {
    if (((*(uint *)PTR_00515ee0 & 1) == 0) &&
       (iVar12 = func_00100174((int *)PTR_00515ee0), iVar12 != 0)) {
      *(undefined **)PTR_00515ee4 = PTR_00515ee8;
    }
    iVar12 = (**(code **)*puVar9)(puVar9,PTR_00515ee4);
    if (iVar12 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    if (puVar9 != (undefined4 *)0x0) {
      *(uint *)(iVar17 + -700) = *(uint *)(iVar17 + -700) | 2;
    }
  }
  uVar13 = *(undefined4 *)PTR_00515eec;
  uVar14 = *(undefined4 *)(PTR_00515eec + 4);
  *(int *)(iVar17 + -0x94) = iVar6;
  *(undefined4 *)(iVar17 + -0x90) = uVar13;
  *(undefined4 *)(iVar17 + -0x8c) = uVar14;
  return iVar6;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0012C790(int param_1);
extern int func_0014D244(int param_1);
extern int func_00166620(int param_1,int param_2);
extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001E3294(int param_1);
extern int func_002314C0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00438AC0(undefined4 *param_1);
extern int func_0043FB44(int param_1);
extern int func_004512A8(undefined4 *param_1);
extern int func_0046CAF8(undefined4 *param_1);
extern int func_0046D150(undefined4 *param_1);
extern int func_0046E07C(undefined4 *param_1);
extern int func_00481858(undefined4 *param_1);
extern int func_00483908(undefined4 *param_1);
extern int func_00485084(undefined4 *param_1);
extern int func_00485A0C(undefined4 *param_1);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_004B3B10(void);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_00503CA4(int param_1,uint param_2,int param_3);
extern int func_0058DDB0(int param_1);
extern int *DAT_00519938;
extern undefined4 DAT_00519948;
extern undefined4 *DAT_0051994c;
extern int *DAT_00519950;
extern int *DAT_00519954;
extern int *DAT_00519958;
extern uint *DAT_0051995c;
extern undefined4 *DAT_00519960;
extern undefined4 DAT_00519964;
extern int DAT_00519968;
extern int *DAT_0051996c;
extern char s_UIMgrGame_0051993c[];

// USA 00519594 <- EU 0051956C (Ghidra, non-matching)
// GLOBAL DAT_00519938 int *
// GLOBAL DAT_00519948 undefined4
// GLOBAL DAT_0051994c undefined4 *
// GLOBAL DAT_00519950 int *
// GLOBAL DAT_00519954 int *
// GLOBAL DAT_00519958 int *
// GLOBAL DAT_0051995c uint *
// GLOBAL DAT_00519960 undefined4 *
// GLOBAL DAT_00519964 undefined4
// GLOBAL DAT_00519968 int
// GLOBAL DAT_0051996c int *
// GLOBAL s_UIMgrGame_0051993c string

void func_00519594(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *extraout_r1_01;
  uint uVar10;
  undefined4 extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined4 extraout_r1_10;
  code *pcVar11;
  undefined4 uVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(*DAT_00519938 + 0x25) != '\0') {
    return;
  }
  local_2c = s_UIMgrGame_0051993c;
  local_30 = DAT_00519948;
  iVar13 = 1;
  pcVar11 = (code *)0x0;
  piVar4 = func_004A107C(0,(int)&local_30,(int *)0x0,1,0);
  if (piVar4 == (int *)0x0) {
    iVar16 = 1;
  }
  else {
    iVar16 = func_0010983C(*DAT_0051994c,piVar4);
  }
  piVar2 = DAT_00519954;
  piVar9 = DAT_00519950;
  puVar14 = (ushort *)(param_1 + 0x33e);
  iVar15 = *DAT_00519950;
  if ((*(char *)(iVar15 + 0x18) == '\0') &&
     (*(int *)(iVar15 + 0x1c) == 0x28 || *(int *)(iVar15 + 0x1c) == 0x2b)) {
    pcVar11 = (code *)0x0;
    func_00503CA4(*DAT_00519954,6,0);
    puVar5 = (undefined4 *)func_0010BAB4(0x9c);
    piVar6 = (int *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      piVar6 = func_00485084(puVar5);
    }
    *(int **)(param_1 + 0x128) = piVar6;
    func_004B9958((int)piVar6,2);
    *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) | 0x20;
    *puVar14 = *puVar14 | 0x100;
  }
  if ((*(byte *)(param_1 + 0x340) & 0x20) == 0) {
LAB_005196c0:
    if ((*(int *)(param_1 + 0x8c) == 0) && (bVar3 = func_004B3B10(), !bVar3)) {
      iVar8 = (int)*(char *)(iVar15 + 0x18);
      if (iVar8 == 0) {
        if (*(int *)(iVar15 + 0x1c) == 0x2a) goto LAB_0051975c;
      }
      else {
        bVar3 = iVar8 == 5;
        if (bVar3) {
          iVar8 = *(int *)(iVar15 + 0x1c);
        }
        if (bVar3 && iVar8 == 9) {
LAB_0051975c:
          *puVar14 = *puVar14 | 0x240;
        }
      }
      puVar5 = extraout_r1_01;
      if (((*puVar14 & 0x80) == 0) &&
         (iVar15 = func_0058DDB0(param_1), puVar5 = extraout_r1_03, iVar15 == 0)) {
        bVar3 = false;
        piVar6 = *(int **)(*DAT_00519958 + 0x44);
        if (((*DAT_0051995c & 1) == 0) && (iVar15 = func_00100174((int *)DAT_0051995c), iVar15 != 0)
           ) {
          *DAT_00519960 = DAT_00519964;
        }
        puVar5 = DAT_00519960;
        if (piVar6 == (int *)0x0) {
LAB_005197fc:
          piVar6 = (int *)0x0;
        }
        else {
          pcVar11 = *(code **)(*piVar6 + 8);
          uVar19 = (*pcVar11)(piVar6);
          puVar5 = (undefined4 *)((ulonglong)uVar19 >> 0x20);
          if ((int)uVar19 == 0) goto LAB_005197fc;
        }
        if ((piVar6 != (int *)0x0) && ((char)piVar6[0x1f] == '\x05')) goto LAB_00519788;
      }
      else {
LAB_00519788:
        bVar3 = true;
      }
      *puVar14 = *puVar14 & 0xff7f;
      if ((bVar3) || ((int)((uint)*(byte *)(param_1 + 0x340) << 0x1d) < 0)) {
        func_0012C790(*(int *)(param_1 + 0xe4));
        func_001B6B38(*(int **)(param_1 + 0xe4),extraout_r1_06,pcVar11,iVar13);
        uVar12 = extraout_r1_07;
      }
      else {
        func_001B6C2C(*(int **)(param_1 + 0xe4),puVar5,pcVar11,iVar13);
        func_001B6A48(*(int **)(param_1 + 0xe4),extraout_r1_04,pcVar11,iVar13);
        func_0043FB44(*(int *)(param_1 + 0xe4));
        uVar12 = extraout_r1_05;
      }
      cVar1 = *(char *)(*piVar9 + 0x18);
      if (cVar1 == '\a' || cVar1 == '%') {
        func_0012C790(*(int *)(param_1 + 0x80));
        func_001B6B38(*(int **)(param_1 + 0x80),extraout_r1_10,pcVar11,iVar13);
      }
      else {
        func_002314C0(*(int *)(param_1 + 0x80),uVar12,pcVar11,iVar13);
        func_001B6C2C(*(int **)(param_1 + 0x80),extraout_r1_08,pcVar11,iVar13);
        func_001B6A48(*(int **)(param_1 + 0x80),extraout_r1_09,pcVar11,iVar13);
        if ((*(ushort *)(DAT_00519968 + param_1) & 0x40) != 0) {
          func_00166620(*DAT_0051996c,*(int *)(param_1 + 0x80));
        }
      }
      func_0014D244(*(int *)(param_1 + 300));
      func_001E3294(*(int *)(param_1 + 0x130));
      goto LAB_005198dc;
    }
  }
  else if (*(int *)(param_1 + 0x8c) == 0) {
    pcVar11 = (code *)0x0;
    func_00503CA4(*piVar2,4,0);
    puVar7 = (undefined4 *)func_0010BAB4(0xb8);
    puVar5 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar5 = func_00485A0C(puVar7);
    }
    *(undefined4 **)(param_1 + 0x8c) = puVar5;
    func_004B9958((int)puVar5,4);
    func_001B6C2C(*(int **)(param_1 + 0x8c),extraout_r1,pcVar11,iVar13);
    func_001B6A48(*(int **)(param_1 + 0x8c),extraout_r1_00,pcVar11,iVar13);
    *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xdf;
    goto LAB_005196c0;
  }
  iVar15 = *(int *)(param_1 + 0x80);
  cVar1 = *(char *)(iVar15 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(iVar15 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    uVar10 = *(uint *)(iVar15 + 0x18);
    *(uint *)(iVar15 + 0x18) = uVar10 & 0xfffffffe;
    *(uint *)(*(int *)(param_1 + 0x80) + 0x18) = uVar10 & 0xfffffffc;
  }
  func_0012C790(*(int *)(param_1 + 0xe4));
  func_001B6B38(*(int **)(param_1 + 0xe4),extraout_r1_02,pcVar11,iVar13);
  *puVar14 = *puVar14 | 4;
LAB_005198dc:
  uVar10 = (uint)*(char *)(*piVar9 + 0x18);
  bVar3 = 6 < uVar10;
  bVar17 = uVar10 != 7;
  if (bVar17) {
    bVar3 = 0x24 < uVar10;
  }
  bVar18 = uVar10 != 0x25;
  if (bVar17 && bVar18) {
    uVar10 = uVar10 - 9;
    bVar3 = 0xb < uVar10;
  }
  if (bVar3 && ((bVar17 && bVar18) && uVar10 != 0xc)) {
    if ((*(byte *)(param_1 + 0x340) & 1) != 0) {
      func_00503CA4(*piVar2,0xd,0);
      puVar5 = (undefined4 *)func_0010BAB4(0x160);
      piVar9 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar9 = func_0046E07C(puVar5);
      }
      *(int **)(param_1 + 0x108) = piVar9;
      *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xfe;
      puVar5 = (undefined4 *)func_0010BAB4(0x74);
      piVar9 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar9 = func_00438AC0(puVar5);
      }
      *(int **)(param_1 + 0xe0) = piVar9;
      func_004B9958((int)piVar9,4);
    }
    if ((*(byte *)(param_1 + 0x340) & 4) != 0) {
      uVar12 = 0;
      func_00503CA4(*piVar2,0xf,0);
      puVar5 = (undefined4 *)func_0010BAB4(0xd0);
      piVar9 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar9 = func_0046D150(puVar5);
      }
      *(int **)(param_1 + 0x114) = piVar9;
      puVar5 = (undefined4 *)func_0010BAB4(0x84);
      piVar9 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar9 = func_0046CAF8(puVar5);
      }
      *(int **)(param_1 + 0x118) = piVar9;
      *(undefined1 *)((int)piVar9 + 0xe) = 1;
      func_001B6A48(*(int **)(param_1 + 0x118),1,uVar12,iVar13);
      *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xfb;
      uVar10 = *(uint *)(*(int *)(param_1 + 0x80) + 0x18);
      *(uint *)(*(int *)(param_1 + 0x80) + 0x18) = uVar10 & 0xfffffffe;
      *(uint *)(*(int *)(param_1 + 0x80) + 0x18) = uVar10 & 0xfffffffc;
    }
    if ((*(byte *)(param_1 + 0x340) & 8) != 0) {
      puVar5 = (undefined4 *)func_0010BAB4(0xf0);
      piVar9 = (int *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        piVar9 = func_00483908(puVar5);
      }
      *(int **)(param_1 + 0x11c) = piVar9;
      *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xf7;
    }
  }
  if ((*(byte *)(param_1 + 0x340) & 0x10) != 0) {
    puVar5 = (undefined4 *)func_0010BAB4(0x98);
    piVar9 = (int *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      piVar9 = func_00481858(puVar5);
    }
    *(int **)(param_1 + 0x120) = piVar9;
    *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xef;
  }
  if ((*(byte *)(param_1 + 0x340) & 0x40) != 0) {
    func_00503CA4(*piVar2,0xc,0);
    puVar5 = (undefined4 *)func_0010BAB4(0x158);
    piVar9 = (int *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      piVar9 = func_004512A8(puVar5);
    }
    *(int **)(param_1 + 0x124) = piVar9;
    *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xbf;
  }
  (**(code **)(*piVar4 + 0x14))(piVar4);
  if (iVar16 != 1) {
    func_0010983C(*DAT_0051994c,iVar16);
  }
  return;
}


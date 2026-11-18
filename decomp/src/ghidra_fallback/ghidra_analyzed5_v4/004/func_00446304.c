#include "ghidra_types.h"

extern int func_0014CFA0(int param_1);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00231340(short *param_1);
extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF8D4(int param_1,int param_2);
extern int func_002BF950(int param_1,int param_2);
extern int func_00447A40(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_004494C0(int param_1);
extern int func_0044AAE8(int param_1);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_00519D74(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0051B524(int param_1);
extern int func_0051C38C(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058D6D0(int param_1);
extern int func_0058D808(int param_1);
extern int func_0058DABC(int param_1);
extern int func_0058DE90(int param_1);
extern float DAT_004465e0;
extern int DAT_004465e4;
extern int *DAT_004465e8;
extern int *DAT_004465ec;
extern int DAT_004465f0;

// USA 00446304 <- EU 004462DC (Ghidra, non-matching)
// GLOBAL DAT_004465e0 float
// GLOBAL DAT_004465e4 int
// GLOBAL DAT_004465e8 int *
// GLOBAL DAT_004465ec int *
// GLOBAL DAT_004465f0 int

undefined4 func_00446304(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int in_r2;
  int in_r3;
  int iVar8;
  bool bVar9;
  float fparam_0;
  
  func_0014CFA0(param_1);
  *(undefined1 *)(param_1 + 0x292) = 0;
  *(undefined1 *)(param_1 + 0x295) = 1;
  iVar8 = *(int *)(param_1 + 0x20c);
  cVar1 = *(char *)(iVar8 + 0xd);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(iVar8 + 0xe);
  }
  fparam_0 = DAT_004465e0;
  if (bVar9 && cVar1 == '\0') {
    if (*(char *)(param_1 + 0x290) == '\0') {
      if (*(char *)(iVar8 + 0x5d) != '\0') {
        func_002BF950(iVar8,1);
        puVar4 = (undefined2 *)(iVar8 + 0x90);
        goto LAB_0044636c;
      }
    }
    else if (*(char *)(iVar8 + 0x5d) == '\0') {
      func_002BF8D4(iVar8,1);
      puVar4 = (undefined2 *)(iVar8 + 0x84);
LAB_0044636c:
      func_002317C0(puVar4,fparam_0);
    }
    iVar8 = *(int *)(param_1 + 0x20c);
    cVar1 = *(char *)(iVar8 + 0xd);
    bVar9 = cVar1 == '\0';
    if (bVar9) {
      cVar1 = *(char *)(iVar8 + 0xe);
    }
    if (bVar9 && cVar1 == '\0') {
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & 0xfffffffb;
      if (*(char *)(iVar8 + 0x5d) == '\0') {
        func_00231448(iVar8 + 0x90);
        iVar7 = iVar8 + 0x84;
      }
      else {
        func_00231448(iVar8 + 0x84);
        iVar7 = iVar8 + 0x90;
      }
      func_002313DC(iVar7);
      *(undefined1 *)(iVar8 + 0xe) = 3;
    }
  }
  piVar2 = DAT_004465e8;
  bVar9 = func_00584B94(*DAT_004465e8,DAT_004465e4);
  piVar3 = DAT_004465ec;
  if (((!bVar9) || (iVar8 = *(int *)(param_1 + 0x210), *(char *)(iVar8 + 0xd) != '\0')) ||
     (*(char *)(iVar8 + 0xe) != '\0')) goto LAB_00446480;
  cVar1 = *(char *)(param_1 + 0x15c);
  if (cVar1 == '\x06') {
    if (*(char *)(iVar8 + 0x5d) == '\0') {
      func_002BF8D4(iVar8,1);
      func_002317C0((undefined2 *)(iVar8 + 0x6c),fparam_0);
    }
    in_r2 = 0;
    func_0047E8C4(*(int *)(param_1 + 0x210),1,0);
    iVar8 = *(int *)(param_1 + 0x210);
    if (*(char *)(iVar8 + 0x5d) == '\0') {
      func_002BF8D4(iVar8,1);
      puVar4 = (undefined2 *)(iVar8 + 0x6c);
LAB_00446450:
      func_002317C0(puVar4,fparam_0);
    }
  }
  else if (cVar1 == '\x04') {
    func_0044AAE8(param_1);
  }
  else {
    if (cVar1 == '\x05') {
      iVar8 = func_0058DABC(*DAT_004465ec);
      if (iVar8 != 0) {
        uVar5 = func_0058DE90(*piVar3);
        bVar9 = uVar5 == 0;
        if (bVar9) {
          uVar5 = (uint)*(byte *)(param_1 + 0x293);
        }
        if (((!bVar9 || uVar5 != 0) && (iVar8 = func_0058D6D0(*piVar3), iVar8 != 0)) &&
           (iVar8 = func_0058D808(*piVar3), iVar8 != 0)) {
          func_00519D74(*piVar3,extraout_r1_01,in_r2,in_r3);
        }
      }
      func_0051C38C(*piVar3);
      iVar8 = *(int *)(param_1 + 0x210);
      if (*(char *)(iVar8 + 0x5d) == '\0') {
        func_002BF8D4(iVar8,1);
        func_002317C0((undefined2 *)(iVar8 + 0x6c),fparam_0);
      }
      psVar6 = (short *)(param_1 + 0x104);
    }
    else {
      if (cVar1 != '\a') {
        if (*(char *)(iVar8 + 0x5d) != '\0') {
          func_002BF950(iVar8,1);
          puVar4 = (undefined2 *)(iVar8 + 0x78);
          goto LAB_00446450;
        }
        goto LAB_00446454;
      }
      func_004494C0(param_1);
      psVar6 = (short *)(param_1 + 0xf8);
    }
    func_00231340(psVar6);
  }
LAB_00446454:
  iVar8 = *(int *)(param_1 + 0x210);
  cVar1 = *(char *)(iVar8 + 0xd);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    cVar1 = *(char *)(iVar8 + 0xe);
  }
  if (bVar9 && cVar1 == '\0') {
    *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & 0xfffffffb;
    if (*(char *)(iVar8 + 0x5d) == '\0') {
      func_00231448(iVar8 + 0x6c);
      iVar7 = iVar8 + 0x78;
    }
    else {
      func_00231448(iVar8 + 0x78);
      iVar7 = iVar8 + 0x6c;
    }
    func_00231524(iVar7);
    *(undefined1 *)(iVar8 + 0xe) = 3;
  }
  func_00231524(param_1 + 0x110);
  func_00231448(param_1 + 0x11c);
LAB_00446480:
  cVar1 = *(char *)(param_1 + 0x15c);
  if ((cVar1 != '\x06' && cVar1 != '\x04') && (cVar1 != '\x05' && cVar1 != '\a')) {
    bVar9 = func_00584B94(*piVar2,DAT_004465f0);
    if (bVar9) {
      func_001B6C2C(*(int **)(param_1 + 0x214),extraout_r1,in_r2,in_r3);
    }
    func_0051B524(*piVar3);
    return func_00447A40(param_1,extraout_r1_00,in_r2,in_r3);
  }
  return 0;
}


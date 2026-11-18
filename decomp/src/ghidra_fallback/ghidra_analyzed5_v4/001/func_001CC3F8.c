#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BD280();
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004C1820(int param_1,int param_2,int param_3,int *param_4,undefined8 param_5);
extern int func_00618654(int param_1,int param_2,undefined1 param_3);
extern int func_006192D8(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_001cc808;
extern int DAT_001cc80c;
extern undefined4 DAT_001cc81c;
extern int *DAT_001cc820;
extern undefined4 *DAT_001cc824;
extern undefined *DAT_001cc828;
extern int DAT_001cc82c;
extern undefined4 *DAT_001cc8f4;
extern float DAT_001cc8f8;
extern int DAT_001cc8fc;
extern char s_cState_EventEnd_001cc858[];
extern char s_cState_Event_001cc848[];
extern char s_cState_Hide_001cc868[];
extern char s_cState_Wait_001cc830[];
extern char s_cState_Walk_001cc83c[];

// USA 001CC3F8 <- EU 001CC3F8 (Ghidra, non-matching)
// GLOBAL DAT_001cc808 int
// GLOBAL DAT_001cc80c int
// GLOBAL DAT_001cc81c undefined4
// GLOBAL DAT_001cc820 int *
// GLOBAL DAT_001cc824 undefined4 *
// GLOBAL DAT_001cc828 undefined *
// GLOBAL DAT_001cc82c int
// GLOBAL DAT_001cc8f4 undefined4 *
// GLOBAL DAT_001cc8f8 float
// GLOBAL DAT_001cc8fc int
// GLOBAL s_cState_EventEnd_001cc858 string
// GLOBAL s_cState_Event_001cc848 string
// GLOBAL s_cState_Hide_001cc868 string
// GLOBAL s_cState_Wait_001cc830 string
// GLOBAL s_cState_Walk_001cc83c string

int * func_001CC3F8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x2d))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar4 = (int *)func_006192D8(param_1,param_2,0,0xff,&local_40);
  iVar11 = DAT_001cc808;
  piVar4[200] = DAT_001cc808 + 0xb8;
  *piVar4 = iVar11;
  piVar4[0x263] = param_2[2];
  *(undefined1 *)(piVar4 + 0x264) = 0;
  *(undefined1 *)((int)piVar4 + 0x991) = 0;
  *(char *)(piVar4 + 0x264) = (char)*(ushort *)((int)piVar4 + 0x32);
  if ((*(ushort *)((int)piVar4 + 0x32) & 0xff) == 1) {
    *(undefined1 *)((int)piVar4 + 0x853) = 5;
    *(undefined1 *)((int)piVar4 + 0x855) = 6;
    *(undefined1 *)(piVar4 + 0x215) = 7;
    *(undefined1 *)((int)piVar4 + 0x856) = 8;
  }
  iVar11 = DAT_001cc80c;
  bVar14 = *(short *)((int)piVar4 + 0x2e) == 1;
  cVar2 = '\x01';
  if (!bVar14) {
    cVar2 = (char)piVar4[0x264];
  }
  if (bVar14 || cVar2 == '\x01') {
    func_004C1820((int)piVar4,9,(int)(DAT_001cc820 + 2),DAT_001cc820,1);
    func_004C173C(piVar4,9,0);
  }
  else {
    func_004C173C(piVar4,5,DAT_001cc81c);
  }
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 5;
  iVar5 = func_0010BA78(0x50);
  puVar3 = DAT_001cc824;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = puVar3[0x1b];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[0x1a];
    puVar6[3] = uVar12;
    uVar12 = puVar3[0x1b];
    puVar6[4] = puVar3[0x1a];
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar12;
      uVar12 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001cc828,0x24,5);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 5;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_001cc82c;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 5;
  local_54 = s_cState_Wait_001cc830;
  local_58 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),0,&local_58);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar13 = puVar3[1];
  uVar12 = puVar3[2];
  uVar9 = puVar3[3];
  uVar17 = *(undefined8 *)(puVar3 + 4);
  *puVar6 = *puVar3;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar12;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar17;
  puVar6[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_54 = s_cState_Walk_001cc83c;
  local_58 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),1,&local_58);
  iVar5 = piVar4[0x25e];
  uVar9 = puVar3[7];
  uVar13 = puVar3[8];
  uVar12 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar17;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_54 = s_cState_Event_001cc848;
  local_58 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),2,&local_58);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar3[0xb];
  uVar13 = puVar3[0xc];
  uVar9 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar17;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_54 = s_cState_EventEnd_001cc858;
  local_58 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),3,&local_58);
  iVar5 = piVar4[0x25e];
  uVar9 = puVar3[0x12];
  uVar16 = puVar3[0x13];
  uVar13 = puVar3[0xf];
  uVar15 = puVar3[0x10];
  uVar12 = puVar3[0x11];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  local_54 = s_cState_Hide_001cc868;
  local_58 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),4,&local_58);
  iVar11 = piVar4[0x25e];
  uVar9 = puVar3[0x15];
  uVar16 = puVar3[0x16];
  uVar12 = puVar3[0x19];
  uVar13 = puVar3[0x18];
  uVar15 = puVar3[0x17];
  *(undefined4 *)(iVar11 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar9;
  iVar11 = piVar4[0x25f];
  *(undefined4 *)(iVar11 + 0x20) = uVar16;
  *(undefined4 *)(iVar11 + 0x24) = uVar15;
  iVar11 = piVar4[0x260];
  *(undefined4 *)(iVar11 + 0x20) = uVar13;
  *(undefined4 *)(iVar11 + 0x24) = uVar12;
  if ((char)piVar4[0x264] == '\n') {
    func_004BD474((int)piVar4);
    func_00618654((int)piVar4,0,0);
    piVar4[0x261] = 0;
  }
  else {
    func_00618654((int)piVar4,piVar4[0x261],0);
  }
  if (*(short *)((int)param_2 + 0x2a) == 1) {
    *(undefined1 *)((int)piVar4 + 0x853) = 4;
    func_004BD280((int)piVar4,4,0);
  }
  func_004C03B8((int)piVar4,DAT_001cc8f4);
  if ((char)piVar4[0x264] == '\n') {
    func_004BDB2C(piVar4,piVar4[0x103],DAT_001cc8f8);
  }
  iVar11 = DAT_001cc8fc << 2;
  piVar4[0x250] = DAT_001cc8fc;
  piVar4[0x251] = iVar11;
  return piVar4;
}


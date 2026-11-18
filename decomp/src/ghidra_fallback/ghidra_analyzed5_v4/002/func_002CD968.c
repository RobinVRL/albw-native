#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00623578(int param_1,int param_2,undefined1 param_3);
extern int func_006241FC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam002cdda8;
extern undefined4 uRam002cddac;
extern undefined4 uRam002cddb0;
extern int DAT_002cdd84;
extern int *DAT_002cdd88;
extern undefined DAT_002cdd8c;
extern int DAT_002cdd9c;
extern undefined4 DAT_002cdda0;
extern undefined4 *DAT_002cddb4;
extern undefined *DAT_002cddb8;
extern int DAT_002cddbc;
extern undefined4 *DAT_002cdf1c;
extern int DAT_002cdf20;
extern char s_cState_EventEnd_002cdde8[];
extern char s_cState_Event_002cddd8[];
extern char s_cState_Hide_002cdf04[];
extern char s_cState_Idle_002cdf10[];
extern char s_cState_Wait_002cddc0[];
extern char s_cState_Walk_002cddcc[];

// USA 002CD968 <- EU 002CD944 (Ghidra, non-matching)
// GLOBAL DAT_002cdd84 int
// GLOBAL DAT_002cdd88 int *
// GLOBAL DAT_002cdd8c undefined
// GLOBAL DAT_002cdd9c int
// GLOBAL DAT_002cdda0 undefined4
// GLOBAL DAT_002cddb4 undefined4 *
// GLOBAL DAT_002cddb8 undefined *
// GLOBAL DAT_002cddbc int
// GLOBAL DAT_002cdf1c undefined4 *
// GLOBAL DAT_002cdf20 int
// GLOBAL UNK_002cdda8 int
// GLOBAL UNK_002cddac undefined4
// GLOBAL UNK_002cddb0 undefined4
// GLOBAL s_cState_EventEnd_002cdde8 string
// GLOBAL s_cState_Event_002cddd8 string
// GLOBAL s_cState_Hide_002cdf04 string
// GLOBAL s_cState_Idle_002cdf10 string
// GLOBAL s_cState_Wait_002cddc0 string
// GLOBAL s_cState_Walk_002cddcc string

int * func_002CD968(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define auStack_bc ((uint *)(albw_frame + 0x4))
  #define puStack_b4 (*(undefined4 * *)(albw_frame + 0xc))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_ac (*(int *)(albw_frame + 0x14))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_9c (*(uint *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_64 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_50 (*(int *)(albw_frame + 0x70))
  #define local_4c (*(char * *)(albw_frame + 0x74))
  #define local_48 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined1 *)(albw_frame + 0x84))
  #define local_3b (*(undefined1 *)(albw_frame + 0x85))
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_3b = 1;
  piVar4 = (int *)func_006241FC(param_1,param_2,5,0xff,&local_48);
  iVar10 = DAT_002cdd84 + 0xb8;
  *piVar4 = DAT_002cdd84;
  piVar4[200] = iVar10;
  iVar10 = func_0014E428((int)piVar4,0,1,0,0,0,0);
  piVar14 = piVar4 + 0x264;
  piVar4[0x263] = iVar10;
  piVar4[0x264] = 0;
  bVar3 = func_00584B94(*DAT_002cdd88,0x144);
  iVar10 = DAT_002cdd9c;
  if (bVar3) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
  }
  else {
    local_4c = &DAT_002cdd8c;
    local_50 = DAT_002cdd9c;
    func_004C173C(piVar4,6,DAT_002cdda0);
    bVar3 = func_00588BF0((int)piVar4,0);
    if (bVar3) {
      func_004BD280((int)piVar4,5,0);
      *(undefined1 *)((int)piVar4 + 0x855) = 5;
    }
    else {
      func_004BD280((int)piVar4,4,0);
      *(undefined1 *)((int)piVar4 + 0x855) = 4;
    }
    func_004BC8D8((int)piVar4);
    iVar5 = func_0014E904((int)piVar4,1,0);
    piVar4[0x264] = iVar5;
    local_4c = (char *)0x2cdda4;
    local_50 = iVar10;
    func_00169688((uint *)*piVar14,0,&local_50,*(int *)(piVar4[0xb4] + 0x1cc));
    func_00133870(*piVar14,0,piVar4[0x263]);
    uVar12 = 0;
    func_0016A02C(*piVar14,-1,(int *)0xffffffff,0);
    puStack_b4 = &uStack_b0;
    auStack_bc[1] = 3;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_b0 = 0;
    auStack_bc[0] = 1;
    uStack_a4 = uRam002cddb0;
    uStack_a0 = uRam002cddac;
    uStack_9c = uVar12 | 0xff;
    iStack_ac = iRam002cdda8;
    uStack_a8 = uRam002cddac;
    iVar5 = iRam002cdda8;
    func_0016898C(piVar4[0x264],auStack_bc);
    func_004CF478(piVar4[0x263],0);
    *(undefined4 *)(piVar4[0x263] + 0x134) = *(undefined4 *)(piVar4[0x1e8] + 0x134);
    *(undefined1 *)((int)piVar4 + 0x966) = 6;
    piVar4[0x25d] = (int)piVar4;
    iVar6 = func_0010BA78(0x60);
    piVar4[0x25e] = iVar6;
    puVar2 = DAT_002cddb4;
    piVar4[0x25f] = iVar6 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
    iVar9 = 6;
    puVar7 = (undefined4 *)(iVar6 + -8);
    do {
      uVar15 = puVar2[0x3d];
      iVar9 = iVar9 + -1;
      puVar7[2] = puVar2[0x3c];
      puVar7[3] = uVar15;
      uVar15 = puVar2[0x3d];
      puVar7[4] = puVar2[0x3c];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    } while (iVar9 != 0);
    bVar1 = *(byte *)((int)piVar4 + 0x966);
    uVar12 = (uint)bVar1;
    puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
    piVar4[0x260] = (int)puVar7;
    if (uVar12 != 0) {
      puVar8 = puVar7 + -2;
      if ((bVar1 & 1) != 0) {
        uVar15 = puVar2[5];
        *puVar7 = puVar2[4];
        puVar7[1] = uVar15;
        puVar8 = puVar7;
      }
      for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar15 = puVar2[5];
        puVar8[2] = puVar2[4];
        puVar8[3] = uVar15;
        uVar15 = puVar2[5];
        puVar8[4] = puVar2[4];
        puVar8[5] = uVar15;
        puVar8 = puVar8 + 4;
      }
    }
    puVar7 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
    iVar6 = 0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x24;
      puVar7[1] = 6;
      iVar6 = func_00100118((int)(puVar7 + 2),DAT_002cddb8,0x24,6);
    }
    if (iVar6 != 0) {
      piVar4[0x25a] = 6;
      piVar4[0x25b] = iVar6;
    }
    iVar6 = DAT_002cddbc;
    piVar4[0xd5] = (int)(piVar4 + 600);
    *(undefined2 *)(iVar6 + (int)piVar4) = 6;
    local_4c = s_cState_Wait_002cddc0;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),0,&local_50);
    puVar7 = (undefined4 *)piVar4[0x25e];
    uVar13 = puVar2[1];
    uVar15 = puVar2[2];
    uVar11 = puVar2[3];
    uVar16 = puVar2[4];
    uVar17 = puVar2[5];
    *puVar7 = *puVar2;
    puVar7[1] = uVar13;
    puVar7 = (undefined4 *)piVar4[0x25f];
    *puVar7 = uVar15;
    puVar7[1] = uVar11;
    puVar7 = (undefined4 *)piVar4[0x260];
    *puVar7 = uVar16;
    puVar7[1] = uVar17;
    local_4c = s_cState_Walk_002cddcc;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),1,&local_50);
    iVar6 = piVar4[0x25e];
    uVar15 = puVar2[7];
    uVar13 = puVar2[8];
    uVar11 = puVar2[9];
    *(undefined4 *)(iVar6 + 8) = puVar2[6];
    *(undefined4 *)(iVar6 + 0xc) = uVar15;
    iVar6 = piVar4[0x25f];
    *(undefined4 *)(iVar6 + 8) = uVar13;
    *(undefined4 *)(iVar6 + 0xc) = uVar11;
    iVar6 = piVar4[0x260];
    *(undefined4 *)(iVar6 + 8) = uVar16;
    *(undefined4 *)(iVar6 + 0xc) = uVar17;
    local_4c = s_cState_Event_002cddd8;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),2,&local_50);
    iVar6 = piVar4[0x25e];
    uVar13 = puVar2[0xb];
    uVar15 = puVar2[0xc];
    uVar11 = puVar2[0xd];
    *(undefined4 *)(iVar6 + 0x10) = puVar2[10];
    *(undefined4 *)(iVar6 + 0x14) = uVar13;
    iVar6 = piVar4[0x25f];
    *(undefined4 *)(iVar6 + 0x10) = uVar15;
    *(undefined4 *)(iVar6 + 0x14) = uVar11;
    iVar6 = piVar4[0x260];
    *(undefined4 *)(iVar6 + 0x10) = uVar16;
    *(undefined4 *)(iVar6 + 0x14) = uVar17;
    local_4c = s_cState_EventEnd_002cdde8;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),3,&local_50);
    uVar11 = puVar2[0x10];
    uVar13 = puVar2[0x11];
    uVar16 = puVar2[0x12];
    uVar17 = puVar2[0xf];
    iVar6 = piVar4[0x25e];
    uVar15 = puVar2[0x13];
    *(undefined4 *)(iVar6 + 0x18) = puVar2[0xe];
    *(undefined4 *)(iVar6 + 0x1c) = uVar17;
    iVar6 = piVar4[0x25f];
    *(undefined4 *)(iVar6 + 0x18) = uVar11;
    *(undefined4 *)(iVar6 + 0x1c) = uVar13;
    iVar6 = piVar4[0x260];
    *(undefined4 *)(iVar6 + 0x18) = uVar16;
    *(undefined4 *)(iVar6 + 0x1c) = uVar15;
    local_4c = s_cState_Hide_002cdf04;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),4,&local_50);
    iVar6 = piVar4[0x25e];
    uVar15 = puVar2[0x15];
    uVar11 = puVar2[0x16];
    uVar13 = puVar2[0x17];
    uVar16 = puVar2[0x18];
    uVar17 = puVar2[0x19];
    *(undefined4 *)(iVar6 + 0x20) = puVar2[0x14];
    *(undefined4 *)(iVar6 + 0x24) = uVar15;
    iVar6 = piVar4[0x25f];
    *(undefined4 *)(iVar6 + 0x20) = uVar11;
    *(undefined4 *)(iVar6 + 0x24) = uVar13;
    iVar6 = piVar4[0x260];
    *(undefined4 *)(iVar6 + 0x20) = uVar16;
    *(undefined4 *)(iVar6 + 0x24) = uVar17;
    local_4c = s_cState_Idle_002cdf10;
    local_50 = iVar10;
    func_0010BEC4((int)(piVar4 + 600),5,&local_50);
    iVar10 = piVar4[0x25e];
    uVar13 = puVar2[0x1b];
    uVar15 = puVar2[0x1c];
    uVar16 = puVar2[0x1d];
    uVar11 = puVar2[5];
    uVar17 = puVar2[4];
    *(undefined4 *)(iVar10 + 0x28) = puVar2[0x1a];
    *(undefined4 *)(iVar10 + 0x2c) = uVar13;
    iVar10 = piVar4[0x25f];
    *(undefined4 *)(iVar10 + 0x28) = uVar15;
    *(undefined4 *)(iVar10 + 0x2c) = uVar16;
    iVar10 = piVar4[0x260];
    *(undefined4 *)(iVar10 + 0x28) = uVar17;
    *(undefined4 *)(iVar10 + 0x2c) = uVar11;
    func_00623578((int)piVar4,5,0);
    func_004C03B8((int)piVar4,DAT_002cdf1c);
    iVar10 = DAT_002cdf20;
    piVar4[0x1fe] = iVar5;
    piVar4[0x1ff] = iVar5;
    piVar4[0x200] = iVar10;
    piVar4[0x22b] = piVar4[0x22b] | 0x12;
  }
  return piVar4;
}


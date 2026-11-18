#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004BC8D8(int param_1);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F042C(void);
extern int func_00527E38(int param_1,int param_2);
extern int func_0054D8B0(int param_1,undefined4 param_2,uint param_3);
extern int func_0061D008(int param_1,int param_2,undefined1 param_3);
extern int func_0061DC8C(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam00246504;
extern undefined4 *puRam002464fc;
extern undefined4 *puRam00246500;
extern undefined4 *puRam00246738;
extern undefined4 *DAT_002464c4;
extern int DAT_002464c8;
extern int *DAT_002464cc;
extern int *DAT_002464d0;
extern uint *DAT_002464d4;
extern float DAT_002464d8;
extern int DAT_002464dc;
extern undefined4 DAT_002464e0;
extern int DAT_002464e4;
extern undefined4 *DAT_002464e8;
extern undefined4 DAT_002464ec;
extern int *DAT_002464f0;
extern undefined4 DAT_002464f4;
extern undefined4 DAT_002464f8;
extern char s_cState_EventEnd_00246708[];
extern char s_cState_Event_002466f8[];
extern char s_cState_Hide_00246718[];
extern char s_cState_SceneChange_00246724[];
extern char s_cState_Wait_00246508[];
extern char s_cState_Walk_00246514[];

// USA 00246008 <- EU 00246008 (Ghidra, non-matching)
// GLOBAL DAT_002464c4 undefined4 *
// GLOBAL DAT_002464c8 int
// GLOBAL DAT_002464cc int *
// GLOBAL DAT_002464d0 int *
// GLOBAL DAT_002464d4 uint *
// GLOBAL DAT_002464d8 float
// GLOBAL DAT_002464dc int
// GLOBAL DAT_002464e0 undefined4
// GLOBAL DAT_002464e4 int
// GLOBAL DAT_002464e8 undefined4 *
// GLOBAL DAT_002464ec undefined4
// GLOBAL DAT_002464f0 int *
// GLOBAL DAT_002464f4 undefined4
// GLOBAL DAT_002464f8 undefined4
// GLOBAL UNK_002464fc undefined4 *
// GLOBAL UNK_00246500 undefined *
// GLOBAL UNK_00246504 int
// GLOBAL UNK_00246738 undefined4 *
// GLOBAL s_cState_EventEnd_00246708 string
// GLOBAL s_cState_Event_002466f8 string
// GLOBAL s_cState_Hide_00246718 string
// GLOBAL s_cState_SceneChange_00246724 string
// GLOBAL s_cState_Wait_00246508 string
// GLOBAL s_cState_Walk_00246514 string

int * func_00246008(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  float fVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_dc (*(float *)(albw_frame + 0x4))
  #define local_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_cc (*(int *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(int *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x28))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x29))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined1 *)(albw_frame + 0x44))
  #define local_9b (*(undefined1 *)(albw_frame + 0x45))
  #define iStack_98 (*(int *)(albw_frame + 0x48))
  #define pcStack_94 (*(char * *)(albw_frame + 0x4c))
  #define local_90 ((uint *)(albw_frame + 0x50))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x58))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(undefined4 *)(albw_frame + 0x64))
  #define local_78 (*(undefined4 *)(albw_frame + 0x68))
  #define local_74 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_70 (*(uint *)(albw_frame + 0x70))
  #define local_3c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_38 (*(undefined1 *)(albw_frame + 0xa8))
  piVar3 = (int *)func_0061DC8C(param_1,param_2,0,0xff,DAT_002464c4);
  iVar4 = DAT_002464c8;
  piVar3[200] = DAT_002464c8 + 0xb8;
  *piVar3 = iVar4;
  piVar3[0x263] = 0;
  *(undefined1 *)(piVar3 + 0x264) = 0;
  *(undefined1 *)((int)piVar3 + 0x991) = 0;
  iVar4 = piVar3[0x1e2];
  iVar10 = *(int *)(iVar4 + 4);
  iVar11 = *(int *)(iVar4 + 8);
  piVar3[0x267] = *(int *)(iVar4 + 0xc);
  piVar3[0x265] = iVar10;
  piVar3[0x266] = iVar11;
  iVar4 = func_004F042C();
  if ((iVar4 != 0) && (*(char *)(*DAT_002464cc + 0x25) != '\x03')) {
    if (*DAT_002464d0 != 0) {
      uVar5 = (uint)*(short *)((int)piVar3 + 0x32);
      iVar10 = *DAT_002464d0 + 0x588;
      if (uVar5 < 0x80) {
        *(uint *)(iVar10 + ((int)uVar5 >> 5) * 4) =
             *(uint *)(iVar10 + ((int)uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
      }
    }
    iVar4 = func_00527E38(iVar4,(int)*(short *)((int)piVar3 + 0x32));
    if (iVar4 == 0) {
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    }
    else {
      piVar3[0x22b] = piVar3[0x22b] | 0xc1;
      iVar4 = func_0019B04C(*DAT_002464d4);
      piVar6 = func_0054D8B0(iVar4 + 0x18,piVar3,0);
      piVar3[0x1e3] = (int)piVar6;
      local_d4 = DAT_002464dc;
      fVar19 = DAT_002464d8;
      local_d0 = 4;
      *(undefined2 *)(piVar3[0x1e2] + 0x28) = 4;
      local_dc = fVar19;
      local_d8 = fVar19;
      func_004D7F70(&local_dc,piVar3[0xfa]);
      func_00115C54(&local_dc,&local_dc,(float *)(piVar3 + 0x265));
      iVar4 = piVar3[0x1e2];
      *(float *)(iVar4 + 4) = local_dc;
      *(float *)(iVar4 + 8) = local_d8;
      *(int *)(iVar4 + 0xc) = local_d4;
      func_004356B4((int *)piVar3[0x1e2]);
      iVar4 = DAT_002464e4;
      local_c4 = *(int *)(piVar3[0xb4] + 0x1c8);
      bVar18 = *(int *)(local_c4 + 200) != 0;
      if (bVar18) {
        local_c4 = **(int **)(local_c4 + 0xd0);
      }
      local_d4 = DAT_002464e4;
      local_d0 = DAT_002464e0;
      iStack_cc = DAT_002464e4;
      if (!bVar18) {
        local_c4 = 0;
      }
      local_c8 = DAT_002464e0;
      uStack_c0 = 0;
      local_9c = 1;
      local_b7 = 0;
      local_b0 = 0;
      local_bc = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_9b = 0xc4;
      local_b4 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b8 = 1;
      piVar6 = func_002C2D00(&local_d4);
      piVar3[0x1e8] = (int)piVar6;
      piVar3[0xd3] = (int)piVar6;
      func_0036D0C8(piVar3 + 0x263,0);
      puVar2 = DAT_002464e8;
      if (piVar3[0x263] == 0) {
        iVar10 = 1;
      }
      else {
        iVar10 = func_0010983C(*DAT_002464e8,piVar3[0x263]);
      }
      puVar7 = (undefined4 *)func_0010BAB4(0xa8);
      puVar8 = (uint *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        puVar8 = func_0016A2FC(puVar7,3,DAT_002464ec,1);
      }
      piVar6 = DAT_002464f0;
      piVar3[0x1eb] = (int)puVar8;
      piVar15 = piVar3 + 0x1eb;
      uVar5 = *(uint *)(*piVar6 + 0x10);
      func_0016A2A4(puVar8,0,*(int **)(uVar5 + 0x110));
      func_0016A2A4((uint *)*piVar15,1,*(int **)(uVar5 + 0x11c));
      func_0016A2A4((uint *)*piVar15,2,*(int **)(uVar5 + 0x120));
      func_0016A02C(*piVar15,-1,(int *)0xffffffff,0);
      local_88 = &local_84;
      local_90[1] = 3;
      local_3c = 10;
      local_38 = 0;
      local_90[0] = 1;
      local_84 = 0;
      local_7c = DAT_002464f4;
      local_78 = DAT_002464f8;
      local_70 = uVar5 | 0xff;
      local_74 = DAT_002464f4;
      uVar16 = DAT_002464f4;
      local_80 = fVar19;
      func_0016898C(piVar3[0x1eb],local_90);
      *(undefined1 *)(*(int *)(*piVar15 + 0x14) + 0x1c) = 1;
      *(undefined4 *)(*(int *)(piVar3[0x1eb] + 0x14) + 0x10) = uVar16;
      if (iVar10 != 1) {
        func_0010983C(*puVar2,iVar10);
      }
      func_004BC8D8((int)piVar3);
      piVar3[0x25d] = (int)piVar3;
      *(undefined1 *)((int)piVar3 + 0x966) = 6;
      iVar10 = func_0010BA78(0x60);
      puVar2 = puRam002464fc;
      piVar3[0x25e] = iVar10;
      piVar3[0x25f] = iVar10 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
      iVar11 = 6;
      puVar7 = (undefined4 *)(iVar10 + -8);
      do {
        uVar16 = puVar2[0x1f];
        iVar11 = iVar11 + -1;
        puVar7[2] = puVar2[0x1e];
        puVar7[3] = uVar16;
        uVar16 = puVar2[0x1f];
        puVar7[4] = puVar2[0x1e];
        puVar7[5] = uVar16;
        puVar7 = puVar7 + 4;
      } while (iVar11 != 0);
      bVar1 = *(byte *)((int)piVar3 + 0x966);
      uVar5 = (uint)bVar1;
      puVar7 = (undefined4 *)func_0010BA78(uVar5 << 3);
      piVar3[0x260] = (int)puVar7;
      if (uVar5 != 0) {
        puVar9 = puVar7 + -2;
        if ((bVar1 & 1) != 0) {
          uVar16 = puVar2[5];
          *puVar7 = puVar2[4];
          puVar7[1] = uVar16;
          puVar9 = puVar7;
        }
        for (iVar10 = (int)uVar5 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar16 = puVar2[5];
          puVar9[2] = puVar2[4];
          puVar9[3] = uVar16;
          uVar16 = puVar2[5];
          puVar9[4] = puVar2[4];
          puVar9[5] = uVar16;
          puVar9 = puVar9 + 4;
        }
      }
      puVar7 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
      iVar10 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x24;
        puVar7[1] = 6;
        iVar10 = func_00100118((int)(puVar7 + 2),puRam00246500,0x24,6);
      }
      if (iVar10 != 0) {
        piVar3[0x25a] = 6;
        piVar3[0x25b] = iVar10;
      }
      iVar10 = iRam00246504;
      piVar3[0xd5] = (int)(piVar3 + 600);
      *(undefined2 *)(iVar10 + (int)piVar3) = 6;
      pcStack_94 = s_cState_Wait_00246508;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),0,&iStack_98);
      puVar7 = (undefined4 *)piVar3[0x25e];
      uVar13 = puVar2[1];
      uVar16 = puVar2[2];
      uVar12 = puVar2[3];
      uVar20 = *(undefined8 *)(puVar2 + 4);
      *puVar7 = *puVar2;
      puVar7[1] = uVar13;
      puVar7 = (undefined4 *)piVar3[0x25f];
      *puVar7 = uVar16;
      puVar7[1] = uVar12;
      puVar7 = (undefined4 *)piVar3[0x260];
      *puVar7 = (int)uVar20;
      puVar7[1] = (int)((ulonglong)uVar20 >> 0x20);
      pcStack_94 = s_cState_Walk_00246514;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),1,&iStack_98);
      iVar10 = piVar3[0x25e];
      uVar16 = puVar2[7];
      uVar13 = puVar2[8];
      uVar12 = puVar2[9];
      *(undefined4 *)(iVar10 + 8) = puVar2[6];
      *(undefined4 *)(iVar10 + 0xc) = uVar16;
      iVar10 = piVar3[0x25f];
      *(undefined4 *)(iVar10 + 8) = uVar13;
      *(undefined4 *)(iVar10 + 0xc) = uVar12;
      iVar10 = piVar3[0x260];
      *(int *)(iVar10 + 8) = (int)uVar20;
      *(int *)(iVar10 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
      pcStack_94 = s_cState_Event_002466f8;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),2,&iStack_98);
      iVar10 = piVar3[0x25e];
      uVar16 = puVar2[0xb];
      uVar12 = puVar2[0xc];
      uVar13 = puVar2[0xd];
      *(undefined4 *)(iVar10 + 0x10) = puVar2[10];
      *(undefined4 *)(iVar10 + 0x14) = uVar16;
      iVar10 = piVar3[0x25f];
      *(undefined4 *)(iVar10 + 0x10) = uVar12;
      *(undefined4 *)(iVar10 + 0x14) = uVar13;
      iVar10 = piVar3[0x260];
      *(int *)(iVar10 + 0x10) = (int)uVar20;
      *(int *)(iVar10 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
      pcStack_94 = s_cState_EventEnd_00246708;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),3,&iStack_98);
      iVar10 = piVar3[0x25e];
      uVar16 = puVar2[0x11];
      uVar14 = puVar2[0x12];
      uVar13 = puVar2[0xf];
      uVar17 = puVar2[0x10];
      uVar12 = puVar2[0x13];
      *(undefined4 *)(iVar10 + 0x18) = puVar2[0xe];
      *(undefined4 *)(iVar10 + 0x1c) = uVar13;
      iVar10 = piVar3[0x25f];
      *(undefined4 *)(iVar10 + 0x18) = uVar17;
      *(undefined4 *)(iVar10 + 0x1c) = uVar16;
      iVar10 = piVar3[0x260];
      *(undefined4 *)(iVar10 + 0x18) = uVar14;
      *(undefined4 *)(iVar10 + 0x1c) = uVar12;
      pcStack_94 = s_cState_Hide_00246718;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),4,&iStack_98);
      iVar10 = piVar3[0x25e];
      uVar16 = puVar2[0x15];
      uVar12 = puVar2[0x16];
      uVar14 = puVar2[0x17];
      uVar13 = puVar2[0x18];
      uVar17 = puVar2[0x19];
      *(undefined4 *)(iVar10 + 0x20) = puVar2[0x14];
      *(undefined4 *)(iVar10 + 0x24) = uVar16;
      iVar10 = piVar3[0x25f];
      *(undefined4 *)(iVar10 + 0x20) = uVar12;
      *(undefined4 *)(iVar10 + 0x24) = uVar14;
      iVar10 = piVar3[0x260];
      *(undefined4 *)(iVar10 + 0x20) = uVar13;
      *(undefined4 *)(iVar10 + 0x24) = uVar17;
      pcStack_94 = s_cState_SceneChange_00246724;
      iStack_98 = iVar4;
      func_0010BEC4((int)(piVar3 + 600),5,&iStack_98);
      iVar4 = piVar3[0x25e];
      uVar12 = puVar2[0x1b];
      uVar14 = puVar2[0x1c];
      uVar16 = puVar2[0x1d];
      uVar13 = puVar2[5];
      uVar17 = puVar2[4];
      *(undefined4 *)(iVar4 + 0x28) = puVar2[0x1a];
      *(undefined4 *)(iVar4 + 0x2c) = uVar12;
      iVar4 = piVar3[0x25f];
      *(undefined4 *)(iVar4 + 0x28) = uVar14;
      *(undefined4 *)(iVar4 + 0x2c) = uVar16;
      iVar4 = piVar3[0x260];
      *(undefined4 *)(iVar4 + 0x28) = uVar17;
      *(undefined4 *)(iVar4 + 0x2c) = uVar13;
      func_0061D008((int)piVar3,piVar3[0x261],0);
      func_004C03B8((int)piVar3,puRam00246738);
      *(undefined1 *)((int)piVar3 + 0x5a9) = 0;
    }
    return piVar3;
  }
  *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
  return piVar3;
}


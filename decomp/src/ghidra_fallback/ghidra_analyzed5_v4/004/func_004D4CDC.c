#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_00539A74(int param_1,int param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern undefined *DAT_004d50dc;
extern int DAT_004d50e0;
extern int DAT_004d50e4;
extern undefined4 DAT_004d50e8;
extern undefined4 DAT_004d50ec;
extern undefined4 DAT_004d50f0;
extern int *DAT_004d50f4;
extern float DAT_004d50f8;
extern int *DAT_004d50fc;
extern float DAT_004d5100;
extern int *DAT_004d5104;
extern int *DAT_004d5108;
extern int DAT_004d510c;
extern int DAT_004d5110;
extern int *DAT_004d5114;
extern undefined4 *DAT_004d545c;
extern undefined *DAT_004d5460;

// USA 004D4CDC <- EU 004D4CB4 (Ghidra, non-matching)
// GLOBAL DAT_004d50dc undefined *
// GLOBAL DAT_004d50e0 int
// GLOBAL DAT_004d50e4 int
// GLOBAL DAT_004d50e8 undefined4
// GLOBAL DAT_004d50ec undefined4
// GLOBAL DAT_004d50f0 undefined4
// GLOBAL DAT_004d50f4 int *
// GLOBAL DAT_004d50f8 float
// GLOBAL DAT_004d50fc int *
// GLOBAL DAT_004d5100 float
// GLOBAL DAT_004d5104 int *
// GLOBAL DAT_004d5108 int *
// GLOBAL DAT_004d510c int
// GLOBAL DAT_004d5110 int
// GLOBAL DAT_004d5114 int *
// GLOBAL DAT_004d545c undefined4 *
// GLOBAL DAT_004d5460 undefined *

void func_004D4CDC(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(int * *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_3c (*(int *)(albw_frame + 0x34))
  #define local_34 (*(undefined1 * *)(albw_frame + 0x3c))
  iVar10 = *(int *)(param_1 + 0x478);
  if (0 < iVar10) {
    puVar4 = (undefined4 *)func_0010CEE0(iVar10 * 0x118 + 8,(int *)0x0,4);
    iVar5 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x118;
      puVar4[1] = iVar10;
      iVar5 = func_00100118((int)(puVar4 + 2),DAT_004d50dc,0x118,iVar10);
    }
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x624) = iVar5;
      *(int *)(param_1 + 0x620) = iVar10;
    }
  }
  piVar13 = *(int **)(param_1 + 0x480);
  uVar14 = 0;
  local_54 = piVar13 + *(int *)(param_1 + 0x478);
  if (piVar13 != local_54) {
    local_58 = DAT_004d50e8;
    local_50 = DAT_004d50ec;
    local_60 = DAT_004d50f0;
    local_3c = param_1 + 0x200;
    local_48 = param_1 + 0x400;
    iVar10 = DAT_004d50e0;
    iVar5 = DAT_004d50e4;
    do {
      piVar12 = (int *)0x0;
      iVar6 = func_00588BE4(param_1);
      piVar1 = DAT_004d50f4;
      if (iVar6 == *DAT_004d50f4) {
        local_70[0] = 8;
        piVar12 = func_00435714(local_70);
        piVar12[0x19] = iVar10;
        piVar12[0x1a] = iVar5;
        piVar12[0x1b] = iVar5;
        piVar12[0x1c] = iVar5;
        piVar12[0x1d] = iVar10;
        piVar12[0x1e] = iVar5;
        piVar12[0x1f] = iVar5;
        piVar12[0x20] = iVar5;
        piVar12[0x21] = iVar10;
        func_00115C54((float *)(piVar12 + 1),(float *)(piVar12 + 1),(float *)(*piVar13 + 4));
        fVar15 = DAT_004d50f8;
        piVar12[0x16] = iVar10;
        piVar12[0x17] = (int)ALBW_AS_U32(fVar15);
        piVar12[0x18] = iVar10;
        iVar6 = *piVar13;
        iVar16 = *(int *)(iVar6 + 4);
        fVar17 = *(float *)(iVar6 + 8);
        iVar6 = *(int *)(iVar6 + 0xc);
        *(float *)(local_48 + 0x21c) = fVar15;
        piVar12[1] = iVar16;
        piVar12[2] = (int)ALBW_AS_U32((fVar17 + fVar15));
        piVar12[3] = iVar6;
        func_004356B4(piVar12);
        piVar12[0xb] = piVar12[0xb] | 0xf0;
        local_68[0] = CONCAT22((*(undefined2 *)((char *)&local_68[0] + 2)),0xa0);
LAB_004d4f7c:
        *(undefined2 *)(piVar12 + 10) = 0xa0;
      }
      else {
        iVar6 = func_00588BE4(param_1);
        if (iVar6 == *DAT_004d50fc) {
          piVar12 = (int *)func_0054D964(param_1,0);
          iVar6 = *piVar13;
          iVar16 = *(int *)(iVar6 + 4);
          fVar15 = *(float *)(iVar6 + 8) + DAT_004d50f8;
          fVar17 = *(float *)(iVar6 + 0xc) - DAT_004d5100;
          *(float *)(local_48 + 0x21c) = DAT_004d50f8;
          piVar12[1] = iVar16;
          piVar12[2] = (int)ALBW_AS_U32(fVar15);
          piVar12[3] = (int)ALBW_AS_U32(fVar17);
          func_004356B4(piVar12);
          piVar12[0xb] = piVar12[0xb] & 0xfffff8ffU | 0x3f1;
        }
        else {
          iVar6 = func_00588BE4(param_1);
          if ((iVar6 == *DAT_004d5104) || (iVar6 = func_00588BE4(param_1), iVar6 == *DAT_004d5108))
          {
            local_68[0] = 8;
            piVar12 = func_00435714(local_68);
            piVar12[0x19] = iVar10;
            piVar12[0x1a] = iVar5;
            piVar12[0x1b] = iVar5;
            piVar12[0x1c] = iVar5;
            piVar12[0x1d] = iVar10;
            piVar12[0x1e] = iVar5;
            piVar12[0x1f] = iVar5;
            piVar12[0x20] = iVar5;
            piVar12[0x21] = iVar10;
            func_00115C54((float *)(piVar12 + 1),(float *)(piVar12 + 1),(float *)(*piVar13 + 4));
            iVar6 = DAT_004d510c;
            fVar15 = DAT_004d50f8;
            piVar12[0x16] = DAT_004d510c;
            piVar12[0x17] = iVar10;
            piVar12[0x18] = iVar6;
            iVar6 = *piVar13;
            iVar16 = *(int *)(iVar6 + 0xc);
            iVar18 = *(int *)(iVar6 + 4);
            fVar17 = *(float *)(iVar6 + 8);
            *(float *)(local_48 + 0x21c) = fVar15;
            piVar12[1] = iVar18;
            piVar12[2] = (int)ALBW_AS_U32((fVar17 + fVar15));
            piVar12[3] = iVar16;
            func_004356B4(piVar12);
            goto LAB_004d4f7c;
          }
        }
      }
      if (uVar14 < *(uint *)(param_1 + 0x620)) {
        puVar11 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar14 * 0x118);
      }
      else {
        puVar11 = *(undefined1 **)(param_1 + 0x624);
      }
      local_34 = puVar11 + 0x100;
      *(int **)(puVar11 + 0x14) = piVar12;
      if (puVar11[0x10f] == '\0') {
        puVar11[0x10f] = 1;
        *(int **)(puVar11 + 0x28) = piVar12;
        local_68[0] = *(uint *)(param_1 + 0x2cc);
        func_004EDEA0((int)(puVar11 + 0x18),local_68);
        *(uint *)(puVar11 + 0x50) = uVar14;
        *(undefined2 *)(puVar11 + 0x30) = *(undefined2 *)(param_1 + 0x54);
        puVar11[0x39] = 0;
        puVar11[0x3a] = 0;
        *(undefined2 *)(puVar11 + 0x48) = 0;
        *(int **)(puVar11 + 0x94) = piVar12;
        local_68[0] = *(uint *)(local_3c + 0xcc);
        func_004EDAD0((int)(puVar11 + 0x7c),local_68);
        iVar6 = func_00588BE4(param_1);
        if (iVar6 == *DAT_004d50fc) {
          uVar8 = *(undefined4 *)(DAT_004d5110 + 0x18);
          uVar9 = *(undefined4 *)(DAT_004d5110 + 0x1c);
          *(undefined1 **)(puVar11 + 0xf0) = puVar11;
          *(undefined4 *)(puVar11 + 0xf4) = uVar8;
          *(undefined4 *)(puVar11 + 0xf8) = uVar9;
          *(undefined1 **)(puVar11 + 0xa4) = puVar11 + 0xec;
        }
        piVar12 = DAT_004d5114;
        *(undefined2 *)(puVar11 + 0xa8) = *(undefined2 *)(param_1 + 0x54);
        func_004A8BFC(*piVar12,(int)(puVar11 + 0x18),0xd);
        func_004A879C(*piVar12,(int)(puVar11 + 0x7c),2);
      }
      if (uVar14 < *(uint *)(param_1 + 0x604)) {
        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar14 * 4);
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(puVar11 + 8) = uVar8;
      puVar7 = (undefined4 *)func_0010BAB4(0x48);
      puVar4 = (undefined4 *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        puVar4 = func_0034CAA0(puVar7);
      }
      *(undefined4 **)(puVar11 + 0xfc) = puVar4;
      if ((uVar14 < *(uint *)(param_1 + 0x628)) &&
         (iVar6 = *(int *)(*(int *)(param_1 + 0x630) + uVar14 * 4), iVar6 != 0)) {
        *(int *)(puVar11 + 0xc) = iVar6;
        func_004CF478(iVar6,0);
      }
      puVar4 = (undefined4 *)func_0010BAB4(0x58);
      if (puVar4 == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        func_00110490(puVar4,0x58);
        puVar4 = func_0010CE7C(puVar4);
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = puVar4;
        puVar4[7] = 0;
        puVar4[8] = 0;
        *(undefined1 *)(puVar4 + 0xe) = 0;
        *puVar4 = local_58;
        uVar8 = *DAT_004d545c;
        uVar9 = DAT_004d545c[1];
        puVar7 = puVar4 + 9;
        if (puVar7 != (undefined4 *)0x0) {
          puVar4[10] = puVar4;
          puVar4[0xb] = uVar8;
          puVar4[0xc] = uVar9;
          *puVar7 = local_50;
        }
        puVar4[8] = puVar7;
        puVar2 = DAT_004d5460;
        *puVar4 = local_60;
        iVar6 = func_00100118((int)puVar4 + 0x39,puVar2,5,6);
        iVar6 = iVar6 + -0x39;
      }
      *(int *)(puVar11 + 0x10) = iVar6;
      func_004CE68C(*(int *)(puVar11 + 0xc),0,iVar6);
      (**(code **)(**(int **)(puVar11 + 0xc) + 0x10))(*(int **)(puVar11 + 0xc),0x25);
      iVar6 = func_00588BE4(param_1);
      if ((iVar6 == *piVar1) || (iVar6 = func_00588BE4(param_1), iVar6 == *DAT_004d5104)) {
        if (*(short *)(*piVar13 + 0x28) == 0) {
          iVar6 = *(int *)(puVar11 + 0x10);
          *(undefined1 *)(iVar6 + 0x42) = 1;
          *(undefined4 *)(iVar6 + 0x3e) = 0xff094b22;
        }
        else {
          iVar6 = *(int *)(puVar11 + 0x10);
          *(undefined1 *)(iVar6 + 0x42) = 1;
          *(undefined4 *)(iVar6 + 0x3e) = 0xff113c37;
        }
      }
      else if (*(short *)(*piVar13 + 0x28) == 0) {
        iVar6 = *(int *)(puVar11 + 0x10);
        *(undefined1 *)(iVar6 + 0x42) = 1;
        *(undefined4 *)(iVar6 + 0x3e) = 0xff173117;
      }
      else if (*(short *)(*piVar13 + 0x28) == 1) {
        iVar6 = *(int *)(puVar11 + 0x10);
        *(undefined1 *)(iVar6 + 0x42) = 1;
        *(undefined4 *)(iVar6 + 0x3e) = 0xff401b0e;
      }
      else {
        iVar6 = *(int *)(puVar11 + 0x10);
        *(undefined1 *)(iVar6 + 0x42) = 1;
        *(undefined4 *)(iVar6 + 0x3e) = 0xff805e53;
      }
      if ((*(short *)(*piVar13 + 0x32) != 0) && (bVar3 = func_00539A74(*piVar13,0), bVar3)) {
        func_004CF478(*(int *)(puVar11 + 8),0);
        *puVar11 = 4;
        piVar1 = DAT_004d5114;
        if (local_34[0xf] == '\x01') {
          puVar11[0x10f] = 0;
          func_004A9120(*piVar1,(int)(puVar11 + 0x18));
          func_004A8304(*piVar1,(int)(puVar11 + 0x7c));
        }
      }
      piVar13 = piVar13 + 1;
      uVar14 = uVar14 + 1;
    } while (piVar13 != local_54);
  }
  return;
}


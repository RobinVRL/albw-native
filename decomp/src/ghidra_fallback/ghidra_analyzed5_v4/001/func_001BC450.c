#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_00539A74(int param_1,int param_2);
extern undefined *DAT_001bc714;
extern int DAT_001bc718;
extern int DAT_001bc71c;
extern uint DAT_001bc720;
extern int DAT_001bc724;
extern int *DAT_001bc728;

// USA 001BC450 <- EU 001BC450 (Ghidra, non-matching)
// GLOBAL DAT_001bc714 undefined *
// GLOBAL DAT_001bc718 int
// GLOBAL DAT_001bc71c int
// GLOBAL DAT_001bc720 uint
// GLOBAL DAT_001bc724 int
// GLOBAL DAT_001bc728 int *

void func_001BC450(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c ((uint *)(albw_frame + 0x4))
  #define local_3c (*(int *)(albw_frame + 0x14))
  iVar8 = *(int *)(param_1 + 0x478);
  if (0 < iVar8) {
    puVar2 = (undefined4 *)func_0010CEE0(iVar8 * 0xd8 + 8,(int *)0x0,4);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xd8;
      puVar2[1] = iVar8;
      iVar3 = func_00100118((int)(puVar2 + 2),DAT_001bc714,0xd8,iVar8);
    }
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x624) = iVar3;
      *(int *)(param_1 + 0x620) = iVar8;
    }
  }
  piVar10 = *(int **)(param_1 + 0x480);
  uVar11 = 0;
  piVar12 = piVar10 + *(int *)(param_1 + 0x478);
  if (piVar10 != piVar12) {
    uVar16 = (ulonglong)DAT_001bc720;
    local_3c = param_1 + 0x200;
    iVar8 = DAT_001bc71c;
    iVar3 = DAT_001bc718;
    do {
      local_4c[0] = 8;
      piVar4 = func_00435714(local_4c);
      piVar4[0x19] = iVar3;
      piVar4[0x1a] = iVar8;
      piVar4[0x1b] = iVar8;
      piVar4[0x1c] = iVar8;
      piVar4[0x1d] = iVar3;
      piVar4[0x1e] = iVar8;
      piVar4[0x1f] = iVar8;
      piVar4[0x20] = iVar8;
      piVar4[0x21] = iVar3;
      func_00115C54((float *)(piVar4 + 1),(float *)(piVar4 + 1),(float *)(*piVar10 + 4));
      piVar4[0x16] = iVar3;
      fVar15 = ALBW_AS_F32(uVar16);
      piVar4[0x17] = (int)ALBW_AS_U32(fVar15);
      piVar4[0x18] = iVar3;
      iVar5 = *piVar10;
      fVar14 = *(float *)(iVar5 + 8);
      iVar13 = *(int *)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 0xc);
      *(float *)(param_1 + 0x61c) = fVar15;
      piVar4[1] = iVar13;
      piVar4[2] = (int)ALBW_AS_U32((fVar14 + fVar15));
      piVar4[3] = iVar5;
      func_004356B4(piVar4);
      piVar4[0xb] = piVar4[0xb] | 0xf0;
      *(undefined2 *)(piVar4 + 10) = 0x120;
      if (uVar11 < *(uint *)(param_1 + 0x620)) {
        puVar9 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar11 * 0xd8);
      }
      else {
        puVar9 = *(undefined1 **)(param_1 + 0x624);
      }
      *(int **)(puVar9 + 0xc) = piVar4;
      if (puVar9[0xd4] == '\0') {
        puVar9[0xd4] = 1;
        *(int **)(puVar9 + 0x20) = piVar4;
        local_4c[0] = *(uint *)(param_1 + 0x2cc);
        func_004EDEA0((int)(puVar9 + 0x10),local_4c);
        *(uint *)(puVar9 + 0x48) = uVar11;
        *(undefined2 *)(puVar9 + 0x28) = *(undefined2 *)(param_1 + 0x54);
        puVar9[0x31] = 0;
        puVar9[0x32] = 0;
        *(undefined2 *)(puVar9 + 0x40) = 0;
        *(int **)(puVar9 + 0x8c) = piVar4;
        local_4c[0] = *(uint *)(local_3c + 0xcc);
        func_004EDAD0((int)(puVar9 + 0x74),local_4c);
        piVar4 = DAT_001bc728;
        uVar7 = *(undefined4 *)(DAT_001bc724 + 8);
        uVar6 = *(undefined4 *)(DAT_001bc724 + 0xc);
        *(undefined1 **)(puVar9 + 0xc0) = puVar9;
        *(undefined1 **)(puVar9 + 0x9c) = puVar9 + 0xbc;
        *(undefined4 *)(puVar9 + 200) = uVar6;
        *(undefined4 *)(puVar9 + 0xc4) = uVar7;
        *(undefined2 *)(puVar9 + 0xa0) = *(undefined2 *)(param_1 + 0x54);
        func_004A8BFC(*piVar4,(int)(puVar9 + 0x10),0xd);
        func_004A879C(*piVar4,(int)(puVar9 + 0x74),2);
      }
      if (uVar11 < *(uint *)(param_1 + 0x604)) {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + uVar11 * 4);
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(puVar9 + 8) = uVar6;
      if ((*(short *)(*piVar10 + 0x32) != 0) && (bVar1 = func_00539A74(*piVar10,0), bVar1)) {
        func_004CF478(*(int *)(puVar9 + 8),0);
        *puVar9 = 4;
        piVar4 = DAT_001bc728;
        if (puVar9[0xd4] == '\x01') {
          puVar9[0xd4] = 0;
          func_004A9120(*piVar4,(int)(puVar9 + 0x10));
          func_004A8304(*piVar4,(int)(puVar9 + 0x74));
        }
      }
      piVar10 = piVar10 + 1;
      uVar11 = uVar11 + 1;
    } while (piVar10 != piVar12);
  }
  return;
}


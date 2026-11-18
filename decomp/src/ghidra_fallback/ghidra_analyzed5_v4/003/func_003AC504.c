#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0028FE00(int param_1,int param_2);
extern int func_003ACAB4(int param_1,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_00520FD4(void);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_003ac7d0;
extern float DAT_003ac7d4;
extern float DAT_003ac7d8;
extern uint DAT_003ac7dc;
extern int *DAT_003ac844;

// USA 003AC504 <- EU 003AC4E0 (Ghidra, non-matching)
// GLOBAL DAT_003ac7d0 float
// GLOBAL DAT_003ac7d4 float
// GLOBAL DAT_003ac7d8 float
// GLOBAL DAT_003ac7dc uint
// GLOBAL DAT_003ac844 int *

void func_003AC504(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint in_fpscr;
  float in_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  
  fVar12 = DAT_003ac7d8;
  fVar11 = DAT_003ac7d4;
  fVar10 = DAT_003ac7d0;
  iVar7 = 0;
  cVar1 = *(char *)(param_1 + 0x634);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x62c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x620) = -(fVar12 * *(float *)(param_1 + 0x624));
      iVar4 = *(int *)(param_1 + 0x62c) + 1;
      *(int *)(param_1 + 0x62c) = iVar4;
      if (iVar4 < 0xf) {
LAB_003ac7a4:
        fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar11 - fVar10 * *(float *)(param_1 + 0x628);
      }
      else {
        *(undefined1 *)(param_1 + 0x634) = 2;
      }
    }
    else {
      if (cVar1 == '\x02') {
        *(float *)(param_1 + 0x620) = DAT_003ac7d8;
        *(undefined4 *)(param_1 + 0x62c) = 0xf;
        if (*(char *)(param_1 + 0x640) == '\0') {
          bVar2 = func_00588BF0(param_1,0);
          cVar1 = *(char *)(param_1 + 0x634);
          fVar10 = fVar12;
          if (bVar2) goto joined_r0x003ac660;
          goto joined_r0x003ac66c;
        }
        bVar2 = func_00588BF0(param_1,0);
        cVar1 = *(char *)(param_1 + 0x634);
        in_s0 = fVar12;
        goto joined_r0x003ac624;
      }
      fVar10 = DAT_003ac7d4;
      if (cVar1 != '\x03') goto LAB_003ac670;
      fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x62c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x620) = -(fVar10 * *(float *)(param_1 + 0x624));
      iVar4 = *(int *)(param_1 + 0x62c) + -1;
      *(int *)(param_1 + 0x62c) = iVar4;
      if (-1 < iVar4) goto LAB_003ac7a4;
      *(undefined1 *)(param_1 + 0x634) = 0;
      fVar10 = fVar11;
    }
    func_003ACAB4(param_1,fVar10);
    goto LAB_003ac670;
  }
  *(float *)(param_1 + 0x620) = DAT_003ac7d0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  if (*(char *)(param_1 + 0x640) == '\0') {
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x634);
    fVar10 = in_s0;
    if (bVar2) goto joined_r0x003ac660;
  }
  else {
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x634);
joined_r0x003ac624:
    fVar10 = in_s0;
    if (!bVar2) {
joined_r0x003ac660:
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x634) = 3;
      }
      goto LAB_003ac670;
    }
  }
joined_r0x003ac66c:
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x634) = 1;
  }
LAB_003ac670:
  iVar4 = *(int *)(param_1 + 0x638);
  iVar9 = *(int *)(param_1 + 0x63c);
  if (iVar4 != 0) {
    uVar15 = (ulonglong)DAT_003ac7dc;
    do {
      piVar6 = (int *)(iVar9 + iVar7 * 0x20);
      fVar11 = ALBW_AS_F32(uVar15) - *(float *)(param_1 + 0x620);
      fVar13 = ALBW_AS_F32(piVar6[6]);
      fVar10 = ALBW_AS_F32(piVar6[3]);
      fVar14 = *(float *)(param_1 + 0x61c);
      fVar12 = ALBW_AS_F32(piVar6[4]);
      piVar8 = (int *)piVar6[1];
      piVar8[3] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar6[5]) + fVar11 * ALBW_AS_F32(piVar6[7])));
      piVar8[1] = (int)ALBW_AS_U32((fVar10 + fVar11 * fVar13));
      piVar8[2] = (int)ALBW_AS_U32((fVar12 + fVar14));
      func_004356B4(piVar8);
      if (*(char *)(param_1 + 0x634) == '\0') {
        *(undefined2 *)(piVar8 + 10) = 3;
      }
      else {
        *(undefined2 *)(piVar8 + 10) = 4;
      }
      iVar3 = *piVar6;
      if (*(char *)(param_1 + 0x634) == '\x02') {
        *(undefined1 *)(piVar6[2] + 0x44) = 0;
      }
      else {
        *(undefined1 *)(piVar6[2] + 0x44) = 1;
      }
      fVar12 = *(float *)(param_1 + 0x620);
      fVar11 = ALBW_AS_F32(piVar6[5]);
      iVar5 = piVar6[4];
      fVar13 = ALBW_AS_F32(piVar6[7]);
      fVar10 = ALBW_AS_F32(piVar6[3]) - fVar12 * ALBW_AS_F32(piVar6[6]);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      *(float *)(iVar3 + 0x8c) = fVar10;
      *(int *)(iVar3 + 0x9c) = iVar5;
      *(float *)(iVar3 + 0xac) = fVar11 - fVar12 * fVar13;
      func_004CEAF0(iVar3);
      func_004ED9C8(piVar6[2]);
      if (((*(char *)(param_1 + 0x634) == '\x01') &&
          (iVar3 = func_0014E2A0(param_1,piVar8,0,0x100,0,0), iVar3 != 0)) &&
         (bVar2 = func_00520FD4(), bVar2)) {
        func_0028FE00(*DAT_003ac844,1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar4);
  }
  return;
}


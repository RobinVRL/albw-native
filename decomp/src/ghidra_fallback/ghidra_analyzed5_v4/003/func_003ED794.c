#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int DAT_003edb5c;
extern int DAT_003edb60;
extern int DAT_003edb64;
extern int DAT_003edb68;

// USA 003ED794 <- EU 003ED774 (Ghidra, non-matching)
// GLOBAL DAT_003edb5c int
// GLOBAL DAT_003edb60 int
// GLOBAL DAT_003edb64 int
// GLOBAL DAT_003edb68 int

void func_003ED794(int param_1,uint *param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  iVar6 = *(int *)(param_1 + 0xd8);
  pfVar5 = (float *)param_2[0x4d];
  fVar10 = ALBW_AS_F32(param_2[9]);
  fVar9 = ALBW_AS_F32(param_2[10]);
  fVar8 = ALBW_AS_F32(param_2[8]);
  if (*(char *)(param_1 + 0x2ab) != '\0') {
    if (((DAT_003edb5c < (int)ALBW_AS_U32(ABS(fVar8))) || (DAT_003edb5c < (int)ALBW_AS_U32(ABS(fVar10)))) ||
       (DAT_003edb5c < (int)ALBW_AS_U32(ABS(fVar9)))) {
      fVar11 = ALBW_AS_F32(param_2[6]);
      param_2[5] = (uint)ALBW_AS_U32(((fVar8 - ALBW_AS_F32(param_2[5])) + ALBW_AS_F32(param_2[5])));
      param_2[6] = (uint)ALBW_AS_U32(((fVar10 - fVar11) + fVar11));
      param_2[7] = (uint)ALBW_AS_U32(((fVar9 - ALBW_AS_F32(param_2[7])) + ALBW_AS_F32(param_2[7])));
    }
    fVar11 = ALBW_AS_F32(param_2[5]);
    fVar12 = ALBW_AS_F32(param_2[6]);
    fVar13 = ALBW_AS_F32(param_2[7]);
    param_2[0xe] = (uint)ALBW_AS_U32((*pfVar5 * fVar11 + pfVar5[1] * fVar12 + pfVar5[2] * fVar13));
    param_2[0xf] = (uint)ALBW_AS_U32((pfVar5[4] * fVar11 + pfVar5[5] * fVar12 + pfVar5[6] * fVar13));
    param_2[0x10] = (uint)ALBW_AS_U32((pfVar5[8] * fVar11 + pfVar5[9] * fVar12 + pfVar5[10] * fVar13));
  }
  iVar1 = DAT_003edb60;
  param_2[2] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[2]) + fVar8));
  param_2[3] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[3]) + fVar10));
  param_2[4] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[4]) + fVar9));
  (**(code **)(iVar1 + (uint)*(byte *)(param_1 + 0x2a8) * 4))(param_2);
  (**(code **)(DAT_003edb64 + (uint)*(byte *)(param_1 + 0x2a9) * 4))(param_2);
  iVar1 = DAT_003edb68;
  fVar8 = *(float *)(param_2[0x4e] + 0x538);
  param_2[0x14] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x14]) * fVar8));
  param_2[0x15] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x15]) * fVar8));
  param_2[0x16] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x16]) * fVar8));
  (**(code **)(iVar1 + (uint)*(byte *)(param_1 + 0x2aa) * 4))(param_2);
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    pfVar2 = (float *)param_2[0x18];
    if ((int)ALBW_AS_U32(pfVar2[2]) < (int)*param_2) {
      if ((int)ALBW_AS_U32(pfVar2[3]) < (int)*param_2) {
        param_2[0x17] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x17]) + pfVar2[1]));
      }
    }
    else {
      param_2[0x17] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x17]) + *pfVar2));
    }
  }
  if (*(char *)(param_1 + 0x2ad) != '\0') {
    pfVar2 = (float *)param_2[0x1b];
    if ((int)ALBW_AS_U32(pfVar2[4]) < (int)*param_2) {
      if ((int)ALBW_AS_U32(pfVar2[5]) < (int)*param_2) {
        param_2[0x19] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x19]) + pfVar2[2]));
        param_2[0x1a] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x1a]) + pfVar2[3]));
      }
    }
    else {
      param_2[0x19] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x19]) + *pfVar2));
      param_2[0x1a] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x1a]) + pfVar2[1]));
    }
  }
  if ((*(uint *)(param_1 + 0x234) & 0x10000) != 0) {
    if ((*(uint *)(param_1 + 0x234) & 0x4000) != 0) {
      uVar3 = *param_2;
      uVar7 = (uint)*(short *)(iVar6 + 0x3b8);
      uVar4 = uVar7;
      if (uVar7 == 0) {
        uVar3 = uVar3 * (int)*(short *)(iVar6 + 0x3ba);
        uVar4 = param_2[1];
      }
      lVar14 = func_001104E4(uVar3,uVar4);
      uVar3 = (uint)lVar14;
      if ((*(char *)(iVar6 + 0x3b2) == '\0') || (uVar3 < (uint)(int)*(short *)(iVar6 + 0x3ba))) {
        if ((uVar7 != 0) &&
           ((*(char *)(iVar6 + 0x3b2) == '\0' && (*(char *)(iVar6 + 0x3b1) != '\0')))) {
          uVar3 = uVar3 + param_2[0x54];
        }
        uVar15 = func_00110710(uVar3,(int)*(short *)(iVar6 + 0x3ba));
        uVar15 = func_00110710((uint)*(byte *)((int)((ulonglong)uVar15 >> 0x20) + iVar6 + 0x3bc),
                               (uint)*(byte *)(iVar6 + 0x3b3));
        fVar8 = (float)VectorSignedToFloat((int)((ulonglong)uVar15 >> 0x20),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (float)VectorSignedToFloat((int)uVar15,(byte)(in_fpscr >> 0x15) & 3);
        param_2[0x24] = (uint)ALBW_AS_U32((*(float *)(iVar6 + 0x3e0) * fVar8));
        param_2[0x25] = (uint)ALBW_AS_U32((*(float *)(iVar6 + 0x3e4) * fVar9));
      }
    }
    if ((*(uint *)(param_1 + 0x234) & 0x800) != 0) {
      param_2[0x26] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x26]) + *(float *)(iVar6 + 0x3ec)));
      param_2[0x27] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x27]) + *(float *)(iVar6 + 0x3f0)));
      param_2[0x28] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x28]) + *(float *)(iVar6 + 0x404)));
      param_2[0x29] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x29]) + *(float *)(iVar6 + 0x408)));
      param_2[0x23] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_2[0x23]) + *(float *)(iVar6 + 0x41c)));
    }
  }
  fVar10 = ALBW_AS_F32(param_2[3]);
  fVar8 = ALBW_AS_F32(param_2[4]);
  fVar9 = ALBW_AS_F32(param_2[2]);
  param_2[0xb] = (uint)ALBW_AS_U32((pfVar5[1] * fVar10 + pfVar5[2] * fVar8 + pfVar5[3] + *pfVar5 * fVar9));
  param_2[0xc] = (uint)ALBW_AS_U32((pfVar5[5] * fVar10 + pfVar5[6] * fVar8 + pfVar5[7] + pfVar5[4] * fVar9));
  param_2[0xd] = (uint)ALBW_AS_U32((pfVar5[9] * fVar10 + pfVar5[10] * fVar8 + pfVar5[0xb] + pfVar5[8] * fVar9));
  *param_2 = *param_2 + 1;
  return;
}


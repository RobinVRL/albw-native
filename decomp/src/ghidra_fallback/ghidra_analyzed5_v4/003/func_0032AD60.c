// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_00521184();
extern int func_0058E2B8(int *param_1);
extern int *DAT_0032af94;
extern uint DAT_0032af98;
extern int DAT_0032af9c;
extern float DAT_0032afa0;

// USA 0032AD60 <- EU 0032AD3C (Ghidra, non-matching)
// GLOBAL DAT_0032af94 int *
// GLOBAL DAT_0032af98 uint
// GLOBAL DAT_0032af9c int
// GLOBAL DAT_0032afa0 float

undefined4 func_0032AD60(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  uVar7 = 0xffffffff;
  uVar6 = 0x40000000;
  pfVar8 = (float *)(param_1 + 0x3d0);
  uVar14 = (ulonglong)DAT_0032af98;
  iVar5 = *(int *)(*(int *)(param_1 + 0xa98) + 0x20);
  pfVar9 = *(float **)(*DAT_0032af94 + 0x1c);
  iVar1 = func_00521184(param_1);
  while( true ) {
    uVar4 = 0;
    if (0 < iVar5) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0xa98) + 0x28);
        if (((iVar3 != 0) && (uVar4 < *(uint *)(*(int *)(param_1 + 0xa98) + 0x20))) &&
           (iVar3 = *(int *)(iVar3 + uVar4 * 4), iVar3 != 0)) {
          local_38 = *(undefined4 *)(iVar3 + 0x1c);
          local_3c = *(float *)(iVar3 + 0x18);
          local_34 = *(float *)(iVar3 + 0x20);
          local_40 = func_004D80EC(pfVar8,&local_3c,*(int *)(param_1 + 1000));
          local_40 = iVar1 - local_40;
          uVar2 = func_0058E2B8(&local_40);
          if ((uVar6 <= uVar2) &&
             (local_34 = local_34 - *(float *)(param_1 + 0x3d8),
             fVar10 = (local_3c - *pfVar8) * (local_3c - *pfVar8) + local_34 * local_34,
             fVar10 < ALBW_AS_F32(uVar14))) {
            uVar14 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
            uVar7 = uVar4;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar5);
    }
    uVar6 = (int)uVar6 >> 1;
    if (-1 < (int)uVar7) break;
    if ((int)uVar6 < DAT_0032af9c) {
      return 0;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xa98) + 0x28);
  iVar1 = 0;
  if (iVar5 != 0) {
    if (uVar7 < *(uint *)(*(int *)(param_1 + 0xa98) + 0x20)) {
      iVar1 = *(int *)(iVar5 + uVar7 * 4);
    }
    else {
      iVar1 = 0;
    }
  }
  fVar11 = *(float *)(iVar1 + 0x20);
  uVar13 = *(undefined4 *)(iVar1 + 0x1c);
  fVar12 = *(float *)(iVar1 + 0x18) - *pfVar8;
  fVar10 = fVar11 - *(float *)(param_1 + 0x3d8);
  pfVar8 = (float *)(param_1 + 0xc24);
  if ((int)ALBW_AS_U32(SQRT(fVar12 * fVar12 + fVar10 * fVar10)) < 0x40000000) {
    fVar10 = DAT_0032afa0;
    if (*(int *)(iVar1 + 0x94) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(iVar1 + 0x9c);
      if (iVar5 != 0) {
        fVar10 = *(float *)(iVar5 + 0x18) - *pfVar9;
        fVar11 = *(float *)(iVar5 + 0x20) - pfVar9[2];
        fVar10 = fVar10 * fVar10 + fVar11 * fVar11;
      }
    }
    fVar11 = DAT_0032afa0;
    if (*(int *)(iVar1 + 0xa0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = **(int **)(iVar1 + 0xa8);
      if (iVar1 != 0) {
        fVar12 = *(float *)(iVar1 + 0x18) - *pfVar9;
        fVar11 = *(float *)(iVar1 + 0x20) - pfVar9[2];
        fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
      }
    }
    if (fVar10 < fVar11) {
      fVar10 = *(float *)(iVar1 + 0x18);
      uVar13 = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(iVar1 + 0x20);
      *pfVar8 = fVar10;
      *(undefined4 *)(param_1 + 0xc28) = uVar13;
    }
    else {
      fVar10 = *(float *)(iVar5 + 0x18);
      uVar13 = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(iVar5 + 0x20);
      *pfVar8 = fVar10;
      *(undefined4 *)(param_1 + 0xc28) = uVar13;
    }
  }
  else {
    *pfVar8 = *(float *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0xc28) = uVar13;
    *(float *)(param_1 + 0xc2c) = fVar11;
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002920E0(int param_1,int param_2);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_0055696C(int param_1,int param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004cd3b0;
extern int *DAT_004cd3b4;
extern float DAT_004cd3b8;
extern float DAT_004cd3bc;
extern int *DAT_004cd3c0;
extern int *DAT_004cd3c4;
extern undefined *DAT_004cd3c8;
extern undefined4 *DAT_004cd3cc;
extern int DAT_004cd3d0;
extern int DAT_004cd3d4;
extern uint *DAT_004cd3d8;
extern undefined4 *DAT_004cd3dc;
extern undefined4 DAT_004cd3e0;

// USA 004CD1D8 <- EU 004CD1B0 (Ghidra, non-matching)
// GLOBAL DAT_004cd3b0 int *
// GLOBAL DAT_004cd3b4 int *
// GLOBAL DAT_004cd3b8 float
// GLOBAL DAT_004cd3bc float
// GLOBAL DAT_004cd3c0 int *
// GLOBAL DAT_004cd3c4 int *
// GLOBAL DAT_004cd3c8 undefined *
// GLOBAL DAT_004cd3cc undefined4 *
// GLOBAL DAT_004cd3d0 int
// GLOBAL DAT_004cd3d4 int
// GLOBAL DAT_004cd3d8 uint *
// GLOBAL DAT_004cd3dc undefined4 *
// GLOBAL DAT_004cd3e0 undefined4

undefined4 func_004CD1D8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  
  piVar4 = DAT_004cd3b4;
  piVar3 = DAT_004cd3b0;
  if (0 < param_3) {
    param_1 = param_3 << 2;
  }
  *DAT_004cd3b0 = param_2;
  if (param_3 < 1) {
    uVar6 = func_0055696C(*piVar4,0);
    fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_004cd3b8 <= fVar11) << 0x1d;
    if (!SUB41(uVar1 >> 0x1d,0)) {
      fVar11 = DAT_004cd3b8;
    }
    fVar11 = (float)VectorSignedToFloat((int)fVar11,(byte)(uVar1 >> 0x15) & 3);
    if (DAT_004cd3bc < fVar11) {
      fVar11 = DAT_004cd3bc;
    }
    iVar7 = (int)fVar11 * 4 + -4;
    if ((*DAT_004cd3c0 != 0) &&
       (cVar2 = *(char *)(*DAT_004cd3c0 + 0x18), cVar2 == '\a' || cVar2 == '%')) {
      iVar7 = iVar7 / 2;
    }
    param_1 = iVar7 << 2;
  }
  piVar5 = DAT_004cd3c4;
  piVar3[1] = param_1;
  func_0052FD7C(*piVar5 + 0x3dbbc,DAT_004cd3c8,0x28);
  iVar7 = *piVar5;
  puVar8 = (undefined4 *)func_005841A8(iVar7,*DAT_004cd3cc,*(int **)(DAT_004cd3d0 + iVar7));
  iVar7 = DAT_004cd3d4;
  puVar10 = (undefined4 *)*puVar8;
  if (puVar10 != (undefined4 *)0x0) {
    if (((*DAT_004cd3d8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_004cd3d8), iVar9 != 0)) {
      *DAT_004cd3dc = DAT_004cd3e0;
    }
    iVar9 = (**(code **)*puVar10)(puVar10,DAT_004cd3dc);
    puVar8 = puVar10;
    if (iVar9 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      if (param_2 == 0) {
        fVar12 = ALBW_AS_F32(puVar8[0xf4]) - **(float **)(*piVar4 + 0x1c);
        fVar11 = ALBW_AS_F32(puVar8[0xf6]) - (*(float **)(*piVar4 + 0x1c))[2];
        fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
      }
      else {
        fVar12 = ALBW_AS_F32(puVar8[0xf4]) - *(float *)(param_2 + 0x3d0);
        fVar11 = ALBW_AS_F32(puVar8[0xf6]) - *(float *)(param_2 + 0x3d8);
        fVar11 = fVar12 * fVar12 + fVar11 * fVar11;
      }
      if ((int)ALBW_AS_U32(SQRT(fVar11)) <= iVar7) {
        *(char *)(puVar8 + 0x1d2) = (char)piVar3[1];
      }
    }
  }
  if (param_2 != 0) {
    puVar8 = (undefined4 *)*piVar4;
  }
  if ((param_2 != 0 && puVar8 != (undefined4 *)0x0) &&
     (fVar12 = *(float *)puVar8[7] - *(float *)(param_2 + 0x3d0),
     fVar11 = ((float *)puVar8[7])[2] - *(float *)(param_2 + 0x3d8),
     (int)ALBW_AS_U32(SQRT(fVar12 * fVar12 + fVar11 * fVar11)) <= iVar7)) {
    return func_002920E0((int)puVar8,-piVar3[1]);
  }
  return 0;
}


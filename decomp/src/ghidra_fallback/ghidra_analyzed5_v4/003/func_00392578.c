#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern float *DAT_00392724;
extern undefined DAT_00392728;
extern int DAT_00392748;
extern int *DAT_0039274c;
extern float DAT_00392750;
extern char s__SE_S_CROSS_RESULT_GAUGE_FIN_0039272b[];
extern undefined4 _DAT_00392728;

// USA 00392578 <- EU 00392554 (Ghidra, non-matching)
// GLOBAL DAT_00392724 float *
// GLOBAL DAT_00392728 undefined
// GLOBAL DAT_00392748 int
// GLOBAL DAT_0039274c int *
// GLOBAL DAT_00392750 float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00392578(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  float *extraout_r1;
  float *extraout_r1_00;
  float *pfVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  pfVar4 = DAT_00392724;
  fVar10 = *(float *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar12 = VectorFloatToUnsigned(fVar10,3);
  if (iVar12 == iVar2) {
    return 0;
  }
  fVar14 = *DAT_00392724;
  fVar13 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = in_fpscr & 0xfffffff;
  uVar8 = uVar9 | (uint)(fVar10 < fVar13) << 0x1f;
  if (fVar13 <= fVar10) {
    if (fVar10 == fVar13 || SUB41(uVar8 >> 0x1f,0) != (NAN(fVar10) || NAN(fVar13)))
    goto LAB_003925ec;
    fVar15 = fVar10 - fVar14;
    if ((fVar13 < fVar15) &&
       (uVar9 = uVar9 | (uint)(fVar15 < fVar10) << 0x1f,
       fVar15 == fVar10 || SUB41(uVar9 >> 0x1f,0) != (NAN(fVar15) || NAN(fVar10))))
    goto LAB_003925e8;
  }
  else {
    fVar15 = fVar10 + fVar14;
    if ((fVar15 < fVar13) &&
       (uVar9 = uVar9 | (uint)(fVar10 < fVar15) << 0x1f,
       fVar10 == fVar15 || SUB41(uVar9 >> 0x1f,0) != (NAN(fVar10) || NAN(fVar15)))) {
LAB_003925e8:
      *(float *)(param_1 + 0x3c) = fVar15;
      uVar8 = uVar9;
      goto LAB_003925ec;
    }
  }
  *(float *)(param_1 + 0x3c) = fVar13;
  uVar8 = uVar9;
LAB_003925ec:
  iVar12 = DAT_00392748;
  fVar10 = (float)VectorUnsignedToFloat(iVar2,(byte)(uVar8 >> 0x15) & 3);
  fVar10 = *(float *)(param_1 + 0x3c) - fVar10;
  uVar9 = uVar8 & 0xfffffff | (uint)(-(fVar14 * ALBW_AS_F32(_DAT_00392728)) == fVar10) << 0x1e |
          (uint)(fVar10 <= -(fVar14 * ALBW_AS_F32(_DAT_00392728))) << 0x1d;
  bVar1 = (byte)(uVar9 >> 0x18);
  bVar6 = (bool)(bVar1 >> 6);
  bVar7 = (bool)(bVar1 >> 5 & 1);
  if (!bVar7 || bVar6) {
    uVar9 = uVar8 & 0xfffffff | (uint)(fVar10 == fVar14 * ALBW_AS_F32(_DAT_00392728)) << 0x1e |
            (uint)(fVar14 * ALBW_AS_F32(_DAT_00392728) <= fVar10) << 0x1d;
    bVar1 = (byte)(uVar9 >> 0x18);
    bVar6 = (bool)(bVar1 >> 6);
    bVar7 = (bool)(bVar1 >> 5 & 1);
  }
  if (!bVar7 || bVar6) {
    uVar11 = ALBW_AS_U32(VectorUnsignedToFloat(iVar2,(byte)(uVar9 >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x3c) = uVar11;
    local_14 = s__SE_S_CROSS_RESULT_GAUGE_FIN_0039272b + 1;
    local_18 = iVar12;
    func_00587F74(*DAT_0039274c,&local_18,0);
    pfVar4 = extraout_r1;
  }
  fVar10 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x40),(byte)(uVar9 >> 0x15) & 3);
  uVar9 = uVar9 & 0xfffffff | (uint)(fVar10 == *(float *)(param_1 + 0x3c)) << 0x1e |
          (uint)(*(float *)(param_1 + 0x3c) <= fVar10) << 0x1d;
  bVar1 = (byte)(uVar9 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    uVar11 = ALBW_AS_U32(VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x40),(byte)(uVar9 >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x3c) = uVar11;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      puVar3 = (undefined2 *)0x0;
    }
    else {
      puVar3 = *(undefined2 **)(*(int *)(param_1 + 0x24) + 4);
    }
    func_002317C0(puVar3,DAT_00392750);
    pfVar4 = extraout_r1_00;
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    pfVar4 = *(float **)(param_1 + 0x34);
  }
  if (iVar2 != 0 && pfVar4 != (float *)0x0) {
    *(short *)(iVar2 + 0x60) = (short)(int)*(float *)(param_1 + 0x3c);
    func_001788DC(*(int *)(param_1 + 0x30),*(undefined4 **)(param_1 + 0x38));
    iVar2 = *(int *)(param_1 + 0x30);
    piVar5 = *(int **)(param_1 + 0x34);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
    (**(code **)(*piVar5 + 0x60))
              (piVar5,*(undefined4 *)(*(int *)(param_1 + 0x30) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x30) + 0x20) >> 1);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x24);
  }
  return func_0023194C(iVar2,(int)*(float *)(param_1 + 0x3c));
}


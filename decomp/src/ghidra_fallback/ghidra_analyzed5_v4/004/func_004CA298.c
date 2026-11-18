#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_004ca394;
extern float DAT_004ca398;
extern int *DAT_004ca39c;
extern float DAT_004ca3a0;
extern float DAT_004ca3a4;

// USA 004CA298 <- EU 004CA270 (Ghidra, non-matching)
// GLOBAL DAT_004ca394 float
// GLOBAL DAT_004ca398 float
// GLOBAL DAT_004ca39c int *
// GLOBAL DAT_004ca3a0 float
// GLOBAL DAT_004ca3a4 float

void func_004CA298(int param_1)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_28,pfVar2,(float *)(param_1 + 0x3d0));
  piVar1 = DAT_004ca39c;
  local_24 = DAT_004ca394;
  uVar6 = in_fpscr & 0xfffffff | (uint)(local_28 == DAT_004ca394) << 0x1e;
  bVar5 = false;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(local_20 == DAT_004ca394) << 0x1e;
    bVar5 = SUB41(uVar6 >> 0x1e,0);
  }
  fVar9 = DAT_004ca398;
  fVar11 = DAT_004ca394;
  if (bVar5) {
    fVar10 = DAT_004ca3a0;
    uVar3 = func_00111A64((uint *)(*DAT_004ca39c + 0x660));
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    local_28 = fVar7 * DAT_004ca3a4 * fVar10 + fVar9;
    fVar7 = DAT_004ca3a4;
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar6 >> 0x15) & 3);
    local_20 = fVar8 * fVar7 * fVar10 + fVar9;
  }
  fVar10 = SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
  if (fVar11 < fVar10) {
    fVar9 = fVar9 / fVar10;
    local_28 = local_28 * fVar9;
    local_20 = local_20 * fVar9;
    local_24 = local_24 * fVar9;
  }
  *(float *)(param_1 + 0x3dc) = local_28;
  *(float *)(param_1 + 0x3e0) = local_24;
  *(float *)(param_1 + 0x3e4) = local_20;
  iVar4 = func_0068C690((float *)(param_1 + 0x3dc));
  *(int *)(param_1 + 1000) = iVar4;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffffef;
  return;
}


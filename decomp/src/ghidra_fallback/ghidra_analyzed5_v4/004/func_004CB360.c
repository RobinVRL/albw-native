#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_00520FC0(void);
extern int func_0054DDF4(int param_1,uint param_2);
extern float DAT_004cb4a8;
extern float DAT_004cb4ac;
extern float DAT_004cb4b0;
extern float DAT_004cb4b4;
extern float DAT_004cb4b8;
extern float DAT_004cb4bc;

// USA 004CB360 <- EU 004CB338 (Ghidra, non-matching)
// GLOBAL DAT_004cb4a8 float
// GLOBAL DAT_004cb4ac float
// GLOBAL DAT_004cb4b0 float
// GLOBAL DAT_004cb4b4 float
// GLOBAL DAT_004cb4b8 float
// GLOBAL DAT_004cb4bc float

void func_004CB360(int *param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  puVar2 = (undefined2 *)func_0054DDF4((int)param_1,0);
  param_1[0x269] = (int)puVar2;
  func_004F88A0(param_1,puVar2);
  fVar8 = DAT_004cb4a8;
  param_1[0xf7] = (int)ALBW_AS_U32(DAT_004cb4a8);
  param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
  param_1[0xf9] = (int)ALBW_AS_U32(fVar8);
  pfVar5 = (float *)(param_1 + 0x23a);
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(pfVar5,(float *)(param_1 + 0xf4),pfVar3);
  func_00115D70(pfVar5,pfVar5,DAT_004cb4ac);
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(pfVar5,pfVar3,pfVar5);
  iVar4 = func_00520FC0();
  param_1[0x23b] = (int)ALBW_AS_U32((*(float *)(iVar4 + 4) + DAT_004cb4b0));
  func_00115C70(&local_28,pfVar5,(float *)(param_1 + 0xf4));
  fVar7 = SQRT(local_28 * local_28 + local_20 * local_20) * DAT_004cb4b4;
  iVar4 = (int)fVar7;
  fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar7) << 0x1e;
  if ((!SUB41(uVar6 >> 0x1e,0)) &&
     (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d
     , bVar1 = (byte)(uVar6 >> 0x18), !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar4 = iVar4 + 1;
  }
  fVar7 = local_24;
  local_24 = fVar8;
  func_00115DC8(&local_28);
  fVar7 = DAT_004cb4b8;
  fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(uVar6 >> 0x15) & 3);
  param_1[0xf7] = (int)ALBW_AS_U32((local_28 * DAT_004cb4b8));
  param_1[0xf9] = (int)ALBW_AS_U32((local_20 * fVar7));
  param_1[0xf8] = (int)ALBW_AS_U32((local_24 / fVar9));
  param_1[0x273] = iVar4;
  if (iVar4 == 0) {
    param_1[0x274] = (int)ALBW_AS_U32(fVar8);
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar6 >> 0x15) & 3);
    param_1[0x274] = (int)ALBW_AS_U32((DAT_004cb4bc / fVar8));
  }
  param_1[0x272] = 0;
  return;
}


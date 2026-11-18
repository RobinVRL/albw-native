#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern float DAT_004cb200;
extern int DAT_004cb204;
extern float DAT_004cb208;
extern float DAT_004cb20c;
extern float DAT_004cb210;
extern float DAT_004cb214;
extern float DAT_004cb218;
extern float DAT_004cb21c;

// USA 004CB050 <- EU 004CB028 (Ghidra, non-matching)
// GLOBAL DAT_004cb200 float
// GLOBAL DAT_004cb204 int
// GLOBAL DAT_004cb208 float
// GLOBAL DAT_004cb20c float
// GLOBAL DAT_004cb210 float
// GLOBAL DAT_004cb214 float
// GLOBAL DAT_004cb218 float
// GLOBAL DAT_004cb21c float

undefined4 func_004CB050(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint in_fpscr;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 4;
  func_004FD038(param_1 + 0x5a8,1);
  fVar7 = DAT_004cb200;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  *(float *)(param_1 + 0x3dc) = fVar7;
  *(float *)(param_1 + 0x3e0) = fVar7;
  *(float *)(param_1 + 0x3e4) = fVar7;
  puVar2 = func_004CADD8(param_1,*(uint *)(param_1 + 0x928));
  if (puVar2 == (undefined4 *)0x0) {
    return func_0066A284((undefined4 *)(param_1 + 0x8bc),5);
  }
  pfVar3 = (float *)(param_1 + 0x8e8);
  func_00115C70(pfVar3,(float *)(param_1 + 0x3d0),(float *)(puVar2 + 0xf4));
  if (DAT_004cb204 <
      (int)ALBW_AS_U32(SQRT(*pfVar3 * *pfVar3 + *(float *)(param_1 + 0x8ec) * *(float *)(param_1 + 0x8ec) +
                *(float *)(param_1 + 0x8f0) * *(float *)(param_1 + 0x8f0)))) {
    func_00115D70(pfVar3,pfVar3,DAT_004cb208);
  }
  else {
    func_00115D70(pfVar3,pfVar3,DAT_004cb20c);
  }
  func_00115C70(pfVar3,(float *)(puVar2 + 0xf4),pfVar3);
  *(float *)(param_1 + 0x8ec) = ALBW_AS_F32(puVar2[0xf5]) + DAT_004cb210;
  func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
  fVar8 = SQRT(local_28 * local_28 + local_20 * local_20) * DAT_004cb214;
  iVar5 = (int)fVar8;
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar8) << 0x1e;
  if ((!SUB41(uVar4 >> 0x1e,0)) &&
     (uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 == fVar8) << 0x1e | (uint)(fVar8 <= fVar7) << 0x1d
     , bVar1 = (byte)(uVar4 >> 0x18), !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar5 = iVar5 + 1;
  }
  fVar6 = local_24;
  local_24 = fVar7;
  func_00115DC8(&local_28);
  fVar6 = DAT_004cb218;
  fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(uVar4 >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) = local_28 * DAT_004cb218;
  *(float *)(param_1 + 0x3e4) = local_20 * fVar6;
  *(float *)(param_1 + 0x3e0) = local_24 / fVar8;
  *(int *)(param_1 + 0x9cc) = iVar5;
  if (iVar5 == 0) {
    *(float *)(param_1 + 0x9d0) = fVar7;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar4 >> 0x15) & 3);
    *(float *)(param_1 + 0x9d0) = DAT_004cb21c / fVar7;
  }
  *(undefined4 *)(param_1 + 0x9c8) = 0;
  *(undefined4 *)(param_1 + 0x954) = 0;
  return 0;
}


// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0052114C();
extern float DAT_005292c0;
extern int DAT_005292c4;
extern float DAT_005292c8;
extern float DAT_005292cc;
extern uint *DAT_005292d0;

// USA 005291BC <- EU 00529194 (Ghidra, non-matching)
// GLOBAL DAT_005292c0 float
// GLOBAL DAT_005292c4 int
// GLOBAL DAT_005292c8 float
// GLOBAL DAT_005292cc float
// GLOBAL DAT_005292d0 uint *

undefined4 func_005291BC(int param_1,float *param_2,float fparam_0)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  func_00115C70(&local_34,param_2,(float *)(param_1 + 0x3d0));
  local_40 = local_34;
  fStack_3c = fStack_30;
  fStack_38 = local_2c;
  func_00115DC8(&local_40);
  iVar4 = DAT_005292c4;
  uVar2 = *(int *)(param_1 + 1000) + *(int *)(param_1 + 0x8f4);
  pfVar5 = (float *)(DAT_005292c4 + (uVar2 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = *pfVar5 + pfVar5[1] * fVar6 * DAT_005292c0;
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = pfVar5[2] + pfVar5[3] * fVar6 * DAT_005292c0;
  fVar6 = DAT_005292c8;
  fVar11 = DAT_005292c0;
  iVar3 = func_0052114C(param_1,param_2[1],DAT_005292c8);
  if (iVar3 != 0) {
    fVar8 = (fparam_0 + DAT_005292cc) * (fparam_0 + DAT_005292cc);
    fVar7 = local_34 * local_34 + local_2c * local_2c;
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
    bVar1 = (byte)(uVar2 >> 0x18);
    if ((!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar8) || NAN(fVar7))) &&
       (iVar4 = iVar4 + (*DAT_005292d0 >> 0x18) * 0x10,
       fVar7 = (float)VectorUnsignedToFloat(*DAT_005292d0 & 0xffffff,(byte)(uVar2 >> 0x15) & 3),
       *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar7 * fVar11 <
       fVar9 * local_40 + fVar6 * fStack_3c + fVar10 * fStack_38)) {
      return 1;
    }
  }
  return 0;
}


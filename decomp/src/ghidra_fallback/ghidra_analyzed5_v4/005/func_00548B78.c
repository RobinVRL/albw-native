// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0052114C();
extern float DAT_00548c7c;
extern int DAT_00548c80;
extern float DAT_00548c84;
extern uint *DAT_00548c88;

// USA 00548B78 <- EU 00548B50 (Ghidra, non-matching)
// GLOBAL DAT_00548c7c float
// GLOBAL DAT_00548c80 int
// GLOBAL DAT_00548c84 float
// GLOBAL DAT_00548c88 uint *

undefined4 func_00548B78(int param_1,float *param_2,float fparam_0)

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
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  func_00115C70(&local_34,param_2,(float *)(param_1 + 0x3d0));
  local_40 = local_34;
  local_3c = fStack_30;
  local_38 = local_2c;
  func_00115DC8(&local_40);
  iVar4 = DAT_00548c80;
  uVar2 = *(int *)(param_1 + 1000) + *(int *)(param_1 + 0x904);
  pfVar5 = (float *)(DAT_00548c80 + (uVar2 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = *pfVar5 + pfVar5[1] * fVar6 * DAT_00548c7c;
  fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = pfVar5[2] + pfVar5[3] * fVar6 * DAT_00548c7c;
  fVar6 = DAT_00548c84;
  fVar11 = DAT_00548c7c;
  iVar3 = func_0052114C(param_1,param_2[1],DAT_00548c84);
  if (iVar3 != 0) {
    fVar7 = local_34 * local_34 + local_2c * local_2c;
    fVar8 = fparam_0 * fparam_0;
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
    bVar1 = (byte)(uVar2 >> 0x18);
    if ((!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar8) || NAN(fVar7))) &&
       (iVar4 = iVar4 + (*DAT_00548c88 >> 0x18) * 0x10,
       fVar7 = (float)VectorUnsignedToFloat(*DAT_00548c88 & 0xffffff,(byte)(uVar2 >> 0x15) & 3),
       *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0xc) * fVar7 * fVar11 <
       fVar9 * local_40 + fVar6 * local_3c + fVar10 * local_38)) {
      return 1;
    }
  }
  return 0;
}


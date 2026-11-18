#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00520FC0(void);
extern float DAT_004e5494;
extern float DAT_004e5498;
extern int *DAT_004e549c;
extern float DAT_004e54a0;
extern int DAT_004e54a4;
extern undefined4 DAT_004e54a8;

// USA 004E53B0 <- EU 004E5388 (Ghidra, non-matching)
// GLOBAL DAT_004e5494 float
// GLOBAL DAT_004e5498 float
// GLOBAL DAT_004e549c int *
// GLOBAL DAT_004e54a0 float
// GLOBAL DAT_004e54a4 int
// GLOBAL DAT_004e54a8 undefined4

void func_004E53B0(int param_1)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  pfVar3 = (float *)func_00520FC0();
  fparam_0 = DAT_004e5494;
  func_00115C70(&local_24,(float *)(param_1 + 0x3d0),pfVar3);
  fVar5 = local_24 * local_24 + local_20 * local_20 + local_1c * local_1c;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < DAT_004e5498) << 0x1f |
          (uint)(fVar5 == DAT_004e5498) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar5) || NAN(DAT_004e5498))) {
    uVar4 = **(uint **)(*DAT_004e549c + 0x24);
    pfVar3 = (float *)(DAT_004e54a4 + (uVar4 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(uVar1 >> 0x15) & 3);
    fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(uVar1 >> 0x15) & 3);
    local_30 = -(*pfVar3 + pfVar3[1] * fVar5 * DAT_004e54a0);
    local_2c = DAT_004e54a8;
    local_28 = -(pfVar3[2] + pfVar3[3] * fVar6 * DAT_004e54a0);
    func_00115D70(&local_30,&local_30,fparam_0);
    pfVar3 = (float *)func_00520FC0();
    func_00115C54(&local_30,&local_30,pfVar3);
    *(float *)(param_1 + 0x368) = local_30;
    *(undefined4 *)(param_1 + 0x36c) = local_2c;
    *(float *)(param_1 + 0x370) = local_28;
    *(float *)(param_1 + 0x3d0) = local_30;
    *(undefined4 *)(param_1 + 0x3d4) = local_2c;
    *(float *)(param_1 + 0x3d8) = local_28;
  }
  return;
}


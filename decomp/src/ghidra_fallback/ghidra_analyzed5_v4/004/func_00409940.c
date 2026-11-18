#include "ghidra_types.h"

extern float func_00590EC8(float fparam_0,float fparam_1);
extern float DAT_004099d8;
extern float DAT_004099dc;

// USA 00409940 <- EU 00409920 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_004099d8 float
// GLOBAL DAT_004099dc float

int func_00409940(int param_1,int param_2,int param_3,float *param_4,int *param_5,float fparam_0)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar7 = *(float *)(param_2 + 0x4c);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_0 < fVar7) << 0x1f |
          (uint)(fparam_0 == fVar7) << 0x1e;
  uVar4 = uVar1 | (uint)(NAN(fparam_0) || NAN(fVar7)) << 0x1c;
  fVar6 = *(float *)(param_3 + 0x24);
  bVar2 = (byte)(uVar1 >> 0x18);
  fVar5 = DAT_004099d8;
  fVar8 = DAT_004099d8;
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar4 >> 0x1c) & 1)) {
    if (*(char *)(param_3 + 0x28) == '\x01') {
      func_00590EC8(fVar6,(fparam_0 - fVar7) / *(float *)(param_2 + 0x50));
      fVar5 = fVar6;
    }
    else if (*(char *)(param_3 + 0x28) == '\x02') {
      fVar5 = DAT_004099d8 -
              ((fparam_0 - fVar7) / *(float *)(param_2 + 0x50)) * (DAT_004099d8 - fVar6);
      uVar4 = in_fpscr & 0xfffffff | (uint)(DAT_004099dc <= fVar5) << 0x1d;
      if (!SUB41(uVar4 >> 0x1d,0)) {
        fVar5 = DAT_004099dc;
      }
    }
  }
  fVar6 = (float)VectorSignedToFloat(uVar9,(byte)(uVar4 >> 0x15) & 3);
  *param_4 = fVar5;
  iVar3 = -(int)((fVar8 - fVar5) * fVar6);
  *param_5 = iVar3;
  return iVar3;
}


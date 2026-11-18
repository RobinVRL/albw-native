#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_005582E8(int param_1);
extern float DAT_0036f6a0;

// USA 0036F590 <- EU 0036F56C (Ghidra, non-matching)
// GLOBAL DAT_0036f6a0 float

void func_0036F590(float *param_1)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  uVar2 = 0;
  pfVar1 = (float *)func_005582E8((int)param_1);
  func_00115C54(local_2c,pfVar1,param_1 + 0xd);
  func_00115C54(local_38,param_1,local_2c);
  fVar6 = param_1[0x10];
  bVar3 = fVar6 < DAT_0036f6a0;
  bVar4 = fVar6 == DAT_0036f6a0;
  bVar5 = NAN(fVar6) || NAN(DAT_0036f6a0);
  if (!bVar4 && !bVar3) {
    bVar3 = local_38[0] < fVar6;
    bVar4 = local_38[0] == fVar6;
    bVar5 = NAN(local_38[0]) || NAN(fVar6);
  }
  if ((!bVar4 && bVar3 == bVar5) || (fVar6 < DAT_0036f6a0 && local_38[0] < fVar6)) {
    uVar2 = 1;
    local_38[0] = fVar6;
  }
  fVar6 = param_1[0x12];
  bVar3 = fVar6 < DAT_0036f6a0;
  bVar4 = fVar6 == DAT_0036f6a0;
  bVar5 = NAN(fVar6) || NAN(DAT_0036f6a0);
  if (!bVar4 && !bVar3) {
    bVar3 = local_30 < fVar6;
    bVar4 = local_30 == fVar6;
    bVar5 = NAN(local_30) || NAN(fVar6);
  }
  if ((!bVar4 && bVar3 == bVar5) || (fVar6 < DAT_0036f6a0 && local_30 < fVar6)) {
    uVar2 = uVar2 | 2;
    local_30 = fVar6;
  }
  fVar6 = DAT_0036f6a0;
  if (uVar2 != 0) {
    pfVar1 = (float *)func_005582E8((int)param_1);
    func_00115C54(local_2c,pfVar1,param_1 + 0xd);
    if ((uVar2 & 1) != 0) {
      *param_1 = *param_1 - local_2c[0];
    }
    if ((uVar2 & 2) != 0) {
      param_1[2] = param_1[2] - local_24;
    }
  }
  param_1[0x10] = fVar6;
  param_1[0x11] = fVar6;
  param_1[0x12] = fVar6;
  return;
}


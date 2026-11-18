#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_005582E8(int param_1);
extern float DAT_005582bc;

// USA 005581D4 <- EU 005581AC (Ghidra, non-matching)
// GLOBAL DAT_005582bc float

void func_005581D4(float *param_1,float *param_2,int param_3,byte *param_4)

{
  float fVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  if (param_3 == 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return;
  }
  pfVar2 = (float *)func_005582E8((int)param_1);
  func_00115C54(afStack_20,pfVar2,param_1 + 0xd);
  func_00115C54(param_2,param_1,afStack_20);
  fVar1 = DAT_005582bc;
  fVar6 = param_1[0x10];
  bVar3 = fVar6 < DAT_005582bc;
  bVar4 = fVar6 == DAT_005582bc;
  bVar5 = NAN(fVar6) || NAN(DAT_005582bc);
  if (!bVar4 && !bVar3) {
    fVar7 = *param_2;
    bVar3 = fVar7 < fVar6;
    bVar4 = fVar7 == fVar6;
    bVar5 = NAN(fVar7) || NAN(fVar6);
  }
  if (bVar4 || bVar3 != bVar5) {
    bVar3 = DAT_005582bc <= fVar6;
    if (!bVar3) {
      bVar3 = fVar6 <= *param_2;
    }
    if (bVar3) goto LAB_00558244;
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = *param_4 | 1;
  }
  *param_2 = param_1[0x10];
LAB_00558244:
  fVar6 = param_1[0x12];
  bVar3 = fVar6 < fVar1;
  bVar4 = fVar6 == fVar1;
  bVar5 = NAN(fVar6) || NAN(fVar1);
  if (!bVar4 && !bVar3) {
    fVar7 = param_2[2];
    bVar3 = fVar7 < fVar6;
    bVar4 = fVar7 == fVar6;
    bVar5 = NAN(fVar7) || NAN(fVar6);
  }
  if (bVar4 || bVar3 != bVar5) {
    bVar3 = fVar1 <= fVar6;
    if (!bVar3) {
      bVar3 = fVar6 <= param_2[2];
    }
    if (bVar3) {
      return;
    }
  }
  if (param_4 != (byte *)0x0) {
    *param_4 = *param_4 | 2;
  }
  param_2[2] = param_1[0x12];
  return;
}


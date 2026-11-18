#include "ghidra_types.h"

extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern float DAT_001b5650;
extern float DAT_001b5654;
extern float DAT_001b5658;
extern int DAT_001b565c;
extern float DAT_001b5660;

// USA 001B55BC <- EU 001B55BC (Ghidra, non-matching)
// GLOBAL DAT_001b5650 float
// GLOBAL DAT_001b5654 float
// GLOBAL DAT_001b5658 float
// GLOBAL DAT_001b565c int
// GLOBAL DAT_001b5660 float

void func_001B55BC(int param_1,float *param_2,int param_3,float fparam_0)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  fVar2 = DAT_001b5650;
  iVar3 = *(int *)(param_1 + 1000);
  fVar4 = *(float *)(param_1 + 0x7a8);
  bVar1 = fVar4 == DAT_001b5650;
  if (bVar1) {
    fVar4 = *(float *)(param_1 + 0x7b0);
  }
  *(float *)(param_1 + 0x3e4) = DAT_001b5650;
  *(float *)(param_1 + 0x3dc) = fVar2;
  if (!bVar1 || fVar4 != fVar2) {
    fparam_0 = fparam_0 * DAT_001b5654;
  }
  func_0014FDC4(param_1,param_2,param_3,fparam_0,DAT_001b5658);
  if (*(int *)(param_1 + 0x8f4) != 0) {
    local_18 = *(int *)(param_1 + 1000) - iVar3;
    iVar3 = func_0058E2B8(&local_18);
    if (iVar3 < DAT_001b565c) {
      iVar3 = DAT_001b565c;
    }
    func_0051D2F4((int *)(param_1 + 0x8f4),0,DAT_001b565c,iVar3,DAT_001b5660);
  }
  return;
}


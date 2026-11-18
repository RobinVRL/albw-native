#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_0058E2B8(int *param_1);
extern float DAT_0058a348;
extern int DAT_0058a34c;

// USA 0058A204 <- EU 0058A1DC (Ghidra, non-matching)
// GLOBAL DAT_0058a348 float
// GLOBAL DAT_0058a34c int

undefined4 func_0058A204(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x14);
  if (fVar2 != DAT_0058a348 || fVar3 != DAT_0058a348) {
    if (fVar3 == DAT_0058a348 && fVar2 == DAT_0058a348) {
      local_10 = 0;
    }
    else if (fVar3 < DAT_0058a348) {
      if (fVar2 < DAT_0058a348) {
        if (fVar2 < fVar3) {
          local_10 = func_004905E0(fVar3 / fVar2);
          local_10 = -0x40000000 - local_10;
        }
        else {
          local_10 = func_004905E0(fVar2 / fVar3);
          local_10 = local_10 + -0x80000000;
        }
      }
      else {
        fVar3 = -fVar3;
        if (fVar3 < fVar2) {
          local_10 = func_004905E0(fVar3 / fVar2);
          local_10 = local_10 + 0x40000000;
        }
        else {
          local_10 = func_004905E0(fVar2 / fVar3);
          local_10 = -0x80000000 - local_10;
        }
      }
    }
    else if (fVar2 < DAT_0058a348) {
      fVar2 = -fVar2;
      if (fVar3 < fVar2) {
        local_10 = func_004905E0(fVar3 / fVar2);
        local_10 = local_10 + -0x40000000;
      }
      else {
        local_10 = func_004905E0(fVar2 / fVar3);
        local_10 = -local_10;
      }
    }
    else if (fVar3 < fVar2) {
      local_10 = func_004905E0(fVar3 / fVar2);
      local_10 = 0x40000000 - local_10;
    }
    else {
      local_10 = func_004905E0(fVar2 / fVar3);
    }
    local_10 = local_10 - *(int *)(param_1 + 0x34);
    if (param_2 == 0) {
      param_2 = 0x46;
    }
    uVar1 = func_0058E2B8(&local_10);
    if (uVar1 <= (uint)(param_2 * DAT_0058a34c * 0x20)) {
      return 1;
    }
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_0058E2B8(int *param_1);
extern float DAT_0052e188;

// USA 0052E058 <- EU 0052E030 (Ghidra, non-matching)
// GLOBAL DAT_0052e188 float

bool func_0052E058(int param_1,float *param_2)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define local_c (*(int *)(albw_frame + 0x14))
  func_00115C70(local_18,param_2,(float *)(param_1 + 0x51c));
  if (local_10 == DAT_0052e188 && local_18[0] == DAT_0052e188) {
    local_c = 0;
  }
  else if (local_10 < DAT_0052e188) {
    if (local_18[0] < DAT_0052e188) {
      if (local_18[0] < local_10) {
        local_c = func_004905E0(local_10 / local_18[0]);
        local_c = -0x40000000 - local_c;
      }
      else {
        local_c = func_004905E0(local_18[0] / local_10);
        local_c = local_c + -0x80000000;
      }
    }
    else {
      local_10 = -local_10;
      if (local_10 < local_18[0]) {
        local_c = func_004905E0(local_10 / local_18[0]);
        local_c = local_c + 0x40000000;
      }
      else {
        local_c = func_004905E0(local_18[0] / local_10);
        local_c = -0x80000000 - local_c;
      }
    }
  }
  else if (local_18[0] < DAT_0052e188) {
    local_18[0] = -local_18[0];
    if (local_10 < local_18[0]) {
      local_c = func_004905E0(local_10 / local_18[0]);
      local_c = local_c + -0x40000000;
    }
    else {
      local_c = func_004905E0(local_18[0] / local_10);
      local_c = -local_c;
    }
  }
  else if (local_10 < local_18[0]) {
    local_c = func_004905E0(local_10 / local_18[0]);
    local_c = 0x40000000 - local_c;
  }
  else {
    local_c = func_004905E0(local_18[0] / local_10);
  }
  local_c = local_c - *(int *)(param_1 + 1000);
  uVar1 = func_0058E2B8(&local_c);
  return uVar1 < 0x40000000;
}


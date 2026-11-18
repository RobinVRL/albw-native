#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int DAT_0027c154;
extern float DAT_0027c158;
extern int *DAT_0027c15c;
extern uint DAT_0027c160;

// USA 0027BF7C <- EU 0027BFA4 (Ghidra, non-matching)
// GLOBAL DAT_0027c154 int
// GLOBAL DAT_0027c158 float
// GLOBAL DAT_0027c15c int *
// GLOBAL DAT_0027c160 uint

undefined4 func_0027BF7C(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 ((int *)(albw_frame + 0x20))
  pfVar1 = (float *)func_00520FC0();
  local_28 = *pfVar1;
  fStack_24 = pfVar1[1];
  local_20 = pfVar1[2];
  if ((int)ALBW_AS_U32(((*param_2 - local_28) * (*param_2 - local_28) +
           (param_2[2] - local_20) * (param_2[2] - local_20))) < DAT_0027c154) {
    func_00115C70(local_1c,param_2,&local_28);
    if (local_14 == DAT_0027c158 && local_1c[0] == DAT_0027c158) {
      local_10[0] = 0;
    }
    else if (local_14 < DAT_0027c158) {
      if (local_1c[0] < DAT_0027c158) {
        if (local_1c[0] < local_14) {
          local_10[0] = func_004905E0(local_14 / local_1c[0]);
          local_10[0] = -0x40000000 - local_10[0];
        }
        else {
          local_10[0] = func_004905E0(local_1c[0] / local_14);
          local_10[0] = local_10[0] + -0x80000000;
        }
      }
      else {
        local_14 = -local_14;
        if (local_14 < local_1c[0]) {
          local_10[0] = func_004905E0(local_14 / local_1c[0]);
          local_10[0] = local_10[0] + 0x40000000;
        }
        else {
          local_10[0] = func_004905E0(local_1c[0] / local_14);
          local_10[0] = -0x80000000 - local_10[0];
        }
      }
    }
    else if (local_1c[0] < DAT_0027c158) {
      local_1c[0] = -local_1c[0];
      if (local_14 < local_1c[0]) {
        local_10[0] = func_004905E0(local_14 / local_1c[0]);
        local_10[0] = local_10[0] + -0x40000000;
      }
      else {
        local_10[0] = func_004905E0(local_1c[0] / local_14);
        local_10[0] = -local_10[0];
      }
    }
    else if (local_14 < local_1c[0]) {
      local_10[0] = func_004905E0(local_14 / local_1c[0]);
      local_10[0] = 0x40000000 - local_10[0];
    }
    else {
      local_10[0] = func_004905E0(local_1c[0] / local_14);
    }
    local_10[0] = local_10[0] - **(int **)(*DAT_0027c15c + 0x24);
    uVar2 = func_0058E2B8(local_10);
    if (uVar2 < DAT_0027c160) {
      return 1;
    }
  }
  return 0;
}


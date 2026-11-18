#include "ghidra_types.h"

extern int func_00291708(int param_1,undefined4 *param_2);
extern int *DAT_002a119c;
extern float DAT_002a11a0;
extern float DAT_002a11a4;

// USA 002A10C0 <- EU 002A109C (Ghidra, non-matching)
// GLOBAL DAT_002a119c int *
// GLOBAL DAT_002a11a0 float
// GLOBAL DAT_002a11a4 float

void func_002A10C0(int param_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define local_14 (*(float *)(albw_frame + 0x2c))
  #define local_10 (*(float *)(albw_frame + 0x30))
  #define local_c (*(float *)(albw_frame + 0x34))
  if (*DAT_002a119c != 0) {
    pfVar1 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                      *(int *)(param_1 + 0x90c) * 0x30);
    local_38 = *pfVar1;
    local_34 = pfVar1[1];
    local_30 = pfVar1[2];
    local_2c = pfVar1[1] * DAT_002a11a4 + pfVar1[2] * DAT_002a11a0 +
               pfVar1[3] + *pfVar1 * DAT_002a11a0;
    local_28 = pfVar1[4];
    local_24 = pfVar1[5];
    local_20 = pfVar1[6];
    local_1c = pfVar1[5] * DAT_002a11a4 + pfVar1[6] * DAT_002a11a0 +
               pfVar1[7] + pfVar1[4] * DAT_002a11a0;
    local_18 = pfVar1[8];
    local_14 = pfVar1[9];
    local_10 = pfVar1[10];
    local_c = pfVar1[9] * DAT_002a11a4 + pfVar1[10] * DAT_002a11a0 +
              pfVar1[0xb] + pfVar1[8] * DAT_002a11a0;
    func_00291708(*DAT_002a119c,&local_38);
  }
  return;
}


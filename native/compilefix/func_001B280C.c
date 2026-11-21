/* USA 001B280C: converted Ghidra text with one fix (160bg): its range tests compare the float BITS
 * of a value with float constants (vmov rX, sY; cmp - signed against a positive constant,
 * unsigned against a negative one), which Ghidra wrote as (int)(v) / (uint)(v) conversions.
 * On x86 (uint)(-1.0f) is 0xFFFFFFFF, so small negative values passed the test. Now the
 * float comparisons the bit tests mean (2). Confidence: high (EU code bytes). */
#include "ghidra_types.h"

extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b2950;
extern int DAT_001b2954;
extern float DAT_001b2958;
extern float DAT_001b295c;
extern int DAT_001b2960;
extern int DAT_001b2964;
extern float DAT_001b2968;

// USA 001B280C <- EU 001B280C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2950 float
// GLOBAL DAT_001b2954 int
// GLOBAL DAT_001b2958 float
// GLOBAL DAT_001b295c float
// GLOBAL DAT_001b2960 int
// GLOBAL DAT_001b2964 int
// GLOBAL DAT_001b2968 float

undefined4 func_001B280C(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x4f0);
  /* above the upper limit? (ARM: bit compare with a positive float) */
  if ((ALBW_AS_F32(DAT_001b2954) < (fVar3 - DAT_001b2950))) {
    fVar3 = fVar3 - DAT_001b2958;
LAB_001b2850:
    *(float *)(param_1 + 0x4f0) = fVar3;
  }
  else {
    /* below the lower limit? (ARM: unsigned bit compare with a negative float) */
    if (((fVar3 - DAT_001b2950) < ALBW_AS_F32(DAT_001b295c))) {
      fVar3 = fVar3 + DAT_001b2958;
      goto LAB_001b2850;
    }
    *(float *)(param_1 + 0x4f0) = DAT_001b2950;
  }
  if (*(short *)(DAT_001b2960 + param_1) < 1) {
    if (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\0') {
      if (**(int **)(*(int *)(param_1 + 0x410) + 0x14) != 5) {
        return 0;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 8) <= DAT_001b2964) {
        return 0;
      }
    }
    return func_0065B158((undefined4 *)(param_1 + 0x8bc),10);
  }
  if (**(int **)(*(int *)(param_1 + 0x410) + 0x14) != 5) goto LAB_001b291c;
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_001b2968) {
      if (DAT_001b2968 < *(float *)(iVar2 + 8)) goto LAB_001b2924;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_001b2924;
LAB_001b291c:
    bVar1 = 1;
  }
  else {
LAB_001b2924:
    bVar1 = 0;
  }
  if (!(bool)(bVar1 & *(char *)(*(int *)(param_1 + 0x510) + 4) == '\0')) {
    return 0;
  }
  return func_0065B158((undefined4 *)(param_1 + 0x8bc),0);
}


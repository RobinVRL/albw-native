#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern int func_00115074(float *param_1,float *param_2,float *param_3);

// USA 003EBB60 <- EU 003EBB40 (Ghidra, non-matching)

float * func_003EBB60(int param_1,int param_2,float *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_60 ((float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  #define local_18 (*(undefined4 *)(albw_frame + 0x48))
  if (*(char *)(param_3 + 5) == '\0') {
    if (((uint)ALBW_AS_U32(param_3[4]) & 1) != 0) {
      *(float *)(param_2 + 0x20) =
           *(float *)(param_2 + 0x20) +
           ((param_3[1] - *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x20)) * *param_3;
    }
    if (((uint)ALBW_AS_U32(param_3[4]) & 2) != 0) {
      *(float *)(param_2 + 0x24) =
           *(float *)(param_2 + 0x24) +
           ((param_3[2] - *(float *)(param_2 + 0xc)) - *(float *)(param_2 + 0x24)) * *param_3;
    }
    if (((uint)ALBW_AS_U32(param_3[4]) & 4) != 0) {
      *(float *)(param_2 + 0x28) =
           *(float *)(param_2 + 0x28) +
           ((param_3[3] - *(float *)(param_2 + 0x10)) - *(float *)(param_2 + 0x28)) * *param_3;
    }
  }
  else {
    local_20 = *(float *)(param_1 + 0x30);
    local_1c = *(undefined4 *)(param_1 + 0x40);
    local_18 = *(undefined4 *)(param_1 + 0x50);
    if (*(int *)(param_1 + 200) == 0) {
      func_00114F58(afStack_60,(float *)(param_1 + 0x54));
    }
    else {
      func_00114F58(afStack_60,(float *)(param_2 + 0x100));
    }
    func_00115074(&local_2c,afStack_60,&local_20);
    if (((uint)ALBW_AS_U32(param_3[4]) & 1) != 0) {
      *(float *)(param_2 + 0x20) =
           *(float *)(param_2 + 0x20) +
           (((local_2c + param_3[1]) - *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x20)) *
           *param_3;
    }
    if (((uint)ALBW_AS_U32(param_3[4]) & 2) != 0) {
      *(float *)(param_2 + 0x24) =
           *(float *)(param_2 + 0x24) +
           (((local_28 + param_3[2]) - *(float *)(param_2 + 0xc)) - *(float *)(param_2 + 0x24)) *
           *param_3;
    }
    if (((uint)ALBW_AS_U32(param_3[4]) & 4) != 0) {
      *(float *)(param_2 + 0x28) =
           *(float *)(param_2 + 0x28) +
           (((local_24 + param_3[3]) - *(float *)(param_2 + 0x10)) - *(float *)(param_2 + 0x28)) *
           *param_3;
    }
  }
  return param_3 + 6;
}


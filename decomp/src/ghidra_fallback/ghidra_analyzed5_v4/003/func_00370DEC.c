#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00666FD0(undefined4 *param_1,undefined1 param_2);
extern float DAT_00370e70;

// USA 00370DEC <- EU 00370DC8 (Ghidra, non-matching)
// GLOBAL DAT_00370e70 float

void func_00370DEC(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x928) != '\0') {
    if (*(uint *)(param_1 + 0x904) < *(uint *)(param_1 + 0x908)) {
      *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x928) = 0;
    }
  }
  if (*(int *)(param_1 + 0x8bc) == 0x14) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  }
  if (*(short *)(param_1 + 0x2e) != 0) {
    if (*(uint *)(param_1 + 0x910) < *(uint *)(param_1 + 0x914)) {
      *(uint *)(param_1 + 0x910) = *(uint *)(param_1 + 0x910) + 1;
    }
    else {
      func_00666FD0((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  func_00115D70(&local_18,(float *)(param_1 + 0x91c),DAT_00370e70);
  *(float *)(param_1 + 0x3dc) = local_18;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
  return;
}


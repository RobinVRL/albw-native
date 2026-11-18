#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013EA58(int param_1);
extern int func_0013ED4C(int param_1);
extern int func_0013F428(int param_1);
extern int *DAT_0013f610;

// USA 0013F54C <- EU 0013F54C (Ghidra, non-matching)
// GLOBAL DAT_0013f610 int *

undefined4 func_0013F54C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x523) == '\0') {
    if ((*(char *)(param_1 + 0x51e) == '\0') && (*(char *)(param_1 + 0x51d) != '\0')) {
      func_0013F428(param_1);
    }
    iVar1 = func_0013ED4C(param_1);
    if (iVar1 == 0) {
      return func_0013EA58(param_1);
    }
  }
  else {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x32) *
                                       (int)*(short *)(param_1 + 0x32),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar2 = *(float *)(param_1 + 8) - **(float **)(*DAT_0013f610 + 0x1c);
    fVar3 = *(float *)(param_1 + 0x10) - (*(float **)(*DAT_0013f610 + 0x1c))[2];
    if (fVar2 * fVar2 + fVar3 * fVar3 <= fVar4) {
      *(undefined1 *)(param_1 + 0x523) = 0;
      return func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x4b4),
                    *(float *)(*(int *)(param_1 + 0x42c) + 0x18));
    }
  }
  return 0;
}


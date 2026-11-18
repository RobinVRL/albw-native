#include "ghidra_types.h"

extern float DAT_00220b70;
extern float DAT_00220b74;

// USA 00220AE0 <- EU 00220AE0 (Ghidra, non-matching)
// GLOBAL DAT_00220b70 float
// GLOBAL DAT_00220b74 float

void * func_00220AE0(int param_1,int param_2,undefined4 param_3,uint param_4,float fparam_0)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  
  if (param_2 == 0xf || param_2 == 0x11) {
LAB_00220b44:
    uVar1 = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  }
  else {
    if (param_2 == 0x13) {
      uVar1 = *(uint *)(param_1 + 0xa6c);
      if (uVar1 != 0) {
        param_4 = *(uint *)(param_1 + 0xa68);
      }
      fVar2 = DAT_00220b70;
      if ((uVar1 != 0 && param_4 != 0) && (fVar2 = DAT_00220b74, param_4 < uVar1)) {
        fVar2 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
        fVar2 = fVar2 * *(float *)(param_1 + 0xa70);
      }
      if (fVar2 <= DAT_00220b70) goto LAB_00220b44;
    }
    uVar1 = *(uint *)(param_1 + 0x59c) | 0x80;
  }
  *(uint *)(param_1 + 0x59c) = uVar1;
  if (*(char *)(param_1 + 0xafd) == '\0') {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  }
  return (void *)param_1;
}


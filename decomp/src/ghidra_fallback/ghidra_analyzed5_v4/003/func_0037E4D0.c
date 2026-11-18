#include "ghidra_types.h"

extern int func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1,float fparam_2);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern float DAT_0037e554;
extern float DAT_0037e558;

// USA 0037E4D0 <- EU 0037E4AC (Ghidra, non-matching)
// GLOBAL DAT_0037e554 float
// GLOBAL DAT_0037e558 float

void func_0037E4D0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (uVar1 < uVar2) {
    if (*(int *)(param_1 + 0x88) == 0) {
      func_0051D39C((int *)(param_1 + 0x6c),*(int *)(param_1 + 0x74),uVar2 - uVar1);
    }
    else if (*(int *)(param_1 + 0x88) == 1) {
      fVar3 = DAT_0037e554;
      if ((uVar2 != 0) && (uVar1 != 0)) {
        fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar3 = fVar3 * *(float *)(param_1 + 0x80);
      }
      func_0051D1C0((undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                    *(undefined4 *)(param_1 + 0x74),DAT_0037e558,DAT_0037e554,fVar3);
    }
  }
  if (*(uint *)(param_1 + 0x78) < *(uint *)(param_1 + 0x7c)) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) + 1;
  }
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}


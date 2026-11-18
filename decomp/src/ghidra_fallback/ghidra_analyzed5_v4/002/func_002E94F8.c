#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_002e9560;
extern float DAT_002e9564;

// USA 002E94F8 <- EU 002E94D4 (Ghidra, non-matching)
// GLOBAL DAT_002e9560 undefined4
// GLOBAL DAT_002e9564 float

void func_002E94F8(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar2;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  func_004FC07C(param_1,1,0xffffffff,0);
  if (*(char *)(param_1 + 0x8cd) != '!') {
    iVar1 = func_00548E78(param_1,0x3c,0x19);
    if (iVar1 == 0) {
      in_s0 = DAT_002e9560;
    }
    *(int *)(param_1 + 0xb10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xb14) = in_s0;
    }
    else {
      fVar2 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb14) = DAT_002e9564 / fVar2;
    }
    *(undefined4 *)(param_1 + 0xb0c) = 0;
  }
  return;
}


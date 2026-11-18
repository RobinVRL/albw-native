#include "ghidra_types.h"

extern int func_0036B708(int param_1);
extern int func_0036BA20(void);
extern int func_0036BE78();
extern void func_0065E398();
extern float DAT_002204b4;

// USA 0022041C <- EU 0022041C (Ghidra, non-matching)
// GLOBAL DAT_002204b4 float

void func_0022041C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  
  iVar1 = param_1 + 0x8e8;
  func_0036BE78(iVar1);
  if (*(uint *)(param_1 + 0xa68) < *(uint *)(param_1 + 0xa6c)) {
    *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
  }
  else {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0x11,in_s0);
    func_0036BA20();
    func_0036B708(iVar1);
    func_0036BE78(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xa6c) - *(int *)(param_1 + 0xa68);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) =
       *(float *)(param_1 + 0x3d4) +
       (*(float *)(param_1 + 0xa58) - *(float *)(param_1 + 0x3d4)) * (DAT_002204b4 / fVar2);
  return;
}


#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern float DAT_0031c6c8;
extern float DAT_0031c6cc;

// USA 0031C634 <- EU 0031C610 (Ghidra, non-matching)
// GLOBAL DAT_0031c6c8 float
// GLOBAL DAT_0031c6cc float

void func_0031C634(int param_1)

{
  float fVar1;
  float fVar2;
  float fparam_0;
  
  func_00231448(param_1 + 0x98);
  func_00231448(param_1 + 0xa4);
  fparam_0 = DAT_0031c6c8;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xb2) = 4;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xbe) = 7;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 0xbc),fparam_0);
  fVar1 = *(float *)(param_1 + 0xe4);
  fVar2 = DAT_0031c6cc;
  if ((DAT_0031c6cc <= fVar1) && (fVar2 = fVar1, fparam_0 < fVar1)) {
    fVar2 = fparam_0;
  }
  func_0023194C(param_1 + 0x8c,(int)((fparam_0 - fVar2) * *(float *)(param_1 + 0xf0)));
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}


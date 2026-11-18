#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_001B6C04(int param_1);
extern float DAT_00231440;

// USA 002313C4 <- EU 002313C4 (Ghidra, non-matching)
// GLOBAL DAT_00231440 float

void func_002313C4(int param_1)

{
  int iVar1;
  float fVar2;
  
  func_001B6C04(param_1);
  if ((*(int *)(param_1 + 0x40) != 0) && (-1 < *(short *)(param_1 + 0x3a))) {
    fVar2 = DAT_00231440;
    func_001672F8(*(int *)(param_1 + 0x40),(int)*(short *)(param_1 + 0x3a),DAT_00231440,DAT_00231440
                 );
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
    if ((uint)(int)*(short *)(param_1 + 0x3a) < *(uint *)(*(int *)(param_1 + 0x40) + 8)) {
      iVar1 = iVar1 + *(short *)(param_1 + 0x3a) * 0x38;
    }
    *(float *)(iVar1 + 0x14) = fVar2;
    *(float *)(*(int *)(iVar1 + 0x10) + 0x10) = fVar2;
  }
  return;
}


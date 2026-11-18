#include "ghidra_types.h"

extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern float DAT_00195794;
extern float DAT_00195798;

// USA 001956E8 <- EU 001956E8 (Ghidra, non-matching)
// GLOBAL DAT_00195794 float
// GLOBAL DAT_00195798 float

undefined4 func_001956E8(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  iVar1 = func_00260C78(*(float *)(iVar1 + 0x14),*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                        *(float *)(iVar1 + 0x14));
  if (iVar1 != 0) {
    iVar1 = func_005211F4(param_1,DAT_00195798,DAT_00195794);
    if (iVar1 == 0) {
      fVar2 = *(float *)(param_1 + 0x484) - *(float *)(param_1 + 0x3d0);
      fVar3 = *(float *)(param_1 + 0x48c) - *(float *)(param_1 + 0x3d8);
      if (*(float *)(param_1 + 0x490) <= SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
        return func_00659A54((undefined4 *)(param_1 + 0x41c),0);
      }
    }
    else {
      func_00659A54((undefined4 *)(param_1 + 0x41c),3);
    }
  }
  return 0;
}


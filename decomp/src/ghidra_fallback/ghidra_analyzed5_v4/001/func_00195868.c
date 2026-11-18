#include "ghidra_types.h"

extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern float DAT_001958e4;
extern int *DAT_001958e8;

// USA 00195868 <- EU 00195868 (Ghidra, non-matching)
// GLOBAL DAT_001958e4 float
// GLOBAL DAT_001958e8 int *

void func_00195868(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051E6D0(*DAT_001958e8,(float *)(param_1 + 0x3d0),DAT_001958e4);
  if (iVar1 == 0) {
    if (*(short *)(param_1 + 0x30) == 0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
      iVar1 = func_00260C78(*(float *)(iVar1 + 0x14),*(float *)(iVar1 + 8),*(float *)(iVar1 + 0xc),
                            *(float *)(iVar1 + 0x14));
      if (iVar1 != 0) {
        func_00659A54((undefined4 *)(param_1 + 0x41c),4);
      }
    }
  }
  return;
}


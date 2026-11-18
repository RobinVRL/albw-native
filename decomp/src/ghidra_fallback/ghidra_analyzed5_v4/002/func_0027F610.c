#include "ghidra_types.h"

extern int func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4);
extern int func_00660F70(undefined4 *param_1,undefined1 param_2);
extern float DAT_0027f694;
extern float DAT_0027f698;

// USA 0027F610 <- EU 0027F638 (Ghidra, non-matching)
// GLOBAL DAT_0027f694 float
// GLOBAL DAT_0027f698 float

undefined4 func_0027F610(int param_1)

{
  if ((*(char *)(param_1 + 0x4c0) == '\x01') && (*(int *)(param_1 + 0x4bc) < 0x6e)) {
    func_00660F70((undefined4 *)(param_1 + 0x4bc),0);
    func_001E5B90(param_1,1,*(float *)(param_1 + 0x3d0),*(float *)(param_1 + 0x3d4),
                  *(float *)(param_1 + 0x3d8),DAT_0027f698,DAT_0027f694);
    return 1;
  }
  return 0;
}


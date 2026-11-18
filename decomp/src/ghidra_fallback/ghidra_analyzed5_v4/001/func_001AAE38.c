#include "ghidra_types.h"

extern int func_004F4A68();
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern float DAT_001aaeb8;

// USA 001AAE38 <- EU 001AAE38 (Ghidra, non-matching)
// GLOBAL DAT_001aaeb8 float

undefined4 func_001AAE38(int param_1,int param_2)

{
  if ((*(char *)(param_1 + 0x908) == '\x02') &&
     ((uint)ALBW_AS_U32(DAT_001aaeb8) <
      (uint)ALBW_AS_U32((*(float *)(param_1 + 0x374) * *(float *)(param_2 + 4) +
             *(float *)(param_1 + 0x378) * *(float *)(param_2 + 8) +
            *(float *)(param_1 + 0x37c) * *(float *)(param_2 + 0xc))))) {
    *(undefined1 *)(param_1 + 0x964) = 1;
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    func_0065AAC8((undefined4 *)(param_1 + 0x904),1);
  }
  return func_004F4A68(param_1,param_2);
}


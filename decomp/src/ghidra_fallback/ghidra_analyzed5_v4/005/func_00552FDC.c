#include "ghidra_types.h"

extern float DAT_00553028;
extern int DAT_0055302c;

// USA 00552FDC <- EU 00552FB4 (Ghidra, non-matching)
// GLOBAL DAT_00553028 float
// GLOBAL DAT_0055302c int

undefined4 func_00552FDC(int param_1,float fparam_0)

{
  float *pfVar1;
  
  if (((*(byte *)(param_1 + 0x324) & 1) != 0 || (*(byte *)(param_1 + 0x324) & 8) != 0) &&
     ((fparam_0 < DAT_00553028 ||
      ((*(float *)(param_1 + 0x4cc) != DAT_00553028 &&
       (pfVar1 = *(float **)(param_1 + 0x44),
       DAT_0055302c < (int)ALBW_AS_U32(SQRT(*pfVar1 * *pfVar1 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2]))))
      )))) {
    return 1;
  }
  return 0;
}


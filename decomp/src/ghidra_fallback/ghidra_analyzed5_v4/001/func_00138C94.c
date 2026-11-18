#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int *DAT_00138d00;
extern float DAT_00138d04;

// USA 00138C94 <- EU 00138C94 (Ghidra, non-matching)
// GLOBAL DAT_00138d00 int *
// GLOBAL DAT_00138d04 float

undefined4 func_00138C94(int param_1,int param_2)

{
  func_0014E138(param_1,param_2);
  if ((*(char *)(param_1 + 0x410) != '\x02') && (*DAT_00138d00 != 0)) {
    if (*(float *)(*(int *)(*DAT_00138d00 + 0x1c) + 4) < *(float *)(param_1 + 0x3d4) + DAT_00138d04)
    {
      return func_004CF478(*(int *)(param_1 + 0x430),1);
    }
    return func_004CF478(*(int *)(param_1 + 0x430),0);
  }
  return 0;
}


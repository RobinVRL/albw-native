#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float DAT_00341430;

// USA 003413E4 <- EU 003413C0 (Ghidra, non-matching)
// GLOBAL DAT_00341430 float

void func_003413E4(int param_1,float *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]) == DAT_00341430)
  {
    bVar1 = *param_3 == 0;
  }
  if (!bVar1) {
    *(undefined1 *)(param_1 + 0x4d4) = 1;
    func_00115C54((float *)(param_1 + 0x4d8),(float *)(param_1 + 0x4d8),param_2);
    *(int *)(param_1 + 0x4f0) = *param_3 + *(int *)(param_1 + 0x4f0);
  }
  return;
}


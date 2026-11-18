#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float DAT_00341430;

// USA 003413DC <- EU 003413B8 (Ghidra, non-matching)
// GLOBAL DAT_00341430 float

void func_003413DC(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  bVar2 = false;
  if (SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]) == DAT_00341430)
  {
    bVar2 = *param_3 == 0;
  }
  if (!bVar2) {
    *(undefined1 *)(iVar1 + 0x4d4) = 1;
    func_00115C54((float *)(iVar1 + 0x4d8),(float *)(iVar1 + 0x4d8),param_2);
    *(int *)(iVar1 + 0x4f0) = *param_3 + *(int *)(iVar1 + 0x4f0);
  }
  return;
}


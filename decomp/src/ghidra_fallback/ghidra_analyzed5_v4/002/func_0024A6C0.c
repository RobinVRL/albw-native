#include "ghidra_types.h"

extern int func_0024ADF4(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern float DAT_0024a744;
extern float DAT_0024a748;
extern int *DAT_0024a74c;

// USA 0024A6C0 <- EU 0024A6C0 (Ghidra, non-matching)
// GLOBAL DAT_0024a744 float
// GLOBAL DAT_0024a748 float
// GLOBAL DAT_0024a74c int *

void func_0024A6C0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  func_0024ADF4(param_1,2,DAT_0024a748,DAT_0024a744);
  piVar1 = DAT_0024a74c;
  if (*(char *)(param_1 + 0x440) == '\x02') {
    iVar2 = func_00520FC0();
    iVar3 = *piVar1;
    if (*(float *)(iVar2 + 8) <= *(float *)(param_1 + 0x3d8)) {
      iVar3 = -iVar3;
    }
    iVar3 = iVar3 + -0x40000000;
  }
  else {
    iVar2 = func_00520FC0();
    iVar3 = *piVar1;
    if (*(float *)(iVar2 + 8) <= *(float *)(param_1 + 0x3d8)) {
      iVar3 = iVar3 + 0x40000000;
    }
    else {
      iVar3 = 0x40000000 - iVar3;
    }
  }
  *(int *)(param_1 + 1000) = iVar3;
  *(undefined4 *)(param_1 + 0x444) = 0;
  return;
}


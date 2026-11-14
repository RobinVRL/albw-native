/* USA 00489F28 (EU 00489F00): sead::FileDevice::tryOpen(this, handle, path, mode, flag):
 * handle+0x38 = flag; r = this->doOpen_(handle, path, mode) (vtable +0x2C); handle+0x10 = r,
 * handle+0x14 = this when opened. Native fix of the generated Ghidra text: the virtual call
 * kept only (this, handle); path and mode stay in r2/r3 on ARM. Confidence: high. */
#include "ghidra_types.h"


// USA 00489F28 <- EU 00489F00 (Ghidra, non-matching)

int func_00489F28(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if ((char)param_1[0x13] == '\0' || param_2 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = param_5;
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2,param_3,param_4);  /* r2/r3 pass through */
    *(int *)(param_2 + 0x10) = iVar1;
    if (iVar1 != 0) {
      *(int **)(param_2 + 0x14) = param_1;
    }
  }
  return iVar1;
}


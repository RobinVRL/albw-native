/* USA 0048A08C (EU 0048A064): sead::FileDevice::tryClose(this, handle): if the device is
 * available and handle != NULL: this->isMatchDevice_(handle) (vtable +0x20) then
 * this->doClose_(handle) (+0x30); on success clear handle+0x10/+0x14. Native fix of the
 * generated Ghidra text: the first virtual call lost its 2nd argument (r1 = handle, unchanged
 * at EU 0048A094). Confidence: high. */
#include "ghidra_types.h"


// USA 0048A08C <- EU 0048A064 (Ghidra, non-matching)

int func_0048A08C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((char)param_1[0x13] != '\0') {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);  /* r1 = handle still live */
      iVar1 = 0;
      if ((iVar2 != 0) && (iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2), iVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
      }
    }
  }
  return iVar1;
}


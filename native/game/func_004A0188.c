/* USA 004A0188 (EU 004A0160): heap free (same shape as ExpHeap::free 0049C840). Native fix of
 * the generated Ghidra text: the isInclude check this->vt[0x40](this, ptr) lost r1 = ptr.
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);

// USA 004A0188 <- EU 004A0160 (Ghidra, non-matching)

undefined4 func_004A0188(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);  /* isInclude(ptr): r1 kept */
  if ((iVar1 != 0) && ((param_1[0x1c] & 2U) == 0)) {
    piVar2 = (int *)0x0;
    if ((param_1[0x1c] & 1U) != 0) {
      func_0010C0B8((int)(param_1 + 0x15));
      piVar2 = param_1 + 0x15;
    }
    *param_2 = param_1[0x21];
    param_1[0x21] = (int)param_2;
    param_1[0x20] = param_1[0x20] + param_1[0x1d];
    if (piVar2 != (int *)0x0) {
      return func_0010EEE0((int)piVar2);
    }
  }
  return 0;
}


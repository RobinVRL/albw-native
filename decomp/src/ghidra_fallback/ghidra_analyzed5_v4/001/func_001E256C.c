#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int func_0049F688(int param_1);
extern int *DAT_001e2610;
extern uint *DAT_001e2614;

// USA 001E256C <- EU 001E256C (Ghidra, non-matching)
// GLOBAL DAT_001e2610 int *
// GLOBAL DAT_001e2614 uint *

undefined4 func_001E256C(uint param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    iVar4 = *DAT_001e2610;
    func_0010C0B8(iVar4 + 0x30);
    while ((piVar2 = func_0049F688(iVar4 + 0x10), piVar2 != (int *)0x0 &&
           (iVar3 = (int)piVar2 - *(int *)(iVar4 + 0x1c), iVar3 != 0))) {
      func_001080D4((int *)(iVar3 + 0xa0));
    }
    func_0010EEE0(iVar4 + 0x30);
  }
  lVar1 = (ulonglong)*DAT_001e2614 * (ulonglong)param_1;
  uVar5 = func_0011624C((uint)lVar1,
                        param_1 * DAT_001e2614[1] +
                        ((int)param_1 >> 0x1f) * *DAT_001e2614 + (int)((ulonglong)lVar1 >> 0x20),
                        1000,0);
  uVar5 = func_0011624C((uint)uVar5,(uint)(uVar5 >> 0x20),1000,0);
  return func_0049BCF4((uint)uVar5,(uint)(uVar5 >> 0x20));
}


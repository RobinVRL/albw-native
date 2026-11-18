#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern uint DAT_0049bd14;

// USA 0049BCF4 <- EU 0049BCCC (Ghidra, non-matching)
// GLOBAL DAT_0049bd14 uint

undefined4 func_0049BCF4(uint param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_1 * 3 +
          ((ulonglong)
           (((int)param_2 >> 0x1f) * DAT_0049bd14 +
           (int)((ulonglong)DAT_0049bd14 * (ulonglong)param_2 >> 0x20)) << 0x20 |
          (ulonglong)DAT_0049bd14 * (ulonglong)param_2 & 0xffffffff) +
          CONCAT44(param_2 * 3,(int)((ulonglong)DAT_0049bd14 * (ulonglong)param_1 >> 0x20));
  return func_00104338((uint)lVar1,(int)((ulonglong)lVar1 >> 0x20));
}


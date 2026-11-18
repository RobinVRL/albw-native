#include "ghidra_types.h"

extern int func_00149BD4(byte *param_1,int param_2);
extern int func_002914A0(int param_1);
extern int func_00293388(int param_1);
extern int *DAT_001db5ac;
extern undefined4 DAT_001db5b0;

// USA 001DB544 <- EU 001DB544 (Ghidra, non-matching)
// GLOBAL DAT_001db5ac int *
// GLOBAL DAT_001db5b0 undefined4

undefined4 func_001DB544(int param_1)

{
  if (*(char *)(*DAT_001db5ac + 0x18) == '\a' || *(char *)(*DAT_001db5ac + 0x18) == '%') {
    func_00149BD4((byte *)(param_1 + 0x598),
                  (uint)*(byte *)(param_1 + 0x599) - (uint)*(byte *)(param_1 + 0x598));
  }
  func_002914A0(*(int *)(param_1 + 0x614));
  return func_00293388(*(int *)(param_1 + 0x614));
}


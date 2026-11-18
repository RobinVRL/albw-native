#include "ghidra_types.h"

extern int func_002917D4(int param_1,undefined4 param_2,float fparam_0);
extern int func_00291A04(int param_1,float fparam_0);
extern int *DAT_001a45cc;
extern float DAT_001a45d0;

// USA 001A4590 <- EU 001A4590 (Ghidra, non-matching)
// GLOBAL DAT_001a45cc int *
// GLOBAL DAT_001a45d0 float

undefined4 func_001A4590(int param_1,undefined4 param_2,int param_3)

{
  if (*(char *)(param_1 + 0x8fd) == '\x01') {
    if (*(char *)(param_3 + 0x24) == '\x05') {
      return func_002917D4(*DAT_001a45cc,0,DAT_001a45d0);
    }
    if (*(char *)(param_3 + 0x24) == '\b') {
      return func_00291A04(*DAT_001a45cc,DAT_001a45d0);
    }
  }
  return 0;
}


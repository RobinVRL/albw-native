#include "ghidra_types.h"

extern int func_00230ADC(int *param_1);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int *DAT_0032febc;

// USA 0032FE78 <- EU 0032FE54 (Ghidra, non-matching)
// GLOBAL DAT_0032febc int *

undefined4 func_0032FE78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  param_1[0xbe] = param_1[0xbe] + 1;
  switch((char)param_1[0xbd]) {
  case '\x04':
    if ((char)param_1[0xc0] == '\0') {
      uVar1 = func_00255B48(*DAT_0032febc,param_1[0xbf],param_3);
      *(char *)(param_1 + 0xc0) = (char)uVar1;
    }
  }
  return func_00230ADC(param_1);
}


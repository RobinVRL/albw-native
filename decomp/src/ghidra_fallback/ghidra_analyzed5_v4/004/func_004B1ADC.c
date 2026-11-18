#include "ghidra_types.h"

extern int func_00122C78(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002FD10C(int param_1);
extern int func_004CD7C8(int param_1,int param_2);
extern int DAT_004b1af4;
extern int *DAT_004b1af8;
extern int *DAT_004b1afc;

// USA 004B1ADC <- EU 004B1AB4 (Ghidra, non-matching)
// GLOBAL DAT_004b1af4 int
// GLOBAL DAT_004b1af8 int *
// GLOBAL DAT_004b1afc int *

undefined4 func_004B1ADC(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_00122C78((int *)(param_1 + 0x216c),param_2,param_3);
  *(undefined1 *)(DAT_004b1af4 + param_1) = 1;
  func_002FD10C(*DAT_004b1af8);
  return func_004CD7C8(*DAT_004b1afc,param_1 + 0x2c);
}


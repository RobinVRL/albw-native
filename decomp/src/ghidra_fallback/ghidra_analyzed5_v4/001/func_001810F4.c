#include "ghidra_types.h"

extern int DAT_0018113c;
extern int DAT_00181140;

// USA 001810F4 <- EU 001810F4 (Ghidra, non-matching)
// GLOBAL DAT_0018113c int
// GLOBAL DAT_00181140 int

undefined4 func_001810F4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0018113c;
  param_1[0xf7] = DAT_0018113c;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  iVar1 = DAT_00181140;
  param_1[0x26a] = 0x32;
  param_1[0x26b] = iVar1;
  param_1[0x269] = 0;
  param_1[0x2a8] = 0;
                    /* WARNING: Could not recover jumptable at 0x00181138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xac))(param_1,8,0xffffffff);
}


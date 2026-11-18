#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int DAT_0059f8ac;
extern undefined *DAT_0059f8b0;

// USA 0059F8A4 <- EU 0059F87C (Ghidra, non-matching)
// GLOBAL DAT_0059f8ac int
// GLOBAL DAT_0059f8b0 undefined *

void func_0059F8A4(void)

{
  int iVar1;
  
  iVar1 = func_00100118(DAT_0059f8ac,DAT_0059f8b0,8,0x14);
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0xa4) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = 0;
  return;
}


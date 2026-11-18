#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);
extern int func_004FD0B4(int param_1);
extern undefined4 *DAT_002acebc;

// USA 002ACE74 <- EU 002ACE50 (Ghidra, non-matching)
// GLOBAL DAT_002acebc undefined4 *

undefined4 func_002ACE74(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  func_002ADE0C(param_1,param_2);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  puVar1 = DAT_002acebc;
  *(undefined4 *)(param_1 + 0x70) = *DAT_002acebc;
  *(undefined4 *)(param_1 + 0x74) = puVar1[1];
  *(undefined4 *)(param_1 + 0x78) = puVar1[2];
  if (param_2 != 0x1f) {
    func_004FD0B4(*(int *)(param_1 + 0x34));
  }
  return func_002AD658(param_1,2,param_2 & 0xff,0x1f,0,1);
}


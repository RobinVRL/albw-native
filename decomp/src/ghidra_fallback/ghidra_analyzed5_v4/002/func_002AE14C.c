#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);
extern undefined4 *DAT_002ae194;

// USA 002AE14C <- EU 002AE128 (Ghidra, non-matching)
// GLOBAL DAT_002ae194 undefined4 *

undefined4 func_002AE14C(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  func_002ADE0C(param_1,param_2);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  puVar1 = DAT_002ae194;
  *(undefined4 *)(param_1 + 0x70) = *DAT_002ae194;
  *(undefined4 *)(param_1 + 0x74) = puVar1[1];
  *(undefined4 *)(param_1 + 0x78) = puVar1[2];
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x500) = *(undefined4 *)(param_1 + 0x174);
  return func_002AD658(param_1,0xd,param_2 & 0xff,0x1f,0,1);
}


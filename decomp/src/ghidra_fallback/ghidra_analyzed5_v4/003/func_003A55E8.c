#include "ghidra_types.h"

extern undefined4 DAT_003a5678;
extern undefined4 DAT_003a567c;
extern undefined4 DAT_003a5680;

// USA 003A55E8 <- EU 003A55C4 (Ghidra, non-matching)
// GLOBAL DAT_003a5678 undefined4
// GLOBAL DAT_003a567c undefined4
// GLOBAL DAT_003a5680 undefined4

undefined4 * func_003A55E8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_1 + 3;
  param_1[2] = 0x20;
  uVar1 = DAT_003a5678;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *(undefined1 *)param_1[1] = 0;
  uVar2 = DAT_003a5680;
  *param_1 = DAT_003a5680;
  param_1[0xd] = 0x20;
  param_1[0xb] = uVar1;
  param_1[0xc] = param_1 + 0xe;
  *(undefined1 *)(param_1[0xc] + 0x1f) = 0;
  *(undefined1 *)param_1[0xc] = 0;
  param_1[0xb] = uVar2;
  param_1[0x18] = 0x20;
  param_1[0x16] = uVar1;
  param_1[0x17] = param_1 + 0x19;
  *(undefined1 *)(param_1[0x17] + 0x1f) = 0;
  *(undefined1 *)param_1[0x17] = 0;
  param_1[0x16] = uVar2;
  param_1[0x23] = 0x20;
  param_1[0x21] = uVar1;
  param_1[0x22] = param_1 + 0x24;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  *(undefined1 *)param_1[0x22] = 0;
  param_1[0x21] = uVar2;
  return param_1;
}


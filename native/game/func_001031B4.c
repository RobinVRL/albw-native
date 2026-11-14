/* USA 001031B4 (EU 001031B4): TaskBase::CreateArg ctor(this, const TaskClassID *cls): copies the
 * 8-byte class id (ldm r1), 0x14 x4 vec ctor, fields cleared, +0x74 = -1, +0x78 = 1; returns this.
 * Native fix of the round-2 regeneration: the ARM-evidence table dropped the 2nd parameter
 * (EU 001031B8 `ldm r1, {r1, r2}` reads r1 before writing it), so the class id was read from an
 * unaffected register (in_r1). Confidence: high. */
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0010320c;

// USA 001031B4 <- EU 001031B4 (Ghidra, non-matching)
// GLOBAL DAT_0010320c undefined *

int func_001031B4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  iVar1 = func_00100118((int)(param_1 + 2),DAT_0010320c,0x14,4);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0xffffffff;
  *(undefined1 *)(iVar1 + 0x70) = 1;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  return iVar1 + -8;
}


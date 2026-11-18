#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern float DAT_004561ec;

// USA 004561AC <- EU 00456184 (Ghidra, non-matching)
// GLOBAL DAT_004561ec float

/* WARNING: Removing unreachable block (ram,0x004561c8) */
/* WARNING: Removing unreachable block (ram,0x004561d4) */

undefined4 func_004561AC(int param_1)

{
  float fparam_0;
  int iVar1;
  ushort *puVar2;
  
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 4;
  fparam_0 = DAT_004561ec;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  return func_002C00A8(*(int *)(param_1 + 0x14));
}


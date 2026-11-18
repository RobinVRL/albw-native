#include "ghidra_types.h"

extern int func_002D439C(int param_1,undefined4 *param_2);
extern int func_002D5D3C(void *param_1);
extern int func_004EE540(undefined4 *param_1);
extern undefined4 DAT_00347b6c;
extern undefined4 DAT_00347b70;

// USA 00347B40 <- EU 00347B1C (Ghidra, non-matching)
// GLOBAL DAT_00347b6c undefined4
// GLOBAL DAT_00347b70 undefined4

undefined4 func_00347B40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_00347b6c;
  func_002D439C(param_1[0x1c],param_1 + 0x56);
  *(undefined4 *)(param_1[0x14] + 0x160) = DAT_00347b70;
  *(undefined1 *)(param_1[0x14] + 0x166) = 1;
  *(undefined1 *)(param_1[0xb] + 199) = 1;
  puVar1 = func_004EE540(param_1 + 0x34);
  func_002D5D3C(puVar1 + -0x34);
  return (undefined4)param_1;
}


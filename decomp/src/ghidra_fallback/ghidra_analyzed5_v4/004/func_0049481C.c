#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0049823C(int param_1);
extern undefined4 DAT_0049481c;
extern uint *DAT_00494820;

// USA 0049481C <- EU 004947F4 (Ghidra, non-matching)
// GLOBAL DAT_0049481c undefined4
// GLOBAL DAT_00494820 uint *

undefined4 * func_0049481C(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_0049823C(param_1);
  *puVar1 = DAT_0049481c;
  func_0010E3C4(puVar1 + 0x5c,DAT_00494820,0x1c);
  return puVar1;
}


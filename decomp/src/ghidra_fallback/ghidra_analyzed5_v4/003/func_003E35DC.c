#include "ghidra_types.h"

extern int func_0010AF18(void);
extern int func_003E3D74(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern undefined4 *DAT_003e35ec;

// USA 003E35DC <- EU 003E35BC (Ghidra, non-matching)
// GLOBAL DAT_003e35ec undefined4 *

undefined4 func_003E35DC(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = *DAT_003e35ec;
  puVar1 = (uint *)func_0010AF18();
  return func_003E3D74(puVar1,uVar2,param_1,param_2);
}


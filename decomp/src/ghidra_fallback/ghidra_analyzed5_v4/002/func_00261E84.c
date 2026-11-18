#include "ghidra_types.h"

extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern undefined4 DAT_00261ecc;
extern undefined4 *DAT_00261ed0;
extern float DAT_00261ed4;

// USA 00261E84 <- EU 00261EAC (Ghidra, non-matching)
// GLOBAL DAT_00261ecc undefined4
// GLOBAL DAT_00261ed0 undefined4 *
// GLOBAL DAT_00261ed4 float

undefined4 func_00261E84(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00261ed0;
  uVar1 = DAT_00261ecc;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00261ecc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004F8864(param_1,puVar2,0,DAT_00261ed4);
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_001B6E04(undefined4 *param_1);
extern undefined4 DAT_00369f0c;

// USA 00369EF0 <- EU 00369ECC (Ghidra, non-matching)
// GLOBAL DAT_00369f0c undefined4

undefined4 * func_00369EF0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_001B6E04(param_1);
  uVar1 = DAT_00369f0c;
  puVar2[0xe] = 0;
  *puVar2 = uVar1;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  func_0010B3EC(puVar2 + 0xf,3,(int)(puVar2 + 0x12));
  puVar2[0x1e] = 0;
  return puVar2;
}


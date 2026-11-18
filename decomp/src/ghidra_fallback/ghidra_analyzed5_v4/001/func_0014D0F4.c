#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_001B6E04(undefined4 *param_1);
extern undefined4 DAT_0014d130;

// USA 0014D0F4 <- EU 0014D0F4 (Ghidra, non-matching)
// GLOBAL DAT_0014d130 undefined4

undefined4 * func_0014D0F4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_001B6E04(param_1);
  *puVar1 = DAT_0014d130;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  func_0010B3EC(puVar1 + 0xe,0x20,(int)(puVar1 + 0x11));
  *(undefined1 *)(puVar1 + 0x31) = 0;
  return puVar1;
}


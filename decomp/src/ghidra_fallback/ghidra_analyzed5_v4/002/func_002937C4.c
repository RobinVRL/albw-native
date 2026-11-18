#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_00293860;

// USA 002937C4 <- EU 002937EC (Ghidra, non-matching)
// GLOBAL DAT_00293860 int

void func_002937C4(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_2 == param_3) {
    return;
  }
  puVar2 = (uint *)(param_1 + param_3 * DAT_00293860 * 4);
  puVar1 = (uint *)(param_1 + param_2 * DAT_00293860 * 4);
  func_0010E3C4(puVar1,puVar2,0xe00);
  func_0010E3C4(puVar1 + 0x380,puVar2 + 0x380,0x600);
  func_0010E3C4(puVar1 + 0x500,puVar2 + 0x500,0x200);
  puVar1 = (uint *)(param_1 + 0x440c + param_2 * 4);
  *puVar1 = *puVar1 | 7;
  return;
}


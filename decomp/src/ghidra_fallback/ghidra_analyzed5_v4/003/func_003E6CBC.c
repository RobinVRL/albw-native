#include "ghidra_types.h"

extern int func_003E676C(uint param_1,undefined4 param_2,undefined4 *param_3,int param_4,uint param_5);
extern undefined4 DAT_003e6d28;
extern undefined4 DAT_003e6d2c;

// USA 003E6CBC <- EU 003E6C9C (Ghidra, non-matching)
// GLOBAL DAT_003e6d28 undefined4
// GLOBAL DAT_003e6d2c undefined4

undefined4 * func_003E6CBC(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_2 + param_1 & 0xfffffffc;
  puVar3 = (undefined4 *)(param_1 + 3U & 0xfffffffc);
  if (((int)((int)puVar3 - uVar2) < 1) && (0x33 < uVar2 - (int)puVar3)) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      uVar1 = DAT_003e6d28;
      puVar3[2] = 0;
      puVar3[7] = puVar3 + 7;
      puVar3[6] = 0;
      *puVar3 = uVar1;
      puVar3[8] = puVar3 + 7;
    }
    func_003E676C((uint)puVar3,DAT_003e6d2c,puVar3 + 0xd,uVar2,param_3);
    puVar3[10] = puVar3[3];
    puVar3[0xb] = puVar3[4];
    puVar3[0xc] = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}


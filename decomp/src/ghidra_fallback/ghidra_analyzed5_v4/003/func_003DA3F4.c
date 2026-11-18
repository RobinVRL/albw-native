#include "ghidra_types.h"

extern int func_001008E8(ushort *param_1,ushort *param_2,int param_3);
extern int DAT_003da440;

// USA 003DA3F4 <- EU 003DA3D4 (Ghidra, non-matching)
// GLOBAL DAT_003da440 int

uint func_003DA3F4(ushort *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_003da440;
  uVar3 = 0;
  while( true ) {
    puVar4 = (undefined4 *)(iVar1 + uVar3 * 8);
    if ((((ushort *)*puVar4 != (ushort *)0x0) && ((uint)puVar4[1] <= param_2)) &&
       (iVar2 = func_001008E8(param_1,(ushort *)*puVar4,puVar4[1]), iVar2 == 0)) break;
    uVar3 = uVar3 + 1;
    if (0x83 < (int)uVar3) {
      return 0x85;
    }
  }
  *param_3 = puVar4[1];
  return uVar3 & 0xff;
}


#include "ghidra_types.h"

extern int func_003CE91C(int param_1,int param_2);
extern int func_003D175C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern uint DAT_00564094;
extern int DAT_00564098;

// USA 00564044 <- EU 0056401C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_00564094 uint
// GLOBAL DAT_00564098 int

uint func_00564044(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_00564098;
  uVar1 = DAT_00564094;
  iVar4 = 0;
  while( true ) {
    uVar3 = func_003D175C(param_2,param_3,param_4,param_5);
    if ((uVar3 & 0x80000000) == 0 || 1 < iVar4) {
      return uVar3;
    }
    if (uVar3 != uVar1) break;
    func_003CE91C(1,0);
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar2 + 1) = 1;
    if (2 < iVar4) {
      return uVar3;
    }
  }
  return uVar3;
}


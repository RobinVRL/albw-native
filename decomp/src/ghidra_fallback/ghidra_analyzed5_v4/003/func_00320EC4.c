#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern uint DAT_00320ef8;

// USA 00320EC4 <- EU 00320EA0 (Ghidra, non-matching)
// GLOBAL DAT_00320ef8 uint

void func_00320EC4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (uVar3 != 0) {
    uVar4 = (ulonglong)DAT_00320ef8;
    do {
      if (uVar2 < *(uint *)(param_1 + 0x16c)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x174) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      func_0010C7F8(iVar1,0,ALBW_AS_F32(uVar4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}


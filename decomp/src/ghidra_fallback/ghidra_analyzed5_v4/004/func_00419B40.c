#include "ghidra_types.h"

extern int func_0041497C(int param_1);
extern int func_004149E4(int param_1);

// USA 00419B40 <- EU 00419B20 (Ghidra, non-matching)

undefined4 func_00419B40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -0x58;
    if (*(int *)(iVar1 + -0x18) <= param_2) {
      uVar5 = *(undefined4 *)(iVar1 + -0x50);
      pcVar3 = *(code **)(iVar1 + -0x4c);
      uVar4 = *(undefined4 *)(iVar1 + -0x48);
      func_004149E4(iVar2);
      func_0041497C(iVar2);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar2,2,uVar4);
      }
      return uVar5;
    }
  }
  return 0;
}


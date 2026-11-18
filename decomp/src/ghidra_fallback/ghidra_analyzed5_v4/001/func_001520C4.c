#include "ghidra_types.h"

extern int func_004C5D80(int param_1,undefined4 param_2);
extern int func_004C62C4(int *param_1,uint param_2);
extern int func_004C63C4(int *param_1,uint param_2,int param_3,int param_4);
extern int func_004C6454(int *param_1);
extern int func_004C6478(int param_1);
extern uint DAT_00152124;
extern int DAT_00152128;

// USA 001520C4 <- EU 001520C4 (Ghidra, non-matching)
// GLOBAL DAT_00152124 uint
// GLOBAL DAT_00152128 int

undefined4 func_001520C4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x514);
  func_004C5D80(iVar1 + 0x20,iVar1 + 0x18);
  iVar2 = func_004C63C4((int *)(iVar1 + 0x20),DAT_00152124,DAT_00152128,0);
  *(char *)(iVar1 + 0xdec) = (char)iVar2;
  if (iVar2 == 0) {
    func_004C62C4((int *)(iVar1 + 0x20),param_2);
  }
  func_004C6454((int *)(iVar1 + 0x20));
  return func_004C6478(iVar1 + 0x20);
}


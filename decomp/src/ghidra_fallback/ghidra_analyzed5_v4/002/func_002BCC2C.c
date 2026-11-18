#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);

// USA 002BCC2C <- EU 002BCC08 (Ghidra, non-matching)

void func_002BCC2C(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_004FC07C(param_1,4,0xffffffff,0);
  }
  uVar2 = *(uint *)(param_1 + 0x93c);
  if (uVar2 < *(uint *)(param_1 + 0x940)) {
    uVar2 = uVar2 + 1;
    *(uint *)(param_1 + 0x93c) = uVar2;
  }
  if (*(uint *)(param_1 + 0x940) <= uVar2) {
    func_00662A14((undefined4 *)(param_1 + 0x8bc),8);
  }
  return;
}


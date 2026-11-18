#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065DDC8(undefined4 *param_1,undefined1 param_2);

// USA 00219B28 <- EU 00219B28 (Ghidra, non-matching)

void func_00219B28(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = func_0058AB74(param_1);
  if (((int)uVar2 == 8) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    func_004FABDC(param_1,9,0xffffffff,0);
  }
  if (*(short *)(param_1 + 0x8e2) == 0) {
    func_0065DDC8((undefined4 *)(param_1 + 0x8f0),6);
  }
  else {
    *(short *)(param_1 + 0x8e2) = *(short *)(param_1 + 0x8e2) + -1;
  }
  return;
}


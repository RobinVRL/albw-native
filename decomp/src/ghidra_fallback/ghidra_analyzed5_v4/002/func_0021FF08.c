#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern void func_0065E398();
extern undefined4 uRam0021ffc8;

// USA 0021FF08 <- EU 0021FF08 (Ghidra, non-matching)
// GLOBAL UNK_0021ffc8 undefined4

void func_0021FF08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float in_s0;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x8e4) == '\x01') {
    uVar3 = func_0058AB74(param_1);
    if ((int)uVar3 == 0x14) {
      iVar2 = func_0058A8F0(param_1);
      if (iVar2 != 0) {
        func_004FABDC(param_1,0x10,0,0);
        uVar1 = uRam0021ffc8;
        *(undefined4 *)(param_1 + 0xa6c) = 200;
        *(undefined4 *)(param_1 + 0xa70) = uVar1;
        *(undefined4 *)(param_1 + 0xa68) = 0;
        return;
      }
    }
    else {
      if (*(uint *)(param_1 + 0xa6c) <= *(uint *)(param_1 + 0xa68)) {
        func_0065E398((undefined4 *)(param_1 + 0x8c0),0xf,in_s0);
        return;
      }
      *(uint *)(param_1 + 0xa68) = *(uint *)(param_1 + 0xa68) + 1;
    }
  }
  else {
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      func_0065E398((undefined4 *)(param_1 + 0x8c0),9,in_s0);
    }
  }
  return;
}


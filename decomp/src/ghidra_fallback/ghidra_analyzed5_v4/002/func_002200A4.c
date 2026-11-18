#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 uRam00220100;

// USA 002200A4 <- EU 002200A4 (Ghidra, non-matching)
// GLOBAL UNK_00220100 undefined4

void func_002200A4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 0x9fc) + 0x44) = 0;
  if (*(char *)(param_1 + 0x8c5) != '\x17') {
    func_004FABDC(param_1,0x1b,0,0);
    uVar1 = uRam00220100;
    *(undefined4 *)(param_1 + 0xa6c) = 0x32;
    *(undefined4 *)(param_1 + 0xa70) = uVar1;
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  return;
}


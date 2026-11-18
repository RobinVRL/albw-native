#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern undefined4 uRam001aacb0;

// USA 001AAC40 <- EU 001AAC40 (Ghidra, non-matching)
// GLOBAL UNK_001aacb0 undefined4

void func_001AAC40(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  func_004FABDC(param_1,1,0xffffffff,0);
  uVar1 = uRam001aacb0;
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x965) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x965) = 1;
  }
  if (*(char *)(param_1 + 0x965) == '\0') {
    iVar4 = *(int *)(param_1 + 0x928) + -0x40000000;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x928) + 0x40000000;
  }
  *(int *)(param_1 + 0x928) = iVar4;
  return;
}


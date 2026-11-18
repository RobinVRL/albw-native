#include "ghidra_types.h"

extern int func_0037C574(int param_1,int param_2);
extern int func_00559B54(void);
extern undefined4 DAT_001d6984;

// USA 001D6924 <- EU 001D6924 (Ghidra, non-matching)
// GLOBAL DAT_001d6984 undefined4

void func_001D6924(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00559B54();
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0x3e4) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  if (*(char *)(param_1 + 0x514) != '\0' && *(char *)(param_1 + 0x514) != '\n') {
    func_0037C574(param_1,-1);
  }
  uVar2 = DAT_001d6984;
  *(undefined4 *)(param_1 + 0x54c) = 3;
  *(undefined4 *)(param_1 + 0x550) = uVar2;
  *(undefined4 *)(param_1 + 0x548) = 0;
  return;
}


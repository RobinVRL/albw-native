#include "ghidra_types.h"

extern int func_0037C574(int param_1,int param_2);
extern int func_00559B54(void);
extern undefined4 DAT_00288114;

// USA 00288090 <- EU 002880B8 (Ghidra, non-matching)
// GLOBAL DAT_00288114 undefined4

void func_00288090(int param_1)

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
  if (*(char *)(param_1 + 0x518) != '\0') {
    func_0037C574(param_1,800);
  }
  uVar2 = DAT_00288114;
  *(undefined4 *)(param_1 + 0x538) = 3;
  *(undefined4 *)(param_1 + 0x53c) = uVar2;
  *(undefined4 *)(param_1 + 0x534) = 0;
  return;
}


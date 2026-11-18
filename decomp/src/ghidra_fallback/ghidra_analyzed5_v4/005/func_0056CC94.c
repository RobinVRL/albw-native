#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B884(int param_1);
extern int func_0056B8A8(int param_1);
extern int func_0056B928(int param_1);
extern int func_0056B998(int param_1);
extern int func_0056B9D0(int param_1);

// USA 0056CC94 <- EU 0056CC6C (Ghidra, non-matching)

bool func_0056CC94(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[4] = (uint)*(byte *)(puVar1 + 2);
    uVar2 = func_0056B884((int)puVar1);
    *(char *)(param_3 + 5) = (char)uVar2;
    uVar2 = func_0056B8A8((int)puVar1);
    *(char *)((int)param_3 + 0x15) = (char)uVar2;
    uVar2 = func_0056B9D0((int)puVar1);
    param_3[3] = uVar2;
    uVar2 = func_0056B998((int)puVar1);
    param_3[2] = uVar2;
    uVar2 = func_0056B928((int)puVar1);
    *(char *)((int)param_3 + 0x16) = (char)uVar2;
  }
  return puVar1 != (undefined4 *)0x0;
}


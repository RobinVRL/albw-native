#include "ghidra_types.h"

extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058A468(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);

// USA 00206018 <- EU 00206018 (Ghidra, non-matching)

undefined4 func_00206018(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x8bc);
  if (*(char *)(param_1 + 0x918) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x510) + 5) == '\x02') {
        func_0065D4EC(puVar2,1);
      }
      else {
        func_0065D4EC(puVar2,6);
      }
      iVar1 = func_0058A468(param_1);
      return func_004FC78C(param_1,(short)iVar1);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4fc) + *(int *)(param_1 + 0x90c);
    *(int *)(param_1 + 0x4fc) = iVar1;
    *(int *)(param_1 + 1000) = iVar1 + *(int *)(param_1 + 1000);
    if (-1 < *(int *)(param_1 + 0x4fc)) {
      *(undefined4 *)(param_1 + 0x4fc) = 0;
      func_0065D4EC(puVar2,6);
      iVar1 = func_0058A468(param_1);
      func_004FC78C(param_1,(short)iVar1);
      *(undefined1 *)(param_1 + 0x918) = 0;
    }
  }
  return 0;
}


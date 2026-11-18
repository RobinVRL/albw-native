#include "ghidra_types.h"

extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);

// USA 00328B20 <- EU 00328AFC (Ghidra, non-matching)

undefined4 func_00328B20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc60) == 0) {
    if (((*(char *)(param_1 + 0x963) == '\0') || (*(char *)(param_1 + 0x964) != '\0')) &&
       ((*(char *)(param_1 + 0xa3b) == '\0' || (*(char *)(param_1 + 0xa3c) != '\0')))) {
      func_00665670((undefined4 *)(param_1 + 0xba8),0xc);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc60) + -1;
    *(int *)(param_1 + 0xc60) = iVar1;
    if (iVar1 == 0) {
      return func_0036E490((byte *)(param_1 + 0x9d0),5,*(undefined4 *)(param_1 + 0x99c));
    }
  }
  return 0;
}


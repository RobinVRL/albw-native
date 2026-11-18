#include "ghidra_types.h"


// USA 002A1270 <- EU 002A124C (Ghidra, non-matching)

uint func_002A1270(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(char *)(param_3 + 0x24) != '\x01') {
    if (*(char *)(param_3 + 0x24) == '\x02') {
      *(undefined1 *)(param_1 + 0x988) = 1;
    }
    else {
      uVar1 = param_2 & 0xff;
      bVar3 = 0x1d < uVar1;
      bVar2 = uVar1 == 0x1e;
      if (!bVar2) {
        uVar1 = uVar1 - 0xe;
        bVar3 = 2 < uVar1;
      }
      if (!bVar3 || (bVar2 || uVar1 == 3)) {
        param_2 = 0xf;
      }
      else if (param_2 == 10) goto LAB_002a1290;
    }
    return param_2;
  }
LAB_002a1290:
  *(undefined1 *)(param_1 + 0x988) = 1;
  return 0xf;
}


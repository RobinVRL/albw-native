#include "ghidra_types.h"


// USA 0068FB40 <- EU 0068FB18 (Ghidra, non-matching)

undefined4 func_0068FB40(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    if (*(ushort *)(param_1 + 6) == param_2) {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 4) == '\x03') {
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != param_1 + 8; iVar1 = *(int *)(iVar1 + 4)) {
      bVar3 = param_2 <= *(ushort *)(iVar1 + 8);
      bVar2 = *(ushort *)(iVar1 + 8) == param_2;
      if (!bVar3 || bVar2) {
        bVar3 = *(ushort *)(iVar1 + 10) <= param_2;
        bVar2 = param_2 == *(ushort *)(iVar1 + 10);
      }
      if (!bVar3 || bVar2) {
        return 1;
      }
    }
  }
  return 0;
}


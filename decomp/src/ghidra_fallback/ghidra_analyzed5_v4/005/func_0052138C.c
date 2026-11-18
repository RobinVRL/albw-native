#include "ghidra_types.h"


// USA 0052138C <- EU 00521364 (Ghidra, non-matching)

int func_0052138C(int param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  
  sVar2 = *(short *)(param_1 + 0x44);
  sVar3 = *(short *)(param_1 + 0x2c);
  cVar1 = (char)*(undefined2 *)(param_1 + 0x42);
  if (sVar2 != -1) {
    *param_2 = cVar1;
    *(int *)(param_2 + 4) = (int)sVar2;
    *(short *)(param_2 + 8) = sVar3;
    iVar4 = (int)cVar1;
    bVar5 = iVar4 != -1;
    if (bVar5) {
      iVar4 = 1;
    }
    param_2[10] = (char)(sVar3 >> 7) + '\x01';
    if (bVar5) {
      return iVar4;
    }
  }
  return 0;
}


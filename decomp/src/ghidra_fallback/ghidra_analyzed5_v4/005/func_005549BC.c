#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);

// USA 005549BC <- EU 00554994 (Ghidra, non-matching)

int func_005549BC(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x29c) == '\0') {
    if (*(short *)(param_1 + 0x228) < 0) {
      return *(int *)(param_2 + 0x24);
    }
    cVar1 = *(char *)(param_1 + 0x29d);
  }
  else {
    iVar2 = func_004904CC(*(float *)(*(int *)(param_2 + 0x20) + 8),
                          *(float *)(*(int *)(param_2 + 0x20) + 0x10));
    cVar1 = *(char *)(param_1 + 0x29c);
    if (cVar1 == '\x01') {
      return iVar2;
    }
  }
  if (cVar1 != '\x02') {
    return -0x80000000;
  }
  return 0;
}


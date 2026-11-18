#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern longlong func_003C9D1C(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5);

// USA 0040E74C <- EU 0040E72C (Ghidra, non-matching)

int func_0040E74C(int param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else if (param_3 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = param_1;
    if (param_3 == 2) {
      iVar1 = 2;
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    lVar2 = func_003C9D1C((uint *)(param_1 + 4),param_2,param_2,(int)param_2 >> 0x1f,iVar1);
    if ((int)lVar2 < 0) {
      func_0010AC24((int)lVar2,0x40e79c);
    }
    return 1;
  }
  lVar2 = func_003C9D1C((uint *)(param_1 + 4),param_2,param_2,(int)param_2 >> 0x1f,iVar1);
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return ((int)lVar2 >> 0x1f) + 1;
}


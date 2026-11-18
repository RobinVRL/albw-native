#include "ghidra_types.h"

extern int func_001DFA10(int param_1);
extern int func_002DEAD0(int param_1,int *param_2);
extern int func_0052EF6C(int param_1);
extern int *DAT_002df28c;

// USA 002DF220 <- EU 002DF1FC (Ghidra, non-matching)
// GLOBAL DAT_002df28c int *

void func_002DF220(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar5 = *(int *)(param_1 + 0x30);
    cVar1 = *(char *)(*DAT_002df28c + 0x79);
    piVar4 = (int *)(*(int *)(param_1 + 0x28) - iVar5);
    iVar2 = *(int *)((int)piVar4 + iVar5 + 4);
    while (piVar4 != (int *)((param_1 + 0x24) - iVar5)) {
      bVar3 = func_0052EF6C((int)piVar4);
      if (bVar3) {
        if (cVar1 == '\0') {
          func_001DFA10((int)piVar4);
        }
      }
      else {
        func_002DEAD0(param_1,piVar4);
      }
      piVar4 = (int *)(iVar2 - iVar5);
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}


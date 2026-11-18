#include "ghidra_types.h"

extern int func_00257528(int param_1,int param_2);
extern int func_0040D80C(int param_1);
extern int func_0057D86C(int *param_1);

// USA 00258520 <- EU 00258548 (Ghidra, non-matching)

undefined4 func_00258520(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 100) == '\0') {
    cVar1 = *(char *)(param_1 + 0x68);
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x69);
    }
    if (bVar3 && cVar1 == '\0') {
      if (param_2 < 1) {
        bVar3 = func_0057D86C((int *)(param_1 + 0xc));
        if (!bVar3) {
          return 0;
        }
        if (*(int *)(param_1 + 0xc) != 0) {
          func_0040D80C(*(int *)(param_1 + 0xc));
        }
        if (*(int *)(param_1 + 0xc) == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xac);
        }
        return func_00257528(param_1,iVar2);
      }
    }
    else if (param_2 < 1) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0x44) = param_2;
  }
  return 0;
}


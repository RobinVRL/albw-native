#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00404138(undefined4 param_1,undefined1 param_2);

// USA 003FE1A4 <- EU 003FE184 (Ghidra, non-matching)

int * func_003FE1A4(int *param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  piVar1 = (int *)func_00404138(0x9c,4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[0x22] = 0;
    *(undefined2 *)(piVar1 + 0x23) = 0;
    *(undefined2 *)((int)piVar1 + 0x8e) = 0;
    *(undefined2 *)(piVar1 + 0x25) = 0;
    *(undefined2 *)((int)piVar1 + 0x96) = 0;
    piVar1[0x26] = 0;
    uVar4 = 0;
    *(undefined1 *)(piVar1 + 2) = 0;
    piVar2 = piVar1 + 2;
    do {
      uVar4 = uVar4 + 1;
      piVar3 = (int *)((int)piVar2 + 1);
      *(char *)piVar2 = *param_2;
      param_2 = param_2 + 1;
      bVar6 = *param_2 == '\0';
      uVar5 = 0;
      if (!bVar6) {
        uVar5 = 0x7f;
      }
      piVar2 = piVar3;
    } while ((bVar6 || uVar4 <= uVar5) && (!bVar6 && uVar5 != uVar4));
    *(char *)piVar3 = '\0';
    func_00112364(param_1,(int)(param_1 + 1),piVar1);
    piVar1 = piVar1 + 0x22;
  }
  return piVar1;
}


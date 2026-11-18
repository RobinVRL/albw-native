#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_0040411C(undefined4 param_1);

// USA 003FDF0C <- EU 003FDEEC (Ghidra, non-matching)

int * func_003FDF0C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    piVar2 = (int *)param_1[1];
    func_00111EF0(param_1,piVar2);
    if (piVar2 != (int *)0x0) {
      if ((char)piVar2[0x23] != '\0') {
        piVar3 = (int *)piVar2[0x22];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
          func_0040411C(piVar3);
        }
        piVar2[0x22] = 0;
      }
      func_0040411C(piVar2);
    }
    iVar1 = *param_1;
  }
  return param_1;
}


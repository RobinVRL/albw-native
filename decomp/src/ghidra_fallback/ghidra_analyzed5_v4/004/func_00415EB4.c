#include "ghidra_types.h"

extern int func_0010A7BC(int *param_1);
extern int func_00111EF0(int *param_1,int *param_2);
extern int func_0041D830(undefined4 *param_1,undefined4 *param_2);

// USA 00415EB4 <- EU 00415E94 (Ghidra, non-matching)

void func_00415EB4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  func_0010A7BC((int *)(param_1 + 0x74));
  piVar1 = *(int **)(param_1 + 0x8c);
  if (*(int **)(param_1 + 0x8c) != (int *)(param_1 + 0x8c)) {
    do {
      piVar3 = piVar1 + -0x12;
      piVar2 = (int *)*piVar1;
      func_0010A7BC(piVar1 + -0xf);
      func_00111EF0((int *)(param_1 + 0x88),piVar1);
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(piVar3);
        func_0041D830((undefined4 *)(param_1 + 0x94),piVar3);
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x8c));
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


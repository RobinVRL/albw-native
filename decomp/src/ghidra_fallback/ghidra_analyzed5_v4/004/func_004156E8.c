#include "ghidra_types.h"

extern int func_003DD088(void);

// USA 004156E8 <- EU 004156C8 (Ghidra, non-matching)

void func_004156E8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 500) != '\0') {
    *(undefined1 *)(param_1 + 0x1f7) = 1;
    func_003DD088();
    *(undefined1 *)(param_1 + 500) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 0x10))(piVar1 + -1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
  return;
}


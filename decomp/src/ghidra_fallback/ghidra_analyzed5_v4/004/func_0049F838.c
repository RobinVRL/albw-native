#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern uint *DAT_0049f898;

// USA 0049F838 <- EU 0049F810 (Ghidra, non-matching)
// GLOBAL DAT_0049f898 uint *

undefined4 func_0049F838(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x5c) + 4;
  func_0010C0B8(iVar5);
  puVar1 = DAT_0049f898;
  uVar4 = 0;
  uVar2 = *DAT_0049f898;
  if (0 < (int)uVar2) {
    do {
      if (uVar4 < uVar2) {
        piVar3 = (int *)((int *)(param_1 + 0x44))[uVar4];
      }
      else {
        piVar3 = *(int **)(param_1 + 0x44);
      }
      if ((piVar3 != (int *)0x0) && (*(char *)(param_1 + uVar4 + 0x54) != '\x01')) {
        *(undefined1 *)(param_1 + uVar4 + 0x54) = 1;
        (**(code **)(*piVar3 + 0x14))(piVar3);
      }
      uVar2 = *puVar1;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar2);
  }
  return func_0010EEE0(iVar5);
}


// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_003FD6F4(int param_1);
extern int *DAT_002c014c;

// USA 002C00C0 <- EU 002C009C (Ghidra, non-matching)
// GLOBAL DAT_002c014c int *

void func_002C00C0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x14);
  piVar3 = *(int **)(param_1 + 0x1c);
  *piVar4 = param_1;
  if (piVar3 == (int *)0x0) {
    return;
  }
  piVar3 = (int *)func_003FD6F4(*(int *)(*piVar3 + 0x10));
  piVar1 = DAT_002c014c;
  do {
    if (piVar3 == (int *)0x0) {
      (void) piVar1;
      return;
    }
    (void) piVar1;
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (piVar2 == piVar1) {
          if ((piVar3 != (int *)0x0) && (piVar4[1] == 0)) {
            piVar4[1] = (int)piVar3;
            *(ushort *)((int)piVar4 + 0x16) = *(ushort *)((int)piVar4 + 0x16) | 0x40;
            return;
          }
          break;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)0x0);
    }
    piVar3 = (int *)func_003FD6F4((int)piVar3);
    piVar1 = DAT_002c014c;
  } while( true );
}


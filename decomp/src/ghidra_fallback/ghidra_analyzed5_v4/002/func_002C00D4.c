// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_003FD6F4(int param_1);
extern int *DAT_002c014c;

// USA 002C00D4 <- EU 002C00B0 (Ghidra, non-matching)
// GLOBAL DAT_002c014c int *

void func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = param_2;
  if (param_3 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)func_003FD6F4(*(int *)(*param_3 + 0x10));
  piVar1 = DAT_002c014c;
  do {
    if (piVar2 == (int *)0x0) {
      (void) piVar1;
      return;
    }
    (void) piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (piVar3 == piVar1) {
          if ((piVar2 != (int *)0x0) && (param_1[1] == 0)) {
            param_1[1] = piVar2;
            *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 0x40;
            return;
          }
          break;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
    piVar2 = (int *)func_003FD6F4((int)piVar2);
    piVar1 = DAT_002c014c;
  } while( true );
}


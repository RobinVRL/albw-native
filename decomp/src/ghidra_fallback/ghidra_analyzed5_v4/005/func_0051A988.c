#include "ghidra_types.h"

extern int func_0044CF70(int param_1,float fparam_0,float fparam_1);
extern int func_0044D16C(int param_1,int param_2);

// USA 0051A988 <- EU 0051A960 (Ghidra, non-matching)

undefined4 func_0051A988(int param_1,int param_2,float fparam_0,float fparam_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = (int *)(param_1 + 0xa4);
    if (uVar2 < 3) {
      piVar1 = piVar1 + uVar2;
    }
    if (*piVar1 != 0) {
      piVar1 = (int *)(param_1 + 0xa4);
      if (uVar2 < 3) {
        piVar1 = piVar1 + uVar2;
      }
      if (*(char *)(*piVar1 + 0xb4) == '\0') {
        piVar1 = (int *)(param_1 + 0xa4);
        if (uVar2 < 3) {
          piVar1 = piVar1 + uVar2;
        }
        func_0044CF70(*piVar1,fparam_0,fparam_1);
        piVar1 = (int *)(param_1 + 0xa4);
        if (uVar2 < 3) {
          piVar1 = piVar1 + uVar2;
        }
        return func_0044D16C(*piVar1,param_2);
      }
    }
    uVar2 = uVar2 + 1;
    if (2 < (int)uVar2) {
      return 0;
    }
  } while( true );
}


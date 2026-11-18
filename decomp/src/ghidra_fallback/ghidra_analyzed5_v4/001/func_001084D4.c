#include "ghidra_types.h"

extern int func_0010A9FC(int *param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_00108520;
extern int *DAT_00108524;
extern undefined4 *DAT_00108528;
extern undefined4 *DAT_0010852c;
extern undefined4 *DAT_00108530;

// USA 001084D4 <- EU 001084D4 (Ghidra, non-matching)
// GLOBAL DAT_00108520 int *
// GLOBAL DAT_00108524 int *
// GLOBAL DAT_00108528 undefined4 *
// GLOBAL DAT_0010852c undefined4 *
// GLOBAL DAT_00108530 undefined4 *

void func_001084D4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_00108520;
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    *DAT_00108520 = iVar2;
  }
  if (iVar2 == 0) {
    iVar2 = func_0010A9FC(DAT_00108524,0,param_3);
    if (-1 < iVar2) {
      uVar1 = *DAT_00108528;
      *DAT_0010852c = uVar1;
      *DAT_00108530 = uVar1;
    }
    return;
  }
  return;
}


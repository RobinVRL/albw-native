#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int *DAT_003d1250;
extern uint DAT_003d1254;

// USA 003D1240 <- EU 003D121C (Ghidra, non-matching)
// GLOBAL DAT_003d1250 int *
// GLOBAL DAT_003d1254 uint

undefined4 func_003D1240(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_003d1250;
  iVar2 = *DAT_003d1250;
  while (iVar2 == 0) {
    func_00104338(DAT_003d1254,0);
    iVar2 = *piVar1;
  }
  return 0;
}


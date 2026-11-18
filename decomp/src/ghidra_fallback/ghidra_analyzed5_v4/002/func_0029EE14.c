#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004ED680(int param_1,int param_2);
extern int DAT_0029ee38;
extern int *DAT_0029ee3c;

// USA 0029EE14 <- EU 0029EDF0 (Ghidra, non-matching)
// GLOBAL DAT_0029ee38 int
// GLOBAL DAT_0029ee3c int *

undefined4 func_0029EE14(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0029ee38 + 0x5c;
  *param_1 = DAT_0029ee38;
  piVar1 = DAT_0029ee3c;
  param_1[200] = iVar2;
  if ((*piVar1 != 0) && ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 5)) {
    func_004ED680(*piVar1,param_1[0xb3]);
  }
  return func_001510A4(param_1);
}


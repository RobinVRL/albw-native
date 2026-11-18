#include "ghidra_types.h"

extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int DAT_002e1174;

// USA 002E117C <- EU 002E1158 (Ghidra, non-matching)
// GLOBAL DAT_002e1174 int

undefined4 func_002E117C(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_002e1174 + 0x5c;
  *piVar1 = DAT_002e1174;
  piVar1[200] = iVar2;
  return (undefined4)param_1;
}


#include "ghidra_types.h"

extern int func_005568E8(int param_1);
extern int *DAT_00521080;

// GLOBAL DAT_00521080 int *
// USA 00521098 <- EU 00521058 (Ghidra, function missing from the decomp table)

bool func_00521098(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = func_005568E8(*DAT_00521080);
  return *param_2 == iVar1;
}


#include "ghidra_types.h"

extern int func_0048E140(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0048e8ec;

// USA 0048E8DC <- EU 0048E8B4 (Ghidra, non-matching)
// GLOBAL DAT_0048e8ec undefined4

undefined4 func_0048E8DC(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0048E140(param_1,param_2,(int)"NullFaderTask" /* EU 0048E8DC */);
  uVar1 = DAT_0048e8ec;
  puVar2[0x76] = 0;
  *puVar2 = uVar1;
  puVar2[0x77] = 0;
  puVar2[0x78] = 0;
  return (undefined4)param_1;
}


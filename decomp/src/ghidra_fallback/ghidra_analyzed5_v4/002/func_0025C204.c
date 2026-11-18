#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0048FBB0(undefined4 *param_1);
extern int func_004A1520();
extern int DAT_0025c2a0;
extern int *DAT_0025c2a4;

// USA 0025C204 <- EU 0025C22C (Ghidra, non-matching)
// GLOBAL DAT_0025c2a0 int
// GLOBAL DAT_0025c2a4 int *

undefined4 func_0025C204(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*(char *)((int)param_1 + 0xe1);
  iVar3 = DAT_0025c2a0 + 0x18;
  *param_1 = DAT_0025c2a0;
  param_1[4] = iVar3;
  if ((-1 < iVar2) && (*(int **)(*DAT_0025c2a4 + iVar2 * 4 + 0x1fd4) == param_1)) {
    *(undefined4 *)(*DAT_0025c2a4 + 0x1fd4 + iVar2 * 4) = 0;
  }
  puVar1 = func_0048A134(param_1 + 0x39);
  puVar1 = func_0048FBB0(puVar1 + -0x35);
  return func_004A1520(puVar1 + -4);
}


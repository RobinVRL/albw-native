#include "ghidra_types.h"

extern int func_0048A134(undefined4 *param_1);
extern int func_0048FBB0(undefined4 *param_1);
extern int func_004A1520();
extern int func_0058FA5C();
extern int DAT_0058e600;
extern int *DAT_0058e604;

// USA 0058E5A8 <- EU 0058E580 (Ghidra, non-matching)
// GLOBAL DAT_0058e600 int
// GLOBAL DAT_0058e604 int *

undefined4 func_0058E5A8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = DAT_0058e600;
  iVar3 = (int)*(char *)((int)param_1 + 0xd1);
  *param_1 = DAT_0058e600 + 0x18;
  param_1[-4] = iVar1;
  if ((-1 < iVar3) && (*(int **)(*DAT_0058e604 + iVar3 * 4 + 0x1fd4) == param_1 + -4)) {
    *(undefined4 *)(*DAT_0058e604 + 0x1fd4 + iVar3 * 4) = 0;
  }
  puVar2 = func_0048A134(param_1 + 0x35);
  puVar2 = func_0048FBB0(puVar2 + -0x35);
  puVar2 = func_004A1520(puVar2 + -4);
  return func_0058FA5C((int)puVar2);
}


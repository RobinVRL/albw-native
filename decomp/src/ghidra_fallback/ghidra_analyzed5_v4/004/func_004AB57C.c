#include "ghidra_types.h"

extern int func_0012E878(int param_1);
extern int func_00166720(int param_1);
extern int func_0019ADE8(int param_1,uint param_2);
extern int *DAT_004ab5bc;
extern int *DAT_004ab5c0;
extern int *DAT_004ab5c4;

// USA 004AB57C <- EU 004AB554 (Ghidra, non-matching)
// GLOBAL DAT_004ab5bc int *
// GLOBAL DAT_004ab5c0 int *
// GLOBAL DAT_004ab5c4 int *

undefined4 func_004AB57C(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_004ab5bc;
  iVar2 = *DAT_004ab5bc;
  *(undefined1 *)(iVar2 + 0x670) = 1;
  func_0019ADE8(iVar2,0);
  func_0019ADE8(iVar2,1);
  func_00166720(*DAT_004ab5c0);
  func_0012E878(*DAT_004ab5c4);
  iVar2 = *piVar1;
  *(undefined1 *)(iVar2 + 0x670) = 0;
  return func_0019ADE8(iVar2,2);
}


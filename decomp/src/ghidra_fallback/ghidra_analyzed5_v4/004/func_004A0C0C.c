#include "ghidra_types.h"

extern int func_00498290();
extern undefined4 DAT_004a0bfc;

// USA 004A0C0C <- EU 004A0BE4 (Ghidra, non-matching)
// GLOBAL DAT_004a0bfc undefined4

int func_004A0C0C(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_004a0bfc;
  iVar1 = func_00498290(param_1 + 0xc);
  return iVar1 + -0x30;
}


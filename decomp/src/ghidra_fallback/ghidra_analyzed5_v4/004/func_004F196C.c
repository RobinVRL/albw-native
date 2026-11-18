#include "ghidra_types.h"

extern int func_00297934(int param_1);
extern int func_00352A28(undefined4 *param_1);
extern int DAT_004f196c;

// USA 004F196C <- EU 004F1944 (Ghidra, non-matching)
// GLOBAL DAT_004f196c int

int func_004F196C(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_004f196c;
  *param_1 = DAT_004f196c;
  param_1[0xd] = iVar2 + 0x3c;
  puVar1 = func_00297934((int)(param_1 + 0x3d));
  iVar2 = func_00352A28(puVar1 + -0x12);
  return iVar2 + -0xac;
}


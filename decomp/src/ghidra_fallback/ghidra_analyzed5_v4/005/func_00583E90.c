#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int *DAT_00583ea8;
extern int *DAT_00583eac;
extern float DAT_00583eb0;
extern float DAT_00583eb4;

// USA 00583E90 <- EU 00583E68 (Ghidra, non-matching)
// GLOBAL DAT_00583ea8 int *
// GLOBAL DAT_00583eac int *
// GLOBAL DAT_00583eb0 float
// GLOBAL DAT_00583eb4 float

void func_00583E90(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = func_00588BE4(param_1);
  if ((iVar1 == *DAT_00583ea8) ||
     (iVar1 = func_00588BE4(param_1), fVar2 = DAT_00583eb0, iVar1 == *DAT_00583eac)) {
    fVar2 = DAT_00583eb4;
  }
  return;
}


#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern char *DAT_001603d4;
extern int *DAT_001603d8;
extern undefined *DAT_001603dc;

// USA 00160398 <- EU 0016039C (Ghidra, non-matching)
// GLOBAL DAT_001603d4 char *
// GLOBAL DAT_001603d8 int *
// GLOBAL DAT_001603dc undefined *

int func_00160398(float fparam_0)

{
  char *pcVar1;
  int *piVar2;
  undefined *puVar3;
  
  puVar3 = DAT_001603dc;
  pcVar1 = DAT_001603d4;
  *DAT_001603d4 = '\0';
  piVar2 = DAT_001603d8;
  *(float *)(pcVar1 + 8) = fparam_0;
  func_0052FD7C(*piVar2 + 0x3dbbc,puVar3,0);
  return (int)*pcVar1;
}


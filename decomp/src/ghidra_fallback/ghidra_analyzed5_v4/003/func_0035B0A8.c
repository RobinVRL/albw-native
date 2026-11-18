#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern char *DAT_0035b0b8;
extern int *DAT_0035b0bc;
extern undefined *DAT_0035b0c0;

// USA 0035B0A8 <- EU 0035B084 (Ghidra, non-matching)
// GLOBAL DAT_0035b0b8 char *
// GLOBAL DAT_0035b0bc int *
// GLOBAL DAT_0035b0c0 undefined *

int func_0035B0A8(void)

{
  char *pcVar1;
  undefined *puVar2;
  
  puVar2 = DAT_0035b0c0;
  pcVar1 = DAT_0035b0b8;
  *DAT_0035b0b8 = '\0';
  func_0052FD7C(*DAT_0035b0bc + 0x3dbbc,puVar2,0);
  return (int)*pcVar1;
}


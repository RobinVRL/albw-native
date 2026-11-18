#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern char *DAT_0015c5b8;
extern int *DAT_0015c5bc;
extern undefined *DAT_0015c5c0;

// USA 0015C580 <- EU 0015C584 (Ghidra, non-matching)
// GLOBAL DAT_0015c5b8 char *
// GLOBAL DAT_0015c5bc int *
// GLOBAL DAT_0015c5c0 undefined *

int func_0015C580(void)

{
  char *pcVar1;
  undefined *puVar2;
  
  puVar2 = DAT_0015c5c0;
  pcVar1 = DAT_0015c5b8;
  *DAT_0015c5b8 = '\0';
  func_0052FD7C(*DAT_0015c5bc + 0x3dbbc,puVar2,0);
  return (int)*pcVar1;
}


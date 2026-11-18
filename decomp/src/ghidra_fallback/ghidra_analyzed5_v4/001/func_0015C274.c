#include "ghidra_types.h"

extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int DAT_0015c2ac;
extern int *DAT_0015c2b0;
extern undefined *DAT_0015c2b4;

// USA 0015C274 <- EU 0015C278 (Ghidra, non-matching)
// GLOBAL DAT_0015c2ac int
// GLOBAL DAT_0015c2b0 int *
// GLOBAL DAT_0015c2b4 undefined *

undefined4 func_0015C274(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = DAT_0015c2b4;
  iVar1 = DAT_0015c2ac;
  *(undefined4 *)(DAT_0015c2ac + 0xc) = 0;
  func_0052FD7C(*DAT_0015c2b0 + 0x3dbbc,puVar2,0);
  return *(undefined4 *)(iVar1 + 0xc);
}


#include "ghidra_types.h"

extern int func_0025D9E8(int param_1,int *param_2,int param_3);
extern int func_002DF3E4(int param_1);
extern undefined4 DAT_001e3260;
extern int *DAT_001e3264;
extern int *DAT_001e3268;

// USA 001E3228 <- EU 001E3228 (Ghidra, non-matching)
// GLOBAL DAT_001e3260 undefined4
// GLOBAL DAT_001e3264 int *
// GLOBAL DAT_001e3268 int *

undefined4 * func_001E3228(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0025D9E8(param_1,param_2,param_3);
  *puVar1 = DAT_001e3260;
  *(undefined1 *)(*DAT_001e3264 + 0x25) = 0;
  func_002DF3E4(*DAT_001e3268);
  return puVar1;
}


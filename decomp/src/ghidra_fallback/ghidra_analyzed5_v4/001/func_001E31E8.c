#include "ghidra_types.h"

extern int func_0025D9E8(int param_1,int *param_2,int param_3);
extern undefined4 DAT_001e3220;
extern int *DAT_001e3224;

// USA 001E31E8 <- EU 001E31E8 (Ghidra, non-matching)
// GLOBAL DAT_001e3220 undefined4
// GLOBAL DAT_001e3224 int *

undefined4 func_001E31E8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0025D9E8(param_1,param_2,(int)"TaskMainGame" /* EU 001E3210 */);
  *puVar1 = DAT_001e3220;
  *(undefined1 *)(*DAT_001e3224 + 0x25) = 0;
  return (undefined4)param_1;
}


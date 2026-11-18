#include "ghidra_types.h"

extern int func_002DF3E4(int param_1);
extern int func_0048D088(int param_1,int *param_2,int param_3);
extern int DAT_0014b17c;
extern undefined4 DAT_0014b180;
extern int *DAT_0014b184;

// USA 0014B148 <- EU 0014B148 (Ghidra, non-matching)
// GLOBAL DAT_0014b17c int
// GLOBAL DAT_0014b180 undefined4
// GLOBAL DAT_0014b184 int *

undefined4 * func_0014B148(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0048D088(param_1,param_2,DAT_0014b17c);
  uVar1 = DAT_0014b180;
  puVar2[0x2f] = 0;
  *puVar2 = uVar1;
  func_002DF3E4(*DAT_0014b184);
  return puVar2;
}


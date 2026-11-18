#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057d084;
extern undefined4 *DAT_0057d088;
extern undefined4 DAT_0057d08c;

// USA 0057D058 <- EU 0057D030 (Ghidra, non-matching)
// GLOBAL DAT_0057d084 uint *
// GLOBAL DAT_0057d088 undefined4 *
// GLOBAL DAT_0057d08c undefined4

void func_0057D058(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d084 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d084), iVar1 != 0)) {
    *DAT_0057d088 = DAT_0057d08c;
  }
  if (DAT_0057d088 != param_2) {
    func_004B9748(param_2);
  }
  return;
}


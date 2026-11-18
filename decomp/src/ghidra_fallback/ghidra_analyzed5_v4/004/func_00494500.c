#include "ghidra_types.h"

extern int func_0048E620(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_0048a13c;
extern int *DAT_0048a140;

// USA 00494500 <- EU 004944D8 (Ghidra, non-matching)
// GLOBAL DAT_0048a13c undefined4
// GLOBAL DAT_0048a140 int *

undefined4 * func_0048A134(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_0048a13c;
  if (*DAT_0048a140 != 0) {
    func_0048E620(*DAT_0048a140,(int)param_1);
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}


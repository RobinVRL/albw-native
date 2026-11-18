#include "ghidra_types.h"

extern int func_0048B994(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_004929c0;
extern int *DAT_004929c4;

// USA 004929B4 <- EU 0049298C (Ghidra, non-matching)
// GLOBAL DAT_004929c0 undefined4
// GLOBAL DAT_004929c4 int *

undefined4 func_004929B4(undefined4 *param_1)

{
  *param_1 = DAT_004929c0;
  if (*DAT_004929c4 != 0) {
    func_0048B994(*DAT_004929c4,(int)param_1);
  }
  return func_004A1520(param_1);
}


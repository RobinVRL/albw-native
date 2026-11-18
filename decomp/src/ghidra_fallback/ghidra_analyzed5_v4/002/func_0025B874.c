#include "ghidra_types.h"

extern int func_001DFECC(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_0025b8b0;

// GLOBAL DAT_0025b8b0 undefined4
// USA 0025B874 <- EU 0025B874 (Ghidra, function missing from the decomp table)

undefined4 func_0025B874(undefined4 *param_1)

{
  *param_1 = DAT_0025b8b0;
  if (param_1[4] != 0) {
    func_001DFECC(param_1[4],(int)param_1);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return func_004A1520(param_1);
}


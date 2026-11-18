#include "ghidra_types.h"

extern int func_0056A244(int param_1);
extern int DAT_004129bc;

// USA 0041297C <- EU 0041295C (Ghidra, non-matching)
// GLOBAL DAT_004129bc int

int * func_0041297C(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == DAT_004129bc) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    iVar1 = func_0056A244((int)param_2);
    if (iVar1 != 0) {
      param_1[1] = iVar1 + 8;
      return param_1;
    }
  }
  return param_1;
}


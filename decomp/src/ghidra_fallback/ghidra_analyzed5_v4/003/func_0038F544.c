#include "ghidra_types.h"

extern int func_0038F58C(int param_1,uint param_2);
extern int func_004ECEFC(void *param_1);
extern int *DAT_0038f564;

// USA 0038F544 <- EU 0038F520 (Ghidra, non-matching)
// GLOBAL DAT_0038f564 int *

void * func_0038F544(int param_1,uint param_2)

{
  void *pvVar1;
  
  if ((*(char *)(param_1 + 0x330) == '\x01' && param_2 == 0) &&
     (*(int *)(*DAT_0038f564 + 0x44) != 0)) {
    func_0038F58C(param_1,param_2);
  }
  pvVar1 = func_004ECEFC(param_1);
  return pvVar1;
}


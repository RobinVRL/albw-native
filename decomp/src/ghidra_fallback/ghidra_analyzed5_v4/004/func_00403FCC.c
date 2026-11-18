#include "ghidra_types.h"

extern int func_00420110(undefined4 *param_1);
extern undefined4 DAT_00403fc0;

// USA 00403FCC <- EU 00403FAC (Ghidra, non-matching)
// GLOBAL DAT_00403fc0 undefined4

undefined4 * func_00403FCC(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_00420110(param_1);
  *puVar1 = DAT_00403fc0;
  return puVar1;
}


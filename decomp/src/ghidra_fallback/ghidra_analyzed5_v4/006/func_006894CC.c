#include "ghidra_types.h"

extern int func_0048B994(int param_1,int param_2);
extern int func_004A1520();
extern undefined4 DAT_004929c0;
extern int *DAT_004929c4;

// USA 006894CC <- EU 006894A4 (Ghidra, non-matching)
// GLOBAL DAT_004929c0 undefined4
// GLOBAL DAT_004929c4 int *

undefined4 * func_004929B8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = DAT_004929c0;
  if (*DAT_004929c4 != 0) {
    func_0048B994(*DAT_004929c4,(int)param_1);
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}


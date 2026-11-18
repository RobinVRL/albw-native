// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361634();
extern int func_004ED124();
extern undefined4 DAT_00323350;
extern int *DAT_00323354;

// USA 00323344 <- EU 00323320 (Ghidra, non-matching)
// GLOBAL DAT_00323350 undefined4
// GLOBAL DAT_00323354 int *

undefined4 * func_00323344(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_00323354;
  *param_1 = DAT_00323350;
  if (*piVar1 != 0) {
    func_00361634(*piVar1,0);
  }
  puVar2 = func_004ED124(param_1);
  return puVar2;
}


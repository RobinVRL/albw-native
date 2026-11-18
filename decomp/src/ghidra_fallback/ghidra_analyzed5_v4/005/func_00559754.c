#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559850;
extern undefined4 *DAT_00559854;
extern undefined4 DAT_00559858;
extern uint *DAT_0055985c;
extern undefined4 *DAT_00559860;
extern undefined4 DAT_00559864;
extern uint *DAT_00559868;
extern undefined4 *DAT_0055986c;
extern undefined4 DAT_00559870;
extern uint *DAT_00559874;
extern undefined4 *DAT_00559878;
extern undefined4 DAT_0055987c;

// USA 00559754 <- EU 0055972C (Ghidra, non-matching)
// GLOBAL DAT_00559850 uint *
// GLOBAL DAT_00559854 undefined4 *
// GLOBAL DAT_00559858 undefined4
// GLOBAL DAT_0055985c uint *
// GLOBAL DAT_00559860 undefined4 *
// GLOBAL DAT_00559864 undefined4
// GLOBAL DAT_00559868 uint *
// GLOBAL DAT_0055986c undefined4 *
// GLOBAL DAT_00559870 undefined4
// GLOBAL DAT_00559874 uint *
// GLOBAL DAT_00559878 undefined4 *
// GLOBAL DAT_0055987c undefined4

undefined4 func_00559754(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559850 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559850), iVar1 != 0)) {
    *DAT_00559854 = DAT_00559858;
  }
  if (DAT_00559854 != param_2) {
    if (((*DAT_0055985c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055985c), iVar1 != 0)) {
      *DAT_00559860 = DAT_00559864;
    }
    if (DAT_00559860 != param_2) {
      if (((*DAT_00559868 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559868), iVar1 != 0)) {
        *DAT_0055986c = DAT_00559870;
      }
      if (DAT_0055986c != param_2) {
        if (((*DAT_00559874 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559874), iVar1 != 0))
        {
          *DAT_00559878 = DAT_0055987c;
        }
        if (DAT_00559878 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


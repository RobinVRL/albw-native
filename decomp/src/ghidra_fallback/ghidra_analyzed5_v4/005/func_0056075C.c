#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00560858;
extern undefined4 *DAT_0056085c;
extern undefined4 DAT_00560860;
extern uint *DAT_00560864;
extern undefined4 *DAT_00560868;
extern undefined4 DAT_0056086c;
extern uint *DAT_00560870;
extern undefined4 *DAT_00560874;
extern undefined4 DAT_00560878;
extern uint *DAT_0056087c;
extern undefined4 *DAT_00560880;
extern undefined4 DAT_00560884;

// USA 0056075C <- EU 00560734 (Ghidra, non-matching)
// GLOBAL DAT_00560858 uint *
// GLOBAL DAT_0056085c undefined4 *
// GLOBAL DAT_00560860 undefined4
// GLOBAL DAT_00560864 uint *
// GLOBAL DAT_00560868 undefined4 *
// GLOBAL DAT_0056086c undefined4
// GLOBAL DAT_00560870 uint *
// GLOBAL DAT_00560874 undefined4 *
// GLOBAL DAT_00560878 undefined4
// GLOBAL DAT_0056087c uint *
// GLOBAL DAT_00560880 undefined4 *
// GLOBAL DAT_00560884 undefined4

undefined4 func_0056075C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560858 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560858), iVar1 != 0)) {
    *DAT_0056085c = DAT_00560860;
  }
  if (DAT_0056085c != param_2) {
    if (((*DAT_00560864 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560864), iVar1 != 0)) {
      *DAT_00560868 = DAT_0056086c;
    }
    if (DAT_00560868 != param_2) {
      if (((*DAT_00560870 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560870), iVar1 != 0)) {
        *DAT_00560874 = DAT_00560878;
      }
      if (DAT_00560874 != param_2) {
        if (((*DAT_0056087c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056087c), iVar1 != 0))
        {
          *DAT_00560880 = DAT_00560884;
        }
        if (DAT_00560880 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


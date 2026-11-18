#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00578514;
extern undefined4 *DAT_00578518;
extern undefined4 DAT_0057851c;
extern uint *DAT_00578520;
extern undefined4 *DAT_00578524;
extern undefined4 DAT_00578528;
extern uint *DAT_0057852c;
extern undefined4 *DAT_00578530;
extern undefined4 DAT_00578534;
extern uint *DAT_00578538;
extern undefined4 *DAT_0057853c;
extern undefined4 DAT_00578540;
extern uint *DAT_00578544;
extern undefined4 *DAT_00578548;
extern undefined4 DAT_0057854c;

// USA 005783D4 <- EU 005783AC (Ghidra, non-matching)
// GLOBAL DAT_00578514 uint *
// GLOBAL DAT_00578518 undefined4 *
// GLOBAL DAT_0057851c undefined4
// GLOBAL DAT_00578520 uint *
// GLOBAL DAT_00578524 undefined4 *
// GLOBAL DAT_00578528 undefined4
// GLOBAL DAT_0057852c uint *
// GLOBAL DAT_00578530 undefined4 *
// GLOBAL DAT_00578534 undefined4
// GLOBAL DAT_00578538 uint *
// GLOBAL DAT_0057853c undefined4 *
// GLOBAL DAT_00578540 undefined4
// GLOBAL DAT_00578544 uint *
// GLOBAL DAT_00578548 undefined4 *
// GLOBAL DAT_0057854c undefined4

undefined4 func_005783D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00578514 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578514), iVar1 != 0)) {
    *DAT_00578518 = DAT_0057851c;
  }
  if (DAT_00578518 != param_2) {
    if (((*DAT_00578520 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578520), iVar1 != 0)) {
      *DAT_00578524 = DAT_00578528;
    }
    if (DAT_00578524 != param_2) {
      if (((*DAT_0057852c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057852c), iVar1 != 0)) {
        *DAT_00578530 = DAT_00578534;
      }
      if (DAT_00578530 != param_2) {
        if (((*DAT_00578538 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578538), iVar1 != 0))
        {
          *DAT_0057853c = DAT_00578540;
        }
        if (DAT_0057853c != param_2) {
          if (((*DAT_00578544 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578544), iVar1 != 0)
             ) {
            *DAT_00578548 = DAT_0057854c;
          }
          if (DAT_00578548 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


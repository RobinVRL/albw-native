#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580048;
extern undefined4 *DAT_0058004c;
extern undefined4 DAT_00580050;
extern uint *DAT_00580054;
extern undefined4 *DAT_00580058;
extern undefined4 DAT_0058005c;
extern uint *DAT_00580060;
extern undefined4 *DAT_00580064;
extern undefined4 DAT_00580068;
extern uint *DAT_0058006c;
extern undefined4 *DAT_00580070;
extern undefined4 DAT_00580074;
extern uint *DAT_00580078;
extern undefined4 *DAT_0058007c;
extern undefined4 DAT_00580080;

// USA 0057FF08 <- EU 0057FEE0 (Ghidra, non-matching)
// GLOBAL DAT_00580048 uint *
// GLOBAL DAT_0058004c undefined4 *
// GLOBAL DAT_00580050 undefined4
// GLOBAL DAT_00580054 uint *
// GLOBAL DAT_00580058 undefined4 *
// GLOBAL DAT_0058005c undefined4
// GLOBAL DAT_00580060 uint *
// GLOBAL DAT_00580064 undefined4 *
// GLOBAL DAT_00580068 undefined4
// GLOBAL DAT_0058006c uint *
// GLOBAL DAT_00580070 undefined4 *
// GLOBAL DAT_00580074 undefined4
// GLOBAL DAT_00580078 uint *
// GLOBAL DAT_0058007c undefined4 *
// GLOBAL DAT_00580080 undefined4

undefined4 func_0057FF08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580048 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580048), iVar1 != 0)) {
    *DAT_0058004c = DAT_00580050;
  }
  if (DAT_0058004c != param_2) {
    if (((*DAT_00580054 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580054), iVar1 != 0)) {
      *DAT_00580058 = DAT_0058005c;
    }
    if (DAT_00580058 != param_2) {
      if (((*DAT_00580060 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580060), iVar1 != 0)) {
        *DAT_00580064 = DAT_00580068;
      }
      if (DAT_00580064 != param_2) {
        if (((*DAT_0058006c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058006c), iVar1 != 0))
        {
          *DAT_00580070 = DAT_00580074;
        }
        if (DAT_00580070 != param_2) {
          if (((*DAT_00580078 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580078), iVar1 != 0)
             ) {
            *DAT_0058007c = DAT_00580080;
          }
          if (DAT_0058007c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


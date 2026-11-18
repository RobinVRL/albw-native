#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577010;
extern undefined4 *DAT_00577014;
extern undefined4 DAT_00577018;
extern uint *DAT_0057701c;
extern undefined4 *DAT_00577020;
extern undefined4 DAT_00577024;
extern uint *DAT_00577028;
extern undefined4 *DAT_0057702c;
extern undefined4 DAT_00577030;
extern uint *DAT_00577034;
extern undefined4 *DAT_00577038;
extern undefined4 DAT_0057703c;
extern uint *DAT_00577040;
extern undefined4 *DAT_00577044;
extern undefined4 DAT_00577048;

// USA 00576ED0 <- EU 00576EA8 (Ghidra, non-matching)
// GLOBAL DAT_00577010 uint *
// GLOBAL DAT_00577014 undefined4 *
// GLOBAL DAT_00577018 undefined4
// GLOBAL DAT_0057701c uint *
// GLOBAL DAT_00577020 undefined4 *
// GLOBAL DAT_00577024 undefined4
// GLOBAL DAT_00577028 uint *
// GLOBAL DAT_0057702c undefined4 *
// GLOBAL DAT_00577030 undefined4
// GLOBAL DAT_00577034 uint *
// GLOBAL DAT_00577038 undefined4 *
// GLOBAL DAT_0057703c undefined4
// GLOBAL DAT_00577040 uint *
// GLOBAL DAT_00577044 undefined4 *
// GLOBAL DAT_00577048 undefined4

undefined4 func_00576ED0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577010), iVar1 != 0)) {
    *DAT_00577014 = DAT_00577018;
  }
  if (DAT_00577014 != param_2) {
    if (((*DAT_0057701c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057701c), iVar1 != 0)) {
      *DAT_00577020 = DAT_00577024;
    }
    if (DAT_00577020 != param_2) {
      if (((*DAT_00577028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577028), iVar1 != 0)) {
        *DAT_0057702c = DAT_00577030;
      }
      if (DAT_0057702c != param_2) {
        if (((*DAT_00577034 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577034), iVar1 != 0))
        {
          *DAT_00577038 = DAT_0057703c;
        }
        if (DAT_00577038 != param_2) {
          if (((*DAT_00577040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577040), iVar1 != 0)
             ) {
            *DAT_00577044 = DAT_00577048;
          }
          if (DAT_00577044 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


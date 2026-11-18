#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00579e94;
extern undefined4 *DAT_00579e98;
extern undefined4 DAT_00579e9c;
extern uint *DAT_00579ea0;
extern undefined4 *DAT_00579ea4;
extern undefined4 DAT_00579ea8;
extern uint *DAT_00579eac;
extern undefined4 *DAT_00579eb0;
extern undefined4 DAT_00579eb4;
extern uint *DAT_00579eb8;
extern undefined4 *DAT_00579ebc;
extern undefined4 DAT_00579ec0;
extern uint *DAT_00579ec4;
extern undefined4 *DAT_00579ec8;
extern undefined4 DAT_00579ecc;

// USA 00579D54 <- EU 00579D2C (Ghidra, non-matching)
// GLOBAL DAT_00579e94 uint *
// GLOBAL DAT_00579e98 undefined4 *
// GLOBAL DAT_00579e9c undefined4
// GLOBAL DAT_00579ea0 uint *
// GLOBAL DAT_00579ea4 undefined4 *
// GLOBAL DAT_00579ea8 undefined4
// GLOBAL DAT_00579eac uint *
// GLOBAL DAT_00579eb0 undefined4 *
// GLOBAL DAT_00579eb4 undefined4
// GLOBAL DAT_00579eb8 uint *
// GLOBAL DAT_00579ebc undefined4 *
// GLOBAL DAT_00579ec0 undefined4
// GLOBAL DAT_00579ec4 uint *
// GLOBAL DAT_00579ec8 undefined4 *
// GLOBAL DAT_00579ecc undefined4

undefined4 func_00579D54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579e94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579e94), iVar1 != 0)) {
    *DAT_00579e98 = DAT_00579e9c;
  }
  if (DAT_00579e98 != param_2) {
    if (((*DAT_00579ea0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579ea0), iVar1 != 0)) {
      *DAT_00579ea4 = DAT_00579ea8;
    }
    if (DAT_00579ea4 != param_2) {
      if (((*DAT_00579eac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579eac), iVar1 != 0)) {
        *DAT_00579eb0 = DAT_00579eb4;
      }
      if (DAT_00579eb0 != param_2) {
        if (((*DAT_00579eb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579eb8), iVar1 != 0))
        {
          *DAT_00579ebc = DAT_00579ec0;
        }
        if (DAT_00579ebc != param_2) {
          if (((*DAT_00579ec4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579ec4), iVar1 != 0)
             ) {
            *DAT_00579ec8 = DAT_00579ecc;
          }
          if (DAT_00579ec8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


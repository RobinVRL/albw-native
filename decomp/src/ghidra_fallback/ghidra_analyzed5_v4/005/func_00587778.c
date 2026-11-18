#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005878b8;
extern undefined4 *DAT_005878bc;
extern undefined4 DAT_005878c0;
extern uint *DAT_005878c4;
extern undefined4 *DAT_005878c8;
extern undefined4 DAT_005878cc;
extern uint *DAT_005878d0;
extern undefined4 *DAT_005878d4;
extern undefined4 DAT_005878d8;
extern uint *DAT_005878dc;
extern undefined4 *DAT_005878e0;
extern undefined4 DAT_005878e4;
extern uint *DAT_005878e8;
extern undefined4 *DAT_005878ec;
extern undefined4 DAT_005878f0;

// USA 00587778 <- EU 00587750 (Ghidra, non-matching)
// GLOBAL DAT_005878b8 uint *
// GLOBAL DAT_005878bc undefined4 *
// GLOBAL DAT_005878c0 undefined4
// GLOBAL DAT_005878c4 uint *
// GLOBAL DAT_005878c8 undefined4 *
// GLOBAL DAT_005878cc undefined4
// GLOBAL DAT_005878d0 uint *
// GLOBAL DAT_005878d4 undefined4 *
// GLOBAL DAT_005878d8 undefined4
// GLOBAL DAT_005878dc uint *
// GLOBAL DAT_005878e0 undefined4 *
// GLOBAL DAT_005878e4 undefined4
// GLOBAL DAT_005878e8 uint *
// GLOBAL DAT_005878ec undefined4 *
// GLOBAL DAT_005878f0 undefined4

undefined4 func_00587778(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005878b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005878b8), iVar1 != 0)) {
    *DAT_005878bc = DAT_005878c0;
  }
  if (DAT_005878bc != param_2) {
    if (((*DAT_005878c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005878c4), iVar1 != 0)) {
      *DAT_005878c8 = DAT_005878cc;
    }
    if (DAT_005878c8 != param_2) {
      if (((*DAT_005878d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005878d0), iVar1 != 0)) {
        *DAT_005878d4 = DAT_005878d8;
      }
      if (DAT_005878d4 != param_2) {
        if (((*DAT_005878dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005878dc), iVar1 != 0))
        {
          *DAT_005878e0 = DAT_005878e4;
        }
        if (DAT_005878e0 != param_2) {
          if (((*DAT_005878e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005878e8), iVar1 != 0)
             ) {
            *DAT_005878ec = DAT_005878f0;
          }
          if (DAT_005878ec != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


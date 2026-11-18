#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0062b980;
extern undefined4 *DAT_0062b984;
extern undefined4 DAT_0062b988;
extern uint *DAT_0062b98c;
extern undefined4 *DAT_0062b990;
extern undefined4 DAT_0062b994;
extern uint *DAT_0062b998;
extern undefined4 *DAT_0062b99c;
extern undefined4 DAT_0062b9a0;
extern uint *DAT_0062b9a4;
extern undefined4 *DAT_0062b9a8;
extern undefined4 DAT_0062b9ac;
extern uint *DAT_0062b9b0;
extern undefined4 *DAT_0062b9b4;
extern undefined4 DAT_0062b9b8;
extern uint *DAT_0062b9bc;
extern undefined4 *DAT_0062b9c0;
extern undefined4 DAT_0062b9c4;

// USA 0062B7FC <- EU 0062B7D4 (Ghidra, non-matching)
// GLOBAL DAT_0062b980 uint *
// GLOBAL DAT_0062b984 undefined4 *
// GLOBAL DAT_0062b988 undefined4
// GLOBAL DAT_0062b98c uint *
// GLOBAL DAT_0062b990 undefined4 *
// GLOBAL DAT_0062b994 undefined4
// GLOBAL DAT_0062b998 uint *
// GLOBAL DAT_0062b99c undefined4 *
// GLOBAL DAT_0062b9a0 undefined4
// GLOBAL DAT_0062b9a4 uint *
// GLOBAL DAT_0062b9a8 undefined4 *
// GLOBAL DAT_0062b9ac undefined4
// GLOBAL DAT_0062b9b0 uint *
// GLOBAL DAT_0062b9b4 undefined4 *
// GLOBAL DAT_0062b9b8 undefined4
// GLOBAL DAT_0062b9bc uint *
// GLOBAL DAT_0062b9c0 undefined4 *
// GLOBAL DAT_0062b9c4 undefined4

undefined4 func_0062B7FC(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0062b980 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062b980), iVar1 != 0)) {
    *DAT_0062b984 = DAT_0062b988;
  }
  if (DAT_0062b984 != param_1) {
    if (((*DAT_0062b98c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062b98c), iVar1 != 0)) {
      *DAT_0062b990 = DAT_0062b994;
    }
    if (DAT_0062b990 != param_1) {
      if (((*DAT_0062b998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062b998), iVar1 != 0)) {
        *DAT_0062b99c = DAT_0062b9a0;
      }
      if (DAT_0062b99c != param_1) {
        if (((*DAT_0062b9a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062b9a4), iVar1 != 0))
        {
          *DAT_0062b9a8 = DAT_0062b9ac;
        }
        if (DAT_0062b9a8 != param_1) {
          if (((*DAT_0062b9b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062b9b0), iVar1 != 0)
             ) {
            *DAT_0062b9b4 = DAT_0062b9b8;
          }
          if (DAT_0062b9b4 != param_1) {
            if (((*DAT_0062b9bc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0062b9bc), iVar1 != 0)) {
              *DAT_0062b9c0 = DAT_0062b9c4;
            }
            if (DAT_0062b9c0 != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


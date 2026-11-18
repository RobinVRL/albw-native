#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005732a4;
extern undefined4 *DAT_005732a8;
extern undefined4 DAT_005732ac;
extern uint *DAT_005732b0;
extern undefined4 *DAT_005732b4;
extern undefined4 DAT_005732b8;
extern uint *DAT_005732bc;
extern undefined4 *DAT_005732c0;
extern undefined4 DAT_005732c4;
extern uint *DAT_005732c8;
extern undefined4 *DAT_005732cc;
extern undefined4 DAT_005732d0;
extern uint *DAT_005732d4;
extern undefined4 *DAT_005732d8;
extern undefined4 DAT_005732dc;

// USA 00573164 <- EU 0057313C (Ghidra, non-matching)
// GLOBAL DAT_005732a4 uint *
// GLOBAL DAT_005732a8 undefined4 *
// GLOBAL DAT_005732ac undefined4
// GLOBAL DAT_005732b0 uint *
// GLOBAL DAT_005732b4 undefined4 *
// GLOBAL DAT_005732b8 undefined4
// GLOBAL DAT_005732bc uint *
// GLOBAL DAT_005732c0 undefined4 *
// GLOBAL DAT_005732c4 undefined4
// GLOBAL DAT_005732c8 uint *
// GLOBAL DAT_005732cc undefined4 *
// GLOBAL DAT_005732d0 undefined4
// GLOBAL DAT_005732d4 uint *
// GLOBAL DAT_005732d8 undefined4 *
// GLOBAL DAT_005732dc undefined4

undefined4 func_00573164(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005732a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005732a4), iVar1 != 0)) {
    *DAT_005732a8 = DAT_005732ac;
  }
  if (DAT_005732a8 != param_2) {
    if (((*DAT_005732b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005732b0), iVar1 != 0)) {
      *DAT_005732b4 = DAT_005732b8;
    }
    if (DAT_005732b4 != param_2) {
      if (((*DAT_005732bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005732bc), iVar1 != 0)) {
        *DAT_005732c0 = DAT_005732c4;
      }
      if (DAT_005732c0 != param_2) {
        if (((*DAT_005732c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005732c8), iVar1 != 0))
        {
          *DAT_005732cc = DAT_005732d0;
        }
        if (DAT_005732cc != param_2) {
          if (((*DAT_005732d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005732d4), iVar1 != 0)
             ) {
            *DAT_005732d8 = DAT_005732dc;
          }
          if (DAT_005732d8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


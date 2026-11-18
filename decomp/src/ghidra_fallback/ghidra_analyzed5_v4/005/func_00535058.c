#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00535198;
extern undefined4 *DAT_0053519c;
extern undefined4 DAT_005351a0;
extern uint *DAT_005351a4;
extern undefined4 *DAT_005351a8;
extern undefined4 DAT_005351ac;
extern uint *DAT_005351b0;
extern undefined4 *DAT_005351b4;
extern undefined4 DAT_005351b8;
extern uint *DAT_005351bc;
extern undefined4 *DAT_005351c0;
extern undefined4 DAT_005351c4;
extern uint *DAT_005351c8;
extern undefined4 *DAT_005351cc;
extern undefined4 DAT_005351d0;

// USA 00535058 <- EU 00535030 (Ghidra, non-matching)
// GLOBAL DAT_00535198 uint *
// GLOBAL DAT_0053519c undefined4 *
// GLOBAL DAT_005351a0 undefined4
// GLOBAL DAT_005351a4 uint *
// GLOBAL DAT_005351a8 undefined4 *
// GLOBAL DAT_005351ac undefined4
// GLOBAL DAT_005351b0 uint *
// GLOBAL DAT_005351b4 undefined4 *
// GLOBAL DAT_005351b8 undefined4
// GLOBAL DAT_005351bc uint *
// GLOBAL DAT_005351c0 undefined4 *
// GLOBAL DAT_005351c4 undefined4
// GLOBAL DAT_005351c8 uint *
// GLOBAL DAT_005351cc undefined4 *
// GLOBAL DAT_005351d0 undefined4

undefined4 func_00535058(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00535198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535198), iVar1 != 0)) {
    *DAT_0053519c = DAT_005351a0;
  }
  if (DAT_0053519c != param_2) {
    if (((*DAT_005351a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005351a4), iVar1 != 0)) {
      *DAT_005351a8 = DAT_005351ac;
    }
    if (DAT_005351a8 != param_2) {
      if (((*DAT_005351b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005351b0), iVar1 != 0)) {
        *DAT_005351b4 = DAT_005351b8;
      }
      if (DAT_005351b4 != param_2) {
        if (((*DAT_005351bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005351bc), iVar1 != 0))
        {
          *DAT_005351c0 = DAT_005351c4;
        }
        if (DAT_005351c0 != param_2) {
          if (((*DAT_005351c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005351c8), iVar1 != 0)
             ) {
            *DAT_005351cc = DAT_005351d0;
          }
          if (DAT_005351cc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


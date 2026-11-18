#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e42e8;
extern undefined4 *DAT_001e42ec;
extern undefined4 DAT_001e42f0;
extern uint *DAT_001e42f4;
extern undefined4 *DAT_001e42f8;
extern undefined4 DAT_001e42fc;
extern uint *DAT_001e4300;
extern undefined4 *DAT_001e4304;
extern undefined4 DAT_001e4308;
extern uint *DAT_001e430c;
extern undefined4 *DAT_001e4310;
extern undefined4 DAT_001e4314;

// USA 001E41C4 <- EU 001E41C4 (Ghidra, non-matching)
// GLOBAL DAT_001e42e8 uint *
// GLOBAL DAT_001e42ec undefined4 *
// GLOBAL DAT_001e42f0 undefined4
// GLOBAL DAT_001e42f4 uint *
// GLOBAL DAT_001e42f8 undefined4 *
// GLOBAL DAT_001e42fc undefined4
// GLOBAL DAT_001e4300 uint *
// GLOBAL DAT_001e4304 undefined4 *
// GLOBAL DAT_001e4308 undefined4
// GLOBAL DAT_001e430c uint *
// GLOBAL DAT_001e4310 undefined4 *
// GLOBAL DAT_001e4314 undefined4

undefined4 func_001E41C4(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_001e42e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e42e8), iVar1 != 0)) {
    *DAT_001e42ec = DAT_001e42f0;
  }
  if (DAT_001e42ec != param_1) {
    if (((*DAT_001e42f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e42f4), iVar1 != 0)) {
      *DAT_001e42f8 = DAT_001e42fc;
    }
    if (DAT_001e42f8 != param_1) {
      if (((*DAT_001e4300 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e4300), iVar1 != 0)) {
        *DAT_001e4304 = DAT_001e4308;
      }
      if (DAT_001e4304 != param_1) {
        if (((*DAT_001e430c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e430c), iVar1 != 0))
        {
          *DAT_001e4310 = DAT_001e4314;
        }
        if (DAT_001e4310 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


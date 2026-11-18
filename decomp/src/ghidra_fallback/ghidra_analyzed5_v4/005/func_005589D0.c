#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558acc;
extern undefined4 *DAT_00558ad0;
extern undefined4 DAT_00558ad4;
extern uint *DAT_00558ad8;
extern undefined4 *DAT_00558adc;
extern undefined4 DAT_00558ae0;
extern uint *DAT_00558ae4;
extern undefined4 *DAT_00558ae8;
extern undefined4 DAT_00558aec;
extern uint *DAT_00558af0;
extern undefined4 *DAT_00558af4;
extern undefined4 DAT_00558af8;

// USA 005589D0 <- EU 005589A8 (Ghidra, non-matching)
// GLOBAL DAT_00558acc uint *
// GLOBAL DAT_00558ad0 undefined4 *
// GLOBAL DAT_00558ad4 undefined4
// GLOBAL DAT_00558ad8 uint *
// GLOBAL DAT_00558adc undefined4 *
// GLOBAL DAT_00558ae0 undefined4
// GLOBAL DAT_00558ae4 uint *
// GLOBAL DAT_00558ae8 undefined4 *
// GLOBAL DAT_00558aec undefined4
// GLOBAL DAT_00558af0 uint *
// GLOBAL DAT_00558af4 undefined4 *
// GLOBAL DAT_00558af8 undefined4

undefined4 func_005589D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558acc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558acc), iVar1 != 0)) {
    *DAT_00558ad0 = DAT_00558ad4;
  }
  if (DAT_00558ad0 != param_2) {
    if (((*DAT_00558ad8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558ad8), iVar1 != 0)) {
      *DAT_00558adc = DAT_00558ae0;
    }
    if (DAT_00558adc != param_2) {
      if (((*DAT_00558ae4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558ae4), iVar1 != 0)) {
        *DAT_00558ae8 = DAT_00558aec;
      }
      if (DAT_00558ae8 != param_2) {
        if (((*DAT_00558af0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558af0), iVar1 != 0))
        {
          *DAT_00558af4 = DAT_00558af8;
        }
        if (DAT_00558af4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


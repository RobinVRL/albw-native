#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00583074;
extern undefined4 *DAT_00583078;
extern undefined4 DAT_0058307c;
extern uint *DAT_00583080;
extern undefined4 *DAT_00583084;
extern undefined4 DAT_00583088;
extern uint *DAT_0058308c;
extern undefined4 *DAT_00583090;
extern undefined4 DAT_00583094;
extern uint *DAT_00583098;
extern undefined4 *DAT_0058309c;
extern undefined4 DAT_005830a0;

// USA 00582F78 <- EU 00582F50 (Ghidra, non-matching)
// GLOBAL DAT_00583074 uint *
// GLOBAL DAT_00583078 undefined4 *
// GLOBAL DAT_0058307c undefined4
// GLOBAL DAT_00583080 uint *
// GLOBAL DAT_00583084 undefined4 *
// GLOBAL DAT_00583088 undefined4
// GLOBAL DAT_0058308c uint *
// GLOBAL DAT_00583090 undefined4 *
// GLOBAL DAT_00583094 undefined4
// GLOBAL DAT_00583098 uint *
// GLOBAL DAT_0058309c undefined4 *
// GLOBAL DAT_005830a0 undefined4

undefined4 func_00582F78(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00583074 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583074), iVar1 != 0)) {
    *DAT_00583078 = DAT_0058307c;
  }
  if (DAT_00583078 != param_2) {
    if (((*DAT_00583080 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583080), iVar1 != 0)) {
      *DAT_00583084 = DAT_00583088;
    }
    if (DAT_00583084 != param_2) {
      if (((*DAT_0058308c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058308c), iVar1 != 0)) {
        *DAT_00583090 = DAT_00583094;
      }
      if (DAT_00583090 != param_2) {
        if (((*DAT_00583098 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583098), iVar1 != 0))
        {
          *DAT_0058309c = DAT_005830a0;
        }
        if (DAT_0058309c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


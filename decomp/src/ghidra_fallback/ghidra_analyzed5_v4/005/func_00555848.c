#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00555944;
extern undefined4 *DAT_00555948;
extern undefined4 DAT_0055594c;
extern uint *DAT_00555950;
extern undefined4 *DAT_00555954;
extern undefined4 DAT_00555958;
extern uint *DAT_0055595c;
extern undefined4 *DAT_00555960;
extern undefined4 DAT_00555964;
extern uint *DAT_00555968;
extern undefined4 *DAT_0055596c;
extern undefined4 DAT_00555970;

// USA 00555848 <- EU 00555820 (Ghidra, non-matching)
// GLOBAL DAT_00555944 uint *
// GLOBAL DAT_00555948 undefined4 *
// GLOBAL DAT_0055594c undefined4
// GLOBAL DAT_00555950 uint *
// GLOBAL DAT_00555954 undefined4 *
// GLOBAL DAT_00555958 undefined4
// GLOBAL DAT_0055595c uint *
// GLOBAL DAT_00555960 undefined4 *
// GLOBAL DAT_00555964 undefined4
// GLOBAL DAT_00555968 uint *
// GLOBAL DAT_0055596c undefined4 *
// GLOBAL DAT_00555970 undefined4

undefined4 func_00555848(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555944 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555944), iVar1 != 0)) {
    *DAT_00555948 = DAT_0055594c;
  }
  if (DAT_00555948 != param_2) {
    if (((*DAT_00555950 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555950), iVar1 != 0)) {
      *DAT_00555954 = DAT_00555958;
    }
    if (DAT_00555954 != param_2) {
      if (((*DAT_0055595c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055595c), iVar1 != 0)) {
        *DAT_00555960 = DAT_00555964;
      }
      if (DAT_00555960 != param_2) {
        if (((*DAT_00555968 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555968), iVar1 != 0))
        {
          *DAT_0055596c = DAT_00555970;
        }
        if (DAT_0055596c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


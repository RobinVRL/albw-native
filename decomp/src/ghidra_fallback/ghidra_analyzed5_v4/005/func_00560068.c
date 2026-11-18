#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00560164;
extern undefined4 *DAT_00560168;
extern undefined4 DAT_0056016c;
extern uint *DAT_00560170;
extern undefined4 *DAT_00560174;
extern undefined4 DAT_00560178;
extern uint *DAT_0056017c;
extern undefined4 *DAT_00560180;
extern undefined4 DAT_00560184;
extern uint *DAT_00560188;
extern undefined4 *DAT_0056018c;
extern undefined4 DAT_00560190;

// USA 00560068 <- EU 00560040 (Ghidra, non-matching)
// GLOBAL DAT_00560164 uint *
// GLOBAL DAT_00560168 undefined4 *
// GLOBAL DAT_0056016c undefined4
// GLOBAL DAT_00560170 uint *
// GLOBAL DAT_00560174 undefined4 *
// GLOBAL DAT_00560178 undefined4
// GLOBAL DAT_0056017c uint *
// GLOBAL DAT_00560180 undefined4 *
// GLOBAL DAT_00560184 undefined4
// GLOBAL DAT_00560188 uint *
// GLOBAL DAT_0056018c undefined4 *
// GLOBAL DAT_00560190 undefined4

undefined4 func_00560068(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00560164 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560164), iVar1 != 0)) {
    *DAT_00560168 = DAT_0056016c;
  }
  if (DAT_00560168 != param_2) {
    if (((*DAT_00560170 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560170), iVar1 != 0)) {
      *DAT_00560174 = DAT_00560178;
    }
    if (DAT_00560174 != param_2) {
      if (((*DAT_0056017c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056017c), iVar1 != 0)) {
        *DAT_00560180 = DAT_00560184;
      }
      if (DAT_00560180 != param_2) {
        if (((*DAT_00560188 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560188), iVar1 != 0))
        {
          *DAT_0056018c = DAT_00560190;
        }
        if (DAT_0056018c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00520170;
extern undefined4 *DAT_00520174;
extern undefined4 DAT_00520178;
extern uint *DAT_0052017c;
extern undefined4 *DAT_00520180;
extern undefined4 DAT_00520184;
extern uint *DAT_00520188;
extern undefined4 *DAT_0052018c;
extern undefined4 DAT_00520190;
extern uint *DAT_00520194;
extern undefined4 *DAT_00520198;
extern undefined4 DAT_0052019c;
extern uint *DAT_005201a0;
extern undefined4 *DAT_005201a4;
extern undefined4 DAT_005201a8;

// USA 00520030 <- EU 00520008 (Ghidra, non-matching)
// GLOBAL DAT_00520170 uint *
// GLOBAL DAT_00520174 undefined4 *
// GLOBAL DAT_00520178 undefined4
// GLOBAL DAT_0052017c uint *
// GLOBAL DAT_00520180 undefined4 *
// GLOBAL DAT_00520184 undefined4
// GLOBAL DAT_00520188 uint *
// GLOBAL DAT_0052018c undefined4 *
// GLOBAL DAT_00520190 undefined4
// GLOBAL DAT_00520194 uint *
// GLOBAL DAT_00520198 undefined4 *
// GLOBAL DAT_0052019c undefined4
// GLOBAL DAT_005201a0 uint *
// GLOBAL DAT_005201a4 undefined4 *
// GLOBAL DAT_005201a8 undefined4

undefined4 func_00520030(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00520170 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520170), iVar1 != 0)) {
    *DAT_00520174 = DAT_00520178;
  }
  if (DAT_00520174 != param_2) {
    if (((*DAT_0052017c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052017c), iVar1 != 0)) {
      *DAT_00520180 = DAT_00520184;
    }
    if (DAT_00520180 != param_2) {
      if (((*DAT_00520188 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520188), iVar1 != 0)) {
        *DAT_0052018c = DAT_00520190;
      }
      if (DAT_0052018c != param_2) {
        if (((*DAT_00520194 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520194), iVar1 != 0))
        {
          *DAT_00520198 = DAT_0052019c;
        }
        if (DAT_00520198 != param_2) {
          if (((*DAT_005201a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005201a0), iVar1 != 0)
             ) {
            *DAT_005201a4 = DAT_005201a8;
          }
          if (DAT_005201a4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054ad54;
extern undefined4 *DAT_0054ad58;
extern undefined4 DAT_0054ad5c;
extern uint *DAT_0054ad60;
extern undefined4 *DAT_0054ad64;
extern undefined4 DAT_0054ad68;
extern uint *DAT_0054ad6c;
extern undefined4 *DAT_0054ad70;
extern undefined4 DAT_0054ad74;
extern uint *DAT_0054ad78;
extern undefined4 *DAT_0054ad7c;
extern undefined4 DAT_0054ad80;

// USA 0054AC58 <- EU 0054AC30 (Ghidra, non-matching)
// GLOBAL DAT_0054ad54 uint *
// GLOBAL DAT_0054ad58 undefined4 *
// GLOBAL DAT_0054ad5c undefined4
// GLOBAL DAT_0054ad60 uint *
// GLOBAL DAT_0054ad64 undefined4 *
// GLOBAL DAT_0054ad68 undefined4
// GLOBAL DAT_0054ad6c uint *
// GLOBAL DAT_0054ad70 undefined4 *
// GLOBAL DAT_0054ad74 undefined4
// GLOBAL DAT_0054ad78 uint *
// GLOBAL DAT_0054ad7c undefined4 *
// GLOBAL DAT_0054ad80 undefined4

undefined4 func_0054AC58(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054ad54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ad54), iVar1 != 0)) {
    *DAT_0054ad58 = DAT_0054ad5c;
  }
  if (DAT_0054ad58 != param_2) {
    if (((*DAT_0054ad60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ad60), iVar1 != 0)) {
      *DAT_0054ad64 = DAT_0054ad68;
    }
    if (DAT_0054ad64 != param_2) {
      if (((*DAT_0054ad6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ad6c), iVar1 != 0)) {
        *DAT_0054ad70 = DAT_0054ad74;
      }
      if (DAT_0054ad70 != param_2) {
        if (((*DAT_0054ad78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054ad78), iVar1 != 0))
        {
          *DAT_0054ad7c = DAT_0054ad80;
        }
        if (DAT_0054ad7c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


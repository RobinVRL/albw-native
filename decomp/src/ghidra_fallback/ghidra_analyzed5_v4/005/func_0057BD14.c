#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057be54;
extern undefined4 *DAT_0057be58;
extern undefined4 DAT_0057be5c;
extern uint *DAT_0057be60;
extern undefined4 *DAT_0057be64;
extern undefined4 DAT_0057be68;
extern uint *DAT_0057be6c;
extern undefined4 *DAT_0057be70;
extern undefined4 DAT_0057be74;
extern uint *DAT_0057be78;
extern undefined4 *DAT_0057be7c;
extern undefined4 DAT_0057be80;
extern uint *DAT_0057be84;
extern undefined4 *DAT_0057be88;
extern undefined4 DAT_0057be8c;

// USA 0057BD14 <- EU 0057BCEC (Ghidra, non-matching)
// GLOBAL DAT_0057be54 uint *
// GLOBAL DAT_0057be58 undefined4 *
// GLOBAL DAT_0057be5c undefined4
// GLOBAL DAT_0057be60 uint *
// GLOBAL DAT_0057be64 undefined4 *
// GLOBAL DAT_0057be68 undefined4
// GLOBAL DAT_0057be6c uint *
// GLOBAL DAT_0057be70 undefined4 *
// GLOBAL DAT_0057be74 undefined4
// GLOBAL DAT_0057be78 uint *
// GLOBAL DAT_0057be7c undefined4 *
// GLOBAL DAT_0057be80 undefined4
// GLOBAL DAT_0057be84 uint *
// GLOBAL DAT_0057be88 undefined4 *
// GLOBAL DAT_0057be8c undefined4

undefined4 func_0057BD14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057be54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057be54), iVar1 != 0)) {
    *DAT_0057be58 = DAT_0057be5c;
  }
  if (DAT_0057be58 != param_2) {
    if (((*DAT_0057be60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057be60), iVar1 != 0)) {
      *DAT_0057be64 = DAT_0057be68;
    }
    if (DAT_0057be64 != param_2) {
      if (((*DAT_0057be6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057be6c), iVar1 != 0)) {
        *DAT_0057be70 = DAT_0057be74;
      }
      if (DAT_0057be70 != param_2) {
        if (((*DAT_0057be78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057be78), iVar1 != 0))
        {
          *DAT_0057be7c = DAT_0057be80;
        }
        if (DAT_0057be7c != param_2) {
          if (((*DAT_0057be84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057be84), iVar1 != 0)
             ) {
            *DAT_0057be88 = DAT_0057be8c;
          }
          if (DAT_0057be88 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058ba58;
extern undefined4 *DAT_0058ba5c;
extern undefined4 DAT_0058ba60;
extern uint *DAT_0058ba64;
extern undefined4 *DAT_0058ba68;
extern undefined4 DAT_0058ba6c;
extern uint *DAT_0058ba70;
extern undefined4 *DAT_0058ba74;
extern undefined4 DAT_0058ba78;
extern uint *DAT_0058ba7c;
extern undefined4 *DAT_0058ba80;
extern undefined4 DAT_0058ba84;
extern uint *DAT_0058ba88;
extern undefined4 *DAT_0058ba8c;
extern undefined4 DAT_0058ba90;

// USA 0058B918 <- EU 0058B8F0 (Ghidra, non-matching)
// GLOBAL DAT_0058ba58 uint *
// GLOBAL DAT_0058ba5c undefined4 *
// GLOBAL DAT_0058ba60 undefined4
// GLOBAL DAT_0058ba64 uint *
// GLOBAL DAT_0058ba68 undefined4 *
// GLOBAL DAT_0058ba6c undefined4
// GLOBAL DAT_0058ba70 uint *
// GLOBAL DAT_0058ba74 undefined4 *
// GLOBAL DAT_0058ba78 undefined4
// GLOBAL DAT_0058ba7c uint *
// GLOBAL DAT_0058ba80 undefined4 *
// GLOBAL DAT_0058ba84 undefined4
// GLOBAL DAT_0058ba88 uint *
// GLOBAL DAT_0058ba8c undefined4 *
// GLOBAL DAT_0058ba90 undefined4

undefined4 func_0058B918(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058ba58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ba58), iVar1 != 0)) {
    *DAT_0058ba5c = DAT_0058ba60;
  }
  if (DAT_0058ba5c != param_2) {
    if (((*DAT_0058ba64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ba64), iVar1 != 0)) {
      *DAT_0058ba68 = DAT_0058ba6c;
    }
    if (DAT_0058ba68 != param_2) {
      if (((*DAT_0058ba70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ba70), iVar1 != 0)) {
        *DAT_0058ba74 = DAT_0058ba78;
      }
      if (DAT_0058ba74 != param_2) {
        if (((*DAT_0058ba7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ba7c), iVar1 != 0))
        {
          *DAT_0058ba80 = DAT_0058ba84;
        }
        if (DAT_0058ba80 != param_2) {
          if (((*DAT_0058ba88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ba88), iVar1 != 0)
             ) {
            *DAT_0058ba8c = DAT_0058ba90;
          }
          if (DAT_0058ba8c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


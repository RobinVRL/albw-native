#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00544c44;
extern undefined4 *DAT_00544c48;
extern undefined4 DAT_00544c4c;
extern uint *DAT_00544c50;
extern undefined4 *DAT_00544c54;
extern undefined4 DAT_00544c58;
extern uint *DAT_00544c5c;
extern undefined4 *DAT_00544c60;
extern undefined4 DAT_00544c64;
extern uint *DAT_00544c68;
extern undefined4 *DAT_00544c6c;
extern undefined4 DAT_00544c70;
extern uint *DAT_00544c74;
extern undefined4 *DAT_00544c78;
extern undefined4 DAT_00544c7c;

// USA 00544B04 <- EU 00544ADC (Ghidra, non-matching)
// GLOBAL DAT_00544c44 uint *
// GLOBAL DAT_00544c48 undefined4 *
// GLOBAL DAT_00544c4c undefined4
// GLOBAL DAT_00544c50 uint *
// GLOBAL DAT_00544c54 undefined4 *
// GLOBAL DAT_00544c58 undefined4
// GLOBAL DAT_00544c5c uint *
// GLOBAL DAT_00544c60 undefined4 *
// GLOBAL DAT_00544c64 undefined4
// GLOBAL DAT_00544c68 uint *
// GLOBAL DAT_00544c6c undefined4 *
// GLOBAL DAT_00544c70 undefined4
// GLOBAL DAT_00544c74 uint *
// GLOBAL DAT_00544c78 undefined4 *
// GLOBAL DAT_00544c7c undefined4

undefined4 func_00544B04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00544c44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544c44), iVar1 != 0)) {
    *DAT_00544c48 = DAT_00544c4c;
  }
  if (DAT_00544c48 != param_2) {
    if (((*DAT_00544c50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544c50), iVar1 != 0)) {
      *DAT_00544c54 = DAT_00544c58;
    }
    if (DAT_00544c54 != param_2) {
      if (((*DAT_00544c5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544c5c), iVar1 != 0)) {
        *DAT_00544c60 = DAT_00544c64;
      }
      if (DAT_00544c60 != param_2) {
        if (((*DAT_00544c68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544c68), iVar1 != 0))
        {
          *DAT_00544c6c = DAT_00544c70;
        }
        if (DAT_00544c6c != param_2) {
          if (((*DAT_00544c74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544c74), iVar1 != 0)
             ) {
            *DAT_00544c78 = DAT_00544c7c;
          }
          if (DAT_00544c78 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00586a28;
extern undefined4 *DAT_00586a2c;
extern undefined4 DAT_00586a30;
extern uint *DAT_00586a34;
extern undefined4 *DAT_00586a38;
extern undefined4 DAT_00586a3c;
extern uint *DAT_00586a40;
extern undefined4 *DAT_00586a44;
extern undefined4 DAT_00586a48;
extern uint *DAT_00586a4c;
extern undefined4 *DAT_00586a50;
extern undefined4 DAT_00586a54;
extern uint *DAT_00586a58;
extern undefined4 *DAT_00586a5c;
extern undefined4 DAT_00586a60;
extern uint *DAT_00586a64;
extern undefined4 *DAT_00586a68;
extern undefined4 DAT_00586a6c;
extern uint *DAT_00586a70;
extern undefined4 *DAT_00586a74;
extern undefined4 DAT_00586a78;

// USA 00586860 <- EU 00586838 (Ghidra, non-matching)
// GLOBAL DAT_00586a28 uint *
// GLOBAL DAT_00586a2c undefined4 *
// GLOBAL DAT_00586a30 undefined4
// GLOBAL DAT_00586a34 uint *
// GLOBAL DAT_00586a38 undefined4 *
// GLOBAL DAT_00586a3c undefined4
// GLOBAL DAT_00586a40 uint *
// GLOBAL DAT_00586a44 undefined4 *
// GLOBAL DAT_00586a48 undefined4
// GLOBAL DAT_00586a4c uint *
// GLOBAL DAT_00586a50 undefined4 *
// GLOBAL DAT_00586a54 undefined4
// GLOBAL DAT_00586a58 uint *
// GLOBAL DAT_00586a5c undefined4 *
// GLOBAL DAT_00586a60 undefined4
// GLOBAL DAT_00586a64 uint *
// GLOBAL DAT_00586a68 undefined4 *
// GLOBAL DAT_00586a6c undefined4
// GLOBAL DAT_00586a70 uint *
// GLOBAL DAT_00586a74 undefined4 *
// GLOBAL DAT_00586a78 undefined4

undefined4 func_00586860(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00586a28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586a28), iVar1 != 0)) {
    *DAT_00586a2c = DAT_00586a30;
  }
  if (DAT_00586a2c != param_2) {
    if (((*DAT_00586a34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586a34), iVar1 != 0)) {
      *DAT_00586a38 = DAT_00586a3c;
    }
    if (DAT_00586a38 != param_2) {
      if (((*DAT_00586a40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586a40), iVar1 != 0)) {
        *DAT_00586a44 = DAT_00586a48;
      }
      if (DAT_00586a44 != param_2) {
        if (((*DAT_00586a4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586a4c), iVar1 != 0))
        {
          *DAT_00586a50 = DAT_00586a54;
        }
        if (DAT_00586a50 != param_2) {
          if (((*DAT_00586a58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586a58), iVar1 != 0)
             ) {
            *DAT_00586a5c = DAT_00586a60;
          }
          if (DAT_00586a5c != param_2) {
            if (((*DAT_00586a64 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00586a64), iVar1 != 0)) {
              *DAT_00586a68 = DAT_00586a6c;
            }
            if (DAT_00586a68 != param_2) {
              if (((*DAT_00586a70 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00586a70), iVar1 != 0)) {
                *DAT_00586a74 = DAT_00586a78;
              }
              if (DAT_00586a74 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


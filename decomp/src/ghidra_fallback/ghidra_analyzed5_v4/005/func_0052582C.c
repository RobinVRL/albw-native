#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005259f4;
extern undefined4 *DAT_005259f8;
extern undefined4 DAT_005259fc;
extern uint *DAT_00525a00;
extern undefined4 *DAT_00525a04;
extern undefined4 DAT_00525a08;
extern uint *DAT_00525a0c;
extern undefined4 *DAT_00525a10;
extern undefined4 DAT_00525a14;
extern uint *DAT_00525a18;
extern undefined4 *DAT_00525a1c;
extern undefined4 DAT_00525a20;
extern uint *DAT_00525a24;
extern undefined4 *DAT_00525a28;
extern undefined4 DAT_00525a2c;
extern uint *DAT_00525a30;
extern undefined4 *DAT_00525a34;
extern undefined4 DAT_00525a38;
extern uint *DAT_00525a3c;
extern undefined4 *DAT_00525a40;
extern undefined4 DAT_00525a44;

// USA 0052582C <- EU 00525804 (Ghidra, non-matching)
// GLOBAL DAT_005259f4 uint *
// GLOBAL DAT_005259f8 undefined4 *
// GLOBAL DAT_005259fc undefined4
// GLOBAL DAT_00525a00 uint *
// GLOBAL DAT_00525a04 undefined4 *
// GLOBAL DAT_00525a08 undefined4
// GLOBAL DAT_00525a0c uint *
// GLOBAL DAT_00525a10 undefined4 *
// GLOBAL DAT_00525a14 undefined4
// GLOBAL DAT_00525a18 uint *
// GLOBAL DAT_00525a1c undefined4 *
// GLOBAL DAT_00525a20 undefined4
// GLOBAL DAT_00525a24 uint *
// GLOBAL DAT_00525a28 undefined4 *
// GLOBAL DAT_00525a2c undefined4
// GLOBAL DAT_00525a30 uint *
// GLOBAL DAT_00525a34 undefined4 *
// GLOBAL DAT_00525a38 undefined4
// GLOBAL DAT_00525a3c uint *
// GLOBAL DAT_00525a40 undefined4 *
// GLOBAL DAT_00525a44 undefined4

undefined4 func_0052582C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005259f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005259f4), iVar1 != 0)) {
    *DAT_005259f8 = DAT_005259fc;
  }
  if (DAT_005259f8 != param_2) {
    if (((*DAT_00525a00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525a00), iVar1 != 0)) {
      *DAT_00525a04 = DAT_00525a08;
    }
    if (DAT_00525a04 != param_2) {
      if (((*DAT_00525a0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525a0c), iVar1 != 0)) {
        *DAT_00525a10 = DAT_00525a14;
      }
      if (DAT_00525a10 != param_2) {
        if (((*DAT_00525a18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525a18), iVar1 != 0))
        {
          *DAT_00525a1c = DAT_00525a20;
        }
        if (DAT_00525a1c != param_2) {
          if (((*DAT_00525a24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525a24), iVar1 != 0)
             ) {
            *DAT_00525a28 = DAT_00525a2c;
          }
          if (DAT_00525a28 != param_2) {
            if (((*DAT_00525a30 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00525a30), iVar1 != 0)) {
              *DAT_00525a34 = DAT_00525a38;
            }
            if (DAT_00525a34 != param_2) {
              if (((*DAT_00525a3c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00525a3c), iVar1 != 0)) {
                *DAT_00525a40 = DAT_00525a44;
              }
              if (DAT_00525a40 != param_2) {
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


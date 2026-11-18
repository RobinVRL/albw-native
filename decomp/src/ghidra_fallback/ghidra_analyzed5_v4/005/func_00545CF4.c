#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00545ebc;
extern undefined4 *DAT_00545ec0;
extern undefined4 DAT_00545ec4;
extern uint *DAT_00545ec8;
extern undefined4 *DAT_00545ecc;
extern undefined4 DAT_00545ed0;
extern uint *DAT_00545ed4;
extern undefined4 *DAT_00545ed8;
extern undefined4 DAT_00545edc;
extern uint *DAT_00545ee0;
extern undefined4 *DAT_00545ee4;
extern undefined4 DAT_00545ee8;
extern uint *DAT_00545eec;
extern undefined4 *DAT_00545ef0;
extern undefined4 DAT_00545ef4;
extern uint *DAT_00545ef8;
extern undefined4 *DAT_00545efc;
extern undefined4 DAT_00545f00;
extern uint *DAT_00545f04;
extern undefined4 *DAT_00545f08;
extern undefined4 DAT_00545f0c;

// USA 00545CF4 <- EU 00545CCC (Ghidra, non-matching)
// GLOBAL DAT_00545ebc uint *
// GLOBAL DAT_00545ec0 undefined4 *
// GLOBAL DAT_00545ec4 undefined4
// GLOBAL DAT_00545ec8 uint *
// GLOBAL DAT_00545ecc undefined4 *
// GLOBAL DAT_00545ed0 undefined4
// GLOBAL DAT_00545ed4 uint *
// GLOBAL DAT_00545ed8 undefined4 *
// GLOBAL DAT_00545edc undefined4
// GLOBAL DAT_00545ee0 uint *
// GLOBAL DAT_00545ee4 undefined4 *
// GLOBAL DAT_00545ee8 undefined4
// GLOBAL DAT_00545eec uint *
// GLOBAL DAT_00545ef0 undefined4 *
// GLOBAL DAT_00545ef4 undefined4
// GLOBAL DAT_00545ef8 uint *
// GLOBAL DAT_00545efc undefined4 *
// GLOBAL DAT_00545f00 undefined4
// GLOBAL DAT_00545f04 uint *
// GLOBAL DAT_00545f08 undefined4 *
// GLOBAL DAT_00545f0c undefined4

undefined4 func_00545CF4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00545ebc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ebc), iVar1 != 0)) {
    *DAT_00545ec0 = DAT_00545ec4;
  }
  if (DAT_00545ec0 != param_2) {
    if (((*DAT_00545ec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ec8), iVar1 != 0)) {
      *DAT_00545ecc = DAT_00545ed0;
    }
    if (DAT_00545ecc != param_2) {
      if (((*DAT_00545ed4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ed4), iVar1 != 0)) {
        *DAT_00545ed8 = DAT_00545edc;
      }
      if (DAT_00545ed8 != param_2) {
        if (((*DAT_00545ee0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ee0), iVar1 != 0))
        {
          *DAT_00545ee4 = DAT_00545ee8;
        }
        if (DAT_00545ee4 != param_2) {
          if (((*DAT_00545eec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545eec), iVar1 != 0)
             ) {
            *DAT_00545ef0 = DAT_00545ef4;
          }
          if (DAT_00545ef0 != param_2) {
            if (((*DAT_00545ef8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00545ef8), iVar1 != 0)) {
              *DAT_00545efc = DAT_00545f00;
            }
            if (DAT_00545efc != param_2) {
              if (((*DAT_00545f04 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00545f04), iVar1 != 0)) {
                *DAT_00545f08 = DAT_00545f0c;
              }
              if (DAT_00545f08 != param_2) {
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


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054bc10;
extern undefined4 *DAT_0054bc14;
extern undefined4 DAT_0054bc18;
extern uint *DAT_0054bc1c;
extern undefined4 *DAT_0054bc20;
extern undefined4 DAT_0054bc24;
extern uint *DAT_0054bc28;
extern undefined4 *DAT_0054bc2c;
extern undefined4 DAT_0054bc30;
extern uint *DAT_0054bc34;
extern undefined4 *DAT_0054bc38;
extern undefined4 DAT_0054bc3c;
extern uint *DAT_0054bc40;
extern undefined4 *DAT_0054bc44;
extern undefined4 DAT_0054bc48;
extern uint *DAT_0054bc4c;
extern undefined4 *DAT_0054bc50;
extern undefined4 DAT_0054bc54;
extern uint *DAT_0054bc58;
extern undefined4 *DAT_0054bc5c;
extern undefined4 DAT_0054bc60;

// USA 0054BA48 <- EU 0054BA20 (Ghidra, non-matching)
// GLOBAL DAT_0054bc10 uint *
// GLOBAL DAT_0054bc14 undefined4 *
// GLOBAL DAT_0054bc18 undefined4
// GLOBAL DAT_0054bc1c uint *
// GLOBAL DAT_0054bc20 undefined4 *
// GLOBAL DAT_0054bc24 undefined4
// GLOBAL DAT_0054bc28 uint *
// GLOBAL DAT_0054bc2c undefined4 *
// GLOBAL DAT_0054bc30 undefined4
// GLOBAL DAT_0054bc34 uint *
// GLOBAL DAT_0054bc38 undefined4 *
// GLOBAL DAT_0054bc3c undefined4
// GLOBAL DAT_0054bc40 uint *
// GLOBAL DAT_0054bc44 undefined4 *
// GLOBAL DAT_0054bc48 undefined4
// GLOBAL DAT_0054bc4c uint *
// GLOBAL DAT_0054bc50 undefined4 *
// GLOBAL DAT_0054bc54 undefined4
// GLOBAL DAT_0054bc58 uint *
// GLOBAL DAT_0054bc5c undefined4 *
// GLOBAL DAT_0054bc60 undefined4

undefined4 func_0054BA48(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054bc10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bc10), iVar1 != 0)) {
    *DAT_0054bc14 = DAT_0054bc18;
  }
  if (DAT_0054bc14 != param_2) {
    if (((*DAT_0054bc1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bc1c), iVar1 != 0)) {
      *DAT_0054bc20 = DAT_0054bc24;
    }
    if (DAT_0054bc20 != param_2) {
      if (((*DAT_0054bc28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bc28), iVar1 != 0)) {
        *DAT_0054bc2c = DAT_0054bc30;
      }
      if (DAT_0054bc2c != param_2) {
        if (((*DAT_0054bc34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bc34), iVar1 != 0))
        {
          *DAT_0054bc38 = DAT_0054bc3c;
        }
        if (DAT_0054bc38 != param_2) {
          if (((*DAT_0054bc40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054bc40), iVar1 != 0)
             ) {
            *DAT_0054bc44 = DAT_0054bc48;
          }
          if (DAT_0054bc44 != param_2) {
            if (((*DAT_0054bc4c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054bc4c), iVar1 != 0)) {
              *DAT_0054bc50 = DAT_0054bc54;
            }
            if (DAT_0054bc50 != param_2) {
              if (((*DAT_0054bc58 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0054bc58), iVar1 != 0)) {
                *DAT_0054bc5c = DAT_0054bc60;
              }
              if (DAT_0054bc5c != param_2) {
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


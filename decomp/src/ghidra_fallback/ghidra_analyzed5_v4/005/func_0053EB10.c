#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053ec50;
extern undefined4 *DAT_0053ec54;
extern undefined4 DAT_0053ec58;
extern uint *DAT_0053ec5c;
extern undefined4 *DAT_0053ec60;
extern undefined4 DAT_0053ec64;
extern uint *DAT_0053ec68;
extern undefined4 *DAT_0053ec6c;
extern undefined4 DAT_0053ec70;
extern uint *DAT_0053ec74;
extern undefined4 *DAT_0053ec78;
extern undefined4 DAT_0053ec7c;
extern uint *DAT_0053ec80;
extern undefined4 *DAT_0053ec84;
extern undefined4 DAT_0053ec88;

// USA 0053EB10 <- EU 0053EAE8 (Ghidra, non-matching)
// GLOBAL DAT_0053ec50 uint *
// GLOBAL DAT_0053ec54 undefined4 *
// GLOBAL DAT_0053ec58 undefined4
// GLOBAL DAT_0053ec5c uint *
// GLOBAL DAT_0053ec60 undefined4 *
// GLOBAL DAT_0053ec64 undefined4
// GLOBAL DAT_0053ec68 uint *
// GLOBAL DAT_0053ec6c undefined4 *
// GLOBAL DAT_0053ec70 undefined4
// GLOBAL DAT_0053ec74 uint *
// GLOBAL DAT_0053ec78 undefined4 *
// GLOBAL DAT_0053ec7c undefined4
// GLOBAL DAT_0053ec80 uint *
// GLOBAL DAT_0053ec84 undefined4 *
// GLOBAL DAT_0053ec88 undefined4

undefined4 func_0053EB10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053ec50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ec50), iVar1 != 0)) {
    *DAT_0053ec54 = DAT_0053ec58;
  }
  if (DAT_0053ec54 != param_2) {
    if (((*DAT_0053ec5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ec5c), iVar1 != 0)) {
      *DAT_0053ec60 = DAT_0053ec64;
    }
    if (DAT_0053ec60 != param_2) {
      if (((*DAT_0053ec68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ec68), iVar1 != 0)) {
        *DAT_0053ec6c = DAT_0053ec70;
      }
      if (DAT_0053ec6c != param_2) {
        if (((*DAT_0053ec74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ec74), iVar1 != 0))
        {
          *DAT_0053ec78 = DAT_0053ec7c;
        }
        if (DAT_0053ec78 != param_2) {
          if (((*DAT_0053ec80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053ec80), iVar1 != 0)
             ) {
            *DAT_0053ec84 = DAT_0053ec88;
          }
          if (DAT_0053ec84 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


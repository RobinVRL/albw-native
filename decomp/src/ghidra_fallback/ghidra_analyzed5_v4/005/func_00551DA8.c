#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551ee8;
extern undefined4 *DAT_00551eec;
extern undefined4 DAT_00551ef0;
extern uint *DAT_00551ef4;
extern undefined4 *DAT_00551ef8;
extern undefined4 DAT_00551efc;
extern uint *DAT_00551f00;
extern undefined4 *DAT_00551f04;
extern undefined4 DAT_00551f08;
extern uint *DAT_00551f0c;
extern undefined4 *DAT_00551f10;
extern undefined4 DAT_00551f14;
extern uint *DAT_00551f18;
extern undefined4 *DAT_00551f1c;
extern undefined4 DAT_00551f20;

// USA 00551DA8 <- EU 00551D80 (Ghidra, non-matching)
// GLOBAL DAT_00551ee8 uint *
// GLOBAL DAT_00551eec undefined4 *
// GLOBAL DAT_00551ef0 undefined4
// GLOBAL DAT_00551ef4 uint *
// GLOBAL DAT_00551ef8 undefined4 *
// GLOBAL DAT_00551efc undefined4
// GLOBAL DAT_00551f00 uint *
// GLOBAL DAT_00551f04 undefined4 *
// GLOBAL DAT_00551f08 undefined4
// GLOBAL DAT_00551f0c uint *
// GLOBAL DAT_00551f10 undefined4 *
// GLOBAL DAT_00551f14 undefined4
// GLOBAL DAT_00551f18 uint *
// GLOBAL DAT_00551f1c undefined4 *
// GLOBAL DAT_00551f20 undefined4

undefined4 func_00551DA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551ee8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551ee8), iVar1 != 0)) {
    *DAT_00551eec = DAT_00551ef0;
  }
  if (DAT_00551eec != param_2) {
    if (((*DAT_00551ef4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551ef4), iVar1 != 0)) {
      *DAT_00551ef8 = DAT_00551efc;
    }
    if (DAT_00551ef8 != param_2) {
      if (((*DAT_00551f00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551f00), iVar1 != 0)) {
        *DAT_00551f04 = DAT_00551f08;
      }
      if (DAT_00551f04 != param_2) {
        if (((*DAT_00551f0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551f0c), iVar1 != 0))
        {
          *DAT_00551f10 = DAT_00551f14;
        }
        if (DAT_00551f10 != param_2) {
          if (((*DAT_00551f18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551f18), iVar1 != 0)
             ) {
            *DAT_00551f1c = DAT_00551f20;
          }
          if (DAT_00551f1c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


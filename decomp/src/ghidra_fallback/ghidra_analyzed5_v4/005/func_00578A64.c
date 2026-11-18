#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00578ba4;
extern undefined4 *DAT_00578ba8;
extern undefined4 DAT_00578bac;
extern uint *DAT_00578bb0;
extern undefined4 *DAT_00578bb4;
extern undefined4 DAT_00578bb8;
extern uint *DAT_00578bbc;
extern undefined4 *DAT_00578bc0;
extern undefined4 DAT_00578bc4;
extern uint *DAT_00578bc8;
extern undefined4 *DAT_00578bcc;
extern undefined4 DAT_00578bd0;
extern uint *DAT_00578bd4;
extern undefined4 *DAT_00578bd8;
extern undefined4 DAT_00578bdc;

// USA 00578A64 <- EU 00578A3C (Ghidra, non-matching)
// GLOBAL DAT_00578ba4 uint *
// GLOBAL DAT_00578ba8 undefined4 *
// GLOBAL DAT_00578bac undefined4
// GLOBAL DAT_00578bb0 uint *
// GLOBAL DAT_00578bb4 undefined4 *
// GLOBAL DAT_00578bb8 undefined4
// GLOBAL DAT_00578bbc uint *
// GLOBAL DAT_00578bc0 undefined4 *
// GLOBAL DAT_00578bc4 undefined4
// GLOBAL DAT_00578bc8 uint *
// GLOBAL DAT_00578bcc undefined4 *
// GLOBAL DAT_00578bd0 undefined4
// GLOBAL DAT_00578bd4 uint *
// GLOBAL DAT_00578bd8 undefined4 *
// GLOBAL DAT_00578bdc undefined4

undefined4 func_00578A64(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00578ba4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578ba4), iVar1 != 0)) {
    *DAT_00578ba8 = DAT_00578bac;
  }
  if (DAT_00578ba8 != param_2) {
    if (((*DAT_00578bb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578bb0), iVar1 != 0)) {
      *DAT_00578bb4 = DAT_00578bb8;
    }
    if (DAT_00578bb4 != param_2) {
      if (((*DAT_00578bbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578bbc), iVar1 != 0)) {
        *DAT_00578bc0 = DAT_00578bc4;
      }
      if (DAT_00578bc0 != param_2) {
        if (((*DAT_00578bc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578bc8), iVar1 != 0))
        {
          *DAT_00578bcc = DAT_00578bd0;
        }
        if (DAT_00578bcc != param_2) {
          if (((*DAT_00578bd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578bd4), iVar1 != 0)
             ) {
            *DAT_00578bd8 = DAT_00578bdc;
          }
          if (DAT_00578bd8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


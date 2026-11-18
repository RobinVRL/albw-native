#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0060df24;
extern undefined4 *DAT_0060df28;
extern undefined4 DAT_0060df2c;
extern uint *DAT_0060df30;
extern undefined4 *DAT_0060df34;
extern undefined4 DAT_0060df38;
extern uint *DAT_0060df3c;
extern undefined4 *DAT_0060df40;
extern undefined4 DAT_0060df44;
extern uint *DAT_0060df48;
extern undefined4 *DAT_0060df4c;
extern undefined4 DAT_0060df50;
extern uint *DAT_0060df54;
extern undefined4 *DAT_0060df58;
extern undefined4 DAT_0060df5c;
extern uint *DAT_0060df60;
extern undefined4 *DAT_0060df64;
extern undefined4 DAT_0060df68;

// USA 0060DDA0 <- EU 0060DD78 (Ghidra, non-matching)
// GLOBAL DAT_0060df24 uint *
// GLOBAL DAT_0060df28 undefined4 *
// GLOBAL DAT_0060df2c undefined4
// GLOBAL DAT_0060df30 uint *
// GLOBAL DAT_0060df34 undefined4 *
// GLOBAL DAT_0060df38 undefined4
// GLOBAL DAT_0060df3c uint *
// GLOBAL DAT_0060df40 undefined4 *
// GLOBAL DAT_0060df44 undefined4
// GLOBAL DAT_0060df48 uint *
// GLOBAL DAT_0060df4c undefined4 *
// GLOBAL DAT_0060df50 undefined4
// GLOBAL DAT_0060df54 uint *
// GLOBAL DAT_0060df58 undefined4 *
// GLOBAL DAT_0060df5c undefined4
// GLOBAL DAT_0060df60 uint *
// GLOBAL DAT_0060df64 undefined4 *
// GLOBAL DAT_0060df68 undefined4

undefined4 func_0060DDA0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0060df24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0060df24), iVar1 != 0)) {
    *DAT_0060df28 = DAT_0060df2c;
  }
  if (DAT_0060df28 != param_1) {
    if (((*DAT_0060df30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0060df30), iVar1 != 0)) {
      *DAT_0060df34 = DAT_0060df38;
    }
    if (DAT_0060df34 != param_1) {
      if (((*DAT_0060df3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0060df3c), iVar1 != 0)) {
        *DAT_0060df40 = DAT_0060df44;
      }
      if (DAT_0060df40 != param_1) {
        if (((*DAT_0060df48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0060df48), iVar1 != 0))
        {
          *DAT_0060df4c = DAT_0060df50;
        }
        if (DAT_0060df4c != param_1) {
          if (((*DAT_0060df54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0060df54), iVar1 != 0)
             ) {
            *DAT_0060df58 = DAT_0060df5c;
          }
          if (DAT_0060df58 != param_1) {
            if (((*DAT_0060df60 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0060df60), iVar1 != 0)) {
              *DAT_0060df64 = DAT_0060df68;
            }
            if (DAT_0060df64 != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


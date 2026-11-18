#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057c87c;
extern undefined4 *DAT_0057c880;
extern undefined4 DAT_0057c884;
extern uint *DAT_0057c888;
extern undefined4 *DAT_0057c88c;
extern undefined4 DAT_0057c890;
extern uint *DAT_0057c894;
extern undefined4 *DAT_0057c898;
extern undefined4 DAT_0057c89c;
extern uint *DAT_0057c8a0;
extern undefined4 *DAT_0057c8a4;
extern undefined4 DAT_0057c8a8;
extern uint *DAT_0057c8ac;
extern undefined4 *DAT_0057c8b0;
extern undefined4 DAT_0057c8b4;

// USA 0057C73C <- EU 0057C714 (Ghidra, non-matching)
// GLOBAL DAT_0057c87c uint *
// GLOBAL DAT_0057c880 undefined4 *
// GLOBAL DAT_0057c884 undefined4
// GLOBAL DAT_0057c888 uint *
// GLOBAL DAT_0057c88c undefined4 *
// GLOBAL DAT_0057c890 undefined4
// GLOBAL DAT_0057c894 uint *
// GLOBAL DAT_0057c898 undefined4 *
// GLOBAL DAT_0057c89c undefined4
// GLOBAL DAT_0057c8a0 uint *
// GLOBAL DAT_0057c8a4 undefined4 *
// GLOBAL DAT_0057c8a8 undefined4
// GLOBAL DAT_0057c8ac uint *
// GLOBAL DAT_0057c8b0 undefined4 *
// GLOBAL DAT_0057c8b4 undefined4

undefined4 func_0057C73C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c87c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c87c), iVar1 != 0)) {
    *DAT_0057c880 = DAT_0057c884;
  }
  if (DAT_0057c880 != param_2) {
    if (((*DAT_0057c888 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c888), iVar1 != 0)) {
      *DAT_0057c88c = DAT_0057c890;
    }
    if (DAT_0057c88c != param_2) {
      if (((*DAT_0057c894 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c894), iVar1 != 0)) {
        *DAT_0057c898 = DAT_0057c89c;
      }
      if (DAT_0057c898 != param_2) {
        if (((*DAT_0057c8a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c8a0), iVar1 != 0))
        {
          *DAT_0057c8a4 = DAT_0057c8a8;
        }
        if (DAT_0057c8a4 != param_2) {
          if (((*DAT_0057c8ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c8ac), iVar1 != 0)
             ) {
            *DAT_0057c8b0 = DAT_0057c8b4;
          }
          if (DAT_0057c8b0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


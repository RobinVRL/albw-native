#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005578c8;
extern undefined4 *DAT_005578cc;
extern undefined4 DAT_005578d0;
extern uint *DAT_005578d4;
extern undefined4 *DAT_005578d8;
extern undefined4 DAT_005578dc;
extern uint *DAT_005578e0;
extern undefined4 *DAT_005578e4;
extern undefined4 DAT_005578e8;
extern uint *DAT_005578ec;
extern undefined4 *DAT_005578f0;
extern undefined4 DAT_005578f4;
extern uint *DAT_005578f8;
extern undefined4 *DAT_005578fc;
extern undefined4 DAT_00557900;

// USA 00557788 <- EU 00557760 (Ghidra, non-matching)
// GLOBAL DAT_005578c8 uint *
// GLOBAL DAT_005578cc undefined4 *
// GLOBAL DAT_005578d0 undefined4
// GLOBAL DAT_005578d4 uint *
// GLOBAL DAT_005578d8 undefined4 *
// GLOBAL DAT_005578dc undefined4
// GLOBAL DAT_005578e0 uint *
// GLOBAL DAT_005578e4 undefined4 *
// GLOBAL DAT_005578e8 undefined4
// GLOBAL DAT_005578ec uint *
// GLOBAL DAT_005578f0 undefined4 *
// GLOBAL DAT_005578f4 undefined4
// GLOBAL DAT_005578f8 uint *
// GLOBAL DAT_005578fc undefined4 *
// GLOBAL DAT_00557900 undefined4

undefined4 func_00557788(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005578c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005578c8), iVar1 != 0)) {
    *DAT_005578cc = DAT_005578d0;
  }
  if (DAT_005578cc != param_2) {
    if (((*DAT_005578d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005578d4), iVar1 != 0)) {
      *DAT_005578d8 = DAT_005578dc;
    }
    if (DAT_005578d8 != param_2) {
      if (((*DAT_005578e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005578e0), iVar1 != 0)) {
        *DAT_005578e4 = DAT_005578e8;
      }
      if (DAT_005578e4 != param_2) {
        if (((*DAT_005578ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005578ec), iVar1 != 0))
        {
          *DAT_005578f0 = DAT_005578f4;
        }
        if (DAT_005578f0 != param_2) {
          if (((*DAT_005578f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005578f8), iVar1 != 0)
             ) {
            *DAT_005578fc = DAT_00557900;
          }
          if (DAT_005578fc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


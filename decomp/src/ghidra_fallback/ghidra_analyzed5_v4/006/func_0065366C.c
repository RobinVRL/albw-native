#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00653834;
extern undefined4 *DAT_00653838;
extern undefined4 DAT_0065383c;
extern uint *DAT_00653840;
extern undefined4 *DAT_00653844;
extern undefined4 DAT_00653848;
extern uint *DAT_0065384c;
extern undefined4 *DAT_00653850;
extern undefined4 DAT_00653854;
extern uint *DAT_00653858;
extern undefined4 *DAT_0065385c;
extern undefined4 DAT_00653860;
extern uint *DAT_00653864;
extern undefined4 *DAT_00653868;
extern undefined4 DAT_0065386c;
extern uint *DAT_00653870;
extern undefined4 *DAT_00653874;
extern undefined4 DAT_00653878;
extern uint *DAT_0065387c;
extern undefined4 *DAT_00653880;
extern undefined4 DAT_00653884;

// USA 0065366C <- EU 00653644 (Ghidra, non-matching)
// GLOBAL DAT_00653834 uint *
// GLOBAL DAT_00653838 undefined4 *
// GLOBAL DAT_0065383c undefined4
// GLOBAL DAT_00653840 uint *
// GLOBAL DAT_00653844 undefined4 *
// GLOBAL DAT_00653848 undefined4
// GLOBAL DAT_0065384c uint *
// GLOBAL DAT_00653850 undefined4 *
// GLOBAL DAT_00653854 undefined4
// GLOBAL DAT_00653858 uint *
// GLOBAL DAT_0065385c undefined4 *
// GLOBAL DAT_00653860 undefined4
// GLOBAL DAT_00653864 uint *
// GLOBAL DAT_00653868 undefined4 *
// GLOBAL DAT_0065386c undefined4
// GLOBAL DAT_00653870 uint *
// GLOBAL DAT_00653874 undefined4 *
// GLOBAL DAT_00653878 undefined4
// GLOBAL DAT_0065387c uint *
// GLOBAL DAT_00653880 undefined4 *
// GLOBAL DAT_00653884 undefined4

undefined4 func_0065366C(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00653834 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00653834), iVar1 != 0)) {
    *DAT_00653838 = DAT_0065383c;
  }
  if (DAT_00653838 != param_1) {
    if (((*DAT_00653840 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00653840), iVar1 != 0)) {
      *DAT_00653844 = DAT_00653848;
    }
    if (DAT_00653844 != param_1) {
      if (((*DAT_0065384c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0065384c), iVar1 != 0)) {
        *DAT_00653850 = DAT_00653854;
      }
      if (DAT_00653850 != param_1) {
        if (((*DAT_00653858 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00653858), iVar1 != 0))
        {
          *DAT_0065385c = DAT_00653860;
        }
        if (DAT_0065385c != param_1) {
          if (((*DAT_00653864 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00653864), iVar1 != 0)
             ) {
            *DAT_00653868 = DAT_0065386c;
          }
          if (DAT_00653868 != param_1) {
            if (((*DAT_00653870 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00653870), iVar1 != 0)) {
              *DAT_00653874 = DAT_00653878;
            }
            if (DAT_00653874 != param_1) {
              if (((*DAT_0065387c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0065387c), iVar1 != 0)) {
                *DAT_00653880 = DAT_00653884;
              }
              if (DAT_00653880 != param_1) {
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


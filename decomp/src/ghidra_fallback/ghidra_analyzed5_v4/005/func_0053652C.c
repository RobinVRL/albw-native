#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053666c;
extern undefined4 *DAT_00536670;
extern undefined4 DAT_00536674;
extern uint *DAT_00536678;
extern undefined4 *DAT_0053667c;
extern undefined4 DAT_00536680;
extern uint *DAT_00536684;
extern undefined4 *DAT_00536688;
extern undefined4 DAT_0053668c;
extern uint *DAT_00536690;
extern undefined4 *DAT_00536694;
extern undefined4 DAT_00536698;
extern uint *DAT_0053669c;
extern undefined4 *DAT_005366a0;
extern undefined4 DAT_005366a4;

// USA 0053652C <- EU 00536504 (Ghidra, non-matching)
// GLOBAL DAT_0053666c uint *
// GLOBAL DAT_00536670 undefined4 *
// GLOBAL DAT_00536674 undefined4
// GLOBAL DAT_00536678 uint *
// GLOBAL DAT_0053667c undefined4 *
// GLOBAL DAT_00536680 undefined4
// GLOBAL DAT_00536684 uint *
// GLOBAL DAT_00536688 undefined4 *
// GLOBAL DAT_0053668c undefined4
// GLOBAL DAT_00536690 uint *
// GLOBAL DAT_00536694 undefined4 *
// GLOBAL DAT_00536698 undefined4
// GLOBAL DAT_0053669c uint *
// GLOBAL DAT_005366a0 undefined4 *
// GLOBAL DAT_005366a4 undefined4

undefined4 func_0053652C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053666c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053666c), iVar1 != 0)) {
    *DAT_00536670 = DAT_00536674;
  }
  if (DAT_00536670 != param_2) {
    if (((*DAT_00536678 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536678), iVar1 != 0)) {
      *DAT_0053667c = DAT_00536680;
    }
    if (DAT_0053667c != param_2) {
      if (((*DAT_00536684 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536684), iVar1 != 0)) {
        *DAT_00536688 = DAT_0053668c;
      }
      if (DAT_00536688 != param_2) {
        if (((*DAT_00536690 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536690), iVar1 != 0))
        {
          *DAT_00536694 = DAT_00536698;
        }
        if (DAT_00536694 != param_2) {
          if (((*DAT_0053669c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053669c), iVar1 != 0)
             ) {
            *DAT_005366a0 = DAT_005366a4;
          }
          if (DAT_005366a0 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


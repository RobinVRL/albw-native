#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576660;
extern undefined4 *DAT_00576664;
extern undefined4 DAT_00576668;
extern uint *DAT_0057666c;
extern undefined4 *DAT_00576670;
extern undefined4 DAT_00576674;
extern uint *DAT_00576678;
extern undefined4 *DAT_0057667c;
extern undefined4 DAT_00576680;
extern uint *DAT_00576684;
extern undefined4 *DAT_00576688;
extern undefined4 DAT_0057668c;
extern uint *DAT_00576690;
extern undefined4 *DAT_00576694;
extern undefined4 DAT_00576698;
extern uint *DAT_0057669c;
extern undefined4 *DAT_005766a0;
extern undefined4 DAT_005766a4;

// USA 005764DC <- EU 005764B4 (Ghidra, non-matching)
// GLOBAL DAT_00576660 uint *
// GLOBAL DAT_00576664 undefined4 *
// GLOBAL DAT_00576668 undefined4
// GLOBAL DAT_0057666c uint *
// GLOBAL DAT_00576670 undefined4 *
// GLOBAL DAT_00576674 undefined4
// GLOBAL DAT_00576678 uint *
// GLOBAL DAT_0057667c undefined4 *
// GLOBAL DAT_00576680 undefined4
// GLOBAL DAT_00576684 uint *
// GLOBAL DAT_00576688 undefined4 *
// GLOBAL DAT_0057668c undefined4
// GLOBAL DAT_00576690 uint *
// GLOBAL DAT_00576694 undefined4 *
// GLOBAL DAT_00576698 undefined4
// GLOBAL DAT_0057669c uint *
// GLOBAL DAT_005766a0 undefined4 *
// GLOBAL DAT_005766a4 undefined4

undefined4 func_005764DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576660 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576660), iVar1 != 0)) {
    *DAT_00576664 = DAT_00576668;
  }
  if (DAT_00576664 != param_2) {
    if (((*DAT_0057666c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057666c), iVar1 != 0)) {
      *DAT_00576670 = DAT_00576674;
    }
    if (DAT_00576670 != param_2) {
      if (((*DAT_00576678 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576678), iVar1 != 0)) {
        *DAT_0057667c = DAT_00576680;
      }
      if (DAT_0057667c != param_2) {
        if (((*DAT_00576684 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576684), iVar1 != 0))
        {
          *DAT_00576688 = DAT_0057668c;
        }
        if (DAT_00576688 != param_2) {
          if (((*DAT_00576690 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576690), iVar1 != 0)
             ) {
            *DAT_00576694 = DAT_00576698;
          }
          if (DAT_00576694 != param_2) {
            if (((*DAT_0057669c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0057669c), iVar1 != 0)) {
              *DAT_005766a0 = DAT_005766a4;
            }
            if (DAT_005766a0 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


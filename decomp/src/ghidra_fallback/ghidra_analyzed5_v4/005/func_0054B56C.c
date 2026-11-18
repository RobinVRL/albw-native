#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054b734;
extern undefined4 *DAT_0054b738;
extern undefined4 DAT_0054b73c;
extern uint *DAT_0054b740;
extern undefined4 *DAT_0054b744;
extern undefined4 DAT_0054b748;
extern uint *DAT_0054b74c;
extern undefined4 *DAT_0054b750;
extern undefined4 DAT_0054b754;
extern uint *DAT_0054b758;
extern undefined4 *DAT_0054b75c;
extern undefined4 DAT_0054b760;
extern uint *DAT_0054b764;
extern undefined4 *DAT_0054b768;
extern undefined4 DAT_0054b76c;
extern uint *DAT_0054b770;
extern undefined4 *DAT_0054b774;
extern undefined4 DAT_0054b778;
extern uint *DAT_0054b77c;
extern undefined4 *DAT_0054b780;
extern undefined4 DAT_0054b784;

// USA 0054B56C <- EU 0054B544 (Ghidra, non-matching)
// GLOBAL DAT_0054b734 uint *
// GLOBAL DAT_0054b738 undefined4 *
// GLOBAL DAT_0054b73c undefined4
// GLOBAL DAT_0054b740 uint *
// GLOBAL DAT_0054b744 undefined4 *
// GLOBAL DAT_0054b748 undefined4
// GLOBAL DAT_0054b74c uint *
// GLOBAL DAT_0054b750 undefined4 *
// GLOBAL DAT_0054b754 undefined4
// GLOBAL DAT_0054b758 uint *
// GLOBAL DAT_0054b75c undefined4 *
// GLOBAL DAT_0054b760 undefined4
// GLOBAL DAT_0054b764 uint *
// GLOBAL DAT_0054b768 undefined4 *
// GLOBAL DAT_0054b76c undefined4
// GLOBAL DAT_0054b770 uint *
// GLOBAL DAT_0054b774 undefined4 *
// GLOBAL DAT_0054b778 undefined4
// GLOBAL DAT_0054b77c uint *
// GLOBAL DAT_0054b780 undefined4 *
// GLOBAL DAT_0054b784 undefined4

undefined4 func_0054B56C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054b734 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b734), iVar1 != 0)) {
    *DAT_0054b738 = DAT_0054b73c;
  }
  if (DAT_0054b738 != param_2) {
    if (((*DAT_0054b740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b740), iVar1 != 0)) {
      *DAT_0054b744 = DAT_0054b748;
    }
    if (DAT_0054b744 != param_2) {
      if (((*DAT_0054b74c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b74c), iVar1 != 0)) {
        *DAT_0054b750 = DAT_0054b754;
      }
      if (DAT_0054b750 != param_2) {
        if (((*DAT_0054b758 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b758), iVar1 != 0))
        {
          *DAT_0054b75c = DAT_0054b760;
        }
        if (DAT_0054b75c != param_2) {
          if (((*DAT_0054b764 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b764), iVar1 != 0)
             ) {
            *DAT_0054b768 = DAT_0054b76c;
          }
          if (DAT_0054b768 != param_2) {
            if (((*DAT_0054b770 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054b770), iVar1 != 0)) {
              *DAT_0054b774 = DAT_0054b778;
            }
            if (DAT_0054b774 != param_2) {
              if (((*DAT_0054b77c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0054b77c), iVar1 != 0)) {
                *DAT_0054b780 = DAT_0054b784;
              }
              if (DAT_0054b780 != param_2) {
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


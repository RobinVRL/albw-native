#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057885c;
extern undefined4 *DAT_00578860;
extern undefined4 DAT_00578864;
extern uint *DAT_00578868;
extern undefined4 *DAT_0057886c;
extern undefined4 DAT_00578870;
extern uint *DAT_00578874;
extern undefined4 *DAT_00578878;
extern undefined4 DAT_0057887c;
extern uint *DAT_00578880;
extern undefined4 *DAT_00578884;
extern undefined4 DAT_00578888;
extern uint *DAT_0057888c;
extern undefined4 *DAT_00578890;
extern undefined4 DAT_00578894;

// USA 0057871C <- EU 005786F4 (Ghidra, non-matching)
// GLOBAL DAT_0057885c uint *
// GLOBAL DAT_00578860 undefined4 *
// GLOBAL DAT_00578864 undefined4
// GLOBAL DAT_00578868 uint *
// GLOBAL DAT_0057886c undefined4 *
// GLOBAL DAT_00578870 undefined4
// GLOBAL DAT_00578874 uint *
// GLOBAL DAT_00578878 undefined4 *
// GLOBAL DAT_0057887c undefined4
// GLOBAL DAT_00578880 uint *
// GLOBAL DAT_00578884 undefined4 *
// GLOBAL DAT_00578888 undefined4
// GLOBAL DAT_0057888c uint *
// GLOBAL DAT_00578890 undefined4 *
// GLOBAL DAT_00578894 undefined4

undefined4 func_0057871C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057885c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057885c), iVar1 != 0)) {
    *DAT_00578860 = DAT_00578864;
  }
  if (DAT_00578860 != param_2) {
    if (((*DAT_00578868 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578868), iVar1 != 0)) {
      *DAT_0057886c = DAT_00578870;
    }
    if (DAT_0057886c != param_2) {
      if (((*DAT_00578874 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578874), iVar1 != 0)) {
        *DAT_00578878 = DAT_0057887c;
      }
      if (DAT_00578878 != param_2) {
        if (((*DAT_00578880 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578880), iVar1 != 0))
        {
          *DAT_00578884 = DAT_00578888;
        }
        if (DAT_00578884 != param_2) {
          if (((*DAT_0057888c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057888c), iVar1 != 0)
             ) {
            *DAT_00578890 = DAT_00578894;
          }
          if (DAT_00578890 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


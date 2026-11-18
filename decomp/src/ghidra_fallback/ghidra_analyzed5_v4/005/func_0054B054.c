#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054b150;
extern undefined4 *DAT_0054b154;
extern undefined4 DAT_0054b158;
extern uint *DAT_0054b15c;
extern undefined4 *DAT_0054b160;
extern undefined4 DAT_0054b164;
extern uint *DAT_0054b168;
extern undefined4 *DAT_0054b16c;
extern undefined4 DAT_0054b170;
extern uint *DAT_0054b174;
extern undefined4 *DAT_0054b178;
extern undefined4 DAT_0054b17c;

// USA 0054B054 <- EU 0054B02C (Ghidra, non-matching)
// GLOBAL DAT_0054b150 uint *
// GLOBAL DAT_0054b154 undefined4 *
// GLOBAL DAT_0054b158 undefined4
// GLOBAL DAT_0054b15c uint *
// GLOBAL DAT_0054b160 undefined4 *
// GLOBAL DAT_0054b164 undefined4
// GLOBAL DAT_0054b168 uint *
// GLOBAL DAT_0054b16c undefined4 *
// GLOBAL DAT_0054b170 undefined4
// GLOBAL DAT_0054b174 uint *
// GLOBAL DAT_0054b178 undefined4 *
// GLOBAL DAT_0054b17c undefined4

undefined4 func_0054B054(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054b150 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b150), iVar1 != 0)) {
    *DAT_0054b154 = DAT_0054b158;
  }
  if (DAT_0054b154 != param_2) {
    if (((*DAT_0054b15c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b15c), iVar1 != 0)) {
      *DAT_0054b160 = DAT_0054b164;
    }
    if (DAT_0054b160 != param_2) {
      if (((*DAT_0054b168 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b168), iVar1 != 0)) {
        *DAT_0054b16c = DAT_0054b170;
      }
      if (DAT_0054b16c != param_2) {
        if (((*DAT_0054b174 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b174), iVar1 != 0))
        {
          *DAT_0054b178 = DAT_0054b17c;
        }
        if (DAT_0054b178 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


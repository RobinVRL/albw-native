#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529164;
extern undefined4 *DAT_00529168;
extern undefined4 DAT_0052916c;
extern uint *DAT_00529170;
extern undefined4 *DAT_00529174;
extern undefined4 DAT_00529178;
extern uint *DAT_0052917c;
extern undefined4 *DAT_00529180;
extern undefined4 DAT_00529184;
extern uint *DAT_00529188;
extern undefined4 *DAT_0052918c;
extern undefined4 DAT_00529190;

// USA 00529068 <- EU 00529040 (Ghidra, non-matching)
// GLOBAL DAT_00529164 uint *
// GLOBAL DAT_00529168 undefined4 *
// GLOBAL DAT_0052916c undefined4
// GLOBAL DAT_00529170 uint *
// GLOBAL DAT_00529174 undefined4 *
// GLOBAL DAT_00529178 undefined4
// GLOBAL DAT_0052917c uint *
// GLOBAL DAT_00529180 undefined4 *
// GLOBAL DAT_00529184 undefined4
// GLOBAL DAT_00529188 uint *
// GLOBAL DAT_0052918c undefined4 *
// GLOBAL DAT_00529190 undefined4

undefined4 func_00529068(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529164 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529164), iVar1 != 0)) {
    *DAT_00529168 = DAT_0052916c;
  }
  if (DAT_00529168 != param_2) {
    if (((*DAT_00529170 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529170), iVar1 != 0)) {
      *DAT_00529174 = DAT_00529178;
    }
    if (DAT_00529174 != param_2) {
      if (((*DAT_0052917c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052917c), iVar1 != 0)) {
        *DAT_00529180 = DAT_00529184;
      }
      if (DAT_00529180 != param_2) {
        if (((*DAT_00529188 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529188), iVar1 != 0))
        {
          *DAT_0052918c = DAT_00529190;
        }
        if (DAT_0052918c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


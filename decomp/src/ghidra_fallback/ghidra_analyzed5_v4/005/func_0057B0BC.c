#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057b1fc;
extern undefined4 *DAT_0057b200;
extern undefined4 DAT_0057b204;
extern uint *DAT_0057b208;
extern undefined4 *DAT_0057b20c;
extern undefined4 DAT_0057b210;
extern uint *DAT_0057b214;
extern undefined4 *DAT_0057b218;
extern undefined4 DAT_0057b21c;
extern uint *DAT_0057b220;
extern undefined4 *DAT_0057b224;
extern undefined4 DAT_0057b228;
extern uint *DAT_0057b22c;
extern undefined4 *DAT_0057b230;
extern undefined4 DAT_0057b234;

// USA 0057B0BC <- EU 0057B094 (Ghidra, non-matching)
// GLOBAL DAT_0057b1fc uint *
// GLOBAL DAT_0057b200 undefined4 *
// GLOBAL DAT_0057b204 undefined4
// GLOBAL DAT_0057b208 uint *
// GLOBAL DAT_0057b20c undefined4 *
// GLOBAL DAT_0057b210 undefined4
// GLOBAL DAT_0057b214 uint *
// GLOBAL DAT_0057b218 undefined4 *
// GLOBAL DAT_0057b21c undefined4
// GLOBAL DAT_0057b220 uint *
// GLOBAL DAT_0057b224 undefined4 *
// GLOBAL DAT_0057b228 undefined4
// GLOBAL DAT_0057b22c uint *
// GLOBAL DAT_0057b230 undefined4 *
// GLOBAL DAT_0057b234 undefined4

undefined4 func_0057B0BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057b1fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b1fc), iVar1 != 0)) {
    *DAT_0057b200 = DAT_0057b204;
  }
  if (DAT_0057b200 != param_2) {
    if (((*DAT_0057b208 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b208), iVar1 != 0)) {
      *DAT_0057b20c = DAT_0057b210;
    }
    if (DAT_0057b20c != param_2) {
      if (((*DAT_0057b214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b214), iVar1 != 0)) {
        *DAT_0057b218 = DAT_0057b21c;
      }
      if (DAT_0057b218 != param_2) {
        if (((*DAT_0057b220 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b220), iVar1 != 0))
        {
          *DAT_0057b224 = DAT_0057b228;
        }
        if (DAT_0057b224 != param_2) {
          if (((*DAT_0057b22c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b22c), iVar1 != 0)
             ) {
            *DAT_0057b230 = DAT_0057b234;
          }
          if (DAT_0057b230 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


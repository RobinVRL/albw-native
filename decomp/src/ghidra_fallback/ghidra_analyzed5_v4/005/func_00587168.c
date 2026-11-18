#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00587264;
extern undefined4 *DAT_00587268;
extern undefined4 DAT_0058726c;
extern uint *DAT_00587270;
extern undefined4 *DAT_00587274;
extern undefined4 DAT_00587278;
extern uint *DAT_0058727c;
extern undefined4 *DAT_00587280;
extern undefined4 DAT_00587284;
extern uint *DAT_00587288;
extern undefined4 *DAT_0058728c;
extern undefined4 DAT_00587290;

// USA 00587168 <- EU 00587140 (Ghidra, non-matching)
// GLOBAL DAT_00587264 uint *
// GLOBAL DAT_00587268 undefined4 *
// GLOBAL DAT_0058726c undefined4
// GLOBAL DAT_00587270 uint *
// GLOBAL DAT_00587274 undefined4 *
// GLOBAL DAT_00587278 undefined4
// GLOBAL DAT_0058727c uint *
// GLOBAL DAT_00587280 undefined4 *
// GLOBAL DAT_00587284 undefined4
// GLOBAL DAT_00587288 uint *
// GLOBAL DAT_0058728c undefined4 *
// GLOBAL DAT_00587290 undefined4

undefined4 func_00587168(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00587264 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587264), iVar1 != 0)) {
    *DAT_00587268 = DAT_0058726c;
  }
  if (DAT_00587268 != param_2) {
    if (((*DAT_00587270 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587270), iVar1 != 0)) {
      *DAT_00587274 = DAT_00587278;
    }
    if (DAT_00587274 != param_2) {
      if (((*DAT_0058727c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058727c), iVar1 != 0)) {
        *DAT_00587280 = DAT_00587284;
      }
      if (DAT_00587280 != param_2) {
        if (((*DAT_00587288 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587288), iVar1 != 0))
        {
          *DAT_0058728c = DAT_00587290;
        }
        if (DAT_0058728c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00578388;
extern undefined4 *DAT_0057838c;
extern undefined4 DAT_00578390;
extern uint *DAT_00578394;
extern undefined4 *DAT_00578398;
extern undefined4 DAT_0057839c;
extern uint *DAT_005783a0;
extern undefined4 *DAT_005783a4;
extern undefined4 DAT_005783a8;

// USA 005782CC <- EU 005782A4 (Ghidra, non-matching)
// GLOBAL DAT_00578388 uint *
// GLOBAL DAT_0057838c undefined4 *
// GLOBAL DAT_00578390 undefined4
// GLOBAL DAT_00578394 uint *
// GLOBAL DAT_00578398 undefined4 *
// GLOBAL DAT_0057839c undefined4
// GLOBAL DAT_005783a0 uint *
// GLOBAL DAT_005783a4 undefined4 *
// GLOBAL DAT_005783a8 undefined4

undefined4 func_005782CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00578388 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578388), iVar1 != 0)) {
    *DAT_0057838c = DAT_00578390;
  }
  if (DAT_0057838c != param_2) {
    if (((*DAT_00578394 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578394), iVar1 != 0)) {
      *DAT_00578398 = DAT_0057839c;
    }
    if (DAT_00578398 != param_2) {
      if (((*DAT_005783a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005783a0), iVar1 != 0)) {
        *DAT_005783a4 = DAT_005783a8;
      }
      if (DAT_005783a4 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


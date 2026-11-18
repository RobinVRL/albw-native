#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00545408;
extern undefined4 *DAT_0054540c;
extern undefined4 DAT_00545410;
extern uint *DAT_00545414;
extern undefined4 *DAT_00545418;
extern undefined4 DAT_0054541c;

// USA 00545390 <- EU 00545368 (Ghidra, non-matching)
// GLOBAL DAT_00545408 uint *
// GLOBAL DAT_0054540c undefined4 *
// GLOBAL DAT_00545410 undefined4
// GLOBAL DAT_00545414 uint *
// GLOBAL DAT_00545418 undefined4 *
// GLOBAL DAT_0054541c undefined4

undefined4 func_00545390(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545408 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545408), iVar1 != 0)) {
    *DAT_0054540c = DAT_00545410;
  }
  if (DAT_0054540c != param_2) {
    if (((*DAT_00545414 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545414), iVar1 != 0)) {
      *DAT_00545418 = DAT_0054541c;
    }
    if (DAT_00545418 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}


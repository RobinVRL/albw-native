#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00545910;
extern undefined4 *DAT_00545914;
extern undefined4 DAT_00545918;
extern uint *DAT_0054591c;
extern undefined4 *DAT_00545920;
extern undefined4 DAT_00545924;

// USA 00545898 <- EU 00545870 (Ghidra, non-matching)
// GLOBAL DAT_00545910 uint *
// GLOBAL DAT_00545914 undefined4 *
// GLOBAL DAT_00545918 undefined4
// GLOBAL DAT_0054591c uint *
// GLOBAL DAT_00545920 undefined4 *
// GLOBAL DAT_00545924 undefined4

undefined4 func_00545898(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00545910 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545910), iVar1 != 0)) {
    *DAT_00545914 = DAT_00545918;
  }
  if (DAT_00545914 != param_2) {
    if (((*DAT_0054591c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054591c), iVar1 != 0)) {
      *DAT_00545920 = DAT_00545924;
    }
    if (DAT_00545920 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}


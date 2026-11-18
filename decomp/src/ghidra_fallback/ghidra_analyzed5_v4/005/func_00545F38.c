#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00545ff0;
extern undefined4 *DAT_00545ff4;
extern undefined4 DAT_00545ff8;
extern uint *DAT_00545ffc;
extern undefined4 *DAT_00546000;
extern undefined4 DAT_00546004;
extern uint *DAT_00546008;
extern undefined4 *DAT_0054600c;
extern undefined4 DAT_00546010;

// USA 00545F38 <- EU 00545F10 (Ghidra, non-matching)
// GLOBAL DAT_00545ff0 uint *
// GLOBAL DAT_00545ff4 undefined4 *
// GLOBAL DAT_00545ff8 undefined4
// GLOBAL DAT_00545ffc uint *
// GLOBAL DAT_00546000 undefined4 *
// GLOBAL DAT_00546004 undefined4
// GLOBAL DAT_00546008 uint *
// GLOBAL DAT_0054600c undefined4 *
// GLOBAL DAT_00546010 undefined4

undefined4 func_00545F38(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00545ff0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ff0), iVar1 != 0)) {
    *DAT_00545ff4 = DAT_00545ff8;
  }
  if (DAT_00545ff4 != param_2) {
    if (((*DAT_00545ffc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00545ffc), iVar1 != 0)) {
      *DAT_00546000 = DAT_00546004;
    }
    if (DAT_00546000 != param_2) {
      if (((*DAT_00546008 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546008), iVar1 != 0)) {
        *DAT_0054600c = DAT_00546010;
      }
      if (DAT_0054600c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


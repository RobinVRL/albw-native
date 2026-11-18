#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00587058;
extern undefined4 *DAT_0058705c;
extern undefined4 DAT_00587060;
extern uint *DAT_00587064;
extern undefined4 *DAT_00587068;
extern undefined4 DAT_0058706c;
extern uint *DAT_00587070;
extern undefined4 *DAT_00587074;
extern undefined4 DAT_00587078;
extern uint *DAT_0058707c;
extern undefined4 *DAT_00587080;
extern undefined4 DAT_00587084;

// USA 00586F5C <- EU 00586F34 (Ghidra, non-matching)
// GLOBAL DAT_00587058 uint *
// GLOBAL DAT_0058705c undefined4 *
// GLOBAL DAT_00587060 undefined4
// GLOBAL DAT_00587064 uint *
// GLOBAL DAT_00587068 undefined4 *
// GLOBAL DAT_0058706c undefined4
// GLOBAL DAT_00587070 uint *
// GLOBAL DAT_00587074 undefined4 *
// GLOBAL DAT_00587078 undefined4
// GLOBAL DAT_0058707c uint *
// GLOBAL DAT_00587080 undefined4 *
// GLOBAL DAT_00587084 undefined4

undefined4 func_00586F5C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00587058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587058), iVar1 != 0)) {
    *DAT_0058705c = DAT_00587060;
  }
  if (DAT_0058705c != param_2) {
    if (((*DAT_00587064 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587064), iVar1 != 0)) {
      *DAT_00587068 = DAT_0058706c;
    }
    if (DAT_00587068 != param_2) {
      if (((*DAT_00587070 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587070), iVar1 != 0)) {
        *DAT_00587074 = DAT_00587078;
      }
      if (DAT_00587074 != param_2) {
        if (((*DAT_0058707c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058707c), iVar1 != 0))
        {
          *DAT_00587080 = DAT_00587084;
        }
        if (DAT_00587080 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


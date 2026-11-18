#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054716c;
extern undefined4 *DAT_00547170;
extern undefined4 DAT_00547174;
extern uint *DAT_00547178;
extern undefined4 *DAT_0054717c;
extern undefined4 DAT_00547180;

// USA 005470F8 <- EU 005470D0 (Ghidra, non-matching)
// GLOBAL DAT_0054716c uint *
// GLOBAL DAT_00547170 undefined4 *
// GLOBAL DAT_00547174 undefined4
// GLOBAL DAT_00547178 uint *
// GLOBAL DAT_0054717c undefined4 *
// GLOBAL DAT_00547180 undefined4

undefined4 func_005470F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054716c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054716c), iVar1 != 0)) {
    *DAT_00547170 = DAT_00547174;
  }
  if (DAT_00547170 != param_2) {
    if (((*DAT_00547178 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547178), iVar1 != 0)) {
      *DAT_0054717c = DAT_00547180;
    }
    if (DAT_0054717c != param_2) {
      return 0;
    }
  }
  return 1;
}


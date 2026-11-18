#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534434;
extern undefined4 *DAT_00534438;
extern undefined4 DAT_0053443c;
extern uint *DAT_00534440;
extern undefined4 *DAT_00534444;
extern undefined4 DAT_00534448;
extern uint *DAT_0053444c;
extern undefined4 *DAT_00534450;
extern undefined4 DAT_00534454;

// USA 0053437C <- EU 00534354 (Ghidra, non-matching)
// GLOBAL DAT_00534434 uint *
// GLOBAL DAT_00534438 undefined4 *
// GLOBAL DAT_0053443c undefined4
// GLOBAL DAT_00534440 uint *
// GLOBAL DAT_00534444 undefined4 *
// GLOBAL DAT_00534448 undefined4
// GLOBAL DAT_0053444c uint *
// GLOBAL DAT_00534450 undefined4 *
// GLOBAL DAT_00534454 undefined4

undefined4 func_0053437C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534434 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534434), iVar1 != 0)) {
    *DAT_00534438 = DAT_0053443c;
  }
  if (DAT_00534438 != param_2) {
    if (((*DAT_00534440 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534440), iVar1 != 0)) {
      *DAT_00534444 = DAT_00534448;
    }
    if (DAT_00534444 != param_2) {
      if (((*DAT_0053444c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053444c), iVar1 != 0)) {
        *DAT_00534450 = DAT_00534454;
      }
      if (DAT_00534450 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


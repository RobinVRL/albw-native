#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057712c;
extern undefined4 *DAT_00577130;
extern undefined4 DAT_00577134;
extern uint *DAT_00577138;
extern undefined4 *DAT_0057713c;
extern undefined4 DAT_00577140;
extern uint *DAT_00577144;
extern undefined4 *DAT_00577148;
extern undefined4 DAT_0057714c;

// USA 00577074 <- EU 0057704C (Ghidra, non-matching)
// GLOBAL DAT_0057712c uint *
// GLOBAL DAT_00577130 undefined4 *
// GLOBAL DAT_00577134 undefined4
// GLOBAL DAT_00577138 uint *
// GLOBAL DAT_0057713c undefined4 *
// GLOBAL DAT_00577140 undefined4
// GLOBAL DAT_00577144 uint *
// GLOBAL DAT_00577148 undefined4 *
// GLOBAL DAT_0057714c undefined4

undefined4 func_00577074(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057712c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057712c), iVar1 != 0)) {
    *DAT_00577130 = DAT_00577134;
  }
  if (DAT_00577130 != param_2) {
    if (((*DAT_00577138 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577138), iVar1 != 0)) {
      *DAT_0057713c = DAT_00577140;
    }
    if (DAT_0057713c != param_2) {
      if (((*DAT_00577144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577144), iVar1 != 0)) {
        *DAT_00577148 = DAT_0057714c;
      }
      if (DAT_00577148 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


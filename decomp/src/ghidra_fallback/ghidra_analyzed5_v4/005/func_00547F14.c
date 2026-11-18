#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00548010;
extern undefined4 *DAT_00548014;
extern undefined4 DAT_00548018;
extern uint *DAT_0054801c;
extern undefined4 *DAT_00548020;
extern undefined4 DAT_00548024;
extern uint *DAT_00548028;
extern undefined4 *DAT_0054802c;
extern undefined4 DAT_00548030;
extern uint *DAT_00548034;
extern undefined4 *DAT_00548038;
extern undefined4 DAT_0054803c;

// USA 00547F14 <- EU 00547EEC (Ghidra, non-matching)
// GLOBAL DAT_00548010 uint *
// GLOBAL DAT_00548014 undefined4 *
// GLOBAL DAT_00548018 undefined4
// GLOBAL DAT_0054801c uint *
// GLOBAL DAT_00548020 undefined4 *
// GLOBAL DAT_00548024 undefined4
// GLOBAL DAT_00548028 uint *
// GLOBAL DAT_0054802c undefined4 *
// GLOBAL DAT_00548030 undefined4
// GLOBAL DAT_00548034 uint *
// GLOBAL DAT_00548038 undefined4 *
// GLOBAL DAT_0054803c undefined4

undefined4 func_00547F14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00548010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548010), iVar1 != 0)) {
    *DAT_00548014 = DAT_00548018;
  }
  if (DAT_00548014 != param_2) {
    if (((*DAT_0054801c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054801c), iVar1 != 0)) {
      *DAT_00548020 = DAT_00548024;
    }
    if (DAT_00548020 != param_2) {
      if (((*DAT_00548028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548028), iVar1 != 0)) {
        *DAT_0054802c = DAT_00548030;
      }
      if (DAT_0054802c != param_2) {
        if (((*DAT_00548034 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548034), iVar1 != 0))
        {
          *DAT_00548038 = DAT_0054803c;
        }
        if (DAT_00548038 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


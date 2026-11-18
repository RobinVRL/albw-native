#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00261ffc;
extern undefined4 *DAT_00262000;
extern undefined4 DAT_00262004;
extern uint *DAT_00262008;
extern undefined4 *DAT_0026200c;
extern undefined4 DAT_00262010;
extern uint *DAT_00262014;
extern undefined4 *DAT_00262018;
extern undefined4 DAT_0026201c;
extern uint *DAT_00262020;
extern undefined4 *DAT_00262024;
extern undefined4 DAT_00262028;

// USA 00261EB0 <- EU 00261ED8 (Ghidra, non-matching)
// GLOBAL DAT_00261ffc uint *
// GLOBAL DAT_00262000 undefined4 *
// GLOBAL DAT_00262004 undefined4
// GLOBAL DAT_00262008 uint *
// GLOBAL DAT_0026200c undefined4 *
// GLOBAL DAT_00262010 undefined4
// GLOBAL DAT_00262014 uint *
// GLOBAL DAT_00262018 undefined4 *
// GLOBAL DAT_0026201c undefined4
// GLOBAL DAT_00262020 uint *
// GLOBAL DAT_00262024 undefined4 *
// GLOBAL DAT_00262028 undefined4

undefined4 func_00261EB0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00261ffc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00261ffc), iVar1 != 0)) {
    *DAT_00262000 = DAT_00262004;
  }
  if (DAT_00262000 != param_1) {
    if (((*DAT_00262008 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00262008), iVar1 != 0)) {
      *DAT_0026200c = DAT_00262010;
    }
    if (DAT_0026200c != param_1) {
      if (((*DAT_00262014 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00262014), iVar1 != 0)) {
        *DAT_00262018 = DAT_0026201c;
      }
      if (DAT_00262018 != param_1) {
        if (((*DAT_00262020 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00262020), iVar1 != 0))
        {
          *DAT_00262024 = DAT_00262028;
        }
        if (DAT_00262024 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


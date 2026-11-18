#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d900;
extern undefined4 *DAT_0055d904;
extern undefined4 DAT_0055d908;
extern uint *DAT_0055d90c;
extern undefined4 *DAT_0055d910;
extern undefined4 DAT_0055d914;
extern uint *DAT_0055d918;
extern undefined4 *DAT_0055d91c;
extern undefined4 DAT_0055d920;
extern uint *DAT_0055d924;
extern undefined4 *DAT_0055d928;
extern undefined4 DAT_0055d92c;
extern uint *DAT_0055d930;
extern undefined4 *DAT_0055d934;
extern undefined4 DAT_0055d938;
extern uint *DAT_0055d93c;
extern undefined4 *DAT_0055d940;
extern undefined4 DAT_0055d944;

// USA 0055D77C <- EU 0055D754 (Ghidra, non-matching)
// GLOBAL DAT_0055d900 uint *
// GLOBAL DAT_0055d904 undefined4 *
// GLOBAL DAT_0055d908 undefined4
// GLOBAL DAT_0055d90c uint *
// GLOBAL DAT_0055d910 undefined4 *
// GLOBAL DAT_0055d914 undefined4
// GLOBAL DAT_0055d918 uint *
// GLOBAL DAT_0055d91c undefined4 *
// GLOBAL DAT_0055d920 undefined4
// GLOBAL DAT_0055d924 uint *
// GLOBAL DAT_0055d928 undefined4 *
// GLOBAL DAT_0055d92c undefined4
// GLOBAL DAT_0055d930 uint *
// GLOBAL DAT_0055d934 undefined4 *
// GLOBAL DAT_0055d938 undefined4
// GLOBAL DAT_0055d93c uint *
// GLOBAL DAT_0055d940 undefined4 *
// GLOBAL DAT_0055d944 undefined4

undefined4 func_0055D77C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d900 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d900), iVar1 != 0)) {
    *DAT_0055d904 = DAT_0055d908;
  }
  if (DAT_0055d904 != param_2) {
    if (((*DAT_0055d90c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d90c), iVar1 != 0)) {
      *DAT_0055d910 = DAT_0055d914;
    }
    if (DAT_0055d910 != param_2) {
      if (((*DAT_0055d918 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d918), iVar1 != 0)) {
        *DAT_0055d91c = DAT_0055d920;
      }
      if (DAT_0055d91c != param_2) {
        if (((*DAT_0055d924 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d924), iVar1 != 0))
        {
          *DAT_0055d928 = DAT_0055d92c;
        }
        if (DAT_0055d928 != param_2) {
          if (((*DAT_0055d930 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d930), iVar1 != 0)
             ) {
            *DAT_0055d934 = DAT_0055d938;
          }
          if (DAT_0055d934 != param_2) {
            if (((*DAT_0055d93c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0055d93c), iVar1 != 0)) {
              *DAT_0055d940 = DAT_0055d944;
            }
            if (DAT_0055d940 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


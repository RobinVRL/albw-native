#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550908;
extern undefined4 *DAT_0055090c;
extern undefined4 DAT_00550910;
extern uint *DAT_00550914;
extern undefined4 *DAT_00550918;
extern undefined4 DAT_0055091c;
extern uint *DAT_00550920;
extern undefined4 *DAT_00550924;
extern undefined4 DAT_00550928;

// USA 00550850 <- EU 00550828 (Ghidra, non-matching)
// GLOBAL DAT_00550908 uint *
// GLOBAL DAT_0055090c undefined4 *
// GLOBAL DAT_00550910 undefined4
// GLOBAL DAT_00550914 uint *
// GLOBAL DAT_00550918 undefined4 *
// GLOBAL DAT_0055091c undefined4
// GLOBAL DAT_00550920 uint *
// GLOBAL DAT_00550924 undefined4 *
// GLOBAL DAT_00550928 undefined4

undefined4 func_00550850(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550908), iVar1 != 0)) {
    *DAT_0055090c = DAT_00550910;
  }
  if (DAT_0055090c != param_2) {
    if (((*DAT_00550914 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550914), iVar1 != 0)) {
      *DAT_00550918 = DAT_0055091c;
    }
    if (DAT_00550918 != param_2) {
      if (((*DAT_00550920 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550920), iVar1 != 0)) {
        *DAT_00550924 = DAT_00550928;
      }
      if (DAT_00550924 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054896c;
extern undefined4 *DAT_00548970;
extern undefined4 DAT_00548974;
extern uint *DAT_00548978;
extern undefined4 *DAT_0054897c;
extern undefined4 DAT_00548980;
extern uint *DAT_00548984;
extern undefined4 *DAT_00548988;
extern undefined4 DAT_0054898c;
extern uint *DAT_00548990;
extern undefined4 *DAT_00548994;
extern undefined4 DAT_00548998;

// USA 00548870 <- EU 00548848 (Ghidra, non-matching)
// GLOBAL DAT_0054896c uint *
// GLOBAL DAT_00548970 undefined4 *
// GLOBAL DAT_00548974 undefined4
// GLOBAL DAT_00548978 uint *
// GLOBAL DAT_0054897c undefined4 *
// GLOBAL DAT_00548980 undefined4
// GLOBAL DAT_00548984 uint *
// GLOBAL DAT_00548988 undefined4 *
// GLOBAL DAT_0054898c undefined4
// GLOBAL DAT_00548990 uint *
// GLOBAL DAT_00548994 undefined4 *
// GLOBAL DAT_00548998 undefined4

undefined4 func_00548870(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054896c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054896c), iVar1 != 0)) {
    *DAT_00548970 = DAT_00548974;
  }
  if (DAT_00548970 != param_2) {
    if (((*DAT_00548978 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548978), iVar1 != 0)) {
      *DAT_0054897c = DAT_00548980;
    }
    if (DAT_0054897c != param_2) {
      if (((*DAT_00548984 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548984), iVar1 != 0)) {
        *DAT_00548988 = DAT_0054898c;
      }
      if (DAT_00548988 != param_2) {
        if (((*DAT_00548990 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548990), iVar1 != 0))
        {
          *DAT_00548994 = DAT_00548998;
        }
        if (DAT_00548994 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


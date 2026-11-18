#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551918;
extern undefined4 *DAT_0055191c;
extern undefined4 DAT_00551920;
extern uint *DAT_00551924;
extern undefined4 *DAT_00551928;
extern undefined4 DAT_0055192c;
extern uint *DAT_00551930;
extern undefined4 *DAT_00551934;
extern undefined4 DAT_00551938;
extern uint *DAT_0055193c;
extern undefined4 *DAT_00551940;
extern undefined4 DAT_00551944;

// USA 0055181C <- EU 005517F4 (Ghidra, non-matching)
// GLOBAL DAT_00551918 uint *
// GLOBAL DAT_0055191c undefined4 *
// GLOBAL DAT_00551920 undefined4
// GLOBAL DAT_00551924 uint *
// GLOBAL DAT_00551928 undefined4 *
// GLOBAL DAT_0055192c undefined4
// GLOBAL DAT_00551930 uint *
// GLOBAL DAT_00551934 undefined4 *
// GLOBAL DAT_00551938 undefined4
// GLOBAL DAT_0055193c uint *
// GLOBAL DAT_00551940 undefined4 *
// GLOBAL DAT_00551944 undefined4

undefined4 func_0055181C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551918 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551918), iVar1 != 0)) {
    *DAT_0055191c = DAT_00551920;
  }
  if (DAT_0055191c != param_2) {
    if (((*DAT_00551924 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551924), iVar1 != 0)) {
      *DAT_00551928 = DAT_0055192c;
    }
    if (DAT_00551928 != param_2) {
      if (((*DAT_00551930 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551930), iVar1 != 0)) {
        *DAT_00551934 = DAT_00551938;
      }
      if (DAT_00551934 != param_2) {
        if (((*DAT_0055193c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055193c), iVar1 != 0))
        {
          *DAT_00551940 = DAT_00551944;
        }
        if (DAT_00551940 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


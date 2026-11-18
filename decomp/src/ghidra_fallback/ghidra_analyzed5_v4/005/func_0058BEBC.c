#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058bffc;
extern undefined4 *DAT_0058c000;
extern undefined4 DAT_0058c004;
extern uint *DAT_0058c008;
extern undefined4 *DAT_0058c00c;
extern undefined4 DAT_0058c010;
extern uint *DAT_0058c014;
extern undefined4 *DAT_0058c018;
extern undefined4 DAT_0058c01c;
extern uint *DAT_0058c020;
extern undefined4 *DAT_0058c024;
extern undefined4 DAT_0058c028;
extern uint *DAT_0058c02c;
extern undefined4 *DAT_0058c030;
extern undefined4 DAT_0058c034;

// USA 0058BEBC <- EU 0058BE94 (Ghidra, non-matching)
// GLOBAL DAT_0058bffc uint *
// GLOBAL DAT_0058c000 undefined4 *
// GLOBAL DAT_0058c004 undefined4
// GLOBAL DAT_0058c008 uint *
// GLOBAL DAT_0058c00c undefined4 *
// GLOBAL DAT_0058c010 undefined4
// GLOBAL DAT_0058c014 uint *
// GLOBAL DAT_0058c018 undefined4 *
// GLOBAL DAT_0058c01c undefined4
// GLOBAL DAT_0058c020 uint *
// GLOBAL DAT_0058c024 undefined4 *
// GLOBAL DAT_0058c028 undefined4
// GLOBAL DAT_0058c02c uint *
// GLOBAL DAT_0058c030 undefined4 *
// GLOBAL DAT_0058c034 undefined4

undefined4 func_0058BEBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058bffc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bffc), iVar1 != 0)) {
    *DAT_0058c000 = DAT_0058c004;
  }
  if (DAT_0058c000 != param_2) {
    if (((*DAT_0058c008 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c008), iVar1 != 0)) {
      *DAT_0058c00c = DAT_0058c010;
    }
    if (DAT_0058c00c != param_2) {
      if (((*DAT_0058c014 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c014), iVar1 != 0)) {
        *DAT_0058c018 = DAT_0058c01c;
      }
      if (DAT_0058c018 != param_2) {
        if (((*DAT_0058c020 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c020), iVar1 != 0))
        {
          *DAT_0058c024 = DAT_0058c028;
        }
        if (DAT_0058c024 != param_2) {
          if (((*DAT_0058c02c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c02c), iVar1 != 0)
             ) {
            *DAT_0058c030 = DAT_0058c034;
          }
          if (DAT_0058c030 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


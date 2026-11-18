#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058c214;
extern undefined4 *DAT_0058c218;
extern undefined4 DAT_0058c21c;
extern uint *DAT_0058c220;
extern undefined4 *DAT_0058c224;
extern undefined4 DAT_0058c228;
extern uint *DAT_0058c22c;
extern undefined4 *DAT_0058c230;
extern undefined4 DAT_0058c234;

// USA 0058C15C <- EU 0058C134 (Ghidra, non-matching)
// GLOBAL DAT_0058c214 uint *
// GLOBAL DAT_0058c218 undefined4 *
// GLOBAL DAT_0058c21c undefined4
// GLOBAL DAT_0058c220 uint *
// GLOBAL DAT_0058c224 undefined4 *
// GLOBAL DAT_0058c228 undefined4
// GLOBAL DAT_0058c22c uint *
// GLOBAL DAT_0058c230 undefined4 *
// GLOBAL DAT_0058c234 undefined4

undefined4 func_0058C15C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058c214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c214), iVar1 != 0)) {
    *DAT_0058c218 = DAT_0058c21c;
  }
  if (DAT_0058c218 != param_2) {
    if (((*DAT_0058c220 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c220), iVar1 != 0)) {
      *DAT_0058c224 = DAT_0058c228;
    }
    if (DAT_0058c224 != param_2) {
      if (((*DAT_0058c22c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c22c), iVar1 != 0)) {
        *DAT_0058c230 = DAT_0058c234;
      }
      if (DAT_0058c230 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


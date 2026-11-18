#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a938;
extern undefined4 *DAT_0055a93c;
extern undefined4 DAT_0055a940;
extern uint *DAT_0055a944;
extern undefined4 *DAT_0055a948;
extern undefined4 DAT_0055a94c;
extern uint *DAT_0055a950;
extern undefined4 *DAT_0055a954;
extern undefined4 DAT_0055a958;
extern uint *DAT_0055a95c;
extern undefined4 *DAT_0055a960;
extern undefined4 DAT_0055a964;

// USA 0055A83C <- EU 0055A814 (Ghidra, non-matching)
// GLOBAL DAT_0055a938 uint *
// GLOBAL DAT_0055a93c undefined4 *
// GLOBAL DAT_0055a940 undefined4
// GLOBAL DAT_0055a944 uint *
// GLOBAL DAT_0055a948 undefined4 *
// GLOBAL DAT_0055a94c undefined4
// GLOBAL DAT_0055a950 uint *
// GLOBAL DAT_0055a954 undefined4 *
// GLOBAL DAT_0055a958 undefined4
// GLOBAL DAT_0055a95c uint *
// GLOBAL DAT_0055a960 undefined4 *
// GLOBAL DAT_0055a964 undefined4

undefined4 func_0055A83C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a938 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a938), iVar1 != 0)) {
    *DAT_0055a93c = DAT_0055a940;
  }
  if (DAT_0055a93c != param_2) {
    if (((*DAT_0055a944 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a944), iVar1 != 0)) {
      *DAT_0055a948 = DAT_0055a94c;
    }
    if (DAT_0055a948 != param_2) {
      if (((*DAT_0055a950 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a950), iVar1 != 0)) {
        *DAT_0055a954 = DAT_0055a958;
      }
      if (DAT_0055a954 != param_2) {
        if (((*DAT_0055a95c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a95c), iVar1 != 0))
        {
          *DAT_0055a960 = DAT_0055a964;
        }
        if (DAT_0055a960 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


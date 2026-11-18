#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_002198fc;
extern undefined4 *DAT_00219900;
extern undefined4 DAT_00219904;
extern uint *DAT_00219908;
extern undefined4 *DAT_0021990c;
extern undefined4 DAT_00219910;
extern uint *DAT_00219914;
extern undefined4 *DAT_00219918;
extern undefined4 DAT_0021991c;
extern uint *DAT_00219920;
extern undefined4 *DAT_00219924;
extern undefined4 DAT_00219928;

// USA 002197D8 <- EU 002197D8 (Ghidra, non-matching)
// GLOBAL DAT_002198fc uint *
// GLOBAL DAT_00219900 undefined4 *
// GLOBAL DAT_00219904 undefined4
// GLOBAL DAT_00219908 uint *
// GLOBAL DAT_0021990c undefined4 *
// GLOBAL DAT_00219910 undefined4
// GLOBAL DAT_00219914 uint *
// GLOBAL DAT_00219918 undefined4 *
// GLOBAL DAT_0021991c undefined4
// GLOBAL DAT_00219920 uint *
// GLOBAL DAT_00219924 undefined4 *
// GLOBAL DAT_00219928 undefined4

undefined4 func_002197D8(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_002198fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002198fc), iVar1 != 0)) {
    *DAT_00219900 = DAT_00219904;
  }
  if (DAT_00219900 != param_1) {
    if (((*DAT_00219908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00219908), iVar1 != 0)) {
      *DAT_0021990c = DAT_00219910;
    }
    if (DAT_0021990c != param_1) {
      if (((*DAT_00219914 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00219914), iVar1 != 0)) {
        *DAT_00219918 = DAT_0021991c;
      }
      if (DAT_00219918 != param_1) {
        if (((*DAT_00219920 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00219920), iVar1 != 0))
        {
          *DAT_00219924 = DAT_00219928;
        }
        if (DAT_00219924 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}


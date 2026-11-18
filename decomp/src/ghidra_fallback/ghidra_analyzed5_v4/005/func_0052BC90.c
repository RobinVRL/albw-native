#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052bdd0;
extern undefined4 *DAT_0052bdd4;
extern undefined4 DAT_0052bdd8;
extern uint *DAT_0052bddc;
extern undefined4 *DAT_0052bde0;
extern undefined4 DAT_0052bde4;
extern uint *DAT_0052bde8;
extern undefined4 *DAT_0052bdec;
extern undefined4 DAT_0052bdf0;
extern uint *DAT_0052bdf4;
extern undefined4 *DAT_0052bdf8;
extern undefined4 DAT_0052bdfc;
extern uint *DAT_0052be00;
extern undefined4 *DAT_0052be04;
extern undefined4 DAT_0052be08;

// USA 0052BC90 <- EU 0052BC68 (Ghidra, non-matching)
// GLOBAL DAT_0052bdd0 uint *
// GLOBAL DAT_0052bdd4 undefined4 *
// GLOBAL DAT_0052bdd8 undefined4
// GLOBAL DAT_0052bddc uint *
// GLOBAL DAT_0052bde0 undefined4 *
// GLOBAL DAT_0052bde4 undefined4
// GLOBAL DAT_0052bde8 uint *
// GLOBAL DAT_0052bdec undefined4 *
// GLOBAL DAT_0052bdf0 undefined4
// GLOBAL DAT_0052bdf4 uint *
// GLOBAL DAT_0052bdf8 undefined4 *
// GLOBAL DAT_0052bdfc undefined4
// GLOBAL DAT_0052be00 uint *
// GLOBAL DAT_0052be04 undefined4 *
// GLOBAL DAT_0052be08 undefined4

undefined4 func_0052BC90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052bdd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bdd0), iVar1 != 0)) {
    *DAT_0052bdd4 = DAT_0052bdd8;
  }
  if (DAT_0052bdd4 != param_2) {
    if (((*DAT_0052bddc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bddc), iVar1 != 0)) {
      *DAT_0052bde0 = DAT_0052bde4;
    }
    if (DAT_0052bde0 != param_2) {
      if (((*DAT_0052bde8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bde8), iVar1 != 0)) {
        *DAT_0052bdec = DAT_0052bdf0;
      }
      if (DAT_0052bdec != param_2) {
        if (((*DAT_0052bdf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bdf4), iVar1 != 0))
        {
          *DAT_0052bdf8 = DAT_0052bdfc;
        }
        if (DAT_0052bdf8 != param_2) {
          if (((*DAT_0052be00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052be00), iVar1 != 0)
             ) {
            *DAT_0052be04 = DAT_0052be08;
          }
          if (DAT_0052be04 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


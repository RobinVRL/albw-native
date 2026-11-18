#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00532afc;
extern undefined4 *DAT_00532b00;
extern undefined4 DAT_00532b04;
extern uint *DAT_00532b08;
extern undefined4 *DAT_00532b0c;
extern undefined4 DAT_00532b10;
extern uint *DAT_00532b14;
extern undefined4 *DAT_00532b18;
extern undefined4 DAT_00532b1c;
extern uint *DAT_00532b20;
extern undefined4 *DAT_00532b24;
extern undefined4 DAT_00532b28;

// USA 00532A00 <- EU 005329D8 (Ghidra, non-matching)
// GLOBAL DAT_00532afc uint *
// GLOBAL DAT_00532b00 undefined4 *
// GLOBAL DAT_00532b04 undefined4
// GLOBAL DAT_00532b08 uint *
// GLOBAL DAT_00532b0c undefined4 *
// GLOBAL DAT_00532b10 undefined4
// GLOBAL DAT_00532b14 uint *
// GLOBAL DAT_00532b18 undefined4 *
// GLOBAL DAT_00532b1c undefined4
// GLOBAL DAT_00532b20 uint *
// GLOBAL DAT_00532b24 undefined4 *
// GLOBAL DAT_00532b28 undefined4

undefined4 func_00532A00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00532afc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532afc), iVar1 != 0)) {
    *DAT_00532b00 = DAT_00532b04;
  }
  if (DAT_00532b00 != param_2) {
    if (((*DAT_00532b08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532b08), iVar1 != 0)) {
      *DAT_00532b0c = DAT_00532b10;
    }
    if (DAT_00532b0c != param_2) {
      if (((*DAT_00532b14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532b14), iVar1 != 0)) {
        *DAT_00532b18 = DAT_00532b1c;
      }
      if (DAT_00532b18 != param_2) {
        if (((*DAT_00532b20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532b20), iVar1 != 0))
        {
          *DAT_00532b24 = DAT_00532b28;
        }
        if (DAT_00532b24 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


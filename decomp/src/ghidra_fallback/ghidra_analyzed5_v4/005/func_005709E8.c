#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00570ae4;
extern undefined4 *DAT_00570ae8;
extern undefined4 DAT_00570aec;
extern uint *DAT_00570af0;
extern undefined4 *DAT_00570af4;
extern undefined4 DAT_00570af8;
extern uint *DAT_00570afc;
extern undefined4 *DAT_00570b00;
extern undefined4 DAT_00570b04;
extern uint *DAT_00570b08;
extern undefined4 *DAT_00570b0c;
extern undefined4 DAT_00570b10;

// USA 005709E8 <- EU 005709C0 (Ghidra, non-matching)
// GLOBAL DAT_00570ae4 uint *
// GLOBAL DAT_00570ae8 undefined4 *
// GLOBAL DAT_00570aec undefined4
// GLOBAL DAT_00570af0 uint *
// GLOBAL DAT_00570af4 undefined4 *
// GLOBAL DAT_00570af8 undefined4
// GLOBAL DAT_00570afc uint *
// GLOBAL DAT_00570b00 undefined4 *
// GLOBAL DAT_00570b04 undefined4
// GLOBAL DAT_00570b08 uint *
// GLOBAL DAT_00570b0c undefined4 *
// GLOBAL DAT_00570b10 undefined4

undefined4 func_005709E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00570ae4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570ae4), iVar1 != 0)) {
    *DAT_00570ae8 = DAT_00570aec;
  }
  if (DAT_00570ae8 != param_2) {
    if (((*DAT_00570af0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570af0), iVar1 != 0)) {
      *DAT_00570af4 = DAT_00570af8;
    }
    if (DAT_00570af4 != param_2) {
      if (((*DAT_00570afc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570afc), iVar1 != 0)) {
        *DAT_00570b00 = DAT_00570b04;
      }
      if (DAT_00570b00 != param_2) {
        if (((*DAT_00570b08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570b08), iVar1 != 0))
        {
          *DAT_00570b0c = DAT_00570b10;
        }
        if (DAT_00570b0c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


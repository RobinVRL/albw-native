#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bdc4;
extern undefined4 *DAT_0055bdc8;
extern undefined4 DAT_0055bdcc;
extern uint *DAT_0055bdd0;
extern undefined4 *DAT_0055bdd4;
extern undefined4 DAT_0055bdd8;
extern uint *DAT_0055bddc;
extern undefined4 *DAT_0055bde0;
extern undefined4 DAT_0055bde4;

// USA 0055BD0C <- EU 0055BCE4 (Ghidra, non-matching)
// GLOBAL DAT_0055bdc4 uint *
// GLOBAL DAT_0055bdc8 undefined4 *
// GLOBAL DAT_0055bdcc undefined4
// GLOBAL DAT_0055bdd0 uint *
// GLOBAL DAT_0055bdd4 undefined4 *
// GLOBAL DAT_0055bdd8 undefined4
// GLOBAL DAT_0055bddc uint *
// GLOBAL DAT_0055bde0 undefined4 *
// GLOBAL DAT_0055bde4 undefined4

undefined4 func_0055BD0C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bdc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bdc4), iVar1 != 0)) {
    *DAT_0055bdc8 = DAT_0055bdcc;
  }
  if (DAT_0055bdc8 != param_2) {
    if (((*DAT_0055bdd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bdd0), iVar1 != 0)) {
      *DAT_0055bdd4 = DAT_0055bdd8;
    }
    if (DAT_0055bdd4 != param_2) {
      if (((*DAT_0055bddc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bddc), iVar1 != 0)) {
        *DAT_0055bde0 = DAT_0055bde4;
      }
      if (DAT_0055bde0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00579784;
extern undefined4 *DAT_00579788;
extern undefined4 DAT_0057978c;
extern uint *DAT_00579790;
extern undefined4 *DAT_00579794;
extern undefined4 DAT_00579798;
extern uint *DAT_0057979c;
extern undefined4 *DAT_005797a0;
extern undefined4 DAT_005797a4;
extern uint *DAT_005797a8;
extern undefined4 *DAT_005797ac;
extern undefined4 DAT_005797b0;
extern uint *DAT_005797b4;
extern undefined4 *DAT_005797b8;
extern undefined4 DAT_005797bc;

// USA 00579644 <- EU 0057961C (Ghidra, non-matching)
// GLOBAL DAT_00579784 uint *
// GLOBAL DAT_00579788 undefined4 *
// GLOBAL DAT_0057978c undefined4
// GLOBAL DAT_00579790 uint *
// GLOBAL DAT_00579794 undefined4 *
// GLOBAL DAT_00579798 undefined4
// GLOBAL DAT_0057979c uint *
// GLOBAL DAT_005797a0 undefined4 *
// GLOBAL DAT_005797a4 undefined4
// GLOBAL DAT_005797a8 uint *
// GLOBAL DAT_005797ac undefined4 *
// GLOBAL DAT_005797b0 undefined4
// GLOBAL DAT_005797b4 uint *
// GLOBAL DAT_005797b8 undefined4 *
// GLOBAL DAT_005797bc undefined4

undefined4 func_00579644(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00579784 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579784), iVar1 != 0)) {
    *DAT_00579788 = DAT_0057978c;
  }
  if (DAT_00579788 != param_2) {
    if (((*DAT_00579790 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579790), iVar1 != 0)) {
      *DAT_00579794 = DAT_00579798;
    }
    if (DAT_00579794 != param_2) {
      if (((*DAT_0057979c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057979c), iVar1 != 0)) {
        *DAT_005797a0 = DAT_005797a4;
      }
      if (DAT_005797a0 != param_2) {
        if (((*DAT_005797a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005797a8), iVar1 != 0))
        {
          *DAT_005797ac = DAT_005797b0;
        }
        if (DAT_005797ac != param_2) {
          if (((*DAT_005797b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005797b4), iVar1 != 0)
             ) {
            *DAT_005797b8 = DAT_005797bc;
          }
          if (DAT_005797b8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


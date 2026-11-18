#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d168;
extern undefined4 *DAT_0052d16c;
extern undefined4 DAT_0052d170;
extern uint *DAT_0052d174;
extern undefined4 *DAT_0052d178;
extern undefined4 DAT_0052d17c;
extern uint *DAT_0052d180;
extern undefined4 *DAT_0052d184;
extern undefined4 DAT_0052d188;
extern uint *DAT_0052d18c;
extern undefined4 *DAT_0052d190;
extern undefined4 DAT_0052d194;
extern uint *DAT_0052d198;
extern undefined4 *DAT_0052d19c;
extern undefined4 DAT_0052d1a0;
extern uint *DAT_0052d1a4;
extern undefined4 *DAT_0052d1a8;
extern undefined4 DAT_0052d1ac;
extern uint *DAT_0052d1b0;
extern undefined4 *DAT_0052d1b4;
extern undefined4 DAT_0052d1b8;

// USA 0052CFA0 <- EU 0052CF78 (Ghidra, non-matching)
// GLOBAL DAT_0052d168 uint *
// GLOBAL DAT_0052d16c undefined4 *
// GLOBAL DAT_0052d170 undefined4
// GLOBAL DAT_0052d174 uint *
// GLOBAL DAT_0052d178 undefined4 *
// GLOBAL DAT_0052d17c undefined4
// GLOBAL DAT_0052d180 uint *
// GLOBAL DAT_0052d184 undefined4 *
// GLOBAL DAT_0052d188 undefined4
// GLOBAL DAT_0052d18c uint *
// GLOBAL DAT_0052d190 undefined4 *
// GLOBAL DAT_0052d194 undefined4
// GLOBAL DAT_0052d198 uint *
// GLOBAL DAT_0052d19c undefined4 *
// GLOBAL DAT_0052d1a0 undefined4
// GLOBAL DAT_0052d1a4 uint *
// GLOBAL DAT_0052d1a8 undefined4 *
// GLOBAL DAT_0052d1ac undefined4
// GLOBAL DAT_0052d1b0 uint *
// GLOBAL DAT_0052d1b4 undefined4 *
// GLOBAL DAT_0052d1b8 undefined4

undefined4 func_0052CFA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d168 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d168), iVar1 != 0)) {
    *DAT_0052d16c = DAT_0052d170;
  }
  if (DAT_0052d16c != param_2) {
    if (((*DAT_0052d174 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d174), iVar1 != 0)) {
      *DAT_0052d178 = DAT_0052d17c;
    }
    if (DAT_0052d178 != param_2) {
      if (((*DAT_0052d180 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d180), iVar1 != 0)) {
        *DAT_0052d184 = DAT_0052d188;
      }
      if (DAT_0052d184 != param_2) {
        if (((*DAT_0052d18c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d18c), iVar1 != 0))
        {
          *DAT_0052d190 = DAT_0052d194;
        }
        if (DAT_0052d190 != param_2) {
          if (((*DAT_0052d198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d198), iVar1 != 0)
             ) {
            *DAT_0052d19c = DAT_0052d1a0;
          }
          if (DAT_0052d19c != param_2) {
            if (((*DAT_0052d1a4 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052d1a4), iVar1 != 0)) {
              *DAT_0052d1a8 = DAT_0052d1ac;
            }
            if (DAT_0052d1a8 != param_2) {
              if (((*DAT_0052d1b0 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052d1b0), iVar1 != 0)) {
                *DAT_0052d1b4 = DAT_0052d1b8;
              }
              if (DAT_0052d1b4 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


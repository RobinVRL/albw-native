#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558164;
extern undefined4 *DAT_00558168;
extern undefined4 DAT_0055816c;
extern uint *DAT_00558170;
extern undefined4 *DAT_00558174;
extern undefined4 DAT_00558178;
extern uint *DAT_0055817c;
extern undefined4 *DAT_00558180;
extern undefined4 DAT_00558184;
extern uint *DAT_00558188;
extern undefined4 *DAT_0055818c;
extern undefined4 DAT_00558190;
extern uint *DAT_00558194;
extern undefined4 *DAT_00558198;
extern undefined4 DAT_0055819c;
extern uint *DAT_005581a0;
extern undefined4 *DAT_005581a4;
extern undefined4 DAT_005581a8;

// USA 00557FE0 <- EU 00557FB8 (Ghidra, non-matching)
// GLOBAL DAT_00558164 uint *
// GLOBAL DAT_00558168 undefined4 *
// GLOBAL DAT_0055816c undefined4
// GLOBAL DAT_00558170 uint *
// GLOBAL DAT_00558174 undefined4 *
// GLOBAL DAT_00558178 undefined4
// GLOBAL DAT_0055817c uint *
// GLOBAL DAT_00558180 undefined4 *
// GLOBAL DAT_00558184 undefined4
// GLOBAL DAT_00558188 uint *
// GLOBAL DAT_0055818c undefined4 *
// GLOBAL DAT_00558190 undefined4
// GLOBAL DAT_00558194 uint *
// GLOBAL DAT_00558198 undefined4 *
// GLOBAL DAT_0055819c undefined4
// GLOBAL DAT_005581a0 uint *
// GLOBAL DAT_005581a4 undefined4 *
// GLOBAL DAT_005581a8 undefined4

undefined4 func_00557FE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558164 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558164), iVar1 != 0)) {
    *DAT_00558168 = DAT_0055816c;
  }
  if (DAT_00558168 != param_2) {
    if (((*DAT_00558170 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558170), iVar1 != 0)) {
      *DAT_00558174 = DAT_00558178;
    }
    if (DAT_00558174 != param_2) {
      if (((*DAT_0055817c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055817c), iVar1 != 0)) {
        *DAT_00558180 = DAT_00558184;
      }
      if (DAT_00558180 != param_2) {
        if (((*DAT_00558188 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558188), iVar1 != 0))
        {
          *DAT_0055818c = DAT_00558190;
        }
        if (DAT_0055818c != param_2) {
          if (((*DAT_00558194 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558194), iVar1 != 0)
             ) {
            *DAT_00558198 = DAT_0055819c;
          }
          if (DAT_00558198 != param_2) {
            if (((*DAT_005581a0 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005581a0), iVar1 != 0)) {
              *DAT_005581a4 = DAT_005581a8;
            }
            if (DAT_005581a4 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


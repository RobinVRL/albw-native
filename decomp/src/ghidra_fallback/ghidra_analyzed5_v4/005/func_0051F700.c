#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f8c8;
extern undefined4 *DAT_0051f8cc;
extern undefined4 DAT_0051f8d0;
extern uint *DAT_0051f8d4;
extern undefined4 *DAT_0051f8d8;
extern undefined4 DAT_0051f8dc;
extern uint *DAT_0051f8e0;
extern undefined4 *DAT_0051f8e4;
extern undefined4 DAT_0051f8e8;
extern uint *DAT_0051f8ec;
extern undefined4 *DAT_0051f8f0;
extern undefined4 DAT_0051f8f4;
extern uint *DAT_0051f8f8;
extern undefined4 *DAT_0051f8fc;
extern undefined4 DAT_0051f900;
extern uint *DAT_0051f904;
extern undefined4 *DAT_0051f908;
extern undefined4 DAT_0051f90c;
extern uint *DAT_0051f910;
extern undefined4 *DAT_0051f914;
extern undefined4 DAT_0051f918;

// USA 0051F700 <- EU 0051F6D8 (Ghidra, non-matching)
// GLOBAL DAT_0051f8c8 uint *
// GLOBAL DAT_0051f8cc undefined4 *
// GLOBAL DAT_0051f8d0 undefined4
// GLOBAL DAT_0051f8d4 uint *
// GLOBAL DAT_0051f8d8 undefined4 *
// GLOBAL DAT_0051f8dc undefined4
// GLOBAL DAT_0051f8e0 uint *
// GLOBAL DAT_0051f8e4 undefined4 *
// GLOBAL DAT_0051f8e8 undefined4
// GLOBAL DAT_0051f8ec uint *
// GLOBAL DAT_0051f8f0 undefined4 *
// GLOBAL DAT_0051f8f4 undefined4
// GLOBAL DAT_0051f8f8 uint *
// GLOBAL DAT_0051f8fc undefined4 *
// GLOBAL DAT_0051f900 undefined4
// GLOBAL DAT_0051f904 uint *
// GLOBAL DAT_0051f908 undefined4 *
// GLOBAL DAT_0051f90c undefined4
// GLOBAL DAT_0051f910 uint *
// GLOBAL DAT_0051f914 undefined4 *
// GLOBAL DAT_0051f918 undefined4

undefined4 func_0051F700(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f8c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f8c8), iVar1 != 0)) {
    *DAT_0051f8cc = DAT_0051f8d0;
  }
  if (DAT_0051f8cc != param_2) {
    if (((*DAT_0051f8d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f8d4), iVar1 != 0)) {
      *DAT_0051f8d8 = DAT_0051f8dc;
    }
    if (DAT_0051f8d8 != param_2) {
      if (((*DAT_0051f8e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f8e0), iVar1 != 0)) {
        *DAT_0051f8e4 = DAT_0051f8e8;
      }
      if (DAT_0051f8e4 != param_2) {
        if (((*DAT_0051f8ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f8ec), iVar1 != 0))
        {
          *DAT_0051f8f0 = DAT_0051f8f4;
        }
        if (DAT_0051f8f0 != param_2) {
          if (((*DAT_0051f8f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f8f8), iVar1 != 0)
             ) {
            *DAT_0051f8fc = DAT_0051f900;
          }
          if (DAT_0051f8fc != param_2) {
            if (((*DAT_0051f904 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0051f904), iVar1 != 0)) {
              *DAT_0051f908 = DAT_0051f90c;
            }
            if (DAT_0051f908 != param_2) {
              if (((*DAT_0051f910 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0051f910), iVar1 != 0)) {
                *DAT_0051f914 = DAT_0051f918;
              }
              if (DAT_0051f914 != param_2) {
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


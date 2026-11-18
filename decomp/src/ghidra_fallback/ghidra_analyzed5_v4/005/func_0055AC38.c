#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055ae00;
extern undefined4 *DAT_0055ae04;
extern undefined4 DAT_0055ae08;
extern uint *DAT_0055ae0c;
extern undefined4 *DAT_0055ae10;
extern undefined4 DAT_0055ae14;
extern uint *DAT_0055ae18;
extern undefined4 *DAT_0055ae1c;
extern undefined4 DAT_0055ae20;
extern uint *DAT_0055ae24;
extern undefined4 *DAT_0055ae28;
extern undefined4 DAT_0055ae2c;
extern uint *DAT_0055ae30;
extern undefined4 *DAT_0055ae34;
extern undefined4 DAT_0055ae38;
extern uint *DAT_0055ae3c;
extern undefined4 *DAT_0055ae40;
extern undefined4 DAT_0055ae44;
extern uint *DAT_0055ae48;
extern undefined4 *DAT_0055ae4c;
extern undefined4 DAT_0055ae50;

// USA 0055AC38 <- EU 0055AC10 (Ghidra, non-matching)
// GLOBAL DAT_0055ae00 uint *
// GLOBAL DAT_0055ae04 undefined4 *
// GLOBAL DAT_0055ae08 undefined4
// GLOBAL DAT_0055ae0c uint *
// GLOBAL DAT_0055ae10 undefined4 *
// GLOBAL DAT_0055ae14 undefined4
// GLOBAL DAT_0055ae18 uint *
// GLOBAL DAT_0055ae1c undefined4 *
// GLOBAL DAT_0055ae20 undefined4
// GLOBAL DAT_0055ae24 uint *
// GLOBAL DAT_0055ae28 undefined4 *
// GLOBAL DAT_0055ae2c undefined4
// GLOBAL DAT_0055ae30 uint *
// GLOBAL DAT_0055ae34 undefined4 *
// GLOBAL DAT_0055ae38 undefined4
// GLOBAL DAT_0055ae3c uint *
// GLOBAL DAT_0055ae40 undefined4 *
// GLOBAL DAT_0055ae44 undefined4
// GLOBAL DAT_0055ae48 uint *
// GLOBAL DAT_0055ae4c undefined4 *
// GLOBAL DAT_0055ae50 undefined4

undefined4 func_0055AC38(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ae00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ae00), iVar1 != 0)) {
    *DAT_0055ae04 = DAT_0055ae08;
  }
  if (DAT_0055ae04 != param_2) {
    if (((*DAT_0055ae0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ae0c), iVar1 != 0)) {
      *DAT_0055ae10 = DAT_0055ae14;
    }
    if (DAT_0055ae10 != param_2) {
      if (((*DAT_0055ae18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ae18), iVar1 != 0)) {
        *DAT_0055ae1c = DAT_0055ae20;
      }
      if (DAT_0055ae1c != param_2) {
        if (((*DAT_0055ae24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ae24), iVar1 != 0))
        {
          *DAT_0055ae28 = DAT_0055ae2c;
        }
        if (DAT_0055ae28 != param_2) {
          if (((*DAT_0055ae30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ae30), iVar1 != 0)
             ) {
            *DAT_0055ae34 = DAT_0055ae38;
          }
          if (DAT_0055ae34 != param_2) {
            if (((*DAT_0055ae3c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0055ae3c), iVar1 != 0)) {
              *DAT_0055ae40 = DAT_0055ae44;
            }
            if (DAT_0055ae40 != param_2) {
              if (((*DAT_0055ae48 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0055ae48), iVar1 != 0)) {
                *DAT_0055ae4c = DAT_0055ae50;
              }
              if (DAT_0055ae4c != param_2) {
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


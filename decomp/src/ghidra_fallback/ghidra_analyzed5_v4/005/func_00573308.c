#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00573448;
extern undefined4 *DAT_0057344c;
extern undefined4 DAT_00573450;
extern uint *DAT_00573454;
extern undefined4 *DAT_00573458;
extern undefined4 DAT_0057345c;
extern uint *DAT_00573460;
extern undefined4 *DAT_00573464;
extern undefined4 DAT_00573468;
extern uint *DAT_0057346c;
extern undefined4 *DAT_00573470;
extern undefined4 DAT_00573474;
extern uint *DAT_00573478;
extern undefined4 *DAT_0057347c;
extern undefined4 DAT_00573480;

// USA 00573308 <- EU 005732E0 (Ghidra, non-matching)
// GLOBAL DAT_00573448 uint *
// GLOBAL DAT_0057344c undefined4 *
// GLOBAL DAT_00573450 undefined4
// GLOBAL DAT_00573454 uint *
// GLOBAL DAT_00573458 undefined4 *
// GLOBAL DAT_0057345c undefined4
// GLOBAL DAT_00573460 uint *
// GLOBAL DAT_00573464 undefined4 *
// GLOBAL DAT_00573468 undefined4
// GLOBAL DAT_0057346c uint *
// GLOBAL DAT_00573470 undefined4 *
// GLOBAL DAT_00573474 undefined4
// GLOBAL DAT_00573478 uint *
// GLOBAL DAT_0057347c undefined4 *
// GLOBAL DAT_00573480 undefined4

undefined4 func_00573308(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00573448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573448), iVar1 != 0)) {
    *DAT_0057344c = DAT_00573450;
  }
  if (DAT_0057344c != param_2) {
    if (((*DAT_00573454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573454), iVar1 != 0)) {
      *DAT_00573458 = DAT_0057345c;
    }
    if (DAT_00573458 != param_2) {
      if (((*DAT_00573460 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573460), iVar1 != 0)) {
        *DAT_00573464 = DAT_00573468;
      }
      if (DAT_00573464 != param_2) {
        if (((*DAT_0057346c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057346c), iVar1 != 0))
        {
          *DAT_00573470 = DAT_00573474;
        }
        if (DAT_00573470 != param_2) {
          if (((*DAT_00573478 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573478), iVar1 != 0)
             ) {
            *DAT_0057347c = DAT_00573480;
          }
          if (DAT_0057347c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


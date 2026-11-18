#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574444;
extern undefined4 *DAT_00574448;
extern undefined4 DAT_0057444c;
extern uint *DAT_00574450;
extern undefined4 *DAT_00574454;
extern undefined4 DAT_00574458;
extern uint *DAT_0057445c;
extern undefined4 *DAT_00574460;
extern undefined4 DAT_00574464;
extern uint *DAT_00574468;
extern undefined4 *DAT_0057446c;
extern undefined4 DAT_00574470;
extern uint *DAT_00574474;
extern undefined4 *DAT_00574478;
extern undefined4 DAT_0057447c;

// USA 00574304 <- EU 005742DC (Ghidra, non-matching)
// GLOBAL DAT_00574444 uint *
// GLOBAL DAT_00574448 undefined4 *
// GLOBAL DAT_0057444c undefined4
// GLOBAL DAT_00574450 uint *
// GLOBAL DAT_00574454 undefined4 *
// GLOBAL DAT_00574458 undefined4
// GLOBAL DAT_0057445c uint *
// GLOBAL DAT_00574460 undefined4 *
// GLOBAL DAT_00574464 undefined4
// GLOBAL DAT_00574468 uint *
// GLOBAL DAT_0057446c undefined4 *
// GLOBAL DAT_00574470 undefined4
// GLOBAL DAT_00574474 uint *
// GLOBAL DAT_00574478 undefined4 *
// GLOBAL DAT_0057447c undefined4

undefined4 func_00574304(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574444 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574444), iVar1 != 0)) {
    *DAT_00574448 = DAT_0057444c;
  }
  if (DAT_00574448 != param_2) {
    if (((*DAT_00574450 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574450), iVar1 != 0)) {
      *DAT_00574454 = DAT_00574458;
    }
    if (DAT_00574454 != param_2) {
      if (((*DAT_0057445c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057445c), iVar1 != 0)) {
        *DAT_00574460 = DAT_00574464;
      }
      if (DAT_00574460 != param_2) {
        if (((*DAT_00574468 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574468), iVar1 != 0))
        {
          *DAT_0057446c = DAT_00574470;
        }
        if (DAT_0057446c != param_2) {
          if (((*DAT_00574474 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574474), iVar1 != 0)
             ) {
            *DAT_00574478 = DAT_0057447c;
          }
          if (DAT_00574478 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


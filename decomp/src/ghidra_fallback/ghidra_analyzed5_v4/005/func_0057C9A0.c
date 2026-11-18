#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057cae0;
extern undefined4 *DAT_0057cae4;
extern undefined4 DAT_0057cae8;
extern uint *DAT_0057caec;
extern undefined4 *DAT_0057caf0;
extern undefined4 DAT_0057caf4;
extern uint *DAT_0057caf8;
extern undefined4 *DAT_0057cafc;
extern undefined4 DAT_0057cb00;
extern uint *DAT_0057cb04;
extern undefined4 *DAT_0057cb08;
extern undefined4 DAT_0057cb0c;
extern uint *DAT_0057cb10;
extern undefined4 *DAT_0057cb14;
extern undefined4 DAT_0057cb18;

// USA 0057C9A0 <- EU 0057C978 (Ghidra, non-matching)
// GLOBAL DAT_0057cae0 uint *
// GLOBAL DAT_0057cae4 undefined4 *
// GLOBAL DAT_0057cae8 undefined4
// GLOBAL DAT_0057caec uint *
// GLOBAL DAT_0057caf0 undefined4 *
// GLOBAL DAT_0057caf4 undefined4
// GLOBAL DAT_0057caf8 uint *
// GLOBAL DAT_0057cafc undefined4 *
// GLOBAL DAT_0057cb00 undefined4
// GLOBAL DAT_0057cb04 uint *
// GLOBAL DAT_0057cb08 undefined4 *
// GLOBAL DAT_0057cb0c undefined4
// GLOBAL DAT_0057cb10 uint *
// GLOBAL DAT_0057cb14 undefined4 *
// GLOBAL DAT_0057cb18 undefined4

undefined4 func_0057C9A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057cae0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cae0), iVar1 != 0)) {
    *DAT_0057cae4 = DAT_0057cae8;
  }
  if (DAT_0057cae4 != param_2) {
    if (((*DAT_0057caec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057caec), iVar1 != 0)) {
      *DAT_0057caf0 = DAT_0057caf4;
    }
    if (DAT_0057caf0 != param_2) {
      if (((*DAT_0057caf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057caf8), iVar1 != 0)) {
        *DAT_0057cafc = DAT_0057cb00;
      }
      if (DAT_0057cafc != param_2) {
        if (((*DAT_0057cb04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cb04), iVar1 != 0))
        {
          *DAT_0057cb08 = DAT_0057cb0c;
        }
        if (DAT_0057cb08 != param_2) {
          if (((*DAT_0057cb10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cb10), iVar1 != 0)
             ) {
            *DAT_0057cb14 = DAT_0057cb18;
          }
          if (DAT_0057cb14 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


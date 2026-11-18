#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057064c;
extern undefined4 *DAT_00570650;
extern undefined4 DAT_00570654;
extern uint *DAT_00570658;
extern undefined4 *DAT_0057065c;
extern undefined4 DAT_00570660;
extern uint *DAT_00570664;
extern undefined4 *DAT_00570668;
extern undefined4 DAT_0057066c;
extern uint *DAT_00570670;
extern undefined4 *DAT_00570674;
extern undefined4 DAT_00570678;
extern uint *DAT_0057067c;
extern undefined4 *DAT_00570680;
extern undefined4 DAT_00570684;

// USA 0057050C <- EU 005704E4 (Ghidra, non-matching)
// GLOBAL DAT_0057064c uint *
// GLOBAL DAT_00570650 undefined4 *
// GLOBAL DAT_00570654 undefined4
// GLOBAL DAT_00570658 uint *
// GLOBAL DAT_0057065c undefined4 *
// GLOBAL DAT_00570660 undefined4
// GLOBAL DAT_00570664 uint *
// GLOBAL DAT_00570668 undefined4 *
// GLOBAL DAT_0057066c undefined4
// GLOBAL DAT_00570670 uint *
// GLOBAL DAT_00570674 undefined4 *
// GLOBAL DAT_00570678 undefined4
// GLOBAL DAT_0057067c uint *
// GLOBAL DAT_00570680 undefined4 *
// GLOBAL DAT_00570684 undefined4

undefined4 func_0057050C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057064c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057064c), iVar1 != 0)) {
    *DAT_00570650 = DAT_00570654;
  }
  if (DAT_00570650 != param_2) {
    if (((*DAT_00570658 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570658), iVar1 != 0)) {
      *DAT_0057065c = DAT_00570660;
    }
    if (DAT_0057065c != param_2) {
      if (((*DAT_00570664 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570664), iVar1 != 0)) {
        *DAT_00570668 = DAT_0057066c;
      }
      if (DAT_00570668 != param_2) {
        if (((*DAT_00570670 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570670), iVar1 != 0))
        {
          *DAT_00570674 = DAT_00570678;
        }
        if (DAT_00570674 != param_2) {
          if (((*DAT_0057067c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057067c), iVar1 != 0)
             ) {
            *DAT_00570680 = DAT_00570684;
          }
          if (DAT_00570680 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


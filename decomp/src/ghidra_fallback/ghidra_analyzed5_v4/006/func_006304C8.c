#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0063064c;
extern undefined4 *DAT_00630650;
extern undefined4 DAT_00630654;
extern uint *DAT_00630658;
extern undefined4 *DAT_0063065c;
extern undefined4 DAT_00630660;
extern uint *DAT_00630664;
extern undefined4 *DAT_00630668;
extern undefined4 DAT_0063066c;
extern uint *DAT_00630670;
extern undefined4 *DAT_00630674;
extern undefined4 DAT_00630678;
extern uint *DAT_0063067c;
extern undefined4 *DAT_00630680;
extern undefined4 DAT_00630684;
extern uint *DAT_00630688;
extern undefined4 *DAT_0063068c;
extern undefined4 DAT_00630690;

// USA 006304C8 <- EU 006304A0 (Ghidra, non-matching)
// GLOBAL DAT_0063064c uint *
// GLOBAL DAT_00630650 undefined4 *
// GLOBAL DAT_00630654 undefined4
// GLOBAL DAT_00630658 uint *
// GLOBAL DAT_0063065c undefined4 *
// GLOBAL DAT_00630660 undefined4
// GLOBAL DAT_00630664 uint *
// GLOBAL DAT_00630668 undefined4 *
// GLOBAL DAT_0063066c undefined4
// GLOBAL DAT_00630670 uint *
// GLOBAL DAT_00630674 undefined4 *
// GLOBAL DAT_00630678 undefined4
// GLOBAL DAT_0063067c uint *
// GLOBAL DAT_00630680 undefined4 *
// GLOBAL DAT_00630684 undefined4
// GLOBAL DAT_00630688 uint *
// GLOBAL DAT_0063068c undefined4 *
// GLOBAL DAT_00630690 undefined4

undefined4 func_006304C8(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0063064c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0063064c), iVar1 != 0)) {
    *DAT_00630650 = DAT_00630654;
  }
  if (DAT_00630650 != param_1) {
    if (((*DAT_00630658 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00630658), iVar1 != 0)) {
      *DAT_0063065c = DAT_00630660;
    }
    if (DAT_0063065c != param_1) {
      if (((*DAT_00630664 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00630664), iVar1 != 0)) {
        *DAT_00630668 = DAT_0063066c;
      }
      if (DAT_00630668 != param_1) {
        if (((*DAT_00630670 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00630670), iVar1 != 0))
        {
          *DAT_00630674 = DAT_00630678;
        }
        if (DAT_00630674 != param_1) {
          if (((*DAT_0063067c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0063067c), iVar1 != 0)
             ) {
            *DAT_00630680 = DAT_00630684;
          }
          if (DAT_00630680 != param_1) {
            if (((*DAT_00630688 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00630688), iVar1 != 0)) {
              *DAT_0063068c = DAT_00630690;
            }
            if (DAT_0063068c != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


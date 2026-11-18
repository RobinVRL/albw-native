#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00549aac;
extern undefined4 *DAT_00549ab0;
extern undefined4 DAT_00549ab4;
extern uint *DAT_00549ab8;
extern undefined4 *DAT_00549abc;
extern undefined4 DAT_00549ac0;
extern uint *DAT_00549ac4;
extern undefined4 *DAT_00549ac8;
extern undefined4 DAT_00549acc;
extern uint *DAT_00549ad0;
extern undefined4 *DAT_00549ad4;
extern undefined4 DAT_00549ad8;
extern uint *DAT_00549adc;
extern undefined4 *DAT_00549ae0;
extern undefined4 DAT_00549ae4;
extern uint *DAT_00549ae8;
extern undefined4 *DAT_00549aec;
extern undefined4 DAT_00549af0;

// USA 00549928 <- EU 00549900 (Ghidra, non-matching)
// GLOBAL DAT_00549aac uint *
// GLOBAL DAT_00549ab0 undefined4 *
// GLOBAL DAT_00549ab4 undefined4
// GLOBAL DAT_00549ab8 uint *
// GLOBAL DAT_00549abc undefined4 *
// GLOBAL DAT_00549ac0 undefined4
// GLOBAL DAT_00549ac4 uint *
// GLOBAL DAT_00549ac8 undefined4 *
// GLOBAL DAT_00549acc undefined4
// GLOBAL DAT_00549ad0 uint *
// GLOBAL DAT_00549ad4 undefined4 *
// GLOBAL DAT_00549ad8 undefined4
// GLOBAL DAT_00549adc uint *
// GLOBAL DAT_00549ae0 undefined4 *
// GLOBAL DAT_00549ae4 undefined4
// GLOBAL DAT_00549ae8 uint *
// GLOBAL DAT_00549aec undefined4 *
// GLOBAL DAT_00549af0 undefined4

undefined4 func_00549928(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549aac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549aac), iVar1 != 0)) {
    *DAT_00549ab0 = DAT_00549ab4;
  }
  if (DAT_00549ab0 != param_2) {
    if (((*DAT_00549ab8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549ab8), iVar1 != 0)) {
      *DAT_00549abc = DAT_00549ac0;
    }
    if (DAT_00549abc != param_2) {
      if (((*DAT_00549ac4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549ac4), iVar1 != 0)) {
        *DAT_00549ac8 = DAT_00549acc;
      }
      if (DAT_00549ac8 != param_2) {
        if (((*DAT_00549ad0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549ad0), iVar1 != 0))
        {
          *DAT_00549ad4 = DAT_00549ad8;
        }
        if (DAT_00549ad4 != param_2) {
          if (((*DAT_00549adc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549adc), iVar1 != 0)
             ) {
            *DAT_00549ae0 = DAT_00549ae4;
          }
          if (DAT_00549ae0 != param_2) {
            if (((*DAT_00549ae8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00549ae8), iVar1 != 0)) {
              *DAT_00549aec = DAT_00549af0;
            }
            if (DAT_00549aec != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}


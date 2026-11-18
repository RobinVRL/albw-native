#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057b058;
extern undefined4 *DAT_0057b05c;
extern undefined4 DAT_0057b060;
extern uint *DAT_0057b064;
extern undefined4 *DAT_0057b068;
extern undefined4 DAT_0057b06c;
extern uint *DAT_0057b070;
extern undefined4 *DAT_0057b074;
extern undefined4 DAT_0057b078;
extern uint *DAT_0057b07c;
extern undefined4 *DAT_0057b080;
extern undefined4 DAT_0057b084;
extern uint *DAT_0057b088;
extern undefined4 *DAT_0057b08c;
extern undefined4 DAT_0057b090;

// USA 0057AF18 <- EU 0057AEF0 (Ghidra, non-matching)
// GLOBAL DAT_0057b058 uint *
// GLOBAL DAT_0057b05c undefined4 *
// GLOBAL DAT_0057b060 undefined4
// GLOBAL DAT_0057b064 uint *
// GLOBAL DAT_0057b068 undefined4 *
// GLOBAL DAT_0057b06c undefined4
// GLOBAL DAT_0057b070 uint *
// GLOBAL DAT_0057b074 undefined4 *
// GLOBAL DAT_0057b078 undefined4
// GLOBAL DAT_0057b07c uint *
// GLOBAL DAT_0057b080 undefined4 *
// GLOBAL DAT_0057b084 undefined4
// GLOBAL DAT_0057b088 uint *
// GLOBAL DAT_0057b08c undefined4 *
// GLOBAL DAT_0057b090 undefined4

undefined4 func_0057AF18(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057b058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b058), iVar1 != 0)) {
    *DAT_0057b05c = DAT_0057b060;
  }
  if (DAT_0057b05c != param_2) {
    if (((*DAT_0057b064 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b064), iVar1 != 0)) {
      *DAT_0057b068 = DAT_0057b06c;
    }
    if (DAT_0057b068 != param_2) {
      if (((*DAT_0057b070 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b070), iVar1 != 0)) {
        *DAT_0057b074 = DAT_0057b078;
      }
      if (DAT_0057b074 != param_2) {
        if (((*DAT_0057b07c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b07c), iVar1 != 0))
        {
          *DAT_0057b080 = DAT_0057b084;
        }
        if (DAT_0057b080 != param_2) {
          if (((*DAT_0057b088 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b088), iVar1 != 0)
             ) {
            *DAT_0057b08c = DAT_0057b090;
          }
          if (DAT_0057b08c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


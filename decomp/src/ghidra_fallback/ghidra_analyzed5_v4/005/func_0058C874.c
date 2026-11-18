#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058ca3c;
extern undefined4 *DAT_0058ca40;
extern undefined4 DAT_0058ca44;
extern uint *DAT_0058ca48;
extern undefined4 *DAT_0058ca4c;
extern undefined4 DAT_0058ca50;
extern uint *DAT_0058ca54;
extern undefined4 *DAT_0058ca58;
extern undefined4 DAT_0058ca5c;
extern uint *DAT_0058ca60;
extern undefined4 *DAT_0058ca64;
extern undefined4 DAT_0058ca68;
extern uint *DAT_0058ca6c;
extern undefined4 *DAT_0058ca70;
extern undefined4 DAT_0058ca74;
extern uint *DAT_0058ca78;
extern undefined4 *DAT_0058ca7c;
extern undefined4 DAT_0058ca80;
extern uint *DAT_0058ca84;
extern undefined4 *DAT_0058ca88;
extern undefined4 DAT_0058ca8c;

// USA 0058C874 <- EU 0058C84C (Ghidra, non-matching)
// GLOBAL DAT_0058ca3c uint *
// GLOBAL DAT_0058ca40 undefined4 *
// GLOBAL DAT_0058ca44 undefined4
// GLOBAL DAT_0058ca48 uint *
// GLOBAL DAT_0058ca4c undefined4 *
// GLOBAL DAT_0058ca50 undefined4
// GLOBAL DAT_0058ca54 uint *
// GLOBAL DAT_0058ca58 undefined4 *
// GLOBAL DAT_0058ca5c undefined4
// GLOBAL DAT_0058ca60 uint *
// GLOBAL DAT_0058ca64 undefined4 *
// GLOBAL DAT_0058ca68 undefined4
// GLOBAL DAT_0058ca6c uint *
// GLOBAL DAT_0058ca70 undefined4 *
// GLOBAL DAT_0058ca74 undefined4
// GLOBAL DAT_0058ca78 uint *
// GLOBAL DAT_0058ca7c undefined4 *
// GLOBAL DAT_0058ca80 undefined4
// GLOBAL DAT_0058ca84 uint *
// GLOBAL DAT_0058ca88 undefined4 *
// GLOBAL DAT_0058ca8c undefined4

undefined4 func_0058C874(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058ca3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ca3c), iVar1 != 0)) {
    *DAT_0058ca40 = DAT_0058ca44;
  }
  if (DAT_0058ca40 != param_2) {
    if (((*DAT_0058ca48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ca48), iVar1 != 0)) {
      *DAT_0058ca4c = DAT_0058ca50;
    }
    if (DAT_0058ca4c != param_2) {
      if (((*DAT_0058ca54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ca54), iVar1 != 0)) {
        *DAT_0058ca58 = DAT_0058ca5c;
      }
      if (DAT_0058ca58 != param_2) {
        if (((*DAT_0058ca60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ca60), iVar1 != 0))
        {
          *DAT_0058ca64 = DAT_0058ca68;
        }
        if (DAT_0058ca64 != param_2) {
          if (((*DAT_0058ca6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ca6c), iVar1 != 0)
             ) {
            *DAT_0058ca70 = DAT_0058ca74;
          }
          if (DAT_0058ca70 != param_2) {
            if (((*DAT_0058ca78 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0058ca78), iVar1 != 0)) {
              *DAT_0058ca7c = DAT_0058ca80;
            }
            if (DAT_0058ca7c != param_2) {
              if (((*DAT_0058ca84 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0058ca84), iVar1 != 0)) {
                *DAT_0058ca88 = DAT_0058ca8c;
              }
              if (DAT_0058ca88 != param_2) {
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


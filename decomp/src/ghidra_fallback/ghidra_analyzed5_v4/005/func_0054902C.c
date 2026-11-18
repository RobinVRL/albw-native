#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00549128;
extern undefined4 *DAT_0054912c;
extern undefined4 DAT_00549130;
extern uint *DAT_00549134;
extern undefined4 *DAT_00549138;
extern undefined4 DAT_0054913c;
extern uint *DAT_00549140;
extern undefined4 *DAT_00549144;
extern undefined4 DAT_00549148;
extern uint *DAT_0054914c;
extern undefined4 *DAT_00549150;
extern undefined4 DAT_00549154;

// USA 0054902C <- EU 00549004 (Ghidra, non-matching)
// GLOBAL DAT_00549128 uint *
// GLOBAL DAT_0054912c undefined4 *
// GLOBAL DAT_00549130 undefined4
// GLOBAL DAT_00549134 uint *
// GLOBAL DAT_00549138 undefined4 *
// GLOBAL DAT_0054913c undefined4
// GLOBAL DAT_00549140 uint *
// GLOBAL DAT_00549144 undefined4 *
// GLOBAL DAT_00549148 undefined4
// GLOBAL DAT_0054914c uint *
// GLOBAL DAT_00549150 undefined4 *
// GLOBAL DAT_00549154 undefined4

undefined4 func_0054902C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00549128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549128), iVar1 != 0)) {
    *DAT_0054912c = DAT_00549130;
  }
  if (DAT_0054912c != param_2) {
    if (((*DAT_00549134 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549134), iVar1 != 0)) {
      *DAT_00549138 = DAT_0054913c;
    }
    if (DAT_00549138 != param_2) {
      if (((*DAT_00549140 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00549140), iVar1 != 0)) {
        *DAT_00549144 = DAT_00549148;
      }
      if (DAT_00549144 != param_2) {
        if (((*DAT_0054914c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054914c), iVar1 != 0))
        {
          *DAT_00549150 = DAT_00549154;
        }
        if (DAT_00549150 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}


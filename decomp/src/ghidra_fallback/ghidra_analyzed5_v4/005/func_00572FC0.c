#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00573100;
extern undefined4 *DAT_00573104;
extern undefined4 DAT_00573108;
extern uint *DAT_0057310c;
extern undefined4 *DAT_00573110;
extern undefined4 DAT_00573114;
extern uint *DAT_00573118;
extern undefined4 *DAT_0057311c;
extern undefined4 DAT_00573120;
extern uint *DAT_00573124;
extern undefined4 *DAT_00573128;
extern undefined4 DAT_0057312c;
extern uint *DAT_00573130;
extern undefined4 *DAT_00573134;
extern undefined4 DAT_00573138;

// USA 00572FC0 <- EU 00572F98 (Ghidra, non-matching)
// GLOBAL DAT_00573100 uint *
// GLOBAL DAT_00573104 undefined4 *
// GLOBAL DAT_00573108 undefined4
// GLOBAL DAT_0057310c uint *
// GLOBAL DAT_00573110 undefined4 *
// GLOBAL DAT_00573114 undefined4
// GLOBAL DAT_00573118 uint *
// GLOBAL DAT_0057311c undefined4 *
// GLOBAL DAT_00573120 undefined4
// GLOBAL DAT_00573124 uint *
// GLOBAL DAT_00573128 undefined4 *
// GLOBAL DAT_0057312c undefined4
// GLOBAL DAT_00573130 uint *
// GLOBAL DAT_00573134 undefined4 *
// GLOBAL DAT_00573138 undefined4

undefined4 func_00572FC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00573100 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573100), iVar1 != 0)) {
    *DAT_00573104 = DAT_00573108;
  }
  if (DAT_00573104 != param_2) {
    if (((*DAT_0057310c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057310c), iVar1 != 0)) {
      *DAT_00573110 = DAT_00573114;
    }
    if (DAT_00573110 != param_2) {
      if (((*DAT_00573118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573118), iVar1 != 0)) {
        *DAT_0057311c = DAT_00573120;
      }
      if (DAT_0057311c != param_2) {
        if (((*DAT_00573124 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573124), iVar1 != 0))
        {
          *DAT_00573128 = DAT_0057312c;
        }
        if (DAT_00573128 != param_2) {
          if (((*DAT_00573130 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573130), iVar1 != 0)
             ) {
            *DAT_00573134 = DAT_00573138;
          }
          if (DAT_00573134 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


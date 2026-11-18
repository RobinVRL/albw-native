#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052412c;
extern undefined4 *DAT_00524130;
extern undefined4 DAT_00524134;
extern uint *DAT_00524138;
extern undefined4 *DAT_0052413c;
extern undefined4 DAT_00524140;
extern uint *DAT_00524144;
extern undefined4 *DAT_00524148;
extern undefined4 DAT_0052414c;
extern uint *DAT_00524150;
extern undefined4 *DAT_00524154;
extern undefined4 DAT_00524158;
extern uint *DAT_0052415c;
extern undefined4 *DAT_00524160;
extern undefined4 DAT_00524164;

// USA 00523FEC <- EU 00523FC4 (Ghidra, non-matching)
// GLOBAL DAT_0052412c uint *
// GLOBAL DAT_00524130 undefined4 *
// GLOBAL DAT_00524134 undefined4
// GLOBAL DAT_00524138 uint *
// GLOBAL DAT_0052413c undefined4 *
// GLOBAL DAT_00524140 undefined4
// GLOBAL DAT_00524144 uint *
// GLOBAL DAT_00524148 undefined4 *
// GLOBAL DAT_0052414c undefined4
// GLOBAL DAT_00524150 uint *
// GLOBAL DAT_00524154 undefined4 *
// GLOBAL DAT_00524158 undefined4
// GLOBAL DAT_0052415c uint *
// GLOBAL DAT_00524160 undefined4 *
// GLOBAL DAT_00524164 undefined4

undefined4 func_00523FEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052412c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052412c), iVar1 != 0)) {
    *DAT_00524130 = DAT_00524134;
  }
  if (DAT_00524130 != param_2) {
    if (((*DAT_00524138 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524138), iVar1 != 0)) {
      *DAT_0052413c = DAT_00524140;
    }
    if (DAT_0052413c != param_2) {
      if (((*DAT_00524144 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524144), iVar1 != 0)) {
        *DAT_00524148 = DAT_0052414c;
      }
      if (DAT_00524148 != param_2) {
        if (((*DAT_00524150 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524150), iVar1 != 0))
        {
          *DAT_00524154 = DAT_00524158;
        }
        if (DAT_00524154 != param_2) {
          if (((*DAT_0052415c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052415c), iVar1 != 0)
             ) {
            *DAT_00524160 = DAT_00524164;
          }
          if (DAT_00524160 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}


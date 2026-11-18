#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00578070;
extern undefined4 *DAT_00578074;
extern undefined4 DAT_00578078;
extern uint *DAT_0057807c;
extern undefined4 *DAT_00578080;
extern undefined4 DAT_00578084;
extern uint *DAT_00578088;
extern undefined4 *DAT_0057808c;
extern undefined4 DAT_00578090;

// USA 00577FB4 <- EU 00577F8C (Ghidra, non-matching)
// GLOBAL DAT_00578070 uint *
// GLOBAL DAT_00578074 undefined4 *
// GLOBAL DAT_00578078 undefined4
// GLOBAL DAT_0057807c uint *
// GLOBAL DAT_00578080 undefined4 *
// GLOBAL DAT_00578084 undefined4
// GLOBAL DAT_00578088 uint *
// GLOBAL DAT_0057808c undefined4 *
// GLOBAL DAT_00578090 undefined4

undefined4 func_00577FB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00578070 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578070), iVar1 != 0)) {
    *DAT_00578074 = DAT_00578078;
  }
  if (DAT_00578074 != param_2) {
    if (((*DAT_0057807c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057807c), iVar1 != 0)) {
      *DAT_00578080 = DAT_00578084;
    }
    if (DAT_00578080 != param_2) {
      if (((*DAT_00578088 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578088), iVar1 != 0)) {
        *DAT_0057808c = DAT_00578090;
      }
      if (DAT_0057808c != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern int func_004EBEB0(int param_1,float fparam_0);
extern int func_0055A32C(int param_1,float fparam_0);
extern float DAT_00383dac;
extern float DAT_00383db0;
extern float DAT_00383db4;
extern float DAT_00383db8;
extern float DAT_00383dbc;
extern float DAT_00383dc0;
extern float DAT_00383dc4;
extern float DAT_00383dc8;
extern float DAT_00383dcc;
extern int *DAT_00383dd0;

// USA 00383C30 <- EU 00383C0C (Ghidra, non-matching)
// GLOBAL DAT_00383dac float
// GLOBAL DAT_00383db0 float
// GLOBAL DAT_00383db4 float
// GLOBAL DAT_00383db8 float
// GLOBAL DAT_00383dbc float
// GLOBAL DAT_00383dc0 float
// GLOBAL DAT_00383dc4 float
// GLOBAL DAT_00383dc8 float
// GLOBAL DAT_00383dcc float
// GLOBAL DAT_00383dd0 int *

undefined4 func_00383C30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (SQRT(*(float *)(iVar1 + 0x3dc) * *(float *)(iVar1 + 0x3dc) +
           *(float *)(iVar1 + 0x3e4) * *(float *)(iVar1 + 0x3e4)) <= DAT_00383dac) {
    return 0;
  }
  switch(**(undefined4 **)(*(int *)(param_1 + 0x20) + 0x14)) {
  case 5:
  case 7:
  case 8:
  case 9:
    if (*(char *)(iVar1 + 0xb34) != '\0') {
      iVar1 = func_0055A32C(param_1,DAT_00383db0);
      if ((iVar1 == 0) && (iVar1 = func_0055A32C(param_1,DAT_00383db4), iVar1 == 0)) {
        return 0;
      }
LAB_00383d8c:
      return func_004EBEB0(*DAT_00383dd0,*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 0x10));
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
    if (*(char *)(iVar1 + 0xb34) != '\0') {
      iVar1 = func_0055A32C(param_1,DAT_00383db8);
      if ((iVar1 == 0) && (iVar1 = func_0055A32C(param_1,DAT_00383dbc), iVar1 == 0)) {
        return 0;
      }
      goto LAB_00383d8c;
    }
    break;
  case 0xd:
    if (*(char *)(iVar1 + 0xb34) != '\0') {
      iVar1 = func_0055A32C(param_1,DAT_00383dc0);
      if ((iVar1 == 0) && (iVar1 = func_0055A32C(param_1,DAT_00383dc4), iVar1 == 0)) {
        return 0;
      }
      goto LAB_00383d8c;
    }
    break;
  case 0xe:
    if ((*(char *)(iVar1 + 0xb34) != '\0') &&
       ((iVar1 = func_0055A32C(param_1,DAT_00383dc8), iVar1 != 0 ||
        (iVar1 = func_0055A32C(param_1,DAT_00383dcc), iVar1 != 0)))) goto LAB_00383d8c;
  }
  return 0;
}


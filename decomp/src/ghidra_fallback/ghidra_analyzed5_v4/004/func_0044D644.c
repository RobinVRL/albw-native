#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_004077E4(int param_1,float *param_2);
extern int func_0051B0B4(int param_1);
extern int func_00522958(int param_1);
extern int func_0058DE90(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0044d714;
extern int *DAT_0044d718;
extern undefined4 DAT_0044d730;
extern int *DAT_0044d734;
extern char s_SE_S_MAP_PIN_HOLD_0044d71c[];

// USA 0044D644 <- EU 0044D61C (Ghidra, non-matching)
// GLOBAL DAT_0044d714 int *
// GLOBAL DAT_0044d718 int *
// GLOBAL DAT_0044d730 undefined4
// GLOBAL DAT_0044d734 int *
// GLOBAL s_SE_S_MAP_PIN_HOLD_0044d71c string

undefined4 func_0044D644(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0044d714;
  iVar2 = func_00522958(*DAT_0044d714);
  if (iVar2 == 0) {
    iVar2 = func_004077E4(*(int *)(param_1 + 0x114),(float *)(param_1 + 0x10c));
    piVar1 = DAT_0044d718;
    if (iVar2 == 0) goto LAB_0044d6e0;
    iVar2 = func_0058DE90(*DAT_0044d718);
    if ((iVar2 != 0) && (iVar2 = func_0051B0B4(*piVar1), iVar2 != 0)) {
      local_14 = s_SE_S_MAP_PIN_HOLD_0044d71c;
      local_18 = DAT_0044d730;
      func_002DF0B0(*DAT_0044d734,&local_18,0);
      return func_0066CD9C((undefined4 *)(param_1 + 0xb0),9);
    }
  }
  else {
    uVar3 = *(undefined4 *)(*piVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(*piVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    iVar2 = func_004077E4(*(int *)(param_1 + 0x114),(float *)(param_1 + 0x10c));
    if (iVar2 == 0) {
LAB_0044d6e0:
      return func_0066CD9C((undefined4 *)(param_1 + 0xb0),6);
    }
  }
  if (*(uint *)(param_1 + 0xb0) < 0xf) {
    return 0;
  }
  return func_0066CD9C((undefined4 *)(param_1 + 0xb0),1);
}


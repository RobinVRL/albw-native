#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_004077E4(int param_1,float *param_2);
extern int func_0051B0B4(int param_1);
extern int func_00522958(int param_1);
extern int func_0058DE90(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0044d82c;
extern int *DAT_0044d830;
extern undefined4 DAT_0044d848;
extern int *DAT_0044d84c;
extern char s_SE_S_MAP_PIN_HOLD_0044d834[];

// USA 0044D760 <- EU 0044D738 (Ghidra, non-matching)
// GLOBAL DAT_0044d82c int *
// GLOBAL DAT_0044d830 int *
// GLOBAL DAT_0044d848 undefined4
// GLOBAL DAT_0044d84c int *
// GLOBAL s_SE_S_MAP_PIN_HOLD_0044d834 string

undefined4 func_0044D760(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0044d82c;
  iVar2 = func_00522958(*DAT_0044d82c);
  if (iVar2 == 0) {
    iVar2 = func_004077E4(*(int *)(param_1 + 0x114),(float *)(param_1 + 0x10c));
    piVar1 = DAT_0044d830;
    if (iVar2 == 0) goto LAB_0044d818;
    iVar2 = func_0058DE90(*DAT_0044d830);
    if ((iVar2 != 0) && (iVar2 = func_0051B0B4(*piVar1), iVar2 != 0)) {
      local_14 = s_SE_S_MAP_PIN_HOLD_0044d834;
      local_18 = DAT_0044d848;
      func_002DF0B0(*DAT_0044d84c,&local_18,0);
      return func_0066CD9C((undefined4 *)(param_1 + 0xb0),9);
    }
  }
  else {
    uVar3 = *(undefined4 *)(*piVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(*piVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x110) = uVar3;
    iVar2 = func_004077E4(*(int *)(param_1 + 0x114),(float *)(param_1 + 0x10c));
    if (iVar2 == 0) {
LAB_0044d818:
      return func_0066CD9C((undefined4 *)(param_1 + 0xb0),6);
    }
    if (0x13 < *(int *)(param_1 + 0xb0)) {
      func_0066CD9C((undefined4 *)(param_1 + 0xb0),1);
    }
  }
  return 0;
}


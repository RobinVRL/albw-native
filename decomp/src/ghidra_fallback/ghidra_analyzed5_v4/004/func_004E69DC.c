#include "ghidra_types.h"

extern int func_0037C82C(int *param_1,int param_2);
extern int func_004C6940(int param_1,int param_2,undefined4 param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_005568E8(int param_1);
extern int *DAT_004e6a8c;
extern int *DAT_004e6a90;
extern int *DAT_004e6a94;
extern int DAT_004e6a98;
extern char s_SE_PL_Net_GET_004e6a9c[];

// USA 004E69DC <- EU 004E69B4 (Ghidra, non-matching)
// GLOBAL DAT_004e6a8c int *
// GLOBAL DAT_004e6a90 int *
// GLOBAL DAT_004e6a94 int *
// GLOBAL DAT_004e6a98 int
// GLOBAL s_SE_PL_Net_GET_004e6a9c string

undefined4 func_004E69DC(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (((*(int *)(param_2 + 0x2c) != 0) && ((char)param_1[0x13a] == '\0')) &&
     (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x0e')) {
    if ((char)param_1[0x159] == '\0') {
      *(undefined1 *)((int)param_1 + 0x55e) = 1;
    }
    else {
      iVar2 = func_004C6940(*DAT_004e6a8c,*(int *)(param_2 + 0x28),0x12);
      if (iVar2 == 0) {
        return 1;
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
    iVar2 = func_005568E8(*DAT_004e6a90);
    local_18 = DAT_004e6a98;
    local_14 = s_SE_PL_Net_GET_004e6a9c;
    if (*(int *)(param_2 + 0x28) == iVar2) {
      func_004EA104(*DAT_004e6a94,&local_18,0);
    }
    else {
      func_004EABB8(*DAT_004e6a94,&local_18,(undefined4 *)0x0);
    }
    return 1;
  }
  uVar1 = func_0037C82C(param_1,param_2);
  return uVar1;
}


#include "ghidra_types.h"

extern int func_004C6940(int param_1,int param_2,undefined4 param_3);
extern int func_004CA6F0(int param_1,uint param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_005568E8(int param_1);
extern float DAT_004cba94;
extern int *DAT_004cba98;
extern int *DAT_004cba9c;
extern int *DAT_004cbaa0;
extern int DAT_004cbaa4;
extern char s_SE_PL_Net_GET_004cbaa8[];

// USA 004CB9E8 <- EU 004CB9C0 (Ghidra, non-matching)
// GLOBAL DAT_004cba94 float
// GLOBAL DAT_004cba98 int *
// GLOBAL DAT_004cba9c int *
// GLOBAL DAT_004cbaa0 int *
// GLOBAL DAT_004cbaa4 int
// GLOBAL s_SE_PL_Net_GET_004cbaa8 string

undefined4 func_004CB9E8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_3 + 0x24) != '\x0e') {
    return param_2;
  }
  iVar1 = func_004CA6F0(param_1,*(uint *)(param_3 + 0x30),DAT_004cba94);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x978) == '\0') {
      *(undefined1 *)(param_1 + 0x925) = 1;
    }
    else {
      if (*(char *)(param_1 + 0x8e4) == '\x01') {
        uVar2 = 0x14;
      }
      else {
        uVar2 = 0x13;
      }
      iVar1 = func_004C6940(*DAT_004cba98,*(int *)(param_3 + 0x30),uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    iVar3 = *(int *)(param_3 + 0x30);
    iVar1 = func_005568E8(*DAT_004cba9c);
    local_18 = DAT_004cbaa4;
    local_14 = s_SE_PL_Net_GET_004cbaa8;
    if (iVar3 == iVar1) {
      func_004EA104(*DAT_004cbaa0,&local_18,0);
    }
    else {
      func_004EABB8(*DAT_004cbaa0,&local_18,(undefined4 *)0x0);
    }
  }
  return 0;
}


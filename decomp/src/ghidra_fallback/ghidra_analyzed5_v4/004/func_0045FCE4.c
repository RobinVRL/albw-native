// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B760(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_0045fdb4;
extern int DAT_0045fdb8;
extern float DAT_0045fdbc;
extern int DAT_0045fdc0;
extern int DAT_0045fdc4;

// USA 0045FCE4 <- EU 0045FCBC (Ghidra, non-matching)
// GLOBAL DAT_0045fdb4 undefined4
// GLOBAL DAT_0045fdb8 int
// GLOBAL DAT_0045fdbc float
// GLOBAL DAT_0045fdc0 int
// GLOBAL DAT_0045fdc4 int

undefined4 func_0045FCE4(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(undefined4 *)(albw_frame + 0x64))
  func_0010A464(auStack_70);
  local_c = DAT_0045fdb4;
  local_10 = DAT_0045fdb8;
  iVar1 = func_00533078(param_1,&local_10,auStack_70);
  if (iVar1 != 0) {
    uVar2 = (uint)*(char *)(param_1 + 0x124);
    if (uVar2 < *(uint *)(param_1 + 0xd0)) {
      iVar1 = *(int *)(param_1 + 0xcc) + uVar2;
      if (*(int *)(param_1 + 200) <= iVar1) {
        iVar1 = iVar1 - *(int *)(param_1 + 200);
      }
      pcVar3 = (char *)(*(int *)(param_1 + 0xc4) + iVar1 * 2);
    }
    else {
      pcVar3 = *(char **)(param_1 + 0xc4);
    }
    if (uVar2 < *(uint *)(param_1 + 0xd0)) {
      iVar1 = *(int *)(param_1 + 0xcc) + uVar2;
      if (*(int *)(param_1 + 200) <= iVar1) {
        iVar1 = iVar1 - *(int *)(param_1 + 200);
      }
      iVar1 = *(int *)(param_1 + 0xc4) + iVar1 * 2;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc4);
    }
    fparam_0 = DAT_0045fdbc;
    if ((*(char *)(iVar1 + 1) != '\0') && (-1 < *pcVar3)) {
      iVar1 = (int)((ulonglong)((longlong)DAT_0045fdc0 * (longlong)(int)uVar2) >> 0x20);
      fparam_0 = *(float *)(DAT_0045fdc4 + (uVar2 + ((iVar1 >> 1) - (iVar1 >> 0x1f)) * -5) * 4);
    }
    func_0025B760((int)auStack_70,fparam_0);
  }
  return func_0025B874(auStack_70);
}


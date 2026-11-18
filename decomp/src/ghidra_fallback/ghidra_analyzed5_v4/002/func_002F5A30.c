#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00359454(int param_1,float *param_2);
extern int func_004F9434(int param_1);
extern int func_004F9FC4(int param_1,int param_2);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int *DAT_002f5c50;
extern int DAT_002f5c54;
extern int DAT_002f5c58;
extern float DAT_002f5c5c;
extern float DAT_002f5c60;
extern int DAT_002f5c64;
extern int DAT_002f5c68;
extern char s_SE_Boomerang_REFLECT_002f5c80[];
extern char s_SE_HookShot_REFLECT_002f5c6c[];

// USA 002F5A30 <- EU 002F5A0C (Ghidra, non-matching)
// GLOBAL DAT_002f5c50 int *
// GLOBAL DAT_002f5c54 int
// GLOBAL DAT_002f5c58 int
// GLOBAL DAT_002f5c5c float
// GLOBAL DAT_002f5c60 float
// GLOBAL DAT_002f5c64 int
// GLOBAL DAT_002f5c68 int
// GLOBAL s_SE_Boomerang_REFLECT_002f5c80 string
// GLOBAL s_SE_HookShot_REFLECT_002f5c6c string

uint func_002F5A30(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (((*(char *)((int)param_1 + 0xd45) == '\0') && (0x100 < (short)param_1[0x143])) &&
     ((short)param_1[0x142] < 0x101)) {
    *(undefined1 *)((int)param_1 + 0xd3f) = 1;
  }
  if (*(char *)((int)param_1 + 0xd3d) != '\0') {
    return 0x21;
  }
  if (*(char *)((int)param_1 + 0x4b5) == '\0') {
    iVar3 = param_1[0x10c];
  }
  else {
    iVar3 = param_1[0x10d];
  }
  uVar4 = func_004F9434(iVar3);
  iVar2 = DAT_002f5c68;
  iVar3 = DAT_002f5c58;
  if (uVar4 == 7) {
    if (*(int *)(param_3 + 0x30) != param_1[0x325]) {
      return 0x21;
    }
    if (param_1[0x325] == 0) {
      return 0x21;
    }
  }
  cVar1 = *(char *)(param_3 + 0x24);
  uVar4 = param_2 & 0xff;
  bVar7 = 0x1d < uVar4;
  bVar5 = uVar4 == 0x1e;
  if (!bVar5) {
    uVar4 = uVar4 - 0xe;
    bVar7 = 2 < uVar4;
  }
  bVar6 = uVar4 == 3;
  if (!bVar7 || (bVar5 || bVar6)) {
    uVar4 = 1;
  }
  if (bVar7 && (!bVar5 && !bVar6)) {
    uVar4 = 0;
  }
  if (param_2 == 3 || cVar1 == '\x06') {
    return 0x21;
  }
  if (uVar4 == 0) {
    return param_2;
  }
  if ((*(char *)(DAT_002f5c54 + (int)param_1) == '\x1e') &&
     (0x5f < param_1[0x308] - (int)(short)param_1[0x142])) {
    param_1[0x2c4] = 0;
    param_1[0x2c5] = iVar3;
    param_1[0x2c3] = 0;
    return 0x21;
  }
  if (cVar1 == '\0') {
    if (*(char *)(DAT_002f5c54 + (int)param_1) != '\x12') {
      if (param_1[0x325] == 0) {
        return 0x21;
      }
      if (*(int *)(param_3 + 0x30) != param_1[0x325]) {
        return 0x21;
      }
      func_006640EC(param_1 + 0x232,0x13,in_s0);
      return 0x21;
    }
  }
  else if (cVar1 == '\x05') {
    fparam_0 = DAT_002f5c5c;
    if (*(char *)((int)param_1 + 0xd45) == '\x01') {
      fparam_0 = DAT_002f5c60;
    }
    func_002917A4(*DAT_002f5c50,param_1 + 0xf4,0,fparam_0);
    iVar3 = DAT_002f5c64;
    *(undefined1 *)(param_1 + 0x350) = 1;
    param_1[0x2cd] = 8;
    param_1[0x2ce] = iVar3;
    param_1[0x2cc] = 0;
    goto LAB_002f5bbc;
  }
  if (*(char *)(param_3 + 0x27) == '\0') {
    if (cVar1 == '\n') {
      func_004F9FC4((int)param_1,param_1[0x10f]);
      local_1c = s_SE_Boomerang_REFLECT_002f5c80;
      local_20 = iVar2;
      func_00150A84(param_1,&local_20,0);
      return 0xe;
    }
    if (cVar1 != '\t') {
      return 0xe;
    }
    func_004F9FC4((int)param_1,param_1[0x10f]);
    local_1c = s_SE_HookShot_REFLECT_002f5c6c;
    local_20 = iVar2;
    func_00150A84(param_1,&local_20,0);
    return 0xe;
  }
LAB_002f5bbc:
  func_00359454((int)(param_1 + 0x24c),(float *)(param_3 + 0x18));
  return 0xe;
}


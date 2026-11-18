#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_005391C4(int param_1);
extern int func_00539200(int param_1);
extern int func_0058791C(int param_1,int *param_2);
extern int DAT_00477e20;
extern int *DAT_00477e58;
extern float DAT_00477e5c;
extern float DAT_00477e60;
extern float DAT_00477e64;
extern float DAT_00477e68;
extern char s_SE_S_ITEM_POINT_BUTTON_00477e24[];
extern char s_SE_S_ITEM_POINT_CONTAINER_00477e3c[];

// USA 00477CE4 <- EU 00477CBC (Ghidra, non-matching)
// GLOBAL DAT_00477e20 int
// GLOBAL DAT_00477e58 int *
// GLOBAL DAT_00477e5c float
// GLOBAL DAT_00477e60 float
// GLOBAL DAT_00477e64 float
// GLOBAL DAT_00477e68 float
// GLOBAL s_SE_S_ITEM_POINT_BUTTON_00477e24 string
// GLOBAL s_SE_S_ITEM_POINT_CONTAINER_00477e3c string

void func_00477CE4(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  iVar1 = DAT_00477e20;
  iVar5 = 0;
  uVar3 = (uint)*(char *)(param_1 + 0x308);
  if (uVar3 == 0x14) {
    iVar5 = *(int *)(param_1 + 500);
  }
  if (uVar3 < 0x14) {
    iVar5 = *(int *)(param_1 + 0x168 + uVar3 * 4);
  }
  else if ((uVar3 != 0x14) && (uVar3 == 0x15)) {
    iVar5 = *(int *)(param_1 + 0x1f8);
  }
  if (param_2 == 0 || iVar5 == 0) {
    if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x29c)) < 0x3f800000) {
      fVar8 = *(float *)(param_1 + 0x29c) + DAT_00477e64;
      *(float *)(param_1 + 0x29c) = fVar8;
      if (0x3f800000 < (int)ALBW_AS_U32(fVar8)) {
        fVar8 = DAT_00477e68;
      }
      *(float *)(param_1 + 0x29c) = fVar8;
      return;
    }
  }
  else {
    if ((int)uVar3 < 0x14) {
      pcVar6 = s_SE_S_ITEM_POINT_CONTAINER_00477e3c;
      local_7c = s_SE_S_ITEM_POINT_CONTAINER_00477e3c;
      local_80 = DAT_00477e20;
      iVar4 = func_0058791C(*DAT_00477e58,&local_80);
      fVar8 = DAT_00477e5c;
      if ((iVar4 != 0) && (0x3f400000 < (int)ALBW_AS_U32(*(float *)(param_1 + 0x29c)))) {
        fVar7 = *(float *)(param_1 + 0x29c) - DAT_00477e5c;
        *(float *)(param_1 + 0x29c) = fVar7;
        if ((int)ALBW_AS_U32(fVar7) < 0x3f400001) {
          fVar7 = DAT_00477e60;
        }
        *(float *)(param_1 + 0x29c) = fVar7;
        in_s1 = fVar8;
      }
    }
    else {
      pcVar6 = s_SE_S_ITEM_POINT_BUTTON_00477e24;
    }
    bVar2 = func_00539200(param_1 + 0x2a0);
    if ((!bVar2) || (iVar4 = func_005391C4(param_1 + 0x2a0), 1 < iVar4)) {
      func_0010A464(&local_80);
      local_20 = iVar1;
      local_1c = pcVar6;
      func_00533078(iVar5,&local_20,&local_80);
      bVar2 = func_00539200((int)&local_80);
      if (bVar2) {
        func_0025B860((int)&local_80,0,*(float *)(param_1 + 0x29c),in_s1);
      }
      func_0025B874(&local_80);
    }
  }
  return;
}


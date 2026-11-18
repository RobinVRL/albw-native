// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_00556D48(int param_1);
extern int func_00581C5C(int param_1);
extern int *DAT_0025b1b0;
extern int *DAT_0025b1b4;
extern int DAT_0025b1b8;
extern float DAT_0025b1c8;
extern int *DAT_0025b1cc;
extern int *DAT_0025b1d0;
extern float DAT_0025b1d4;
extern float DAT_0025b1d8;
extern char s_SE_ENV_LAVA_0025b1bc[];

// USA 0025AF44 <- EU 0025AF6C (Ghidra, non-matching)
// GLOBAL DAT_0025b1b0 int *
// GLOBAL DAT_0025b1b4 int *
// GLOBAL DAT_0025b1b8 int
// GLOBAL DAT_0025b1c8 float
// GLOBAL DAT_0025b1cc int *
// GLOBAL DAT_0025b1d0 int *
// GLOBAL DAT_0025b1d4 float
// GLOBAL DAT_0025b1d8 float
// GLOBAL s_SE_ENV_LAVA_0025b1bc string

undefined4 func_0025AF44(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  uint in_fpscr;
  float fparam_0;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if ((char)param_1[1] != '\0') {
    bVar6 = param_1[0x12] == -1;
    param_1[0x12] = param_1[0x11];
    param_1[0x14] = param_1[0x13];
    cVar1 = *(char *)((int)param_1 + 0xd9);
    iVar2 = func_00581C5C(*DAT_0025b1b0);
    if (iVar2 == 0) {
      param_1[0x11] = -1;
      *(undefined1 *)((int)param_1 + 0xd9) = 0;
      param_1[0x13] = -1;
    }
    else {
      param_1[0x11] = (int)*(short *)(iVar2 + 0x4a);
      param_1[0x13] = (int)*(short *)(iVar2 + 0x46);
      *(bool *)((int)param_1 + 0xd9) = *(short *)(iVar2 + 0x5c) == 0;
    }
    if (*(char *)((int)param_1 + 0xd9) == cVar1) {
      *(undefined1 *)((int)param_1 + 0xda) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 0xda) = 1;
    }
    uVar3 = *(uint *)(param_1[7] + (char)param_1[1] * 8 + 4);
    piVar5 = (int *)(param_1[7] + (char)param_1[1] * 8);
    if ((uVar3 & 1) != 0) {
      piVar5 = (int *)(*piVar5 + *(int *)(param_1[5] + ((int)uVar3 >> 1)));
    }
    (*(code *)*piVar5)();
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    if (param_1[4] != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[4],1,fparam_0);
    }
    iVar2 = DAT_0025b1b8;
    piVar5 = DAT_0025b1b4;
    iVar4 = param_1[0x11];
    if (iVar4 == 4) {
      if ((((*DAT_0025b1cc == 0) ||
           (cVar1 = *(char *)(*DAT_0025b1cc + 0x18), cVar1 != '\a' && cVar1 != '%')) ||
          (*DAT_0025b1d0 == 0)) || (iVar4 = func_00556D48(*DAT_0025b1d0), iVar4 == 0)) {
        local_1c = s_SE_ENV_LAVA_0025b1bc;
        local_20 = iVar2;
        func_004EC988(*piVar5,&local_20,(int)(param_1 + 0x1e));
      }
      if (param_1[0x12] != param_1[0x11]) {
        if (bVar6) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0x3c;
        }
        return func_0025B860((int)(param_1 + 0x1e),iVar2,DAT_0025b1d4,in_s1);
      }
    }
    else if (iVar4 == 5) {
      local_1c = s_SE_ENV_LAVA_0025b1bc;
      local_20 = DAT_0025b1b8;
      func_004EC988(*DAT_0025b1b4,&local_20,(int)(param_1 + 0x1e));
      if (param_1[0x12] != param_1[0x11]) {
        if (bVar6) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0x3c;
        }
        return func_0025B860((int)(param_1 + 0x1e),iVar2,DAT_0025b1d8,in_s1);
      }
    }
    else if (iVar4 == 6) {
      local_1c = s_SE_ENV_LAVA_0025b1bc;
      local_20 = DAT_0025b1b8;
      func_004EC988(*DAT_0025b1b4,&local_20,(int)(param_1 + 0x1e));
      if (param_1[0x12] != param_1[0x11]) {
        if (bVar6) {
          iVar2 = 0;
        }
        else {
          iVar2 = 0x3c;
        }
        func_0025B860((int)(param_1 + 0x1e),iVar2,DAT_0025b1c8,in_s1);
      }
    }
  }
  return 0;
}


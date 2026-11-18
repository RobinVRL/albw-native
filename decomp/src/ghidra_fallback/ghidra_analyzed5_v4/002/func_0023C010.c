#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00239D90(void);
extern int func_0023A524(void);
extern int func_0023B764(int param_1);
extern int func_0023B910(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0023BA44(int *param_1,float *param_2);
extern int func_0023BC00(int param_1);
extern int func_004356B4(int *param_1);
extern float DAT_0023c1d4;
extern float DAT_0023c1d8;
extern float DAT_0023c1dc;
extern float DAT_0023c1e0;
extern uint DAT_0023c1e4;

// USA 0023C010 <- EU 0023C010 (Ghidra, non-matching)
// GLOBAL DAT_0023c1d4 float
// GLOBAL DAT_0023c1d8 float
// GLOBAL DAT_0023c1dc float
// GLOBAL DAT_0023c1e0 float
// GLOBAL DAT_0023c1e4 uint

undefined4 func_0023C010(int *param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  if (*(char *)((int)param_1 + 0x435) == '\0') {
    iVar1 = func_0023B764((int)param_1);
    if (iVar1 == 0) {
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
      func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_0023c1d8);
    }
    if ((char)param_1[0x10d] != '\0') {
      param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - DAT_0023c1d4));
    }
    param_1[0x111] = param_1[0x113] + param_1[0x111];
    uVar2 = param_1[0x112];
    param_1[0x112] = param_1[0x114] + uVar2;
    func_0023BC00((int)param_1);
    if ((char)param_1[0x10d] == '\0') {
      if (0x5a < param_1[0x110]) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        if (*(char *)((int)param_1 + 0x435) == '\0') {
          func_00239D90();
        }
        return func_0023A524();
      }
    }
    else {
      if (0xb4 < param_1[0x110]) {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        if (*(char *)((int)param_1 + 0x435) != '\0') {
          return 0;
        }
        return func_00239D90();
      }
      local_20 = DAT_0023c1dc;
      local_1c = DAT_0023c1dc;
      local_18 = DAT_0023c1dc;
      iVar1 = func_0023B910((int)param_1,(uint)&local_20,uVar2,DAT_0023c1e0);
      if (iVar1 != 0) {
        func_0023BA44(param_1,&local_20);
      }
    }
    if ((uint)param_1[0xf5] <= DAT_0023c1e4) {
      iVar1 = param_1[0x104];
      if ((iVar1 != 0) && (*(char *)(param_1[0x103] + 0x61) != '\0')) {
        *(int *)(iVar1 + 4) = param_1[0xf4];
        *(int *)(iVar1 + 8) = param_1[0xf5];
        *(int *)(iVar1 + 0xc) = param_1[0xf6];
        func_004356B4((int *)param_1[0x104]);
      }
      param_1[0x110] = param_1[0x110] + 1;
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    if (*(char *)((int)param_1 + 0x435) == '\0') {
      return func_00239D90();
    }
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return 0;
}


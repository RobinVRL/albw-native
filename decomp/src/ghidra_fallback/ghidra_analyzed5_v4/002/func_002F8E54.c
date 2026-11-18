#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float DAT_002f8f28;
extern float DAT_002f8f2c;
extern int DAT_002f8f30;
extern int DAT_002f8f34;

// USA 002F8E54 <- EU 002F8E30 (Ghidra, non-matching)
// GLOBAL DAT_002f8f28 float
// GLOBAL DAT_002f8f2c float
// GLOBAL DAT_002f8f30 int
// GLOBAL DAT_002f8f34 int

undefined4 func_002F8E54(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((float *)(albw_frame + 0x0))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  #define local_1c (*(float *)(albw_frame + 0x14))
  uVar3 = 0;
  if (*(int *)(param_1 + 1000) == *(int *)(param_1 + 0x8dc)) {
    if (*(char *)(param_1 + 0x90a) == '\0') {
      fVar4 = DAT_002f8f2c;
      fparam_0 = DAT_002f8f28;
      func_00115C54(local_30,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
      func_00115C70(local_30,(float *)(param_1 + 0x8d0),local_30);
      uVar2 = func_004904CC(*(float *)(param_1 + 0x3dc),*(float *)(param_1 + 0x3e4));
      func_004D80A4(local_24,uVar2,fparam_0);
      if (local_30[0] * local_24[0] + local_28 * local_1c < fVar4) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x90a) = 0;
    }
  }
  else {
    fVar4 = DAT_002f8f2c;
    iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x8dc),DAT_002f8f34,
                          DAT_002f8f30,DAT_002f8f28);
    if (iVar1 == 0) {
      *(float *)(param_1 + 0x3dc) = fVar4;
      *(float *)(param_1 + 0x3e4) = fVar4;
    }
    else {
      func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x8e4));
    }
  }
  return uVar3;
}


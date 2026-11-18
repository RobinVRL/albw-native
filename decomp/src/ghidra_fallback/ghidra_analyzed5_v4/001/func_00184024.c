#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00183CCC(int param_1);
extern int func_00184440(void);
extern int func_004BD784(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_004C1088(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_001841d0;
extern float DAT_001841d4;
extern float DAT_001841d8;
extern float DAT_001841dc;
extern int DAT_001841e0;
extern int DAT_001841e4;
extern float DAT_001841e8;
extern float DAT_001841ec;

// USA 00184024 <- EU 00184024 (Ghidra, non-matching)
// GLOBAL DAT_001841d0 float
// GLOBAL DAT_001841d4 float
// GLOBAL DAT_001841d8 float
// GLOBAL DAT_001841dc float
// GLOBAL DAT_001841e0 int
// GLOBAL DAT_001841e4 int
// GLOBAL DAT_001841e8 float
// GLOBAL DAT_001841ec float

void func_00184024(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint extraout_r1;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  if (*(short *)(param_1 + 0x9c0) != 0) {
    *(short *)(param_1 + 0x9c0) = *(short *)(param_1 + 0x9c0) + -1;
    func_00183CCC(param_1);
    func_00184440();
    iVar2 = func_004C1088(param_1,0x80000000,DAT_001841d4,DAT_001841d0);
    if (iVar2 == 0) {
      uVar3 = (uint)*(short *)(param_1 + 0x9f6);
      pfVar4 = (float *)(param_1 + 0xa0c);
      pfVar5 = pfVar4;
      if (uVar3 < 0x1e) {
        pfVar5 = pfVar4 + uVar3 * 2;
        pfVar4 = pfVar4 + uVar3 * 2;
      }
      local_48 = *pfVar5;
      local_40 = pfVar4[1];
      uStack_44 = *(undefined4 *)(param_1 + 0x3d4);
      pfVar5 = (float *)(param_1 + 0x3d0);
      fparam_0 = DAT_001841d8;
      func_00115C70(&local_3c,&local_48,pfVar5);
      fVar7 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
      if (fparam_0 < fVar7) {
        fVar6 = DAT_001841dc / fVar7;
        local_3c = local_3c * fVar6;
        local_38 = local_38 * fVar6;
        local_34 = local_34 * fVar6;
        func_00115DAC(pfVar5,&local_3c,pfVar5,fparam_0);
      }
      else {
        *pfVar5 = local_48;
        *(undefined4 *)(param_1 + 0x3d4) = uStack_44;
        *(float *)(param_1 + 0x3d8) = local_40;
      }
      func_00115C70(&local_3c,&local_48,(float *)(param_1 + 0x3d0));
      local_30 = local_3c;
      fStack_2c = local_38;
      fStack_28 = local_34;
      iVar2 = func_0068C690(&local_30);
      fVar6 = DAT_001841e8;
      func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_001841e4,DAT_001841e0,DAT_001841e8);
      if (*(char *)(param_1 + 0x9c7) != '\0') {
        func_004BD784(param_1,extraout_r1,fVar6,DAT_001841ec);
      }
      if ((fVar7 <= fparam_0) &&
         (sVar1 = *(short *)(param_1 + 0x9f6) + 1, *(short *)(param_1 + 0x9f6) = sVar1, 0x1d < sVar1
         )) {
        *(undefined2 *)(param_1 + 0x9f6) = 0x1d;
        *(undefined2 *)(param_1 + 0x9c0) = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x9c0) = 0;
    }
  }
  return;
}


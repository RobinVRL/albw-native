#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_003010D0(int param_1,int param_2);
extern int func_0030153C(int param_1,int param_2);
extern int func_00520FC0(void);
extern undefined4 DAT_0030103c;
extern int *DAT_00301040;
extern float DAT_00301044;
extern undefined4 DAT_00301048;
extern float DAT_0030104c;
extern float DAT_00301050;
extern undefined4 DAT_00301054;
extern int *DAT_00301058;
extern float DAT_0030105c;

// GLOBAL DAT_0030103c undefined4
// GLOBAL DAT_00301040 int *
// GLOBAL DAT_00301044 float
// GLOBAL DAT_00301048 undefined4
// GLOBAL DAT_0030104c float
// GLOBAL DAT_00301050 float
// GLOBAL DAT_00301054 undefined4
// GLOBAL DAT_00301058 int *
// GLOBAL DAT_0030105c float
// USA 00300E80 <- EU 00300E5C (Ghidra, function missing from the decomp table)

void func_00300E80(int param_1,char *param_2,float fparam_0,float fparam_1)

{
  char cVar1;
  short sVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c ((uint *)(albw_frame + 0x4))
  fVar3 = DAT_00301044;
  uVar8 = DAT_0030103c;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    sVar2 = *(short *)(param_2 + 8);
    *(short *)(param_2 + 8) = sVar2 + -1;
    if ((short)(sVar2 + -1) < 1) {
      *param_2 = '\x01';
      uVar4 = DAT_00301048;
      *(undefined4 *)(param_2 + 0x3c) = uVar8;
      *(undefined4 *)(param_2 + 0x40) = uVar4;
      *(undefined4 *)(param_2 + 0x44) = uVar8;
      param_2[8] = '\x1e';
      param_2[9] = '\0';
      func_00151148(*(int *)(param_2 + 0x14),1);
    }
    goto LAB_00300eb0;
  }
  if (cVar1 == '\x01') {
    *(int *)(param_2 + 4) = *DAT_00301040 + *(int *)(param_2 + 4);
    sVar2 = *(short *)(param_2 + 8);
    *(short *)(param_2 + 8) = sVar2 + -1;
    if ((short)(sVar2 + -1) < 1) {
      *param_2 = '\x02';
      iVar6 = func_00520FC0();
      fVar3 = DAT_0030104c;
      fVar7 = *(float *)(iVar6 + 4);
      *(undefined4 *)(param_2 + 0x3c) = uVar8;
      fparam_0 = ((fVar7 - *(float *)(param_2 + 0x28)) + fVar3) * DAT_00301050;
      *(float *)(param_2 + 0x40) = fparam_0;
      *(undefined4 *)(param_2 + 0x44) = uVar8;
      param_2[8] = '(';
      param_2[9] = '\0';
      goto LAB_00300eb0;
    }
    fparam_0 = *(float *)(param_2 + 0xc) + fVar3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return;
      }
      fparam_0 = DAT_00301044;
      func_0030153C(param_1,(int)param_2);
      goto LAB_00300eb0;
    }
    *(int *)(param_2 + 4) = *DAT_00301040 + *(int *)(param_2 + 4);
    sVar2 = *(short *)(param_2 + 8);
    *(short *)(param_2 + 8) = sVar2 + -1;
    if ((short)(sVar2 + -1) < 1) {
      local_1c[0] = *(uint *)(param_1 + 0x2cc);
      func_0014EB8C((int)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x18),
                    *(undefined2 **)(param_1 + 0x3a0),local_1c,*(undefined2 *)(param_1 + 0x54),
                    param_2 + 0xbc,(short)DAT_00301054);
      piVar5 = DAT_00301058;
      *param_2 = '\x03';
      func_00115C70((float *)(param_2 + 0x3c),*(float **)(*piVar5 + 0x1c),(float *)(param_2 + 0x24))
      ;
      *(undefined4 *)(param_2 + 0x40) = uVar8;
      func_00115DC8((float *)(param_2 + 0x3c));
      fparam_0 = DAT_0030105c;
      func_00115D70((float *)(param_2 + 0x3c),(float *)(param_2 + 0x3c),DAT_0030105c);
      goto LAB_00300eb0;
    }
    fparam_0 = *(float *)(param_2 + 0xc) - fVar3;
  }
  *(float *)(param_2 + 0xc) = fparam_0;
LAB_00300eb0:
  func_003010D0(param_1,(int)param_2);
  return;
}


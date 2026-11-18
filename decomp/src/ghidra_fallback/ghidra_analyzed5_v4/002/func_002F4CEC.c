#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00352198(int param_1,int *param_2);
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_00520FC0(void);
extern float func_0058AC38(int param_1);
extern int func_0068C690(float *param_1);
extern float fRam002f4e14;
extern float fRam002f4e18;
extern int iRam002f4e28;
extern undefined4 uRam002f4e0c;
extern undefined4 uRam002f4e10;
extern char s_ChargeTsuki_002f4e1c[];

// USA 002F4CEC <- EU 002F4CC8 (Ghidra, non-matching)
// GLOBAL UNK_002f4e0c undefined4
// GLOBAL UNK_002f4e10 undefined4
// GLOBAL UNK_002f4e14 float
// GLOBAL UNK_002f4e18 float
// GLOBAL UNK_002f4e28 int
// GLOBAL s_ChargeTsuki_002f4e1c string

void func_002F4CEC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define pcStack_1c (*(char * *)(albw_frame + 0x14))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  if (*(char *)(param_1 + 0x8cd) != '!') {
    func_004FABDC(param_1,3,0xffffffff,0);
    uVar6 = uRam002f4e0c;
    *(undefined4 *)(param_1 + 0x3dc) = uRam002f4e0c;
    *(undefined4 *)(param_1 + 0x3e0) = uVar6;
    *(undefined4 *)(param_1 + 0x3e4) = uVar6;
    uVar1 = uRam002f4e10;
    *(undefined4 *)(param_1 + 0xb10) = 0x55;
    *(undefined4 *)(param_1 + 0xb14) = uVar1;
    *(undefined4 *)(param_1 + 0x920) = 1;
    fparam_0 = fRam002f4e14;
    *(undefined4 *)(param_1 + 0xb0c) = 0;
    fVar5 = func_0058AC38(param_1);
    iVar2 = (int)fVar5 + 0x1e;
    *(int *)(param_1 + 0xb28) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb2c) = uVar6;
    }
    else {
      fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb2c) = fparam_0 / fVar5;
    }
    *(undefined4 *)(param_1 + 0xb24) = 0;
    func_004FB4E0(param_1,fparam_0);
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&fStack_30,pfVar3,(float *)(param_1 + 0x3d0));
    uStack_2c = uVar6;
    uVar4 = func_0068C690(&fStack_30);
    func_004D80A4((float *)(param_1 + 0x3dc),uVar4,fRam002f4e18);
    iStack_20 = iRam002f4e28;
    *(undefined4 *)(param_1 + 0x3e0) = uVar6;
    pcStack_1c = s_ChargeTsuki_002f4e1c;
    func_00352198(param_1 + 0x324,&iStack_20);
    func_0036C09C(param_1 + 0x964,2);
  }
  return;
}


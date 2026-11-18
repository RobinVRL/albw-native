#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A99FC(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5);
extern int func_004A9ADC(int param_1,undefined4 param_2,uint param_3,int *param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern float DAT_004a9080;
extern int *DAT_004a9084;
extern int *DAT_004a9088;
extern int DAT_004a908c;

// USA 004A8F40 <- EU 004A8F18 (Ghidra, non-matching)
// GLOBAL DAT_004a9080 float
// GLOBAL DAT_004a9084 int *
// GLOBAL DAT_004a9088 int *
// GLOBAL DAT_004a908c int

uint func_004A8F40(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  func_0068B2DC(afStack_40,DAT_004a9080,DAT_004a9080,DAT_004a9080,DAT_004a9080,DAT_004a9080,
                DAT_004a9080);
  uVar4 = 0;
  iVar1 = func_0052FBA0(*DAT_004a9084 + 0x3dbbc,param_2[3]);
  if ((iVar1 == 0) || (pfVar2 = (float *)(int)*(short *)(iVar1 + 0x54), (int)pfVar2 < 0)) {
    pfVar2 = (float *)(int)*(short *)(*(int *)(*DAT_004a9088 + 0x38) + 0x15b40);
  }
  if (-1 < (int)pfVar2) {
    pfVar2 = (float *)(*(int *)(*DAT_004a9088 + 0x38) + 0x183c + (int)pfVar2 * DAT_004a908c * 4);
    pfVar5 = pfVar2 + 0x100;
    if (pfVar5 != (float *)0x0) {
      uVar3 = 0;
      do {
        if ((param_3 & 1 << (uVar3 & 0xff)) != 0) {
          pfVar2 = (float *)func_004A99FC(param_1,(int)pfVar5,afStack_40,uVar3,param_2);
          uVar4 = uVar4 | (uint)pfVar2;
          if (*(char *)(param_1 + 0xbf4c) != '\0') break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 0xf);
      goto LAB_004a9048;
    }
  }
  uVar3 = 0;
  do {
    if ((param_3 & 1 << (uVar3 & 0xff)) != 0) {
      pfVar2 = (float *)func_004A9ADC(param_1,afStack_40,uVar3,param_2);
      uVar4 = uVar4 | (uint)pfVar2;
      if (*(char *)(param_1 + 0xbf4c) != '\0') break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xf);
LAB_004a9048:
  if (uVar4 != 0) {
    pfVar2 = (float *)*param_2;
  }
  if (uVar4 != 0 && pfVar2 != (float *)0x0) {
    func_00115C54(pfVar2,pfVar2,afStack_40);
    func_00115C54((float *)*param_2,(float *)*param_2,afStack_34);
  }
  return uVar4;
}


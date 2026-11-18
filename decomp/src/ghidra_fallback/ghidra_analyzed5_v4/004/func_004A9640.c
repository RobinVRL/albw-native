#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004A99FC(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5);
extern int func_004A9ADC(int param_1,undefined4 param_2,uint param_3,int *param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern float DAT_004a97c0;
extern int *DAT_004a97c4;
extern int *DAT_004a97c8;
extern int DAT_004a97cc;

// USA 004A9640 <- EU 004A9618 (Ghidra, non-matching)
// GLOBAL DAT_004a97c0 float
// GLOBAL DAT_004a97c4 int *
// GLOBAL DAT_004a97c8 int *
// GLOBAL DAT_004a97cc int

uint func_004A9640(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_48 ((float *)(albw_frame + 0x8))
  #define afStack_3c ((float *)(albw_frame + 0x14))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define piStack_2c (*(int * *)(albw_frame + 0x24))
  #define uStack_28 (*(uint *)(albw_frame + 0x28))
  local_30 = param_1;
  piStack_2c = param_2;
  uStack_28 = param_3;
  func_0068B2DC(afStack_48,DAT_004a97c0,DAT_004a97c0,DAT_004a97c0,DAT_004a97c0,DAT_004a97c0,
                DAT_004a97c0);
  uVar7 = 0;
  iVar2 = func_0052FBA0(*DAT_004a97c4 + 0x3dbbc,param_2[3]);
  iVar1 = local_30;
  if ((iVar2 == 0) || (pfVar3 = (float *)(int)*(short *)(iVar2 + 0x54), (int)pfVar3 < 0)) {
    pfVar3 = (float *)(int)*(short *)(*(int *)(*DAT_004a97c8 + 0x38) + 0x15b40);
  }
  if (((int)pfVar3 < 0) ||
     (iVar2 = (int)pfVar3 * DAT_004a97cc, pfVar3 = (float *)0x0,
     *(int *)(*DAT_004a97c8 + 0x38) + iVar2 * 4 == -0x1c3c)) {
    uVar9 = 0;
    do {
      if ((param_3 & 1 << (uVar9 & 0xff)) != 0) {
        pfVar3 = (float *)func_004A9ADC(local_30,afStack_48,uVar9,param_2);
        uVar7 = uVar7 | (uint)pfVar3;
        if (*(char *)(iVar1 + 0xbf4c) != '\0') break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0xf);
  }
  else {
    uVar9 = 0;
    iVar2 = local_30 + 0xbf3c;
    do {
      pfVar3 = (float *)0x1;
      if ((param_3 & 1 << (uVar9 & 0xff)) != 0) {
        iVar4 = *(int *)(iVar1 + 0xbf40);
        iVar8 = *(int *)(iVar1 + 0xbf48);
        while( true ) {
          pfVar6 = (float *)(iVar4 - iVar8);
          pfVar3 = (float *)(iVar2 - *(int *)(iVar1 + 0xbf48));
          if (pfVar6 == pfVar3) break;
          uVar5 = func_004A99FC(local_30,(int)pfVar6,afStack_48,uVar9,param_2);
          pfVar3 = (float *)(uint)*(byte *)(iVar1 + 0xbf4c);
          uVar7 = uVar7 | uVar5;
          if (pfVar3 != (float *)0x0) goto LAB_004a9788;
          iVar4 = *(int *)((int)pfVar6 + iVar8 + 4);
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0xf);
  }
LAB_004a9788:
  if (uVar7 != 0) {
    pfVar3 = (float *)*param_2;
  }
  if (uVar7 != 0 && pfVar3 != (float *)0x0) {
    func_00115C54(pfVar3,pfVar3,afStack_48);
    func_00115C54((float *)*param_2,(float *)*param_2,afStack_3c);
  }
  return uVar7;
}


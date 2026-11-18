#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014FA44(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5, undefined4 param_6,int param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001967d0;
extern float DAT_001967d4;
extern float DAT_001967d8;
extern float DAT_001967dc;
extern float DAT_001967e0;
extern float DAT_001967e4;
extern float DAT_001967e8;

// USA 0019658C <- EU 0019658C (Ghidra, non-matching)
// GLOBAL DAT_001967d0 int *
// GLOBAL DAT_001967d4 float
// GLOBAL DAT_001967d8 float
// GLOBAL DAT_001967dc float
// GLOBAL DAT_001967e0 float
// GLOBAL DAT_001967e4 float
// GLOBAL DAT_001967e8 float

undefined4 func_0019658C(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  piVar7 = (int *)(param_1 + 0x41c);
  piVar6 = *(int **)(param_1 + 0x430);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8 + 4);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x438) + *(char *)(param_1 + 0x420) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*pcVar2)((int)((int)piVar6) + ((int)uVar1 >> 1));
  iVar3 = *piVar7;
  *piVar7 = iVar3 + 1;
  if (*(int *)(param_1 + 0x42c) != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x42c),1,fVar8);
  }
  pfVar5 = (float *)(param_1 + 0x3dc);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar5);
  uVar4 = extraout_r1;
  if (*(char *)(*DAT_001967d0 + 0x18) == '\a' || *(char *)(*DAT_001967d0 + 0x18) == '%') {
    local_24 = DAT_001967d4;
    local_20 = DAT_001967d4;
    local_1c = DAT_001967d4;
    piVar6 = (int *)0x0;
    pfVar5 = *(float **)(param_1 + 0x460);
    fVar8 = DAT_001967d4;
    func_0014FA44(param_1,(int)&local_24,pfVar5,0,0x108,0,0);
    if ((local_24 == fVar8 && local_20 == fVar8) && local_1c == fVar8) {
      *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = DAT_001967d8;
    }
    else {
      fVar8 = DAT_001967d8;
      func_00659A54(piVar7,9);
      iVar3 = func_0068C690(&local_24);
      *(int *)(param_1 + 0x45c) = iVar3;
      fVar8 = SQRT(local_24 * local_24 + local_1c * local_1c) * DAT_001967dc + fVar8;
      if (0x3fc00000 < (int)ALBW_AS_U32(fVar8)) {
        fVar8 = DAT_001967e0;
      }
      *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = fVar8;
      func_00115D70(&local_24,&local_24,DAT_001967e4);
      pfVar5 = &local_24;
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar5);
    }
    func_0051D2CC((int *)(param_1 + 0x4a4),*(int *)(param_1 + 0x45c) - *(int *)(param_1 + 1000),
                  DAT_001967e8);
    uVar4 = extraout_r1_00;
  }
  if (*(int **)(param_1 + 0x410) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x410),uVar4,pfVar5,piVar6);
    pfVar5 = (float *)0x0;
    func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
    uVar4 = extraout_r1_01;
  }
  if (*(int **)(param_1 + 0x414) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x414),uVar4,pfVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  iVar3 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar3 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  return func_001512B4(*(int *)(param_1 + 0x418),(float *)(param_1 + 0x3d0));
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0033C524(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern undefined4 DAT_0033d308;
extern float DAT_0033d30c;
extern undefined4 DAT_0033d310;

// USA 0033D074 <- EU 0033D050 (Ghidra, non-matching)
// GLOBAL DAT_0033d308 undefined4
// GLOBAL DAT_0033d30c float
// GLOBAL DAT_0033d310 undefined4

void func_0033D074(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define fStack_5c (*(float *)(albw_frame + 0x4))
  #define fStack_58 (*(float *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define local_1c (*(float *)(albw_frame + 0x44))
  uVar7 = DAT_0033d308;
  if (*(uint *)(param_1 + 0x520) < *(uint *)(param_1 + 0x524)) {
    *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) + 1;
    if (*(uint *)(param_1 + 0x524) <= *(uint *)(param_1 + 0x520)) {
      *(undefined4 *)(param_1 + 0x3e0) = uVar7;
    }
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar3;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar6);
  }
  func_0033C524(param_1);
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x444);
  pfVar5 = (float *)(param_1 + 0x444);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined1 *)(param_1 + 0x4e5) = 0;
  if ((*(int *)(param_1 + 0x480) != 0) && (*(char *)(param_1 + 0x45c) != '\0')) {
    if ((*pfVar5 == *(float *)(param_1 + 0x450)) &&
       ((*(float *)(param_1 + 0x448) == *(float *)(param_1 + 0x454) &&
        (*(float *)(param_1 + 0x44c) == *(float *)(param_1 + 0x458))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      *(undefined1 *)(param_1 + 0x4e5) = 1;
      func_00115C70(&local_24,pfVar5,(float *)(param_1 + 0x450));
      local_30 = local_24;
      local_28 = local_1c;
      local_2c = uVar7;
      func_00115DC8(&local_30);
      fVar6 = DAT_0033d30c;
      func_00115D70(&local_24,&local_30,DAT_0033d30c);
      local_60 = local_24;
      fStack_5c = local_20;
      fStack_58 = local_1c;
      func_00115C54(&local_24,pfVar5,&local_60);
      local_40 = local_24;
      local_3c = local_20;
      local_38 = local_1c;
      func_00115D70(&local_24,&local_30,fVar6);
      local_60 = local_24;
      fStack_5c = local_20;
      fStack_58 = local_1c;
      func_00115C70(&local_24,pfVar5,&local_60);
      local_50 = local_24;
      local_48 = local_1c;
      local_4c = local_20 + fVar6;
      local_3c = local_3c + fVar6;
      func_00115C54(&local_24,&local_40,&local_50);
      iVar3 = *(int *)(param_1 + 0x480);
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0xc);
      *(float *)(iVar3 + 4) = local_24 * fVar6;
      *(float *)(iVar3 + 8) = local_20;
      *(float *)(iVar3 + 0xc) = local_1c * fVar6;
      iVar3 = *(int *)(param_1 + 0x480);
      *(float *)(iVar3 + 0x58) = local_40;
      *(float *)(iVar3 + 0x5c) = local_3c;
      *(float *)(iVar3 + 0x60) = local_38;
      uVar7 = DAT_0033d310;
      *(float *)(iVar3 + 100) = local_50;
      *(float *)(iVar3 + 0x68) = local_4c;
      *(float *)(iVar3 + 0x6c) = local_48;
      *(undefined4 *)(iVar3 + 0x70) = uVar7;
      func_004356B4(*(int **)(param_1 + 0x480));
    }
  }
  return;
}


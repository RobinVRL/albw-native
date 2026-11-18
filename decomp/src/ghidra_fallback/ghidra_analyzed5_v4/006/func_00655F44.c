#include "ghidra_types.h"

extern int func_00219738(int param_1);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_002918D8(int param_1);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005568D4(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00660AE4(int param_1,undefined4 param_2);
extern int func_00660B50(int param_1);
extern int DAT_006560e0;
extern int DAT_006560e4;
extern float DAT_006560e8;
extern float DAT_006560ec;
extern float DAT_006560f0;
extern int *DAT_006560f4;

// USA 00655F44 <- EU 00655F1C (Ghidra, non-matching)
// GLOBAL DAT_006560e0 int
// GLOBAL DAT_006560e4 int
// GLOBAL DAT_006560e8 float
// GLOBAL DAT_006560ec float
// GLOBAL DAT_006560f0 float
// GLOBAL DAT_006560f4 int *

undefined4 func_00655F44(int param_1)

{
  byte bVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float fparam_0;
  undefined8 uVar8;
  
  iVar7 = DAT_006560e4;
  fparam_0 = DAT_006560e8;
  func_0051D2F4((int *)(param_1 + 1000),0,DAT_006560e4,DAT_006560e0,DAT_006560e8);
  uVar8 = func_0058AB74(param_1);
  if (((int)uVar8 == 1) && (iVar4 = func_0058A8F0(param_1), iVar4 != 0)) {
    iVar7 = -1;
    func_004FABDC(param_1,2,0xffffffff,0);
  }
  pfVar5 = (float *)func_00520FC0();
  func_004D838C((float *)(param_1 + 0x3d0),pfVar5,fparam_0,DAT_006560f0,DAT_006560ec);
  piVar2 = DAT_006560f4;
  if (*(short *)(param_1 + 0x8e8) == 0) {
    *(undefined2 *)(param_1 + 0x8e8) = 10;
    if (((*(char *)(param_1 + 0x8ed) == '\x01') && (iVar4 = *piVar2, iVar4 != 0)) &&
       (sVar3 = func_005568D4(iVar4), sVar3 != 0)) {
      func_00255B48(iVar4,-1,iVar7);
    }
  }
  else {
    *(short *)(param_1 + 0x8e8) = *(short *)(param_1 + 0x8e8) + -1;
  }
  func_00219738(param_1);
  if (*(char *)(param_1 + 0x8ed) == '\0') {
    if (0x28 < *(ushort *)(param_1 + 0x8e6)) goto LAB_006560b4;
  }
  else if (0x32 < *(ushort *)(param_1 + 0x8e6)) goto LAB_006560b4;
  if (*(short *)(param_1 + 0x8e2) == 0) {
    if ((*(char *)(param_1 + 0x8ed) == '\0') && (iVar7 = *piVar2, iVar7 != 0)) {
      uVar6 = func_0055696C(iVar7,1);
      if ((uVar6 == 0) || (2 < uVar6)) {
LAB_006560b4:
        func_00660AE4(param_1 + 0x8f0,6);
        func_003931EC((undefined4 *)(param_1 + 0x8f0),6);
        return func_00660B50(param_1 + 0x8f0);
      }
      uVar6 = func_0055696C(iVar7,1);
      if (uVar6 < 3) {
        func_002918D8(iVar7);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x914);
    func_00660AE4(param_1 + 0x8f0,(uint)bVar1);
    func_003931EC((undefined4 *)(param_1 + 0x8f0),(int)(char)bVar1);
    func_00660B50(param_1 + 0x8f0);
  }
  else {
    *(short *)(param_1 + 0x8e2) = *(short *)(param_1 + 0x8e2) + -1;
  }
  return 0;
}


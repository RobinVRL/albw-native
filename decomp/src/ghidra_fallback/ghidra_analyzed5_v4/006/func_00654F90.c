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
extern int func_0065DF0C(int param_1,undefined4 param_2);
extern int func_0065DF78(int param_1);
extern int DAT_0065512c;
extern int DAT_00655130;
extern float DAT_00655134;
extern float DAT_00655138;
extern float DAT_0065513c;
extern int *DAT_00655140;

// USA 00654F90 <- EU 00654F68 (Ghidra, non-matching)
// GLOBAL DAT_0065512c int
// GLOBAL DAT_00655130 int
// GLOBAL DAT_00655134 float
// GLOBAL DAT_00655138 float
// GLOBAL DAT_0065513c float
// GLOBAL DAT_00655140 int *

undefined4 func_00654F90(int param_1)

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
  
  iVar7 = DAT_00655130;
  fparam_0 = DAT_00655134;
  func_0051D2F4((int *)(param_1 + 1000),0,DAT_00655130,DAT_0065512c,DAT_00655134);
  uVar8 = func_0058AB74(param_1);
  if (((int)uVar8 == 1) && (iVar4 = func_0058A8F0(param_1), iVar4 != 0)) {
    iVar7 = -1;
    func_004FABDC(param_1,2,0xffffffff,0);
  }
  pfVar5 = (float *)func_00520FC0();
  func_004D838C((float *)(param_1 + 0x3d0),pfVar5,fparam_0,DAT_0065513c,DAT_00655138);
  piVar2 = DAT_00655140;
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
    if (0x28 < *(ushort *)(param_1 + 0x8e6)) goto LAB_00655100;
  }
  else if (0x32 < *(ushort *)(param_1 + 0x8e6)) goto LAB_00655100;
  if (*(short *)(param_1 + 0x8e2) == 0) {
    if ((*(char *)(param_1 + 0x8ed) == '\0') && (iVar7 = *piVar2, iVar7 != 0)) {
      uVar6 = func_0055696C(iVar7,1);
      if ((uVar6 == 0) || (2 < uVar6)) {
LAB_00655100:
        func_0065DF0C(param_1 + 0x8f0,6);
        func_003931EC((undefined4 *)(param_1 + 0x8f0),6);
        return func_0065DF78(param_1 + 0x8f0);
      }
      uVar6 = func_0055696C(iVar7,1);
      if (uVar6 < 3) {
        func_002918D8(iVar7);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x914);
    func_0065DF0C(param_1 + 0x8f0,(uint)bVar1);
    func_003931EC((undefined4 *)(param_1 + 0x8f0),(int)(char)bVar1);
    func_0065DF78(param_1 + 0x8f0);
  }
  else {
    *(short *)(param_1 + 0x8e2) = *(short *)(param_1 + 0x8e2) + -1;
  }
  return 0;
}


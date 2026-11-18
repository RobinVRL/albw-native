#include "ghidra_types.h"

extern int func_003DE9C4(int param_1,int param_2,int param_3,undefined1 param_4);
extern int func_003DEB34(int param_1,int param_2,float fparam_0);
extern int func_003DF674(int param_1,int param_2,undefined2 param_3);
extern int func_003DF770(int param_1,int param_2,undefined2 param_3,undefined2 param_4);
extern int func_003DF7D0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5, undefined2 param_6,undefined2 param_7);
extern int func_003E0C9C(uint *param_1);
extern float DAT_003e1028;
extern int DAT_003e102c;
extern int DAT_003e1030;
extern uint DAT_003e1034;
extern int DAT_003e1038;
extern float DAT_003e103c;
extern int DAT_003e1040;
extern int DAT_003e1044;

// USA 003E0DCC <- EU 003E0DAC (Ghidra, non-matching)
// GLOBAL DAT_003e1028 float
// GLOBAL DAT_003e102c int
// GLOBAL DAT_003e1030 int
// GLOBAL DAT_003e1034 uint
// GLOBAL DAT_003e1038 int
// GLOBAL DAT_003e103c float
// GLOBAL DAT_003e1040 int
// GLOBAL DAT_003e1044 int

void func_003E0DCC(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  
  bVar5 = (param_1[0x1b] & 1) != 0;
  if (bVar5) {
    func_003E0C9C(param_1);
  }
  if ((param_1[0x1b] & 2) != 0) {
    fVar7 = (float)VectorSignedToFloat(param_1[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = ALBW_AS_F32(param_1[9]) * fVar7 * DAT_003e1028;
    param_1[10] = (uint)ALBW_AS_U32(fVar7);
    func_003DEB34(DAT_003e102c,*param_1 & 0xff,fVar7);
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] | 0x20;
    }
    bVar5 = true;
  }
  if ((param_1[0x1b] & 4) != 0) {
    func_003DF674(DAT_003e102c,*param_1 & 0xff,(ushort)*(byte *)((int)param_1 + 0xf));
    bVar5 = true;
  }
  if ((param_1[0x1b] & 8) != 0) {
    func_003DF770(DAT_003e102c,*param_1 & 0xff,(short)param_1[4],
                  *(undefined2 *)((int)param_1 + 0x12));
  }
  if ((param_1[0x1b] & 0x10) != 0) {
    func_003DF7D0(DAT_003e102c,*param_1 & 0xff,(short)param_1[5],
                  *(undefined2 *)((int)param_1 + 0x16),(short)param_1[6],
                  *(undefined2 *)((int)param_1 + 0x1a),(short)param_1[7]);
  }
  if ((param_1[0x1b] & 0x20) == 0) {
    if (!bVar5) goto LAB_003e1014;
  }
  else {
    iVar3 = 2;
    uVar4 = 1;
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      iVar3 = 0;
      uVar4 = (int)param_1[10] <= DAT_003e1030;
      if (((bool)uVar4) && ((int)param_1[10] < 0x3f800001)) {
        uVar4 = 2;
      }
    }
    else if (*(char *)((int)param_1 + 0xe) == '\x01') {
      iVar3 = 1;
    }
    func_003DE9C4(DAT_003e102c,*param_1 & 0xff,iVar3,uVar4);
  }
  iVar3 = DAT_003e1038;
  param_1[0xb] = DAT_003e1034;
  iVar1 = DAT_003e1040;
  uVar2 = *(ushort *)((int)param_1 + 0x1e) & 3;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)
                                      ((*(ushort *)((int)param_1 + 0x1e) & 0xc) * 2 + iVar3 +
                                       uVar2 * 4 + -4),(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned(DAT_003e103c + fVar7 * ALBW_AS_F32(param_1[10]),3);
  param_1[0xb] = uVar6;
  uVar6 = uVar6 + *(int *)(iVar1 + (uint)*(byte *)((int)param_1 + 0xe) * 8 + uVar2 * 4 + -4);
  param_1[0xb] = uVar6;
  uVar6 = uVar6 + *(int *)(iVar1 + (uint)*(byte *)((int)param_1 + 0xf) * 8 + uVar2 * 4 + 0x14);
  param_1[0xb] = uVar6;
  uVar2 = param_1[0x12];
  iVar3 = 1;
  bVar5 = uVar2 != 0;
  if (!bVar5) {
    uVar2 = param_1[0x13];
  }
  if (bVar5 || uVar2 != 0) {
LAB_003e0fd4:
    iVar3 = 2;
  }
  else {
    uVar2 = param_1[0x14];
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = param_1[0x15];
    }
    if (!bVar5 || uVar2 != 0) goto LAB_003e0fd4;
  }
  uVar2 = param_1[0x16];
  bVar5 = uVar2 != 0;
  if (!bVar5) {
    uVar2 = param_1[0x17];
  }
  if (bVar5 || uVar2 != 0) {
LAB_003e1000:
    iVar3 = iVar3 + 1;
  }
  else {
    uVar2 = param_1[0x18];
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = param_1[0x19];
    }
    if (!bVar5 || uVar2 != 0) goto LAB_003e1000;
  }
  param_1[0xb] = uVar6 + iVar3 * DAT_003e1044 * 8;
LAB_003e1014:
  *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] & 0x8000;
  return;
}


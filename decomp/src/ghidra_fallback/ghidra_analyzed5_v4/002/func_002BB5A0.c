#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002BBAD4(int param_1);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern undefined8 func_0058AB74(int param_1);
extern int *DAT_002bb764;
extern float DAT_002bb768;
extern float DAT_002bb76c;
extern float DAT_002bb770;
extern float DAT_002bb774;
extern float DAT_002bb778;

// USA 002BB5A0 <- EU 002BB57C (Ghidra, non-matching)
// GLOBAL DAT_002bb764 int *
// GLOBAL DAT_002bb768 float
// GLOBAL DAT_002bb76c float
// GLOBAL DAT_002bb770 float
// GLOBAL DAT_002bb774 float
// GLOBAL DAT_002bb778 float

void func_002BB5A0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  fVar6 = func_004F898C();
  fVar6 = *(float *)(param_1 + 0x3e0) - fVar6;
  fVar7 = func_004F9594();
  fVar8 = DAT_002bb768;
  piVar3 = DAT_002bb764;
  if (fVar6 < -fVar7) {
    fVar6 = -fVar7;
  }
  *(float *)(param_1 + 0x3e0) = fVar6;
  iVar4 = func_0051D2F4((int *)(param_1 + 0x8fc),*(int *)(param_1 + 0x8f8),0,*piVar3,fVar8);
  if (iVar4 == 0) {
    *(float *)(param_1 + 0x8f0) = DAT_002bb76c;
    return;
  }
  fVar8 = DAT_002bb76c;
  func_002BBAD4(param_1);
  bVar1 = false;
  uVar5 = *(int *)(param_1 + 0x8fc) + 0x20000000;
  uVar9 = *(undefined4 *)(param_1 + 0x3e0);
  bVar2 = false;
  if (uVar5 >> 0x1e == 2) {
    if (*(char *)(param_1 + 0x90c) != '\0') {
LAB_002bb6c4:
      bVar1 = true;
      goto LAB_002bb66c;
    }
  }
  else if (uVar5 >> 0x1e == 0) {
    if (*(char *)(param_1 + 0x90c) != '\x02') goto LAB_002bb6c4;
  }
  else if (uVar5 >> 0x1e == 3) {
    if (*(char *)(param_1 + 0x90c) == '\x01') goto LAB_002bb6c4;
  }
  else {
    if (uVar5 >> 0x1e != 1) goto LAB_002bb66c;
    if (*(char *)(param_1 + 0x90c) == '\x03') goto LAB_002bb6c4;
  }
  bVar2 = true;
LAB_002bb66c:
  *(byte *)(param_1 + 0x90c) = (byte)(uVar5 >> 0x1e);
  if ((bVar1) && (fVar8 = DAT_002bb770, uVar10 = func_0058AB74(param_1), (int)uVar10 != 2)) {
    func_004FC07C(param_1,2,0xffffffff,0);
  }
  if (bVar2) {
    fVar8 = DAT_002bb774;
    if ((*(char *)(param_1 + 0x90c) == '\x01') &&
       (uVar10 = func_0058AB74(param_1), (int)uVar10 != 3)) {
      func_004FABDC(param_1,3,0xffffffff,0);
    }
    else if ((*(char *)(param_1 + 0x90c) == '\x03') &&
            (uVar10 = func_0058AB74(param_1), (int)uVar10 != 4)) {
      func_004FABDC(param_1,4,0xffffffff,0);
    }
  }
  fVar6 = *(float *)(param_1 + 0x8f0);
  fVar6 = fVar6 + (fVar8 - fVar6) * DAT_002bb778;
  *(float *)(param_1 + 0x8f0) = fVar6;
  func_0014FAFC(param_1,*(uint *)(param_1 + 0x8fc),fVar6);
  *(undefined4 *)(param_1 + 0x3e0) = uVar9;
  return;
}


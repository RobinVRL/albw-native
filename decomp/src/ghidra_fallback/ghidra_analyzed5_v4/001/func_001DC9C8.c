#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00169A40(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_001DD530(int param_1);
extern int func_0028C010(int param_1);
extern int func_0028C02C(int param_1,int param_2);
extern int func_0028C068(int param_1,float *param_2,uint param_3,float *param_4,int param_5);
extern int func_0028C40C(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_0028C45C(int param_1,uint param_2,int param_3,int *param_4);
extern int func_0028C4CC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_0028F968(int param_1,float *param_2);
extern int func_0028FE4C(int param_1);
extern int func_002D16D0(int param_1,int param_2);
extern int func_002D4188(int param_1,int param_2);
extern int func_004CE9C4(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_00521380(int param_1);
extern int func_00537C3C(void);
extern int func_0055B350(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_001dcd28;
extern int *DAT_001dcd2c;
extern float DAT_001dcd30;
extern float DAT_001dcd34;
extern float DAT_001dcd38;
extern uint DAT_001dcd3c;

// USA 001DC9C8 <- EU 001DC9C8 (Ghidra, non-matching)
// GLOBAL DAT_001dcd28 int *
// GLOBAL DAT_001dcd2c int *
// GLOBAL DAT_001dcd30 float
// GLOBAL DAT_001dcd34 float
// GLOBAL DAT_001dcd38 float
// GLOBAL DAT_001dcd3c uint

void func_001DC9C8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  float fparam_0;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c ((float *)(albw_frame + 0x4))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_20 (*(float *)(albw_frame + 0x40))
  uVar4 = 0;
  uVar5 = (uint)*(byte *)(*DAT_001dcd28 + 0x18);
  if (uVar5 == 0) {
    iVar3 = *(int *)(*DAT_001dcd28 + 0x1c);
    uVar4 = (uint)(iVar3 == 0x2a);
    if (iVar3 != 0x2a) {
      uVar4 = 0;
    }
    uVar5 = (uint)(iVar3 == 0x28);
    uVar4 = (uint)(iVar3 == 0x2b) | uVar5 | uVar4;
  }
  uVar8 = *(char *)(*DAT_001dcd2c + 0x25) == '\x03' | uVar4;
  iVar3 = *(int *)(param_1 + 0x4b0);
  fparam_0 = DAT_001dcd30;
  if (((iVar3 != 2) && (fparam_0 = DAT_001dcd34, iVar3 != 3)) &&
     (fparam_0 = DAT_001dcd30, iVar3 == 4)) {
    fparam_0 = DAT_001dcd38;
  }
  piVar10 = (int *)(param_1 + 0x600);
  fVar12 = DAT_001dcd34;
  fVar13 = DAT_001dcd30;
  func_0028C4CC(*(int *)(param_1 + 0x600),uVar4,uVar5,param_4,fparam_0);
  func_0028C45C(*piVar10,*(uint *)(param_1 + 0x434),uVar8 ^ 1,param_4);
  bVar1 = func_00537C3C();
  uVar4 = (uint)bVar1;
  if ((*(int *)(param_1 + 0x490) == 0) || (uVar8 != 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  piVar7 = *(int **)(param_1 + 0x600);
  func_004CE9C4((int)piVar7,iVar3,uVar4,piVar7);
  func_0028C40C(*piVar10,*(int *)(param_1 + 0x4ac),uVar4,piVar7);
  func_00169A40(*piVar10,*(int *)(param_1 + 0x4b4),uVar4,piVar7);
  iVar3 = *(int *)(param_1 + 0x604);
  iVar6 = *piVar10;
  uVar9 = *(undefined4 *)(iVar3 + 0x330);
  uVar11 = *(undefined4 *)(iVar3 + 0x334);
  *(undefined4 *)(iVar6 + 0xbc) = *(undefined4 *)(iVar3 + 0x32c);
  *(undefined4 *)(iVar6 + 0xc0) = uVar9;
  *(undefined4 *)(iVar6 + 0xc4) = uVar11;
  iVar6 = *piVar10;
  iVar3 = func_0055B350(*(int *)(param_1 + 0x604) + 0x324);
  *(int *)(iVar6 + 0x128) = iVar3;
  iVar3 = *piVar10;
  local_5c[0] = ALBW_AS_F32((*(int *)(param_1 + 0x71c) - *(int *)(param_1 + 1000)));
  uVar4 = func_0058E2B8((int *)local_5c);
  uVar9 = *(undefined4 *)(param_1 + 1000);
  *(bool *)(iVar3 + 0xcd) = DAT_001dcd3c < uVar4;
  *(undefined4 *)(iVar3 + 0x124) = uVar9;
  local_44 = *(float *)(*(int *)(param_1 + 0x614) + 0xac) + *(float *)(param_1 + 0x724);
  local_48 = fVar13;
  local_40 = fVar13;
  func_00115C54(&local_28,(float *)(param_1 + 0x3d0),&local_48);
  local_54 = local_28;
  uStack_50 = uStack_24;
  fStack_4c = fStack_20;
  local_34 = fVar12;
  local_30 = fVar12;
  local_2c = fVar12;
  func_0028C068(*(int *)(param_1 + 0x600),&local_34,*(uint *)(param_1 + 1000),&local_54,
                param_1 + 0x5ac);
  func_0028FE4C(*(int *)(param_1 + 0x614));
  func_0028C010(*piVar10);
  iVar3 = 0;
  do {
    piVar10 = *(int **)(param_1 + iVar3 * 4 + 0x630);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x10))(piVar10,param_1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x19);
  func_0028C02C(*(int *)(param_1 + 0x600),0);
  func_002D16D0(*(int *)(param_1 + 0x604),0);
  iVar3 = 0;
  do {
    iVar6 = *(int *)(param_1 + iVar3 * 4 + 0x630);
    if (iVar6 != 0) {
      func_002D4188(iVar6,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x19);
  func_001DD530(param_1);
  if (((*(int *)(param_1 + 0x5b0) == 0x3f800000) &&
      (uVar2 = *(ushort *)(*(int *)(param_1 + 0x614) + 0x42), uVar2 != 0x67)) &&
     (uVar2 != 0x42 && uVar2 != 0x40)) {
    bVar1 = uVar2 != 0x3f;
    if (bVar1) {
      uVar2 = (ushort)*(byte *)(param_1 + 0x6bc);
    }
    if (bVar1 && uVar2 != 0) {
      iVar3 = 1;
      goto LAB_001dcc78;
    }
  }
  iVar3 = 0;
LAB_001dcc78:
  func_00151148(*(int *)(param_1 + 0x60c),iVar3);
  iVar3 = func_00521380(*(int *)(param_1 + 0x60c));
  if (iVar3 != 0) {
    func_0028F968(*(int *)(param_1 + 0x614),local_5c);
    func_001512B4(*(int *)(param_1 + 0x60c),local_5c);
    fStack_4c = *(float *)(param_1 + 0x6d0);
    local_48 = fStack_4c;
    local_44 = fStack_4c;
    func_00151150(*(int *)(param_1 + 0x60c),&fStack_4c);
  }
  if (*(char *)(*(int *)(param_1 + 0x614) + 0xc0) != '\0') {
    iVar3 = 0;
    do {
      if (*(char *)(param_1 + iVar3 * 0xc + 0x699) == '\x0e') {
        if (param_1 + 0x694 + iVar3 * 0xc != 0) {
          return;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *(undefined1 *)(*(int *)(param_1 + 0x614) + 0xc0) = 0;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004905E0(float fparam_0);
extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern int func_005230BC(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0052E94C(int param_1,int param_2);
extern int func_005568B0(int param_1);
extern int *DAT_002fd560;
extern int *DAT_002fd564;
extern int DAT_002fd568;
extern int *DAT_002fd56c;
extern int *DAT_002fd570;
extern float DAT_002fd574;

// USA 002FD2CC <- EU 002FD2A8 (Ghidra, non-matching)
// GLOBAL DAT_002fd560 int *
// GLOBAL DAT_002fd564 int *
// GLOBAL DAT_002fd568 int
// GLOBAL DAT_002fd56c int *
// GLOBAL DAT_002fd570 int *
// GLOBAL DAT_002fd574 float

void func_002FD2CC(int param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 ((undefined1 *)(albw_frame + 0x8))
  #define local_94 (*(float * *)(albw_frame + 0xc))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_7c (*(undefined2 *)(albw_frame + 0x24))
  #define local_7a (*(undefined2 *)(albw_frame + 0x26))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_6c (*(undefined1 *)(albw_frame + 0x34))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define fStack_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define fStack_30 (*(float *)(albw_frame + 0x70))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define fStack_28 (*(float *)(albw_frame + 0x78))
  #define fStack_24 (*(float *)(albw_frame + 0x7c))
  piVar2 = DAT_002fd56c;
  iVar5 = *(int *)(*DAT_002fd560 + 0x10);
  iVar6 = *(int *)(*DAT_002fd564 + 0x38) + 0x183c + *(int *)(param_1 + 0x70) * DAT_002fd568 * 4;
  local_94 = (float *)0x0;
  local_8c = 0;
  local_7c = 0;
  local_98[0] = 0;
  local_7a = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  func_0052E94C(*DAT_002fd56c,(int)local_98);
  local_64 = *local_94;
  local_60 = local_94[1];
  local_5c = local_94[2];
  func_004D7FBC(&fStack_44,&local_64,*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x4c),
                *(float *)(param_1 + 0x50));
  bVar1 = false;
  if ((((*(char *)(iVar5 + 0x24) != '\0') &&
       (local_40 = *(float *)(iVar6 + 8) + *(float *)(iVar5 + 0x18),
       *(int *)(param_1 + 0x48) < 0x20000000)) && (cVar3 = func_005568B0(*piVar2), cVar3 == '\0'))
     && (*(char *)(*DAT_002fd570 + 0x18) == '\x11')) {
    bVar1 = true;
  }
  local_50 = DAT_002fd574;
  local_4c = DAT_002fd574;
  local_48 = DAT_002fd574;
  fVar8 = DAT_002fd574;
  bVar4 = func_005230BC(iVar6,&local_50,&fStack_44);
  if (bVar4) {
    func_00115C54(&local_64,&local_64,&local_50);
    func_00115C54(&fStack_44,&fStack_44,&local_50);
  }
  func_00115C70(&local_2c,&fStack_44,&local_64);
  local_38 = local_2c;
  local_34 = fStack_28;
  fStack_30 = fStack_24;
  fVar7 = func_00115DC8(&local_38);
  *(float *)(param_1 + 0x50) = fVar7;
  if (bVar1) {
    fVar7 = SQRT(local_38 * local_38 + fStack_30 * fStack_30);
    if (fVar7 == fVar8 && local_34 == fVar8) {
      iVar5 = 0;
    }
    else if (fVar7 < fVar8) {
      if (local_34 < fVar8) {
        if (local_34 < fVar7) {
          iVar5 = func_004905E0(fVar7 / local_34);
          iVar5 = -0x40000000 - iVar5;
        }
        else {
          iVar5 = func_004905E0(local_34 / fVar7);
          iVar5 = iVar5 + -0x80000000;
        }
      }
      else {
        fVar7 = -fVar7;
        if (fVar7 < local_34) {
          iVar5 = func_004905E0(fVar7 / local_34);
          iVar5 = iVar5 + 0x40000000;
        }
        else {
          iVar5 = func_004905E0(local_34 / fVar7);
          iVar5 = -0x80000000 - iVar5;
        }
      }
    }
    else if (local_34 < fVar8) {
      fVar8 = -local_34;
      if (fVar7 < fVar8) {
        iVar5 = func_004905E0(fVar7 / fVar8);
        iVar5 = iVar5 + -0x40000000;
      }
      else {
        iVar5 = func_004905E0(fVar8 / fVar7);
        iVar5 = -iVar5;
      }
    }
    else if (fVar7 < local_34) {
      iVar5 = func_004905E0(fVar7 / local_34);
      iVar5 = 0x40000000 - iVar5;
    }
    else {
      iVar5 = func_004905E0(local_34 / fVar7);
    }
    *(int *)(param_1 + 0x48) = iVar5;
  }
  *(float *)(param_1 + 0x38) = local_64;
  *(float *)(param_1 + 0x3c) = local_60;
  *(float *)(param_1 + 0x40) = local_5c;
  return;
}


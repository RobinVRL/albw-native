#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int DAT_0036efec;
extern float DAT_0036eff0;
extern float DAT_0036eff4;
extern undefined4 DAT_0036eff8;
extern float DAT_0036effc;
extern float DAT_0036f000;
extern float DAT_0036f004;
extern float DAT_0036f008;
extern float DAT_0036f00c;
extern int DAT_0036f010;

// USA 0036ED40 <- EU 0036ED1C (Ghidra, non-matching)
// GLOBAL DAT_0036efec int
// GLOBAL DAT_0036eff0 float
// GLOBAL DAT_0036eff4 float
// GLOBAL DAT_0036eff8 undefined4
// GLOBAL DAT_0036effc float
// GLOBAL DAT_0036f000 float
// GLOBAL DAT_0036f004 float
// GLOBAL DAT_0036f008 float
// GLOBAL DAT_0036f00c float
// GLOBAL DAT_0036f010 int

/* WARNING: Removing unreachable block (ram,0x0036eeb4) */
/* WARNING: Removing unreachable block (ram,0x0036eebc) */
/* WARNING: Removing unreachable block (ram,0x0036eecc) */
/* WARNING: Removing unreachable block (ram,0x0036ef60) */
/* WARNING: Removing unreachable block (ram,0x0036ef68) */
/* WARNING: Removing unreachable block (ram,0x0036ef78) */

void func_0036ED40(byte *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define afStack_50 ((float *)(albw_frame + 0x40))
  #define pbStack_2c (*(byte * *)(albw_frame + 0x64))
  #define local_28 (*(int *)(albw_frame + 0x68))
  cVar1 = *(char *)(param_2 + DAT_0036efec);
  local_90[0] = DAT_0036eff4;
  local_90[1] = DAT_0036eff0;
  local_90[2] = DAT_0036eff0;
  local_90[3] = DAT_0036eff0;
  local_90[4] = DAT_0036eff0;
  local_90[5] = DAT_0036eff0;
  local_90[6] = ALBW_AS_F32(DAT_0036eff8);
  local_90[7] = DAT_0036eff0;
  local_90[8] = DAT_0036eff0;
  fVar11 = DAT_0036eff0;
  pbStack_2c = param_1;
  local_28 = param_2;
  func_004D80A4(afStack_50,*(uint *)(param_1 + 0x4c),*(float *)(param_1 + 0x60));
  func_00115C54(afStack_50,afStack_50,(float *)(param_1 + 4));
  if (cVar1 == '\0') {
    bVar2 = true;
    uVar6 = 0;
    fVar12 = DAT_0036f008;
    fVar13 = DAT_0036f00c;
    fVar14 = DAT_0036f004;
    goto LAB_0036ee18;
  }
  local_6c = DAT_0036effc;
  local_68 = fVar11;
  local_64 = fVar11;
  func_004D7F70(&local_6c,*(uint *)(param_1 + 0x4c));
  if (param_1[0x6a] == 0) {
    func_00115C54(afStack_50,afStack_50,&local_6c);
  }
  else {
    func_00115C70(afStack_50,afStack_50,&local_6c);
  }
  bVar2 = true;
  uVar6 = 0;
  do {
    func_00115D70(local_90 + uVar6 * 3,local_90 + uVar6 * 3,DAT_0036f000);
    fVar12 = DAT_0036f008;
    fVar13 = DAT_0036f00c;
    fVar14 = DAT_0036f004;
LAB_0036ee18:
    do {
      pfVar5 = local_90 + uVar6 * 3;
      func_004D7F70(pfVar5,*(uint *)(param_1 + 0x4c));
      func_00115C54(pfVar5,pfVar5,afStack_50);
      fVar9 = *pfVar5;
      fVar10 = *(float *)(param_1 + uVar6 * 0xc + 0x1c);
      fVar7 = (fVar9 - fVar10) * fVar14;
      if (fVar7 <= fVar11) {
        fVar7 = -fVar7;
      }
      fVar8 = fVar12;
      if ((fVar12 <= fVar7) && (fVar8 = fVar7, DAT_0036f010 < (int)ALBW_AS_U32(fVar7))) {
        fVar8 = fVar13;
      }
      fVar8 = fVar10 + fVar8;
      if ((fVar9 <= fVar8) || (fVar8 < fVar10)) {
        bVar4 = 1;
        *(float *)(param_1 + uVar6 * 0xc + 0x1c) = fVar9;
      }
      else {
        bVar4 = 0;
        *(float *)(param_1 + uVar6 * 0xc + 0x1c) = fVar8;
      }
      pfVar5 = (float *)(param_1 + uVar6 * 0xc + 0x24);
      fVar9 = local_90[uVar6 * 3 + 2];
      fVar10 = *pfVar5;
      fVar7 = (fVar9 - fVar10) * fVar14;
      if (fVar7 <= fVar11) {
        fVar7 = -fVar7;
      }
      fVar8 = fVar12;
      if ((fVar12 <= fVar7) && (fVar8 = fVar7, DAT_0036f010 < (int)ALBW_AS_U32(fVar7))) {
        fVar8 = fVar13;
      }
      fVar8 = fVar10 + fVar8;
      if ((fVar9 <= fVar8) || (fVar8 < fVar10)) {
        bVar3 = 1;
        *pfVar5 = fVar9;
      }
      else {
        bVar3 = 0;
        *pfVar5 = fVar8;
      }
      uVar6 = uVar6 + 1;
      bVar2 = (bool)(bVar2 & bVar4 & bVar3);
      if (2 < uVar6) {
        if (bVar2) {
          if (param_1[0x6d] == 0) {
            func_0036E490(param_1,10,local_28);
          }
          else {
            func_0036E490(param_1,0xb,local_28);
          }
        }
        return;
      }
    } while (cVar1 == '\0');
  } while( true );
}


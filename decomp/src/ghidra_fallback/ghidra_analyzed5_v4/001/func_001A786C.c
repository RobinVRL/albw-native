#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern float *DAT_001a7a74;
extern undefined4 DAT_001a7a78;
extern float DAT_001a7a7c;
extern float DAT_001a7a80;
extern int DAT_001a7a84;
extern float DAT_001a7a88;

// USA 001A786C <- EU 001A786C (Ghidra, non-matching)
// GLOBAL DAT_001a7a74 float *
// GLOBAL DAT_001a7a78 undefined4
// GLOBAL DAT_001a7a7c float
// GLOBAL DAT_001a7a80 float
// GLOBAL DAT_001a7a84 int
// GLOBAL DAT_001a7a88 float

/* WARNING: Removing unreachable block (ram,0x001a78e8) */
/* WARNING: Removing unreachable block (ram,0x001a78ec) */
/* WARNING: Removing unreachable block (ram,0x001a78fc) */

float func_001A786C(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define local_5c ((float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  undefined8 uVar8;
  
  fVar10 = DAT_001a7a7c;
  pfVar1 = DAT_001a7a74;
  pfVar2 = (float *)(param_1 + 0x928);
  fVar7 = DAT_001a7a74[2] * *(float *)(param_1 + 0x95c);
  uVar8 = CONCAT44(DAT_001a7a78,fVar7);
  fVar5 = DAT_001a7a74[2];
  if (param_2 != 0) {
    fVar5 = DAT_001a7a7c;
  }
  if (param_2 == 0) {
    fVar5 = fVar7;
  }
  fVar7 = *pfVar2 + *(float *)(param_1 + 0x95c) * DAT_001a7a80;
  if ((fVar5 <= fVar7) || (fVar7 < *pfVar2)) {
    *pfVar2 = fVar5;
  }
  else {
    *pfVar2 = fVar7;
  }
  piVar4 = *(int **)(param_1 + 0x8e0);
  if (*(char *)(param_1 + 0x937) == '\0') {
    func_00115154(&local_6c,local_5c,*(uint *)(param_1 + 1000));
    piVar4[0x1d] = DAT_001a7a84;
    piVar4[0x20] = (int)ALBW_AS_U32(fVar10);
    piVar4[0x1c] = (int)ALBW_AS_U32(fVar10);
    piVar4[0x1e] = (int)ALBW_AS_U32(fVar10);
    piVar4[0x1a] = (int)ALBW_AS_U32(fVar10);
    piVar4[0x19] = (int)ALBW_AS_U32(local_5c[0]);
    piVar4[0x1b] = (int)ALBW_AS_U32(local_6c);
    piVar4[0x1f] = (int)ALBW_AS_U32(-local_6c);
    piVar4[0x21] = (int)ALBW_AS_U32(local_5c[0]);
  }
  else {
    func_00491338((float *)(piVar4 + 0x19),*(uint *)(param_1 + 0x91c),*(uint *)(param_1 + 1000),0);
  }
  fVar7 = *(float *)(param_1 + 0x928);
  fVar9 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
  fVar6 = *pfVar1 * fVar9;
  fVar5 = pfVar1[1] * fVar9;
  piVar4[0x16] = (int)ALBW_AS_U32(fVar6);
  piVar4[0x17] = (int)ALBW_AS_U32(fVar5);
  piVar4[0x18] = (int)ALBW_AS_U32((fVar7 * fVar9));
  if (param_2 != 0) {
    fVar5 = ALBW_AS_F32(uVar8);
    fVar6 = *(float *)(param_1 + 0x928);
  }
  if (param_2 != 0) {
    fVar5 = fVar5 - fVar6 * DAT_001a7a88;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x928) * DAT_001a7a88;
  }
  if (*(char *)(param_1 + 0x937) == '\0') {
    func_004D80A4(&local_68,*(uint *)(param_1 + 1000),fVar5);
    local_64 = fVar10;
  }
  else {
    func_004D8240(&local_68,*(uint *)(param_1 + 0x91c),*(uint *)(param_1 + 1000),fVar5);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x930) * 0x30;
  local_48 = *(float *)(iVar3 + 0xc);
  local_44 = *(undefined4 *)(iVar3 + 0x1c);
  local_40 = *(undefined4 *)(iVar3 + 0x2c);
  func_00115C54(&local_68,&local_68,&local_48);
  piVar4[1] = (int)ALBW_AS_U32(local_68);
  piVar4[2] = (int)ALBW_AS_U32(local_64);
  piVar4[3] = local_60;
  func_004356B4(piVar4);
  return *(float *)(param_1 + 0x928);
}


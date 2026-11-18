#include "ghidra_types.h"

extern int func_0054DF14(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5, undefined4 param_6,int param_7,float fparam_0);
extern int func_0054E06C(int *param_1);
extern int func_0054E0F8(int *param_1);
extern float *DAT_00325630;
extern int DAT_00325634;
extern float DAT_00325638;
extern float DAT_0032563c;

// USA 00325428 <- EU 00325404 (Ghidra, non-matching)
// GLOBAL DAT_00325630 float *
// GLOBAL DAT_00325634 int
// GLOBAL DAT_00325638 float
// GLOBAL DAT_0032563c float

undefined4 func_00325428(int *param_1)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float fparam_0;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  iVar4 = func_0054E0F8(param_1);
  iVar3 = DAT_00325634;
  pfVar2 = DAT_00325630;
  pfVar6 = (float *)(param_1 + 0x11e);
  if (iVar4 == 0) {
    fVar8 = DAT_00325638;
    iVar4 = func_0054E06C(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    local_48 = *pfVar2;
    local_44 = pfVar2[1];
    local_40 = pfVar2[2];
    cVar1 = (char)param_1[0x124];
    fparam_0 = ALBW_AS_F32(param_1[299]);
    fVar7 = DAT_0032563c;
    uVar5 = (**(code **)(*param_1 + 0x84))(param_1);
    local_64 = *pfVar6;
    local_60 = ALBW_AS_F32(param_1[0x11f]);
    local_5c = ALBW_AS_F32(param_1[0x120]);
    if (cVar1 == '\0') {
      local_5c = local_5c + fVar7;
    }
    else if (cVar1 == '\x01') {
      local_64 = local_64 + fVar7;
    }
    else if (cVar1 == '\x02') {
      local_5c = local_5c - fVar7;
    }
    else if (cVar1 == '\x03') {
      local_64 = local_64 - fVar7;
    }
    iVar4 = func_0054DF14((int)param_1,(uint)&local_48,(uint)&local_64,pfVar6,param_1 + 0x127,uVar5,
                          0,fparam_0);
    if (iVar4 == 0) {
      return 0;
    }
    if (local_48 <= fVar8) {
      local_48 = -local_48;
    }
    if (iVar3 < (int)ALBW_AS_U32(local_48)) {
      return 1;
    }
    if (local_44 <= fVar8) {
      local_44 = -local_44;
    }
    if (ALBW_AS_F32(param_1[0x131]) < local_44) {
      return 1;
    }
    local_58 = local_40;
    if (local_40 <= fVar8) {
      local_58 = -local_40;
    }
  }
  else {
    local_60 = *DAT_00325630;
    local_5c = DAT_00325630[1];
    local_58 = DAT_00325630[2];
    fVar8 = DAT_00325638;
    uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    iVar4 = func_0054DF14((int)param_1,(uint)&local_60,(uint)pfVar6,param_1 + 0xf4,param_1 + 0x127,
                          uVar5,1,ALBW_AS_F32(param_1[299]));
    if (iVar4 == 0) {
      return 0;
    }
    if (local_60 <= fVar8) {
      local_60 = -local_60;
    }
    if (iVar3 < (int)ALBW_AS_U32(local_60)) {
      return 1;
    }
    if (local_5c <= fVar8) {
      local_5c = -local_5c;
    }
    if (ALBW_AS_F32(param_1[0x131]) < local_5c) {
      return 1;
    }
    if (local_58 <= fVar8) {
      local_58 = -local_58;
    }
  }
  if ((int)ALBW_AS_U32(local_58) <= iVar3) {
    return 0;
  }
  return 1;
}


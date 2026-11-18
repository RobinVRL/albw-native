#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00289F70(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern float DAT_0028a2f0;
extern float DAT_0028a2f4;
extern float *DAT_0028a2f8;
extern undefined4 DAT_0028a2fc;
extern float DAT_0028a300;
extern undefined DAT_0028a304;
extern float DAT_0028a30c;

// USA 0028A0DC <- EU 0028A104 (Ghidra, non-matching)
// GLOBAL DAT_0028a2f0 float
// GLOBAL DAT_0028a2f4 float
// GLOBAL DAT_0028a2f8 float *
// GLOBAL DAT_0028a2fc undefined4
// GLOBAL DAT_0028a300 float
// GLOBAL DAT_0028a304 undefined
// GLOBAL DAT_0028a30c float

undefined4 func_0028A0DC(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define fStack_7c (*(float *)(albw_frame + 0x4))
  #define fStack_78 (*(float *)(albw_frame + 0x8))
  #define iStack_74 (*(int *)(albw_frame + 0xc))
  #define aiStack_70 ((int *)(albw_frame + 0x10))
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0028a2f0;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  puVar4 = (undefined4 *)(param_1 + 0x4f4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x580) + 0x14);
  fVar5 = DAT_0028a2f4;
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_0028a2f4) {
      if (DAT_0028a2f4 < *(float *)(iVar2 + 8)) goto LAB_0028a198;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_0028a198;
    func_00661708(puVar4,3);
  }
LAB_0028a198:
  uVar6 = CONCAT44(DAT_0028a300,fVar5);
  local_80 = *DAT_0028a2f8;
  fStack_7c = DAT_0028a2f8[1];
  fStack_78 = DAT_0028a2f8[2];
  iVar2 = func_0014EEC8(param_1,(uint)&local_80,DAT_0028a2f8,DAT_0028a2fc,DAT_0028a300);
  if (iVar2 != 0) {
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_80);
    *(int *)(param_1 + 0x3e0) = (int)uVar6;
  }
  fVar5 = ALBW_AS_F32(((ulonglong)uVar6 >> 0x20));
  bVar1 = func_0052107C(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x5d7) == '\0')) {
    *(undefined1 *)(param_1 + 0x5d7) = 1;
    if (*(int *)(param_1 + 0x344) != 0) {
      func_004A1B9C(aiStack_70,*(int *)(param_1 + 0x344),(uint *)&DAT_0028a304);
    }
  }
  iVar2 = func_00520EE4(param_1);
  if (iVar2 != 0) {
    func_00661708(puVar4,8);
    puVar3 = (uint *)func_002C11E8(&iStack_74,3,0,0);
    return func_0016898C(*(int *)(param_1 + 0x580),puVar3);
  }
  iVar2 = func_00520FF8(param_1);
  if (iVar2 != 0) {
    func_00661708(puVar4,9);
    puVar3 = (uint *)func_002C11E8(&iStack_74,3,0,0);
    return func_0016898C(*(int *)(param_1 + 0x580),puVar3);
  }
  fVar5 = *(float *)(*(int *)(param_1 + 0x478) + 0x134) + fVar5;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar5)) {
    fVar5 = DAT_0028a30c;
  }
  *(float *)(*(int *)(param_1 + 0x478) + 0x134) = fVar5;
  return func_00289F70(param_1);
}


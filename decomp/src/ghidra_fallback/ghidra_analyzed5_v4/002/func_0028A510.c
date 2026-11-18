#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_00289F70(int param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_005211D8(int param_1);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern float DAT_0028a794;
extern float DAT_0028a798;
extern float DAT_0028a79c;
extern float DAT_0028a7a0;
extern undefined4 DAT_0028a7a4;
extern float DAT_0028a7a8;
extern int DAT_0028a7ac;
extern undefined DAT_0028a7b0;

// USA 0028A510 <- EU 0028A538 (Ghidra, non-matching)
// GLOBAL DAT_0028a794 float
// GLOBAL DAT_0028a798 float
// GLOBAL DAT_0028a79c float
// GLOBAL DAT_0028a7a0 float
// GLOBAL DAT_0028a7a4 undefined4
// GLOBAL DAT_0028a7a8 float
// GLOBAL DAT_0028a7ac int
// GLOBAL DAT_0028a7b0 undefined

undefined4 func_0028A510(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_40 ((int *)(albw_frame + 0x0))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0028a794;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  puVar5 = (undefined4 *)(param_1 + 0x4f4);
  if (0xc < *(int *)(param_1 + 0x4f4)) {
    if (*(char *)(param_1 + 0x5d5) == '\0') {
      *(undefined1 *)(param_1 + 0x5d5) = 1;
      iVar3 = func_00392E48((undefined4 *)(param_1 + 0x3d0),1,(undefined4 *)0x0,0);
      if (iVar3 == 0) {
        return func_00661708(puVar5,8);
      }
    }
    fVar7 = *(float *)(param_1 + 0x3e4) * DAT_0028a798;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_0028a798;
    *(float *)(param_1 + 0x3e4) = fVar7;
  }
  uVar1 = DAT_0028a7a4;
  fVar7 = DAT_0028a7a0;
  local_38 = DAT_0028a7a0;
  pfVar4 = (float *)(param_1 + 0x5b4);
  local_34 = *(float *)(*(int *)(param_1 + 0x584) + 0x58) * DAT_0028a79c;
  local_30 = DAT_0028a7a0;
  *pfVar4 = DAT_0028a7a0;
  *(float *)(param_1 + 0x5b8) = fVar7;
  *(float *)(param_1 + 0x5bc) = fVar7;
  iVar3 = func_0014EEB8(param_1,&local_38,uVar1,local_34);
  if (iVar3 != 0) {
    func_00115DC8(pfVar4);
    bVar2 = false;
    if (*pfVar4 == fVar7) {
      bVar2 = *(float *)(param_1 + 0x5b8) == fVar7;
    }
    bVar6 = false;
    if (bVar2) {
      bVar6 = *(float *)(param_1 + 0x5bc) == fVar7;
    }
    if (bVar6) {
      *(float *)(param_1 + 0x3dc) = fVar7;
      *(float *)(param_1 + 0x3e0) = fVar7;
      *(float *)(param_1 + 0x3e4) = fVar7;
    }
    else {
      fVar8 = *pfVar4 * *(float *)(param_1 + 0x3dc) +
              *(float *)(param_1 + 0x5b8) * *(float *)(param_1 + 0x3e0) +
              *(float *)(param_1 + 0x5bc) * *(float *)(param_1 + 0x3e4);
      if (fVar8 < fVar7) {
        func_00115DAC((float *)(param_1 + 0x3dc),pfVar4,(float *)(param_1 + 0x3dc),
                      fVar8 * DAT_0028a7a8);
      }
    }
    if ((int)ALBW_AS_U32((*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
              *(float *)(param_1 + 0x3e0) * *(float *)(param_1 + 0x3e0) +
             *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4))) < DAT_0028a7ac) {
      func_00661708(puVar5,5);
    }
  }
  bVar2 = func_0052107C(param_1);
  if ((bVar2) && (*(char *)(param_1 + 0x5d7) == '\0')) {
    *(undefined1 *)(param_1 + 0x5d7) = 1;
    if (*(int *)(param_1 + 0x344) != 0) {
      func_004A1B9C(aiStack_40,*(int *)(param_1 + 0x344),(uint *)&DAT_0028a7b0);
    }
  }
  iVar3 = func_00520EE4(param_1);
  if (iVar3 == 0) {
    iVar3 = func_00520FF8(param_1);
    if (iVar3 != 0) {
      func_00661708(puVar5,9);
    }
  }
  else {
    func_00661708(puVar5,8);
  }
  bVar2 = func_005211D8(param_1);
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return func_00289F70(param_1);
}


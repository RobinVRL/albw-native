#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_002A363C(int param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_002a2780;
extern int DAT_002a2784;
extern float DAT_002a2788;
extern float DAT_002a278c;
extern float DAT_002a2790;
extern int DAT_002a2794;
extern undefined4 DAT_002a2798;
extern float DAT_002a279c;

// USA 002A25E4 <- EU 002A25C0 (Ghidra, non-matching)
// GLOBAL DAT_002a2780 int
// GLOBAL DAT_002a2784 int
// GLOBAL DAT_002a2788 float
// GLOBAL DAT_002a278c float
// GLOBAL DAT_002a2790 float
// GLOBAL DAT_002a2794 int
// GLOBAL DAT_002a2798 undefined4
// GLOBAL DAT_002a279c float

void func_002A25E4(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(afStack_28,pfVar1,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_28);
  func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_002a2784,DAT_002a2780,DAT_002a2788);
  fVar4 = DAT_002a278c;
  pfVar1 = (float *)(param_1 + 0xb24);
  if (*(char *)(param_1 + 0xb91) == '\0') {
    if (*(byte *)(param_1 + 0xb92) < 3) {
      fVar5 = *(float *)(param_1 + 0xb28);
      fVar5 = fVar5 + (*(float *)(param_1 + 0xb2c) - fVar5) * DAT_002a278c;
      *(float *)(param_1 + 0xb28) = fVar5;
      if (*(float *)(param_1 + 0xb2c) + fVar4 < fVar5) {
        return;
      }
      *(float *)(param_1 + 0xb28) = *(float *)(param_1 + 0xb2c);
    }
    *(char *)(param_1 + 0xb91) = '\x01';
  }
  else if (*(char *)(param_1 + 0xb91) != '\x01') goto LAB_002a26fc;
  *pfVar1 = *pfVar1 + (fVar4 - *pfVar1) * DAT_002a2790;
  func_002A363C(param_1,*(uint *)(param_1 + 1000));
  pfVar3 = (float *)func_00520FC0();
  fVar4 = *pfVar3 - *(float *)(param_1 + 0x3d0);
  fVar5 = pfVar3[2] - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar5 * fVar5)) < DAT_002a2794) {
    *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
    func_004FC07C(param_1,0x14,0xffffffff,0);
  }
LAB_002a26fc:
  uVar6 = DAT_002a2798;
  if (*(char *)(param_1 + 0xb91) == '\x02') {
    *pfVar1 = *pfVar1 + -*pfVar1 * DAT_002a279c;
    func_002A363C(param_1,*(uint *)(param_1 + 1000));
    iVar2 = func_0058A8F0(param_1);
    if ((iVar2 != 0) && (iVar2 = func_002A27C4(param_1,0), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xb24) = uVar6;
      *(undefined4 *)(param_1 + 0x3dc) = uVar6;
      *(undefined4 *)(param_1 + 0x3e4) = uVar6;
      func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
  }
  return;
}


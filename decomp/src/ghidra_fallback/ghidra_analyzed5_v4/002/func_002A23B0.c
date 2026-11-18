#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_002A363C(int param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a25a4;
extern int *DAT_002a25a8;
extern float DAT_002a25ac;
extern float DAT_002a25b0;
extern int DAT_002a25b4;
extern float DAT_002a25b8;
extern undefined4 DAT_002a25bc;

// USA 002A23B0 <- EU 002A238C (Ghidra, non-matching)
// GLOBAL DAT_002a25a4 float *
// GLOBAL DAT_002a25a8 int *
// GLOBAL DAT_002a25ac float
// GLOBAL DAT_002a25b0 float
// GLOBAL DAT_002a25b4 int
// GLOBAL DAT_002a25b8 float
// GLOBAL DAT_002a25bc undefined4

void func_002A23B0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  local_28 = *DAT_002a25a4;
  fStack_24 = DAT_002a25a4[1];
  fStack_20 = DAT_002a25a4[2];
  func_002A27C4(param_1,1);
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
  func_0068C690(&local_28);
  iVar4 = func_0068C690(&local_28);
  func_0051D2F4((int *)(param_1 + 1000),iVar4,0,*DAT_002a25a8,DAT_002a25ac);
  cVar1 = *(char *)(param_1 + 0xb91);
  pfVar3 = (float *)(param_1 + 0xb24);
  fVar9 = DAT_002a25b0;
  if (cVar1 == '\0') {
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
      func_004FABDC(param_1,0xb,0xffffffff,0);
      goto LAB_002a2464;
    }
LAB_002a2528:
    if (*(char *)(param_1 + 0xb91) == '\0') goto LAB_002a2540;
  }
  else {
    if (cVar1 == '\x01') {
LAB_002a2464:
      if (*(uint *)(param_1 + 0xb60) < *(uint *)(param_1 + 0xb64)) {
        *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
        pfVar5 = (float *)func_00520FC0();
        fVar6 = *pfVar5 - *(float *)(param_1 + 0x3d0);
        fVar8 = pfVar5[2] - *(float *)(param_1 + 0x3d8);
        fVar7 = *pfVar3;
        if (DAT_002a25b4 < (int)ALBW_AS_U32((fVar6 * fVar6 + fVar8 * fVar8))) {
          fVar6 = DAT_002a25b8 - fVar7;
        }
        else {
          fVar6 = -fVar7;
        }
        *pfVar3 = fVar7 + fVar6 * fVar9;
      }
      else {
        *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
        func_004FABDC(param_1,0xc,0xffffffff,0);
      }
      goto LAB_002a2528;
    }
    if (cVar1 == '\x02') {
      *pfVar3 = *pfVar3 + -*pfVar3 * DAT_002a25b0;
      iVar4 = func_0058A8F0(param_1);
      if (iVar4 != 0) {
        func_00662128((undefined4 *)(param_1 + 0x9e0),1);
      }
      goto LAB_002a2528;
    }
  }
  func_002A363C(param_1,*(uint *)(param_1 + 1000));
LAB_002a2540:
  uVar10 = func_0058AB74(param_1);
  uVar2 = DAT_002a25bc;
  if ((int)uVar10 == 0xb) {
    if (*(uint *)(param_1 + 0xb6c) < *(uint *)(param_1 + 0xb70)) {
      *(uint *)(param_1 + 0xb6c) = *(uint *)(param_1 + 0xb6c) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb70) = 2;
      *(undefined4 *)(param_1 + 0xb74) = uVar2;
      *(undefined4 *)(param_1 + 0xb6c) = 0;
      *(undefined1 *)(param_1 + 0xb9a) = 1;
    }
  }
  return;
}


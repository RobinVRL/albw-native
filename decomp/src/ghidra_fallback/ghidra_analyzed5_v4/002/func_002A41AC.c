#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0036B708(int param_1);
extern int func_0036BE78();
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002a4488;
extern float DAT_002a448c;
extern undefined4 *DAT_002a4490;
extern float DAT_002a4494;
extern int DAT_002a4498;
extern float *DAT_002a449c;
extern float *DAT_002a44a0;
extern int DAT_002a44a4;
extern float DAT_002a44a8;
extern float DAT_002a44ac;
extern float DAT_002a44b0;
extern float *DAT_002a44b4;
extern int *DAT_002a44b8;
extern int *DAT_002a44bc;

// USA 002A41AC <- EU 002A4188 (Ghidra, non-matching)
// GLOBAL DAT_002a4488 float
// GLOBAL DAT_002a448c float
// GLOBAL DAT_002a4490 undefined4 *
// GLOBAL DAT_002a4494 float
// GLOBAL DAT_002a4498 int
// GLOBAL DAT_002a449c float *
// GLOBAL DAT_002a44a0 float *
// GLOBAL DAT_002a44a4 int
// GLOBAL DAT_002a44a8 float
// GLOBAL DAT_002a44ac float
// GLOBAL DAT_002a44b0 float
// GLOBAL DAT_002a44b4 float *
// GLOBAL DAT_002a44b8 int *
// GLOBAL DAT_002a44bc int *

undefined4 func_002A41AC(int param_1)

{
  undefined4 *puVar1;
  float fparam_1;
  float fparam_0;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  fparam_0_00 = DAT_002a448c;
  pcVar5 = (char *)(param_1 + 0xb91);
  fVar8 = *(float *)(param_1 + 0xb28) * DAT_002a4488;
  iVar7 = param_1 + 0x8d4;
  if (DAT_002a448c < fVar8) {
    fVar8 = DAT_002a448c;
  }
  *(float *)(param_1 + 0xb30) = fVar8;
  *(float *)(*(int *)(param_1 + 0xa14) + 0x158) = fVar8;
  *(float *)(*(int *)(param_1 + 0xa10) + 0x158) = fVar8;
  if ((*(byte *)(param_1 + 0xb91) != 0) && (*(byte *)(param_1 + 0xb91) < 4)) {
    func_0036BE78(iVar7);
  }
  fparam_1 = DAT_002a44ac;
  fVar8 = DAT_002a44a8;
  iVar4 = DAT_002a4498;
  puVar1 = DAT_002a4490;
  pfVar3 = (float *)(param_1 + 0xb28);
  pfVar6 = (float *)(param_1 + 0xa84);
  switch(*(undefined1 *)(param_1 + 0xb91)) {
  case 0:
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) {
      *(undefined4 *)(param_1 + 1000) = 0;
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 3;
      func_004FCDF4(param_1 + 0x5a8,1);
      pfVar3 = DAT_002a449c;
      *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 1;
      func_00115C54(pfVar6,(float *)(param_1 + 0x3d0),pfVar3);
      *(undefined1 *)(param_1 + 0x9c8) = 2;
      *(float **)(param_1 + 0x8fc) = pfVar6;
      func_0036BFD0(iVar7,0xffffffff,0xffffffff);
      func_0036C2B8(iVar7,*puVar1);
      *pcVar5 = *(char *)(param_1 + 0xb91) + '\x01';
    }
    break;
  case 1:
    func_00115C54(pfVar6,(float *)(param_1 + 0x3d0),DAT_002a449c);
    if (*(uint *)(param_1 + 0xb64) <= *(uint *)(param_1 + 0xb60)) {
      func_00115C54((float *)(param_1 + 0xb18),(float *)(param_1 + 0x3d0),DAT_002a44a0);
      func_004FC07C(param_1,0x1f,0,0);
      *pcVar5 = *(char *)(param_1 + 0xb91) + '\x01';
      return 0;
    }
    *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
    break;
  case 2:
    fVar8 = *pfVar3 + (fparam_0_00 - *pfVar3) * DAT_002a4494;
    *pfVar3 = fVar8;
    if (iVar4 < (int)ALBW_AS_U32(fVar8)) {
      *(float *)(param_1 + 0xb28) = fparam_0_00;
    }
    iVar7 = func_0058A8F0(param_1);
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(DAT_002a44a4 + 0x30);
      func_004FC07C(param_1,0x20,0xffffffff,0);
      *pcVar5 = *(char *)(param_1 + 0xb91) + '\x01';
      return 0;
    }
    break;
  case 3:
    fVar9 = *pfVar3 + (fparam_0_00 - *pfVar3) * DAT_002a4494;
    *pfVar3 = fVar9;
    fparam_0 = DAT_002a44b0;
    if (iVar4 < (int)ALBW_AS_U32(fVar9)) {
      *(float *)(param_1 + 0xb28) = fparam_0_00;
    }
    func_004D838C(pfVar6,(float *)(param_1 + 0xb18),fparam_0,fparam_1,fVar8);
    local_38 = *DAT_002a44b4;
    fStack_34 = DAT_002a44b4[1];
    fStack_30 = DAT_002a44b4[2];
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_38,pfVar3,(float *)(param_1 + 0x3d0));
    fVar8 = func_0058AC38(param_1);
    func_0051D39C((int *)(param_1 + 0xb80),*DAT_002a44b8,(int)(fVar8 - fparam_0_00));
    iVar4 = func_0068C690(&local_38);
    func_0051D2F4((int *)(param_1 + 1000),iVar4,*DAT_002a44bc,*(int *)(param_1 + 0xb80),fparam_0_00)
    ;
    iVar4 = func_0058A8F0(param_1);
    if (iVar4 != 0) {
      func_0036B708(iVar7);
      *pcVar5 = *(char *)(param_1 + 0xb91) + '\x01';
      return 0;
    }
    break;
  case 4:
    iVar4 = func_0036BE78(iVar7);
    if (iVar4 != 0) {
      func_0036C408(iVar7,*puVar1);
      *(float *)(*(int *)(param_1 + 0xa14) + 0x158) = fparam_0_00;
      *(float *)(*(int *)(param_1 + 0xa10) + 0x158) = fparam_0_00;
      return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
  }
  return 0;
}


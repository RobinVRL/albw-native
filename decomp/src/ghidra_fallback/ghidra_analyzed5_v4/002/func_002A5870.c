#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_002A8EFC(undefined4 *param_1,undefined4 param_2,undefined4 *param_3);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588F08(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a5a30;
extern float *DAT_002a5a34;
extern undefined4 *DAT_002a5a38;
extern int *DAT_002a5a3c;
extern int DAT_002a5a40;
extern float DAT_002a5a44;
extern int *DAT_002a5a48;
extern int DAT_002a5a4c;
extern float DAT_002a5a50;

// USA 002A5870 <- EU 002A584C (Ghidra, non-matching)
// GLOBAL DAT_002a5a30 float *
// GLOBAL DAT_002a5a34 float *
// GLOBAL DAT_002a5a38 undefined4 *
// GLOBAL DAT_002a5a3c int *
// GLOBAL DAT_002a5a40 int
// GLOBAL DAT_002a5a44 float
// GLOBAL DAT_002a5a48 int *
// GLOBAL DAT_002a5a4c int
// GLOBAL DAT_002a5a50 float

void func_002A5870(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((undefined4 *)(albw_frame + 0x14))
  func_002A27C4(param_1,1);
  iVar5 = param_1 + 0x8d4;
  if (*(byte *)(param_1 + 0xb91) < 2) {
    func_00115C54((float *)(param_1 + 0xa84),(float *)(param_1 + 0x3d0),DAT_002a5a30);
    func_0036BE78(iVar5);
  }
  puVar2 = DAT_002a5a38;
  local_28 = *DAT_002a5a34;
  fStack_24 = DAT_002a5a34[1];
  fStack_20 = DAT_002a5a34[2];
  cVar1 = *(char *)(param_1 + 0xb91);
  if (cVar1 == '\0') {
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_28,pfVar4,(float *)(param_1 + 0x3d0));
    iVar5 = func_0068C690(&local_28);
    iVar5 = func_0051D2F4((int *)(param_1 + 1000),iVar5,DAT_002a5a40,*DAT_002a5a3c,DAT_002a5a44);
    if ((iVar5 != 0) &&
       (pfVar4 = (float *)func_00588F08(*DAT_002a5a48),
       fVar6 = *(float *)(param_1 + 0x3d0) - *pfVar4,
       fVar7 = *(float *)(param_1 + 0x3d8) - pfVar4[2],
       (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7)) <= DAT_002a5a4c)) {
      if (*(uint *)(param_1 + 0xb64) <= *(uint *)(param_1 + 0xb60)) {
        func_004FC07C(param_1,0x12,0xffffffff,0);
        goto LAB_002a5a1c;
      }
      *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
    }
  }
  else if (cVar1 == '\x01') {
    lVar8 = func_0058ACC8(param_1,DAT_002a5a50);
    if ((int)lVar8 != 0) {
      local_1c[0] = *(undefined4 *)(param_1 + 0x2cc);
      func_002A8EFC((undefined4 *)(param_1 + 0xb00),*(undefined4 *)(param_1 + 1000),local_1c);
    }
    func_0036C2B8(iVar5,*puVar2);
    iVar5 = func_0058A8F0(param_1);
    if (iVar5 != 0) {
LAB_002a5a1c:
      *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
      return;
    }
  }
  else if (cVar1 == '\x02') {
    func_0036B758(iVar5);
    iVar3 = func_0036BE78(iVar5);
    if (iVar3 != 0) {
      func_0036C408(iVar5,*puVar2);
      func_00662128((undefined4 *)(param_1 + 0x9e0),0xb);
    }
  }
  return;
}


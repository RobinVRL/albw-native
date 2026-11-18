#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A27C4(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a3518;
extern int *DAT_002a351c;
extern float DAT_002a3520;
extern float DAT_002a3524;

// USA 002A33FC <- EU 002A33D8 (Ghidra, non-matching)
// GLOBAL DAT_002a3518 float *
// GLOBAL DAT_002a351c int *
// GLOBAL DAT_002a3520 float
// GLOBAL DAT_002a3524 float

void func_002A33FC(int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  func_002A27C4(param_1,1);
  uVar6 = func_0058AB74(param_1);
  if ((int)uVar6 == 0x16) {
    local_18 = *DAT_002a3518;
    fStack_14 = DAT_002a3518[1];
    fStack_10 = DAT_002a3518[2];
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_18,pfVar3,(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(&local_18);
    func_0051D2F4((int *)(param_1 + 1000),iVar2,0,*DAT_002a351c,DAT_002a3520);
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      func_004FC07C(param_1,0x17,0xffffffff,0);
      uVar4 = *(uint *)(param_1 + 0x59c) | 8;
LAB_002a350c:
      *(uint *)(param_1 + 0x59c) = uVar4;
      return;
    }
  }
  else {
    uVar6 = func_0058AB74(param_1);
    if ((int)uVar6 == 0x17) {
      fVar5 = func_0058AC38(param_1);
      lVar7 = func_0058ACC8(param_1,fVar5 - DAT_002a3524);
      if (((int)lVar7 != 0) &&
         (cVar1 = *(char *)(param_1 + 0xb91) + -1, *(char *)(param_1 + 0xb91) = cVar1, cVar1 == '\0'
         )) {
        func_004FC07C(param_1,0x18,0xffffffff,0);
        uVar4 = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
        goto LAB_002a350c;
      }
    }
    else {
      iVar2 = func_0058A8F0(param_1);
      if (iVar2 != 0) {
        func_00662128((undefined4 *)(param_1 + 0x9e0),0xb);
      }
    }
  }
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001D4854(int param_1,undefined4 param_2,float fparam_0);
extern int func_001D4AE8(int param_1,undefined4 param_2,float fparam_0);
extern int func_001DDDE8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0028F218(int param_1,undefined4 param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0065C844(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d572c;
extern int *DAT_001d5730;
extern int DAT_001d5734;
extern int DAT_001d5738;
extern float DAT_001d573c;
extern float DAT_001d5740;
extern float DAT_001d5744;
extern int *DAT_001d5748;
extern float DAT_001d574c;
extern float DAT_001d5750;
extern float DAT_001d5754;
extern undefined4 DAT_001d5758;

// USA 001D55C4 <- EU 001D55C4 (Ghidra, non-matching)
// GLOBAL DAT_001d572c float
// GLOBAL DAT_001d5730 int *
// GLOBAL DAT_001d5734 int
// GLOBAL DAT_001d5738 int
// GLOBAL DAT_001d573c float
// GLOBAL DAT_001d5740 float
// GLOBAL DAT_001d5744 float
// GLOBAL DAT_001d5748 int *
// GLOBAL DAT_001d574c float
// GLOBAL DAT_001d5750 float
// GLOBAL DAT_001d5754 float
// GLOBAL DAT_001d5758 undefined4

void func_001D55C4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  fVar4 = DAT_001d572c;
  if (*(char *)(param_1 + 0x4c1) == '\0') {
    iVar3 = func_004D838C((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x468),DAT_001d5754,
                          DAT_001d5750,DAT_001d574c);
    if (iVar3 == 0) {
      return;
    }
    func_001D4854(param_1,1,fVar4);
    *(undefined4 *)(param_1 + 0x48c) = 0;
    uVar2 = DAT_001d5758;
    *(undefined4 *)(param_1 + 0x4a0) = 0x32;
    *(undefined4 *)(param_1 + 0x4a4) = uVar2;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined1 *)(param_1 + 0x4c1) = 1;
  }
  else if (*(char *)(param_1 + 0x4c1) != '\x01') {
    return;
  }
  func_0051D2F4((int *)(param_1 + 0x440),*DAT_001d5730,DAT_001d5738,DAT_001d5734,DAT_001d573c);
  local_38 = DAT_001d5740;
  local_30 = DAT_001d5740;
  local_34 = fVar4;
  func_00115C54(&local_20,(float *)(param_1 + 0x3d0),&local_38);
  piVar1 = DAT_001d5748;
  local_2c = local_20;
  uStack_28 = uStack_1c;
  uStack_24 = uStack_18;
  func_001DDDE8(*DAT_001d5748,&local_2c,3,DAT_001d5744);
  func_0028F218(*piVar1,*(undefined4 *)(param_1 + 0x2cc));
  if (*(uint *)(param_1 + 0x49c) < *(uint *)(param_1 + 0x4a0)) {
    *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) + 1;
  }
  else if (*(char *)(param_1 + 0x4c4) != '\0') {
    func_001D4854(param_1,2,fVar4);
    func_001D4AE8(param_1,0,fVar4);
    func_0065C844((undefined4 *)(param_1 + 0x414),2);
  }
  return;
}


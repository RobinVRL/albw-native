#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float func_00521274(int param_1);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0020386c;
extern int DAT_00203870;
extern int DAT_00203874;
extern float DAT_00203878;
extern int DAT_0020387c;
extern float DAT_00203880;
extern undefined4 DAT_00203884;

// USA 0020372C <- EU 0020372C (Ghidra, non-matching)
// GLOBAL DAT_0020386c float
// GLOBAL DAT_00203870 int
// GLOBAL DAT_00203874 int
// GLOBAL DAT_00203878 float
// GLOBAL DAT_0020387c int
// GLOBAL DAT_00203880 float
// GLOBAL DAT_00203884 undefined4

undefined4 func_0020372C(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  if (*(float *)(param_1 + 0xc) + DAT_0020386c < *(float *)(param_1 + 0x3d4)) {
    uVar2 = 4;
LAB_00203824:
    return func_0065D264((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  if (*(char *)(param_1 + 0x924) == '\0') {
    if (*(uint *)(param_1 + 0x910) <= *(uint *)(param_1 + 0x90c)) {
      uVar2 = 0;
      goto LAB_00203824;
    }
    *(uint *)(param_1 + 0x90c) = *(uint *)(param_1 + 0x90c) + 1;
  }
  iVar1 = func_0051D2F4((int *)(param_1 + 0x908),*(int *)(param_1 + 0x900),DAT_00203874,DAT_00203870
                        ,DAT_00203878);
  if (iVar1 != 0) {
    fVar4 = func_00521274(param_1);
    if (DAT_0020387c < (int)ALBW_AS_U32(fVar4)) {
      if (*(char *)(param_1 + 0x924) == '\0') {
        func_00115C70(afStack_18,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
        iVar1 = func_0068C690(afStack_18);
        uVar3 = DAT_00203884;
        *(int *)(param_1 + 0x900) = iVar1;
        *(undefined4 *)(param_1 + 0x3dc) = uVar3;
        *(undefined4 *)(param_1 + 0x3e4) = uVar3;
        *(undefined1 *)(param_1 + 0x924) = 1;
        return 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x924) = 0;
    }
    *(undefined4 *)(param_1 + 1000) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x3e0);
    fVar4 = *(float *)(param_1 + 0x8f0);
    fVar4 = fVar4 + (DAT_00203880 - fVar4) * DAT_00203880;
    *(float *)(param_1 + 0x8f0) = fVar4;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x908),fVar4);
    *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  }
  return 0;
}


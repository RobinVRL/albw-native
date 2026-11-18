#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0065AC0C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001abdd0;
extern int DAT_001abdd4;
extern float DAT_001abdd8;
extern float DAT_001abddc;

// USA 001ABCBC <- EU 001ABCBC (Ghidra, non-matching)
// GLOBAL DAT_001abdd0 int
// GLOBAL DAT_001abdd4 int
// GLOBAL DAT_001abdd8 float
// GLOBAL DAT_001abddc float

void func_001ABCBC(int param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 ((float *)(albw_frame + 0x18))
  if (*(uint *)(param_1 + 0x920) < 5) {
    func_0051D27C((int *)(param_1 + 0x950),DAT_001abdd4,DAT_001abdd0);
  }
  else if ((int)(*(int *)(param_1 + 0x924) - *(uint *)(param_1 + 0x920)) < 5) {
    func_0051D27C((int *)(param_1 + 0x950),0,DAT_001abdd0);
  }
  else {
    *(int *)(param_1 + 0x950) = DAT_001abdd4;
  }
  fVar2 = DAT_001abdd8;
  iVar1 = *(int *)(param_1 + 0x950) + *(int *)(param_1 + 0x954);
  *(int *)(param_1 + 0x954) = iVar1;
  local_1c = fVar2;
  local_18[0] = fVar2;
  func_00115154(local_18,&local_1c,
                iVar1 + *(int *)(param_1 + 0x95c + *(short *)(param_1 + 0x32) * 4) * 0x20000000);
  local_28 = local_18[0] * DAT_001abddc;
  local_20 = local_1c * DAT_001abddc;
  local_24 = fVar2;
  func_00115C54(&local_28,&local_28,(float *)(param_1 + 8));
  *(float *)(param_1 + 0x3dc) = local_28 - *(float *)(param_1 + 0x3d0);
  *(float *)(param_1 + 0x3e0) = fVar2;
  *(float *)(param_1 + 0x3e4) = local_20 - *(float *)(param_1 + 0x3d8);
  if (*(uint *)(param_1 + 0x920) < *(uint *)(param_1 + 0x924)) {
    *(uint *)(param_1 + 0x920) = *(uint *)(param_1 + 0x920) + 1;
  }
  else {
    func_0065AC0C((undefined4 *)(param_1 + 0x8bc),5);
  }
  return;
}


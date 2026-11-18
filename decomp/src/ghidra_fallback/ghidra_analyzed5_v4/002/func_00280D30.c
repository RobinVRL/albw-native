#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00280948(int param_1);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_005211D8(int param_1);
extern float DAT_00280e70;
extern float DAT_00280e74;
extern int DAT_00280e78;
extern float DAT_00280e7c;
extern int DAT_00280e80;
extern undefined4 DAT_00280e84;
extern int DAT_00280e88;

// USA 00280D30 <- EU 00280D58 (Ghidra, non-matching)
// GLOBAL DAT_00280e70 float
// GLOBAL DAT_00280e74 float
// GLOBAL DAT_00280e78 int
// GLOBAL DAT_00280e7c float
// GLOBAL DAT_00280e80 int
// GLOBAL DAT_00280e84 undefined4
// GLOBAL DAT_00280e88 int

void func_00280D30(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  func_00280948((int)param_1);
  fVar3 = ALBW_AS_F32(param_1[0xf8]) - DAT_00280e70;
  param_1[0xf8] = (int)ALBW_AS_U32(fVar3);
  if (0xbeffffff < (uint)ALBW_AS_U32(fVar3)) {
    fVar3 = DAT_00280e74;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar3);
  if (param_1[0x113] != 0) {
    iVar2 = param_1[0x113] - *(int *)(DAT_00280e78 + 0x10);
    param_1[0x113] = iVar2;
    if (iVar2 < 0) {
      param_1[0x113] = 0;
    }
    param_1[0xfa] = param_1[0x113] + param_1[0xfa];
  }
  fVar3 = ALBW_AS_F32(param_1[0xf9]) * DAT_00280e7c;
  param_1[0xf7] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * DAT_00280e7c));
  param_1[0xf9] = (int)ALBW_AS_U32(fVar3);
  bVar1 = func_00521018((int)param_1);
  if ((!bVar1) && (bVar1 = func_0052107C((int)param_1), !bVar1)) {
    bVar1 = func_005211D8((int)param_1);
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
    return;
  }
  iVar2 = DAT_00280e80;
  param_1[0xf7] = DAT_00280e80;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  local_14 = DAT_00280e84;
  local_18 = DAT_00280e88;
  func_00150A84(param_1,&local_18,0);
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  return;
}


#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0018D524(int param_1);
extern int func_004356B4(int *param_1);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int DAT_0018e260;
extern undefined4 DAT_0018e264;
extern float DAT_0018e268;
extern float DAT_0018e26c;

// USA 0018E15C <- EU 0018E15C (Ghidra, non-matching)
// GLOBAL DAT_0018e260 int
// GLOBAL DAT_0018e264 undefined4
// GLOBAL DAT_0018e268 float
// GLOBAL DAT_0018e26c float

void func_0018E15C(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  pfVar4 = (float *)(param_1 + 0x4cc);
  *(float *)(param_1 + 0x4d8) = *pfVar4;
  *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4d4);
  func_00115C54(pfVar4,pfVar4,(float *)(param_1 + 0x3dc));
  func_00115C70(&local_28,pfVar4,(float *)(param_1 + 0x4c0));
  *(undefined1 *)(param_1 + 0x563) = 0;
  uVar5 = DAT_0018e264;
  if (DAT_0018e260 <= (int)ALBW_AS_U32((local_28 * local_28 + local_20 * local_20))) {
    *(undefined1 *)(param_1 + 0x563) = 1;
    local_24 = uVar5;
    func_0068A3EC(&local_28,DAT_0018e268);
    uVar5 = *(undefined4 *)(param_1 + 0x4d0);
    func_00115C54(pfVar4,(float *)(param_1 + 0x4c0),&local_28);
    *(undefined4 *)(param_1 + 0x4d0) = uVar5;
  }
  func_0018D524(param_1);
  fVar1 = DAT_0018e26c;
  iVar2 = *(int *)(param_1 + 0x434);
  if (iVar2 != 0) {
    fVar3 = *(float *)(param_1 + 0x4d0);
    uVar5 = *(undefined4 *)(param_1 + 0x4d4);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x4cc);
    *(float *)(iVar2 + 8) = fVar3 - fVar1;
    *(undefined4 *)(iVar2 + 0xc) = uVar5;
    func_004356B4(*(int **)(param_1 + 0x434));
  }
  return;
}


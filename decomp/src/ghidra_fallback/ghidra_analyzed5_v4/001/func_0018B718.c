#include "ghidra_types.h"

extern int func_0018BC14(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern uint DAT_0018b850;
extern undefined4 DAT_0018b854;
extern int DAT_0018b858;
extern undefined4 DAT_0018b85c;
extern float DAT_0018b860;
extern undefined4 DAT_0018b864;
extern int *DAT_0018b868;
extern uint *DAT_0018b86c;
extern int DAT_0018b870;

// USA 0018B718 <- EU 0018B718 (Ghidra, non-matching)
// GLOBAL DAT_0018b850 uint
// GLOBAL DAT_0018b854 undefined4
// GLOBAL DAT_0018b858 int
// GLOBAL DAT_0018b85c undefined4
// GLOBAL DAT_0018b860 float
// GLOBAL DAT_0018b864 undefined4
// GLOBAL DAT_0018b868 int *
// GLOBAL DAT_0018b86c uint *
// GLOBAL DAT_0018b870 int

void func_0018B718(uint param_1)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 * *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(uint *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_24 (*(uint *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define aiStack_18 ((int *)(albw_frame + 0x48))
  uStack_50 = DAT_0018b850 | param_1 & 0xffff0000;
  local_60 = 0;
  local_58 = 0;
  uStack_48 = 0;
  local_3c = DAT_0018b854;
  local_38 = 0;
  local_37 = 1;
  local_20 = *(undefined4 *)(DAT_0018b858 + 0x20);
  uStack_1c = *(undefined4 *)(DAT_0018b858 + 0x24);
  local_40 = param_1 + 0x3d0;
  uStack_28 = DAT_0018b85c;
  local_5c = &uStack_28;
  local_34 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
  local_44 = &local_34;
  local_30 = *(float *)(param_1 + 0x3d4) - DAT_0018b860;
  local_54 = *(undefined4 *)(param_1 + 0x2cc);
  local_4c = DAT_0018b864;
  uStack_24 = param_1;
  func_004A8030(*DAT_0018b868,&local_60,0xf);
  if (*(char *)(param_1 + 0x4f3) == '\0') {
    fVar1 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x52c);
    fVar2 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x534);
    if ((int)ALBW_AS_U32((fVar1 * fVar1 + fVar2 * fVar2)) < DAT_0018b870) {
      *(undefined1 *)(param_1 + 0x539) = 1;
    }
    else {
      func_0018BC14(param_1);
    }
    return;
  }
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_18,*(int *)(param_1 + 0x344),DAT_0018b86c);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}


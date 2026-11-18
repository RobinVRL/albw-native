#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002EEDBC(int param_1,float *param_2);
extern float func_0054F764(undefined4 *param_1,uint param_2,uint *param_3);
extern int func_0054FAC0(int param_1,uint param_2);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_002ee798;
extern float DAT_002ee79c;
extern undefined4 DAT_002ee7a0;

// USA 002EE65C <- EU 002EE638 (Ghidra, non-matching)
// GLOBAL DAT_002ee798 float
// GLOBAL DAT_002ee79c float
// GLOBAL DAT_002ee7a0 undefined4

undefined4 func_002EE65C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  func_00115C70(local_20,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
  iVar2 = func_0068C690(local_20);
  func_0054F764((undefined4 *)(param_1 + 0xe30),iVar2,(uint *)local_20);
  func_0054FAC0(param_1 + 0xe30,(uint)ALBW_AS_U32(local_20[0]));
  fVar5 = DAT_002ee798;
  fVar4 = *(float *)(param_1 + 0xe1c);
  fVar4 = fVar4 + -fVar4 * DAT_002ee79c;
  *(float *)(param_1 + 0xe1c) = fVar4;
  if (*(int *)(param_1 + 0xb7c) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xdb4) + 0x14);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      if (*(float *)(iVar2 + 0x10) < fVar5) {
        if (fVar5 < *(float *)(iVar2 + 8)) goto LAB_002ee744;
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_002ee744;
      *(undefined4 *)(param_1 + 0xb7c) = 1;
      uVar1 = DAT_002ee7a0;
      *(undefined4 *)(param_1 + 0xb10) = 0x3c;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      func_002EEDBC(param_1,(float *)(param_1 + 0xddc));
    }
  }
  else if (*(int *)(param_1 + 0xb7c) == 1) {
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      if (*(byte *)(param_1 + 0xd48) < 2) {
        uVar3 = 0x16;
      }
      else {
        uVar3 = 0x17;
      }
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),uVar3,fVar4);
    }
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
LAB_002ee744:
  *(float *)(param_1 + 0x3e0) = fVar5;
  return 0;
}


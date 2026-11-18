#include "ghidra_types.h"

extern int func_003E1C24(float *param_1,float *param_2);
extern float func_003E1F40(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_005670D8(int param_1,int param_2,float fparam_0);
extern float DAT_006911c4;
extern float DAT_006911c8;

// USA 00690F94 <- EU 00690F6C (Ghidra, non-matching)
// GLOBAL DAT_006911c4 float
// GLOBAL DAT_006911c8 float

void func_00690F94(int param_1,int param_2,float *param_3,float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_60 ((float *)(albw_frame + 0x0))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  uVar4 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if ((*(uint *)(param_1 + 8) & 0x70000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      fVar1 = func_005670D8(*(int *)(param_1 + 0xc),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xc);
    }
    uVar4 = CONCAT44(fVar1,fparam_0);
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      fVar1 = func_005670D8(*(int *)(param_1 + 0x10),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x10);
    }
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x14),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x14);
    }
    fVar3 = ALBW_AS_F32(uVar4);
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) + ALBW_AS_F32((uVar4 >> 0x20)) * fVar3;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) + fVar1 * fVar3;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + fVar2 * fVar3;
  }
  fVar1 = ALBW_AS_F32(uVar4);
  if ((*(uint *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x18),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x18);
    }
    uVar5 = CONCAT44(fVar2,fVar1);
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      fVar1 = func_005670D8(*(int *)(param_1 + 0x1c),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1c);
    }
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x20),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x20);
    }
    func_003E1F40(afStack_60,0,ALBW_AS_F32(((ulonglong)uVar5 >> 0x20)) * DAT_006911c4,fVar1 * DAT_006911c4
                  ,fVar2 * DAT_006911c4);
    fVar1 = ALBW_AS_F32(uVar5);
    func_003E1C24(&local_30,afStack_60);
    fVar2 = fVar1;
    if (*(float *)(param_2 + 0x10) * local_30 + *(float *)(param_2 + 0x14) * local_2c +
        *(float *)(param_2 + 0x18) * local_28 + *(float *)(param_2 + 0x20) * local_24 < DAT_006911c8
       ) {
      fVar2 = -fVar1;
    }
    *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + local_30 * fVar2;
    *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) + local_2c * fVar2;
    *(float *)(param_2 + 0x18) = *(float *)(param_2 + 0x18) + local_28 * fVar2;
    *(float *)(param_2 + 0x20) = *(float *)(param_2 + 0x20) + local_24 * fVar2;
  }
  if ((*(uint *)(param_1 + 8) & 0x1c00000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x24),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x24);
    }
    uVar5 = CONCAT44(fVar2,fVar1);
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      fVar1 = func_005670D8(*(int *)(param_1 + 0x28),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x28);
    }
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x2c),(int)ALBW_AS_U32(param_3[1]),*param_3);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2c);
    }
    fVar3 = ALBW_AS_F32(uVar5);
    *(float *)(param_2 + 0x1c) =
         *(float *)(param_2 + 0x1c) + ALBW_AS_F32(((ulonglong)uVar5 >> 0x20)) * fVar3;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + fVar1 * fVar3;
    *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + fVar2 * fVar3;
  }
  return;
}


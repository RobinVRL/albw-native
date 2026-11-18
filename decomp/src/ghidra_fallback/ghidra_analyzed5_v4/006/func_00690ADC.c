#include "ghidra_types.h"

extern float func_003E1F40(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_005670D8(int param_1,int param_2,float fparam_0);
extern float DAT_00690c5c;

// USA 00690ADC <- EU 00690AB4 (Ghidra, non-matching)
// GLOBAL DAT_00690c5c float

void func_00690ADC(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_1 + 8) & 0x70000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0xc),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0xc);
    }
    param_2[1] = (uint)ALBW_AS_U32(fVar2);
    if ((*(uint *)(param_1 + 8) & 0x80) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x10),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x10);
    }
    param_2[2] = (uint)ALBW_AS_U32(fVar2);
    if ((*(uint *)(param_1 + 8) & 0x100) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x14),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x14);
    }
    param_2[3] = (uint)ALBW_AS_U32(fVar2);
    uVar1 = *param_2 & 0xfd7fffff;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_2;
  }
  *param_2 = uVar1 & 0xf3ffffff;
  if ((*(uint *)(param_1 + 8) & 0x380000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x18),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x18);
    }
    if ((*(uint *)(param_1 + 8) & 0x400) == 0) {
      fVar3 = func_005670D8(*(int *)(param_1 + 0x1c),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar3 = *(float *)(param_1 + 0x1c);
    }
    if ((*(uint *)(param_1 + 8) & 0x800) == 0) {
      fVar4 = func_005670D8(*(int *)(param_1 + 0x20),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar4 = *(float *)(param_1 + 0x20);
    }
    func_003E1F40((float *)(param_2 + 4),0,fVar2 * DAT_00690c5c,fVar3 * DAT_00690c5c,
                  fVar4 * DAT_00690c5c);
  }
  if ((*(uint *)(param_1 + 8) & 0x1c00000) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x2000) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x24),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x24);
    }
    param_2[7] = (uint)ALBW_AS_U32(fVar2);
    if ((*(uint *)(param_1 + 8) & 0x4000) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x28),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x28);
    }
    param_2[0xb] = (uint)ALBW_AS_U32(fVar2);
    if ((*(uint *)(param_1 + 8) & 0x8000) == 0) {
      fVar2 = func_005670D8(*(int *)(param_1 + 0x2c),param_3[1],ALBW_AS_F32(*param_3));
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2c);
    }
    param_2[0xf] = (uint)ALBW_AS_U32(fVar2);
  }
  return;
}


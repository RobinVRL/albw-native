#include "ghidra_types.h"

extern int func_00114F58(float *param_1,float *param_2);
extern int func_00115074(float *param_1,float *param_2,float *param_3);

// USA 003ECC68 <- EU 003ECC48 (Ghidra, non-matching)

int * func_003ECC68(int param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_48 ((float *)(albw_frame + 0x18))
  if (*param_3 == 0) {
    fVar1 = ALBW_AS_F32(param_3[4]);
    fVar2 = ALBW_AS_F32(param_3[2]);
    fVar3 = ALBW_AS_F32(param_3[3]);
    *(float *)(param_2 + 8) =
         *(float *)(param_2 + 8) + (ALBW_AS_F32(param_3[1]) - *(float *)(param_2 + 8)) * fVar1;
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) + (fVar2 - *(float *)(param_2 + 0xc)) * fVar1;
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) + (fVar3 - *(float *)(param_2 + 0x10)) * fVar1;
  }
  else {
    local_54 = *(float *)(param_1 + 0x30);
    local_50 = *(undefined4 *)(param_1 + 0x40);
    local_4c = *(undefined4 *)(param_1 + 0x50);
    if (*(int *)(param_1 + 200) == 0) {
      func_00114F58(afStack_48,(float *)(param_1 + 0x54));
    }
    else {
      func_00114F58(afStack_48,(float *)(param_2 + 0x100));
    }
    func_00115074(&local_60,afStack_48,&local_54);
    fVar3 = ALBW_AS_F32(param_3[4]);
    fVar1 = ALBW_AS_F32(param_3[2]);
    fVar2 = ALBW_AS_F32(param_3[3]);
    *(float *)(param_2 + 8) =
         *(float *)(param_2 + 8) +
         ((local_60 + ALBW_AS_F32(param_3[1])) - *(float *)(param_2 + 8)) * fVar3;
    *(float *)(param_2 + 0xc) =
         *(float *)(param_2 + 0xc) + ((local_5c + fVar1) - *(float *)(param_2 + 0xc)) * fVar3;
    *(float *)(param_2 + 0x10) =
         *(float *)(param_2 + 0x10) + ((local_58 + fVar2) - *(float *)(param_2 + 0x10)) * fVar3;
  }
  return param_3 + 5;
}


#include "ghidra_types.h"

extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float DAT_00189180;
extern float DAT_00189184;
extern float DAT_00189188;
extern float DAT_0018918c;

// USA 00189040 <- EU 00189040 (Ghidra, non-matching)
// GLOBAL DAT_00189180 float
// GLOBAL DAT_00189184 float
// GLOBAL DAT_00189188 float
// GLOBAL DAT_0018918c float

undefined4 func_00189040(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  if (*(int **)(param_1 + 0x4f8) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x4f8),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x4f8),*(int *)(param_1 + 0x4f4),(int *)0x0);
  }
  fVar3 = DAT_00189188;
  fVar4 = DAT_00189184;
  if (*(char *)(param_1 + 0x500) == '\x05') {
    fVar2 = *(float *)(param_1 + 0x6b0) - DAT_00189180;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x6b0) + DAT_00189180;
  }
  *(float *)(param_1 + 0x6b0) = fVar2;
  if ((fVar4 <= fVar2) && (fVar4 = fVar2, fVar3 < fVar2)) {
    fVar4 = fVar3;
  }
  *(float *)(param_1 + 0x6b0) = fVar4;
  local_30 = *(float *)(param_1 + 0x3d0);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
  local_2c = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x6b0);
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar1 + 0x80),*(uint *)(param_1 + 0x6a4),0,&local_30);
  fVar4 = DAT_0018918c;
  fVar3 = *(float *)(param_1 + 0x544);
  fVar2 = *(float *)(param_1 + 0x568);
  iVar1 = *(int *)(param_1 + 0x4f4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  fVar4 = *(float *)(iVar1 + 0x78) + (fVar3 * fVar2 - *(float *)(iVar1 + 0x78)) * fVar4;
  *(float *)(iVar1 + 0x74) = fVar4;
  *(float *)(iVar1 + 0x78) = fVar4;
  *(float *)(iVar1 + 0x7c) = fVar4;
  func_004CEAF0(*(int *)(param_1 + 0x4f4));
  local_24 = fVar4;
  local_20 = fVar4;
  local_1c = fVar4;
  func_001512B4(*(int *)(param_1 + 0x52c),(float *)(param_1 + 0x4d0));
  return func_00151150(*(int *)(param_1 + 0x52c),&local_24);
}


#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern undefined4 *puRam00301c88;
extern float DAT_00301c74;
extern float DAT_00301c78;
extern float DAT_00301c7c;
extern float DAT_00301c80;
extern float DAT_00301c84;

// USA 00301B90 <- EU 00301B6C (Ghidra, non-matching)
// GLOBAL DAT_00301c74 float
// GLOBAL DAT_00301c78 float
// GLOBAL DAT_00301c7c float
// GLOBAL DAT_00301c80 float
// GLOBAL DAT_00301c84 float
// GLOBAL UNK_00301c88 uint *

undefined4 func_00301B90(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  iVar4 = *param_2;
  uVar3 = param_2[7] + 1;
  param_2[7] = uVar3;
  fVar6 = DAT_00301c78;
  fVar1 = DAT_00301c74;
  if (0x27 < uVar3) {
    *(undefined1 *)((int)param_2 + 0x22) = 3;
    func_004CF478(iVar4,0);
    if ((uint)*(byte *)(param_2 + 9) < *(uint *)(param_1 + 0x610)) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x618) + (uint)*(byte *)(param_2 + 9) * 4);
    }
    else {
      iVar4 = 0;
    }
    if (*(int *)(iVar4 + 0x24) != 0) {
      func_004A1B9C((int *)&local_20,*(int *)(iVar4 + 0x24),puRam00301c88);
    }
    return 0;
  }
  fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  fVar2 = DAT_00301c7c;
  fVar5 = fVar5 * fVar1 * fVar5 * fVar1;
  fVar6 = fVar6 - fVar5;
  *(float *)(iVar4 + 0x74) = fVar6;
  *(float *)(iVar4 + 0x78) = fVar6;
  *(float *)(iVar4 + 0x7c) = fVar6;
  fVar1 = DAT_00301c84;
  local_20 = ALBW_AS_F32(param_2[3]);
  iStack_18 = param_2[5];
  local_1c = ALBW_AS_F32(param_2[4]) - fVar5 * fVar2;
  fVar5 = fVar5 * DAT_00301c80;
  *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar4 + 0x80),(int)(fVar5 * fVar1),param_2[6],&local_20);
  return func_004CEAF0(iVar4);
}


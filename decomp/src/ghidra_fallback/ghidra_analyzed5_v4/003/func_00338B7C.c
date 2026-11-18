#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int func_00665CC4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00338c48;
extern float DAT_00338c4c;
extern float DAT_00338c50;

// USA 00338B7C <- EU 00338B58 (Ghidra, non-matching)
// GLOBAL DAT_00338c48 float
// GLOBAL DAT_00338c4c float
// GLOBAL DAT_00338c50 float

void func_00338B7C(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  uVar1 = *(uint *)(param_1 + 0x4c8);
  if (uVar1 <= *(uint *)(param_1 + 0x4c4)) {
    uVar1 = func_00665CC4((undefined4 *)(param_1 + 0x40c),2);
  }
  uVar3 = *(uint *)(param_1 + 0x4c8);
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x4c4);
  }
  fVar5 = DAT_00338c48;
  if ((uVar3 != 0 && uVar1 != 0) && (fVar5 = DAT_00338c4c, uVar1 < uVar3)) {
    fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * *(float *)(param_1 + 0x4cc);
  }
  fVar6 = DAT_00338c50;
  for (iVar4 = 0; iVar4 < *(int *)(*(int *)(*(int *)(param_1 + 0x430) + 0x20) + 4);
      iVar4 = iVar4 + 1) {
    puVar2 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x430),iVar4,1);
    local_20 = CONCAT13((char)(int)(fVar5 * fVar6),(int3)*puVar2);
    func_004CF5DC(*(int *)(param_1 + 0x430),iVar4,1,&local_20);
  }
  if (*(uint *)(param_1 + 0x4c4) < *(uint *)(param_1 + 0x4c8)) {
    *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) + 1;
  }
  return;
}


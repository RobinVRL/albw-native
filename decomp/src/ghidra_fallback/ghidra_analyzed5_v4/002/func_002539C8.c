#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_00151358(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00520ED8(int param_1);
extern float DAT_00253acc;

// USA 002539C8 <- EU 002539F0 (Ghidra, non-matching)
// GLOBAL DAT_00253acc float

void func_002539C8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  func_00520ED8(param_1);
  iVar2 = *(int *)(param_1 + 0x488);
  if (iVar2 != 0) {
    local_20 = *(float *)(param_1 + 0x3d0);
    local_1c = *(float *)(param_1 + 0x3d4);
    local_18 = *(undefined4 *)(param_1 + 0x3d8);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x458),*(uint *)(param_1 + 1000),0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(float *)(iVar2 + 0x8c) = local_20;
    *(float *)(iVar2 + 0x9c) = local_1c;
    *(undefined4 *)(iVar2 + 0xac) = local_18;
    uVar1 = *(undefined4 *)(param_1 + 0x4b4);
    *(undefined4 *)(iVar2 + 0x74) = uVar1;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x78) = uVar1;
    *(undefined4 *)(iVar2 + 0x7c) = uVar1;
    func_004CEAF0(iVar2);
    piVar3 = *(int **)(param_1 + 0x48c);
    if (piVar3 != (int *)0x0) {
      local_1c = local_1c + DAT_00253acc;
      iVar2 = *(int *)(param_1 + 0x4b4);
      piVar3[4] = iVar2;
      piVar3[5] = iVar2;
      piVar3[6] = iVar2;
      func_00151358(piVar3);
      func_001512B4((int)piVar3,&local_20);
    }
  }
  return;
}


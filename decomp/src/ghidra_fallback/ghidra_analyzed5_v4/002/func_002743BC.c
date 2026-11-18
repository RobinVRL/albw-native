#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined4 DAT_002744bc;
extern float DAT_002744c0;

// USA 002743BC <- EU 002743E4 (Ghidra, non-matching)
// GLOBAL DAT_002744bc undefined4
// GLOBAL DAT_002744c0 float

void func_002743BC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar1 = DAT_002744bc;
  uVar3 = (uint)*(ushort *)(param_1 + 0x22);
  *(uint *)(param_1 + 0x14) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x18) = DAT_002744c0 / fVar7;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    func_003521F0(*(int *)(param_1 + 0x54) + 4,(int)*(char *)(param_1 + 0x68));
    piVar4 = (int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x54);
    puVar6 = *(uint **)(param_1 + 0x58);
    if (*(int *)(iVar5 + 0x24) == 0) {
      *piVar4 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return;
    }
    iVar2 = *piVar4;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x60))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&local_18,*(int *)(iVar5 + 0x24),puVar6);
    *piVar4 = local_18;
    *(undefined4 *)(param_1 + 0x60) = uStack_14;
  }
  return;
}


#include "ghidra_types.h"

extern int func_00111AA0(int param_1,int *param_2);
extern undefined4 *DAT_001112a4;

// USA 00111188 <- EU 00111188 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_001112a4 undefined4 *

void func_00111188(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define piStack_28 (*(int * *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  *(int *)(param_1 + 0x18) = param_2;
  uVar3 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  puVar2 = DAT_001112a4;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  *(undefined4 *)(param_1 + 0x34) = puVar2[3];
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  piVar7 = (int *)param_3[1];
  if (piVar7 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0x40;
    return;
  }
  if (*(char *)(param_2 + 0x42) == '\0') {
LAB_00111220:
    if (*(short *)((int)piVar7 + 0x26) == -1) goto LAB_00111240;
    func_00111AA0(param_1,piVar7);
    uVar1 = *(uint *)(param_1 + 0x3c) | 0x80;
  }
  else {
    if (*(char *)((int)piVar7 + 0x37) == '\0') goto LAB_00111240;
    if (*(char *)((int)piVar7 + 0x37) != '\x01') goto LAB_00111220;
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
LAB_00111240:
  puVar2 = *(undefined4 **)(param_4 + 0x38);
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = *(int **)(*(int *)(param_2 + 0xc) + 0xc);
    local_20 = param_1 + 0x20;
    local_30 = piVar4[3] + *piVar7 * *(int *)(*piVar4 + 0x18) * 4;
    local_2c = *(undefined4 *)(*piVar4 + 0x18);
    piStack_28 = piVar7;
    iStack_24 = param_2;
    iStack_1c = param_1;
    (**(code **)*puVar2)(puVar2,&local_30);
  }
  return;
}


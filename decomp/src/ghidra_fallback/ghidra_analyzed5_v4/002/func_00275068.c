#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int DAT_0027517c;

// USA 00275068 <- EU 00275090 (Ghidra, non-matching)
// GLOBAL DAT_0027517c int

void func_00275068(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  iVar3 = *(int *)(*(int *)(*param_1 + 0xac) + 0x28);
  if ((iVar3 == 0) ||
     (uVar4 = *(uint *)(*(int *)(*param_1 + 0xac) + 0x20), uVar2 = uVar4 - 1, uVar4 <= uVar2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2 * 4);
  }
  param_1[2] = iVar3;
  iVar1 = DAT_0027517c;
  if (*(int *)(iVar3 + 0xa0) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int **)(iVar3 + 0xa8);
  }
  param_1[3] = iVar5;
  param_1[9] = iVar3;
  param_1[10] = iVar5;
  param_1[0xb] = iVar1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (param_1[0x15] != 0) {
    func_003521F0(param_1[0x15] + 4,(int)(char)param_1[0x1a]);
    piVar6 = param_1 + 0x17;
    iVar3 = param_1[0x15];
    puVar7 = (uint *)param_1[0x16];
    if (*(int *)(iVar3 + 0x24) == 0) {
      *piVar6 = 0;
      param_1[0x18] = 0;
      return;
    }
    iVar1 = *piVar6;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x18])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(iVar3 + 0x24),puVar7);
    *piVar6 = local_18;
    param_1[0x18] = iStack_14;
  }
  return;
}


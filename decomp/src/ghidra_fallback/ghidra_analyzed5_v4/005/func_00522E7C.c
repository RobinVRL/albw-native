#include "ghidra_types.h"

extern int func_0010DB90(void);
extern int func_00566A28(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int *param_6);
extern undefined4 DAT_00522f18;

// USA 00522E7C <- EU 00522E54 (Ghidra, non-matching)
// GLOBAL DAT_00522f18 undefined4

void func_00522E7C(int param_1,uint *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  if (param_3 == (int *)0x0) {
    param_3 = (int *)func_0010DB90();
  }
  if (param_4 == (int *)0x0) {
    param_4 = param_3;
  }
  iVar2 = (**(code **)(*param_3 + 0x18))(param_3,*(undefined4 *)(param_1 + 0x4c),4);
  iVar3 = (**(code **)(*param_4 + 0x18))(param_4,*(undefined4 *)(param_1 + 0x50),4);
  func_00566A28(aiStack_20,*(int *)(param_1 + 8),param_2,iVar2,iVar3,(int *)(param_1 + 0x4c));
  uVar5 = 0;
  if (param_2[1] != 0) {
    do {
      uVar6 = uVar5 + 1;
      puVar4 = (ushort *)(*param_2 + uVar5 * 0x154);
      uVar1 = *puVar4;
      if ((uVar1 & 1) == 0) {
        *puVar4 = uVar1 & 0xfeff;
      }
      uVar5 = uVar6;
    } while (uVar6 < param_2[1]);
  }
  return;
}


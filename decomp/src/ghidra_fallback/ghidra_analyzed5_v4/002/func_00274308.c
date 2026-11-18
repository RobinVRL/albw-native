#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined4 DAT_002743e0;

// USA 00274308 <- EU 00274330 (Ghidra, non-matching)
// GLOBAL DAT_002743e0 undefined4

void func_00274308(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar1 = DAT_002743e0;
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    func_003521F0(*(int *)(param_1 + 0x54) + 4,(int)*(char *)(param_1 + 0x68));
    piVar3 = (int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54);
    puVar5 = *(uint **)(param_1 + 0x58);
    if (*(int *)(iVar4 + 0x24) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return;
    }
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x60))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&local_18,*(int *)(iVar4 + 0x24),puVar5);
    *piVar3 = local_18;
    *(undefined4 *)(param_1 + 0x60) = uStack_14;
  }
  return;
}


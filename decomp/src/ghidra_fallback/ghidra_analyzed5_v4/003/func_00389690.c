#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_00389758;
extern int *DAT_0038975c;
extern uint *DAT_00389760;
extern undefined4 *DAT_00389764;
extern undefined4 DAT_00389768;

// USA 00389690 <- EU 0038966C (Ghidra, non-matching)
// GLOBAL DAT_00389758 undefined4
// GLOBAL DAT_0038975c int *
// GLOBAL DAT_00389760 uint *
// GLOBAL DAT_00389764 undefined4 *
// GLOBAL DAT_00389768 undefined4

void func_00389690(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar1 = (uint *)func_002C11E8(aiStack_68,2,0x37,0);
  func_0016898C(*(int *)(param_1 + 0x464),puVar1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x464) + 0x14) + 0x10) = DAT_00389758;
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_0038975c + 0x3dbbc,*(uint *)(param_1 + 0x46c));
  if (((*DAT_00389760 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00389760), iVar3 != 0)) {
    *DAT_00389764 = DAT_00389768;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00389764), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = puVar2[0xf5];
    uVar5 = puVar2[0xf6];
    *(undefined4 *)(param_1 + 0x470) = puVar2[0xf4];
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined4 *)(param_1 + 0x478) = uVar5;
    *(undefined4 *)(param_1 + 0x47c) = puVar2[0xfa];
  }
  return;
}


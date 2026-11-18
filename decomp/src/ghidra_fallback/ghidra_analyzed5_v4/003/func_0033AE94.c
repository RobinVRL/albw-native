#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern uint *DAT_0033b044;
extern float *DAT_0033b048;

// USA 0033AE94 <- EU 0033AE70 (Ghidra, non-matching)
// GLOBAL DAT_0033b044 uint *
// GLOBAL DAT_0033b048 float *

void func_0033AE94(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define afStack_78 ((float *)(albw_frame + 0x18))
  #define afStack_48 ((float *)(albw_frame + 0x48))
  puVar1 = DAT_0033b044;
  local_88 = *(float *)(param_1 + 0x3d0);
  local_84 = *(float *)(param_1 + 0x3d4);
  local_80 = *(float *)(param_1 + 0x3d8);
  if (*(short *)(param_1 + 0x2e) == 0) {
    iVar2 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    iVar4 = *(int *)(param_1 + 0x470);
    func_00491E80((float *)(iVar2 + 0x80),*(uint *)(iVar4 + 8),*(uint *)(iVar4 + 0xc),
                  *(uint *)(iVar4 + 0x10));
  }
  else {
    iVar2 = *(int *)(param_1 + 0x470);
    func_00491E80(afStack_78,*(uint *)(iVar2 + 8),*(uint *)(iVar2 + 0xc),*(uint *)(iVar2 + 0x10));
    func_00491E80(afStack_48,*puVar1,0,0);
    iVar2 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001157FC((float *)(iVar2 + 0x80),afStack_48,afStack_78);
  }
  local_88 = local_88 + *(float *)(*(int *)(param_1 + 0x470) + 0x14);
  local_84 = local_84 + *(float *)(*(int *)(param_1 + 0x470) + 0x18);
  local_80 = local_80 + *(float *)(*(int *)(param_1 + 0x470) + 0x1c);
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(float *)(iVar2 + 0x8c) = local_88;
  *(float *)(iVar2 + 0x9c) = local_84;
  *(float *)(iVar2 + 0xac) = local_80;
  iVar2 = *(int *)(param_1 + 0x40c);
  uVar3 = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(iVar2 + 0x74) = uVar3;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x78) = uVar3;
  *(undefined4 *)(iVar2 + 0x7c) = uVar3;
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  iVar2 = *(int *)(param_1 + 0x410);
  piVar5 = (int *)(param_1 + 0x410);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar2 + 0x80),puVar1[1],puVar1[2],puVar1[3]);
    func_00115C54(&local_88,&local_88,DAT_0033b048);
    iVar2 = *piVar5;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(float *)(iVar2 + 0x8c) = local_88;
    *(float *)(iVar2 + 0x9c) = local_84;
    *(float *)(iVar2 + 0xac) = local_80;
    iVar2 = *piVar5;
    uVar3 = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(iVar2 + 0x74) = uVar3;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x78) = uVar3;
    *(undefined4 *)(iVar2 + 0x7c) = uVar3;
    func_004CEAF0(*piVar5);
  }
  return;
}


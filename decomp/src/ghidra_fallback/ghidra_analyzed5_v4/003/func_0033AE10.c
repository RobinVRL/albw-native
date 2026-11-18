#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern uint *DAT_0033b044;
extern float *DAT_0033b048;

// USA 0033AE10 <- EU 0033ADEC (Ghidra, non-matching)
// GLOBAL DAT_0033b044 uint *
// GLOBAL DAT_0033b048 float *

void func_0033AE10(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define fStack_88 (*(float *)(albw_frame + 0x8))
  #define fStack_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define afStack_78 ((float *)(albw_frame + 0x18))
  #define afStack_48 ((float *)(albw_frame + 0x48))
  uVar2 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar2 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x428)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar3;
  if (*(int *)(param_1 + 0x424) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fparam_0);
  }
  puVar1 = DAT_0033b044;
  fStack_88 = *(float *)(param_1 + 0x3d0);
  fStack_84 = *(float *)(param_1 + 0x3d4);
  fStack_80 = *(float *)(param_1 + 0x3d8);
  if (*(short *)(param_1 + 0x2e) == 0) {
    iVar3 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    iVar5 = *(int *)(param_1 + 0x470);
    func_00491E80((float *)(iVar3 + 0x80),*(uint *)(iVar5 + 8),*(uint *)(iVar5 + 0xc),
                  *(uint *)(iVar5 + 0x10));
  }
  else {
    iVar3 = *(int *)(param_1 + 0x470);
    func_00491E80(afStack_78,*(uint *)(iVar3 + 8),*(uint *)(iVar3 + 0xc),*(uint *)(iVar3 + 0x10));
    func_00491E80(afStack_48,*puVar1,0,0);
    iVar3 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    func_001157FC((float *)(iVar3 + 0x80),afStack_48,afStack_78);
  }
  fStack_88 = fStack_88 + *(float *)(*(int *)(param_1 + 0x470) + 0x14);
  fStack_84 = fStack_84 + *(float *)(*(int *)(param_1 + 0x470) + 0x18);
  fStack_80 = fStack_80 + *(float *)(*(int *)(param_1 + 0x470) + 0x1c);
  iVar3 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(float *)(iVar3 + 0x8c) = fStack_88;
  *(float *)(iVar3 + 0x9c) = fStack_84;
  *(float *)(iVar3 + 0xac) = fStack_80;
  iVar3 = *(int *)(param_1 + 0x40c);
  uVar4 = *(undefined4 *)(param_1 + 0x450);
  *(undefined4 *)(iVar3 + 0x74) = uVar4;
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x78) = uVar4;
  *(undefined4 *)(iVar3 + 0x7c) = uVar4;
  func_004CEAF0(*(int *)(param_1 + 0x40c));
  iVar3 = *(int *)(param_1 + 0x410);
  piVar7 = (int *)(param_1 + 0x410);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar3 + 0x80),puVar1[1],puVar1[2],puVar1[3]);
    func_00115C54(&fStack_88,&fStack_88,DAT_0033b048);
    iVar3 = *piVar7;
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(float *)(iVar3 + 0x8c) = fStack_88;
    *(float *)(iVar3 + 0x9c) = fStack_84;
    *(float *)(iVar3 + 0xac) = fStack_80;
    iVar3 = *piVar7;
    uVar4 = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(iVar3 + 0x74) = uVar4;
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar3 + 0x78) = uVar4;
    *(undefined4 *)(iVar3 + 0x7c) = uVar4;
    func_004CEAF0(*piVar7);
  }
  return;
}


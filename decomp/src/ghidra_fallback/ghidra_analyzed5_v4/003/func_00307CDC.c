#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int *DAT_00307e28;
extern undefined4 DAT_00307e2c;
extern int *DAT_00307e30;
extern int *DAT_00307e34;
extern undefined4 DAT_00307e38;
extern undefined4 DAT_00307e3c;
extern undefined4 DAT_00307e40;

// USA 00307CDC <- EU 00307CB8 (Ghidra, non-matching)
// GLOBAL DAT_00307e28 int *
// GLOBAL DAT_00307e2c undefined4
// GLOBAL DAT_00307e30 int *
// GLOBAL DAT_00307e34 int *
// GLOBAL DAT_00307e38 undefined4
// GLOBAL DAT_00307e3c undefined4
// GLOBAL DAT_00307e40 undefined4

undefined4 func_00307CDC(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x0))
  #define iStack_9c (*(int *)(albw_frame + 0x4))
  #define auStack_98 ((uint *)(albw_frame + 0x8))
  #define puStack_90 (*(undefined4 * *)(albw_frame + 0x10))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_78 (*(uint *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined1 *)(albw_frame + 0x60))
  iVar6 = *(int *)(param_1 + 0x2d0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  uVar2 = DAT_00307e2c;
  piVar1 = DAT_00307e28;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*DAT_00307e28 + 8))(DAT_00307e28);
    iStack_9c = piVar1[1];
    uStack_a0 = uVar2;
    puVar4 = func_0016A2FC(puVar3,1,&uStack_a0,1);
  }
  *(undefined4 **)(param_1 + 0x44c) = puVar4;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    iStack_9c = piVar1[1];
    uStack_a0 = uVar2;
    puVar4 = func_0016A2FC(puVar3,1,&uStack_a0,1);
  }
  *(undefined4 **)(param_1 + 0x450) = puVar4;
  func_00169608(*(uint **)(param_1 + 0x44c),0,DAT_00307e30,*(int *)(iVar6 + 0x1c8));
  func_00169608(*(uint **)(param_1 + 0x450),0,DAT_00307e34,*(int *)(iVar6 + 0x1c8));
  func_0016A02C(*(int *)(param_1 + 0x44c),-1,(int *)0xffffffff,0);
  uVar5 = 0;
  func_0016A02C(*(int *)(param_1 + 0x450),-1,(int *)0xffffffff,0);
  puStack_90 = &uStack_8c;
  auStack_98[1] = 3;
  uStack_44 = 10;
  uStack_40 = 0;
  auStack_98[0] = 1;
  uStack_8c = 0;
  uStack_88 = DAT_00307e3c;
  uStack_84 = DAT_00307e38;
  uStack_80 = DAT_00307e40;
  uStack_78 = uVar5 | 0xff;
  uStack_7c = DAT_00307e38;
  return func_0016898C(*(int *)(param_1 + 0x44c),auStack_98);
}


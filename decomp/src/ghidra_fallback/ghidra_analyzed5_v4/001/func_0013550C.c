#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int *DAT_0013567c;
extern undefined4 DAT_00135680;
extern int *DAT_00135684;
extern int *DAT_00135688;
extern undefined4 DAT_0013568c;
extern undefined4 DAT_00135690;
extern undefined4 DAT_00135694;

// USA 0013550C <- EU 0013550C (Ghidra, non-matching)
// GLOBAL DAT_0013567c int *
// GLOBAL DAT_00135680 undefined4
// GLOBAL DAT_00135684 int *
// GLOBAL DAT_00135688 int *
// GLOBAL DAT_0013568c undefined4
// GLOBAL DAT_00135690 undefined4
// GLOBAL DAT_00135694 undefined4

undefined4 func_0013550C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(undefined4 *)(albw_frame + 0x0))
  #define local_9c (*(int *)(albw_frame + 0x4))
  #define local_98 ((uint *)(albw_frame + 0x8))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x60))
  iVar6 = *(int *)(param_1 + 0x2d0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  uVar2 = DAT_00135680;
  piVar1 = DAT_0013567c;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*DAT_0013567c + 8))(DAT_0013567c);
    local_9c = piVar1[1];
    local_a0 = uVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_a0,1);
  }
  *(undefined4 **)(param_1 + 0x4f0) = puVar4;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    local_9c = piVar1[1];
    local_a0 = uVar2;
    puVar4 = func_0016A2FC(puVar3,1,&local_a0,1);
  }
  *(undefined4 **)(param_1 + 0x4f4) = puVar4;
  func_00169608(*(uint **)(param_1 + 0x4f0),0,DAT_00135684,*(int *)(iVar6 + 0x1c8));
  func_00169608(*(uint **)(param_1 + 0x4f4),0,DAT_00135688,*(int *)(iVar6 + 0x1c8));
  func_0016A02C(*(int *)(param_1 + 0x4f0),-1,(int *)0xffffffff,0);
  uVar5 = 0;
  func_0016A02C(*(int *)(param_1 + 0x4f4),-1,(int *)0xffffffff,0);
  local_90 = &local_8c;
  local_98[1] = 3;
  local_44 = 10;
  local_40 = 0;
  local_98[0] = 1;
  local_8c = 0;
  local_88 = DAT_00135690;
  local_84 = DAT_0013568c;
  local_80 = DAT_00135694;
  local_78 = uVar5 | 0xff;
  local_7c = DAT_0013568c;
  return func_0016898C(*(int *)(param_1 + 0x4f0),local_98);
}


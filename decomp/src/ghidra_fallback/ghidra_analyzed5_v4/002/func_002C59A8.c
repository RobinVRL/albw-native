#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00522B68(int param_1,int param_2);
extern int *DAT_002c5ac8;
extern undefined4 DAT_002c5acc;
extern int DAT_002c5ad0;
extern undefined4 DAT_002c5ad4;
extern undefined4 DAT_002c5ad8;
extern undefined4 DAT_002c5adc;

// USA 002C59A8 <- EU 002C5984 (Ghidra, non-matching)
// GLOBAL DAT_002c5ac8 int *
// GLOBAL DAT_002c5acc undefined4
// GLOBAL DAT_002c5ad0 int
// GLOBAL DAT_002c5ad4 undefined4
// GLOBAL DAT_002c5ad8 undefined4
// GLOBAL DAT_002c5adc undefined4

void func_002C59A8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 ((uint *)(albw_frame + 0x0))
  #define local_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  #define local_20 (*(undefined4 *)(albw_frame + 0x60))
  #define local_1c (*(int *)(albw_frame + 0x64))
  iVar6 = *(int *)(param_1 + 0x2d0);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  piVar1 = DAT_002c5ac8;
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x44c) = 0;
  }
  else {
    (**(code **)(*DAT_002c5ac8 + 8))(DAT_002c5ac8);
    local_1c = piVar1[1];
    local_20 = DAT_002c5acc;
    puVar3 = func_0016A2FC(puVar3,2,&local_20,1);
    *(undefined4 **)(param_1 + 0x44c) = puVar3;
  }
  iVar2 = DAT_002c5ad0;
  uVar4 = 0;
  do {
    func_00169608(*(uint **)(param_1 + 0x44c),uVar4,(int *)(iVar2 + uVar4 * 8),
                  *(int *)(iVar6 + 0x1c8));
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar4 = 0;
  func_0016A02C(*(int *)(param_1 + 0x44c),-1,(int *)0xffffffff,0);
  local_80[1] = 3;
  local_78 = &local_74;
  uVar5 = 0;
  local_80[0] = 1;
  local_2c = 0;
  local_28 = 0;
  local_74 = 0;
  local_68 = DAT_002c5adc;
  local_64 = DAT_002c5ad4;
  local_60 = uVar4 | 0xff;
  local_70 = DAT_002c5ad8;
  uStack_6c = DAT_002c5ad4;
  func_0016898C(*(int *)(param_1 + 0x44c),local_80);
  iVar6 = extraout_r1;
  if (0 < *(int *)(param_1 + 0x40c)) {
    do {
      if (uVar5 < *(uint *)(param_1 + 0x40c)) {
        iVar6 = *(int *)(param_1 + 0x414);
      }
      if (uVar5 < *(uint *)(param_1 + 0x40c)) {
        iVar6 = *(int *)(iVar6 + uVar5 * 4);
      }
      else {
        iVar6 = 0;
      }
      func_00522B68(*(int *)(param_1 + 0x44c),iVar6);
      uVar5 = uVar5 + 1;
      iVar6 = extraout_r1_00;
    } while ((int)uVar5 < *(int *)(param_1 + 0x40c));
  }
  return;
}


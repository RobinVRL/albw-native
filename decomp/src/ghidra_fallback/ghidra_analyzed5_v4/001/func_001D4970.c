#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern undefined4 DAT_001d4ac4;
extern int DAT_001d4ac8;
extern undefined4 DAT_001d4acc;
extern float DAT_001d4ad0;
extern undefined4 DAT_001d4ad4;

// USA 001D4970 <- EU 001D4970 (Ghidra, non-matching)
// GLOBAL DAT_001d4ac4 undefined4
// GLOBAL DAT_001d4ac8 int
// GLOBAL DAT_001d4acc undefined4
// GLOBAL DAT_001d4ad0 float
// GLOBAL DAT_001d4ad4 undefined4

void func_001D4970(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint in_r12;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 ((uint *)(albw_frame + 0xc))
  #define local_7c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(uint *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(undefined1 *)(albw_frame + 0x64))
  uVar1 = func_0014E428(param_1,0,1,0,1,0,0);
  *(undefined4 *)(param_1 + 0x4b8) = uVar1;
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0016A2FC(puVar2,2,DAT_001d4ac4,1);
  }
  *(undefined4 **)(param_1 + 0x4bc) = puVar3;
  iVar4 = DAT_001d4ac8;
  iVar6 = *(int *)(*(int *)(param_1 + 0x2d0) + 0x1cc);
  uVar5 = 0;
  do {
    func_00169688(*(uint **)(param_1 + 0x4bc),uVar5,(int *)(iVar4 + uVar5 * 8),iVar6);
    func_00133870(*(int *)(param_1 + 0x4bc),uVar5,*(int *)(param_1 + 0x4b8));
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  func_0016A02C(*(int *)(param_1 + 0x4bc),-1,(int *)0xffffffff,0);
  local_7c = &local_78;
  local_84[1] = 3;
  local_30 = 10;
  local_2c = 0;
  local_78 = 0;
  local_84[0] = 1;
  local_64 = in_r12 | 0xff;
  local_74 = DAT_001d4ad0;
  uStack_70 = DAT_001d4acc;
  uStack_6c = DAT_001d4ad4;
  uStack_68 = DAT_001d4acc;
  uVar1 = DAT_001d4acc;
  fVar7 = DAT_001d4ad0;
  func_0016898C(*(int *)(param_1 + 0x4bc),local_84);
  iVar4 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x14);
  if (*(float *)(iVar4 + 8) != fVar7) {
    *(float *)(iVar4 + 8) = fVar7;
    *(undefined1 *)(iVar4 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4bc) + 0x14) + 0x10) = uVar1;
  return;
}


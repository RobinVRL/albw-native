#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int *DAT_003b563c;
extern uint *DAT_003b5640;
extern undefined4 DAT_003b5644;
extern int DAT_003b5658;
extern float DAT_003b565c;
extern float DAT_003b5660;
extern char s_Boomerang_Wait_003b5648[];

// USA 003B54E0 <- EU 003B54BC (Ghidra, non-matching)
// GLOBAL DAT_003b563c int *
// GLOBAL DAT_003b5640 uint *
// GLOBAL DAT_003b5644 undefined4
// GLOBAL DAT_003b5658 int
// GLOBAL DAT_003b565c float
// GLOBAL DAT_003b5660 float
// GLOBAL s_Boomerang_Wait_003b5648 string

undefined4 func_003B54E0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define aiStack_b8 ((int *)(albw_frame + 0x8))
  #define local_a0 (*(uint *)(albw_frame + 0x20))
  #define local_9c (*(undefined1 *)(albw_frame + 0x24))
  #define local_78 (*(int *)(albw_frame + 0x48))
  #define local_74 (*(char * *)(albw_frame + 0x4c))
  #define aiStack_70 ((int *)(albw_frame + 0x50))
  iVar8 = *(int *)(*DAT_003b563c + 0x10);
  func_0019B04C(*DAT_003b5640);
  iVar9 = *(int *)(iVar8 + 0x408);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,1,DAT_003b5644,1);
  }
  local_78 = DAT_003b5658;
  *(undefined4 **)(param_1 + 0x1c) = puVar4;
  local_74 = s_Boomerang_Wait_003b5648;
  func_00169688(*(uint **)(param_1 + 0x1c),0,&local_78,iVar9);
  func_0016A02C(*(int *)(param_1 + 0x1c),-1,(int *)0xffffffff,0);
  func_002C2C9C(aiStack_b8,*(undefined4 *)(iVar8 + 0x54));
  local_9c = 1;
  local_a0 = local_a0 | 1;
  piVar5 = func_002C2D00(aiStack_b8);
  *(int **)(param_1 + 4) = piVar5;
  puVar6 = (uint *)func_002C11E8(aiStack_70,0,10,0);
  func_0016898C(*(int *)(param_1 + 0x1c),puVar6);
  fVar2 = DAT_003b5660;
  fVar1 = DAT_003b565c;
  iVar8 = *(int *)(param_1 + 0x1c);
  uVar7 = 0;
  if (0 < *(int *)(iVar8 + 0xc)) {
    do {
      iVar9 = *(int *)(iVar8 + 0x14);
      if (uVar7 < *(uint *)(iVar8 + 0xc)) {
        iVar9 = iVar9 + uVar7 * 0x28;
      }
      if (fVar1 <= fVar2) {
        *(float *)(iVar9 + 0xc) = fVar1;
        *(float *)(iVar9 + 8) = fVar1;
      }
      else {
        *(float *)(iVar9 + 0xc) = *(float *)(iVar9 + 0x14);
        *(float *)(iVar9 + 8) = *(float *)(iVar9 + 0x14);
      }
      uVar7 = uVar7 + 1;
      *(float *)(iVar9 + 0x10) = fVar2;
      *(undefined4 *)(iVar9 + 0x18) = 0;
      *(undefined1 *)(iVar9 + 0x26) = 1;
      *(undefined1 *)(iVar9 + 0x25) = 1;
    } while ((int)uVar7 < *(int *)(iVar8 + 0xc));
  }
  return func_002D42E8(param_1);
}


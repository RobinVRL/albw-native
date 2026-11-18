#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00461274(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0046ea08;
extern undefined4 DAT_0046ea0c;
extern undefined DAT_0046ea10;
extern int DAT_0046ea14;
extern undefined DAT_0046ea18;
extern int DAT_0046ea1c;
extern int *DAT_0046ea34;
extern undefined DAT_0046ea4c;
extern char s_G_KMapLight__02d_0046ea38[];
extern char s_T_KMapLight__02d_0046ea20[];
extern char s_cf_0046ea20[];
extern char s_cf_0046ea38[];

// USA 0046E814 <- EU 0046E7EC (Ghidra, non-matching)
// GLOBAL DAT_0046ea08 int
// GLOBAL DAT_0046ea0c undefined4
// GLOBAL DAT_0046ea10 undefined
// GLOBAL DAT_0046ea14 int
// GLOBAL DAT_0046ea18 undefined
// GLOBAL DAT_0046ea1c int
// GLOBAL DAT_0046ea34 int *
// GLOBAL DAT_0046ea4c undefined
// GLOBAL s_cf_0046ea38 string
// GLOBAL s_cf_0046ea20 string

int * func_0046E814(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 **ppuVar8;
  int extraout_r1;
  uint uVar9;
  int *piVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0x23))
  #define local_4c (*(int *)(albw_frame + 0x24))
  #define local_48 (*(undefined1 * *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 ((undefined1 *)(albw_frame + 0x30))
  #define uStack_31 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(undefined * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(undefined * *)(albw_frame + 0x4c))
  piVar3 = (int *)func_00461274(param_1);
  iVar1 = DAT_0046ea08;
  piVar3[0x1d] = 9;
  piVar3[0xe] = iVar1;
  *piVar3 = iVar1 + -0x54;
  (**(code **)(iVar1 + -0x1c))(piVar3,DAT_0046ea0c,0);
  iVar4 = piVar3[7];
  func_0016773C(iVar4,piVar3[0x1d] + 2);
  iVar1 = DAT_0046ea14;
  local_24 = &DAT_0046ea10;
  local_28 = DAT_0046ea14;
  func_00166C20((int *)piVar3[7],0,&local_28,0);
  local_24 = &DAT_0046ea18;
  local_28 = iVar1;
  func_00166C20((int *)piVar3[7],1,&local_28,0);
  piVar3[10] = iVar4;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = iVar4;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  local_64 = local_5c;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  uStack_60 = 0x10;
  ppuVar8 = &local_48;
  uStack_4d = 0;
  local_48 = local_40;
  local_5c[0] = 0;
  local_68 = DAT_0046ea1c;
  uStack_44 = 0x10;
  uVar9 = 0;
  uStack_31 = 0;
  local_40[0] = 0;
  local_4c = DAT_0046ea1c;
  if (piVar3[0x1d] != 0) {
    do {
      puVar5 = (uint *)(piVar3 + 0x1f);
      if (uVar9 < 10) {
        puVar5 = (uint *)(piVar3 + uVar9 * 6 + 0x1f);
      }
      *puVar5 = uVar9;
      func_004994B0((int)&local_4c,s_T_KMapLight__02d_0046ea20,uVar9,ppuVar8);
      piVar10 = piVar3 + 0x1f;
      if (uVar9 < 10) {
        piVar10 = piVar3 + uVar9 * 6 + 0x1f;
      }
      piVar6 = (int *)func_005229AC((int *)piVar3[7],&local_4c);
      piVar2 = DAT_0046ea34;
      if (piVar6 != (int *)0x0) {
        piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
        do {
          if (piVar7 == piVar2) goto LAB_0046e968;
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)0x0);
      }
      piVar6 = (int *)0x0;
LAB_0046e968:
      piVar10[2] = (int)piVar6;
      func_004994B0((int)&local_68,s_G_KMapLight__02d_0046ea38,uVar9,ppuVar8);
      piVar10 = (int *)piVar3[7];
      local_2c = &DAT_0046ea4c;
      local_30 = iVar1;
      (**(code **)(local_68 + 8))(&local_68);
      ppuVar8 = (undefined1 **)func_003FDF90(*(int *)(*piVar10 + 0x14),(int)local_64);
      func_00166C20(piVar10,uVar9 + 2,&local_30,(int)ppuVar8);
      iVar4 = extraout_r1;
      if (uVar9 < 10) {
        iVar4 = uVar9 * 3;
      }
      piVar10 = piVar3 + 0x1f;
      if (uVar9 < 10) {
        piVar10 = piVar10 + iVar4 * 2;
      }
      piVar10[5] = piVar3[7];
      *(short *)((int)piVar10 + 0xe) = (short)uVar9 + 2;
      *(undefined2 *)(piVar10 + 3) = 0;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)piVar3[0x1d]);
  }
  return piVar3;
}


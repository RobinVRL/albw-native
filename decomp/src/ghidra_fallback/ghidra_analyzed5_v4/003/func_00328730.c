#include "ghidra_types.h"

extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_005845D8(int param_1);
extern int *DAT_00328868;
extern int *DAT_0032886c;
extern int *DAT_00328870;
extern int DAT_00328874;
extern undefined4 DAT_00328878;

// USA 00328730 <- EU 0032870C (Ghidra, non-matching)
// GLOBAL DAT_00328868 int *
// GLOBAL DAT_0032886c int *
// GLOBAL DAT_00328870 int *
// GLOBAL DAT_00328874 int
// GLOBAL DAT_00328878 undefined4

void func_00328730(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  piVar1 = DAT_00328868;
  iVar2 = *(int *)(param_1 + 0x2f0);
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    if ((*(int *)(iVar2 + 0x28) < 1) ||
       (iVar3 = *(int *)(iVar2 + 0x28) + -1, *(int *)(iVar2 + 0x28) = iVar3, iVar3 != 0)) {
      if ((*DAT_0032886c != 0) && (iVar3 = func_005845D8(*DAT_0032886c), iVar3 != 0)) {
        uVar4 = *(undefined4 *)(iVar3 + 0x94c);
        uVar5 = *(undefined4 *)(iVar3 + 0x950);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar3 + 0x954);
        *(undefined4 *)(iVar2 + 0x1c) = uVar4;
        *(undefined4 *)(iVar2 + 0x20) = uVar5;
      }
      iVar3 = *(int *)(*piVar1 + 0x18);
      if (iVar3 != 0) {
        func_001E8440(iVar3,iVar2 + 0x1c,100);
      }
    }
    else {
      iVar3 = *(int *)(*piVar1 + 0x18);
      if (iVar3 != 0) {
        uStack_1c = **(undefined4 **)(*DAT_00328870 + 0x1c);
        uStack_14 = (*(undefined4 **)(*DAT_00328870 + 0x1c))[2];
        uStack_18 = *(undefined4 *)(iVar3 + 0x1c0);
        uStack_2c = *(undefined4 *)(DAT_00328874 + 0x1c);
        uStack_20 = *(undefined4 *)(DAT_00328874 + 0x28);
        uStack_28 = *(undefined4 *)(DAT_00328874 + 0x20);
        uStack_24 = *(undefined4 *)(DAT_00328874 + 0x24);
        uStack_48 = *(undefined4 *)(iVar3 + 0xe8);
        uStack_44 = *(undefined4 *)(iVar3 + 0x1a4);
        uStack_40 = *(undefined4 *)(iVar3 + 0x1a8);
        uStack_3c = *(undefined4 *)(iVar3 + 0xe4);
        uStack_30 = *(undefined4 *)(iVar3 + 0x1a0);
        uStack_38 = *(undefined4 *)(iVar3 + 0x198);
        uStack_34 = *(undefined4 *)(iVar3 + 0x19c);
        (**(code **)(**(int **)(iVar2 + 0x10) + 0x3c))
                  (*(int **)(iVar2 + 0x10),&uStack_1c,&uStack_48,DAT_00328878);
      }
      *(undefined1 *)(iVar2 + 0x2c) = 1;
    }
  }
  *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
  return;
}


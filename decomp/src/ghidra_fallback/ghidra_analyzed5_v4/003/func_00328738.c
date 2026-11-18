#include "ghidra_types.h"

extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_005845D8(int param_1);
extern int *DAT_00328868;
extern int *DAT_0032886c;
extern int *DAT_00328870;
extern int DAT_00328874;
extern undefined4 DAT_00328878;

// USA 00328738 <- EU 00328714 (Ghidra, non-matching)
// GLOBAL DAT_00328868 int *
// GLOBAL DAT_0032886c int *
// GLOBAL DAT_00328870 int *
// GLOBAL DAT_00328874 int
// GLOBAL DAT_00328878 undefined4

void func_00328738(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  piVar1 = DAT_00328868;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if ((*(int *)(param_1 + 0x28) < 1) ||
       (iVar2 = *(int *)(param_1 + 0x28) + -1, *(int *)(param_1 + 0x28) = iVar2, iVar2 != 0)) {
      if ((*DAT_0032886c != 0) && (iVar2 = func_005845D8(*DAT_0032886c), iVar2 != 0)) {
        uVar3 = *(undefined4 *)(iVar2 + 0x94c);
        uVar4 = *(undefined4 *)(iVar2 + 0x950);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x954);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      iVar2 = *(int *)(*piVar1 + 0x18);
      if (iVar2 != 0) {
        func_001E8440(iVar2,param_1 + 0x1c,100);
      }
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0x18);
      if (iVar2 != 0) {
        local_1c = **(undefined4 **)(*DAT_00328870 + 0x1c);
        uStack_14 = (*(undefined4 **)(*DAT_00328870 + 0x1c))[2];
        local_18 = *(undefined4 *)(iVar2 + 0x1c0);
        uStack_2c = *(undefined4 *)(DAT_00328874 + 0x1c);
        local_20 = *(undefined4 *)(DAT_00328874 + 0x28);
        local_28 = *(undefined4 *)(DAT_00328874 + 0x20);
        uStack_24 = *(undefined4 *)(DAT_00328874 + 0x24);
        local_48 = *(undefined4 *)(iVar2 + 0xe8);
        local_44 = *(undefined4 *)(iVar2 + 0x1a4);
        local_40 = *(undefined4 *)(iVar2 + 0x1a8);
        local_3c = *(undefined4 *)(iVar2 + 0xe4);
        local_30 = *(undefined4 *)(iVar2 + 0x1a0);
        local_38 = *(undefined4 *)(iVar2 + 0x198);
        uStack_34 = *(undefined4 *)(iVar2 + 0x19c);
        (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))
                  (*(int **)(param_1 + 0x10),&local_1c,&local_48,DAT_00328878);
      }
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}


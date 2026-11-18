#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00291948(int param_1,undefined1 *param_2,undefined4 param_3);
extern int func_00298160(int param_1);
extern int func_0058959C(int param_1);
extern int *DAT_0019b9b8;
extern undefined4 *DAT_0019b9bc;
extern int *DAT_0019b9c0;

// USA 0019B8B8 <- EU 0019B8B8 (Ghidra, non-matching)
// GLOBAL DAT_0019b9b8 int *
// GLOBAL DAT_0019b9bc undefined4 *
// GLOBAL DAT_0019b9c0 int *

void func_0019B8B8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define afStack_24 ((float *)(albw_frame + 0x2c))
  piVar1 = DAT_0019b9b8;
  if (*(char *)(param_1 + 0x44c) != '\0') {
    local_50 = *DAT_0019b9bc;
    uStack_4c = DAT_0019b9bc[1];
    uStack_44 = DAT_0019b9bc[3];
    uStack_40 = DAT_0019b9bc[4];
    uStack_3c = DAT_0019b9bc[5];
    uStack_38 = DAT_0019b9bc[6];
    fStack_34 = ALBW_AS_F32(DAT_0019b9bc[7]);
    local_30 = DAT_0019b9bc[8];
    uStack_2c = DAT_0019b9bc[9];
    local_28 = DAT_0019b9bc[10];
    local_48 = *(undefined4 *)(*(int *)(*DAT_0019b9b8 + 0x18) + 0x1a8);
    func_00115C54(afStack_24,(float *)(param_1 + 0x3d0),&fStack_34);
    bVar2 = func_0058959C(*piVar1);
    if (bVar2) {
      local_28 = local_28 & 0xffff0000;
      iVar3 = func_00298160(param_1);
      if (iVar3 == 0) {
        local_28 = local_28 & 0xffff;
      }
      else {
        local_28 = CONCAT22(1,(undefined2)local_28);
        *(undefined1 *)(*piVar1 + 0xe1) = 1;
      }
      local_48 = 0;
    }
    *(undefined2 *)(param_1 + 0x480) = (*(undefined2 *)((char *)&local_28 + 2));
    iVar3 = (**(code **)(**(int **)(param_1 + 0x418) + 0x34))
                      (*(int **)(param_1 + 0x418),afStack_24,&local_50,0);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x44c) = 0;
      *(undefined1 *)(param_1 + 0x44f) = 0;
    }
  }
  if (*(char *)(param_1 + 0x44d) != '\0') {
    iVar3 = func_00291948(*DAT_0019b9c0,(undefined1 *)(param_1 + 0x458),
                          *(undefined4 *)(param_1 + 0x2cc));
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x44e) = 1;
    }
    *(undefined1 *)(param_1 + 0x44d) = 0;
  }
  return;
}


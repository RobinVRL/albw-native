#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_003A10E0(int param_1);
extern int func_00495080(int param_1);
extern int func_00495090(int param_1);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00495130(int param_1,float *param_2);
extern int func_00580CE4(int param_1);
extern int *DAT_0014b354;
extern int DAT_0014b358;
extern undefined4 *DAT_0014b35c;
extern int *DAT_0014b360;
extern undefined4 *DAT_0014b364;
extern undefined4 DAT_0014b368;
extern undefined4 *DAT_0014b36c;

// USA 0014B258 <- EU 0014B258 (Ghidra, non-matching)
// GLOBAL DAT_0014b354 int *
// GLOBAL DAT_0014b358 int
// GLOBAL DAT_0014b35c undefined4 *
// GLOBAL DAT_0014b360 int *
// GLOBAL DAT_0014b364 undefined4 *
// GLOBAL DAT_0014b368 undefined4
// GLOBAL DAT_0014b36c undefined4 *

void func_0014B258(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined1 *)(albw_frame + 0x34))
  iVar4 = *DAT_0014b354;
  if ((iVar4 != 0) && (*(char *)(DAT_0014b358 + iVar4) != '\0')) {
    func_003A10E0(*(int *)(param_1 + 0x1b8));
    puVar1 = DAT_0014b35c;
    iVar5 = *DAT_0014b360;
    func_0010E0E0((int *)*DAT_0014b35c);
    func_00580CE4(*(int *)(param_1 + 0x1b8));
    func_00495090(iVar5);
    local_50 = *DAT_0014b364;
    uStack_4c = DAT_0014b364[1];
    local_48 = DAT_0014b364[2];
    local_3c = *DAT_0014b36c;
    uStack_38 = DAT_0014b36c[1];
    uStack_34 = DAT_0014b36c[2];
    uStack_30 = DAT_0014b36c[3];
    local_2c = *DAT_0014b36c;
    uStack_28 = DAT_0014b36c[1];
    uStack_24 = DAT_0014b36c[2];
    uStack_20 = DAT_0014b36c[3];
    local_1c = 0;
    iVar3 = *(int *)(param_1 + 0x1b8);
    local_44 = *(float *)(iVar3 + 0xc) - *(float *)(iVar3 + 4);
    local_40 = *(float *)(iVar3 + 0x10) - *(float *)(iVar3 + 8);
    pfVar2 = (float *)func_004950C4((int)&local_50,(undefined4 *)(iVar4 + 0x2418),
                                    (undefined4 *)(iVar4 + 0x2418));
    func_00495130(iVar5,pfVar2);
    func_00495080(iVar5);
    func_0010E15C((int *)*puVar1);
  }
  return;
}


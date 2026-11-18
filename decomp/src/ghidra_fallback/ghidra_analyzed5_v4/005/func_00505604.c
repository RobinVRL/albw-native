#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_002C2D00(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined4 *DAT_00505718;
extern undefined4 DAT_0050571c;
extern int DAT_00505720;
extern char s_MapActor__s_bch_00505708[];
extern char s_cf_00505708[];

// USA 00505604 <- EU 005055DC (Ghidra, non-matching)
// GLOBAL DAT_00505718 undefined4 *
// GLOBAL DAT_0050571c undefined4
// GLOBAL DAT_00505720 int
// GLOBAL s_cf_00505708 string

int * func_00505604(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(int *)(albw_frame + 0x0))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x4))
  #define iStack_b8 (*(int *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(int *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_a3 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined1 *)(albw_frame + 0x38))
  #define local_87 (*(undefined1 *)(albw_frame + 0x39))
  #define auStack_84 ((undefined4 *)(albw_frame + 0x3c))
  #define afStack_38 ((float *)(albw_frame + 0x88))
  piVar3 = *(int **)(param_2 + 700);
  uVar2 = param_4;
  (**(code **)(*piVar3 + 8))(piVar3);
  func_00689794(auStack_84,s_MapActor__s_bch_00505708,piVar3[1],uVar2);
  puVar1 = func_00504CC0(*DAT_00505718,auStack_84,0xffffffff);
  local_b0 = func_00533400((int)puVar1,param_3);
  local_c0 = DAT_00505720;
  uStack_bc = DAT_0050571c;
  iStack_b8 = DAT_00505720;
  local_b4 = DAT_0050571c;
  uStack_ac = 0;
  local_88 = 1;
  local_a3 = 0;
  local_90 = 0;
  local_8c = 0;
  local_9c = 0;
  local_94 = 0;
  local_a4 = 1;
  local_a0 = 0;
  local_98 = 0;
  local_87 = 0xc4;
  local_a8 = param_4;
  piVar3 = func_002C2D00(&local_c0);
  (**(code **)(*piVar3 + 0x10))(piVar3,0x20);
  func_00491624(afStack_38,*(uint *)(param_2 + 0x1c),*(uint *)(param_2 + 0x20),
                *(uint *)(param_2 + 0x24));
  piVar3[0x59] = piVar3[0x59] | 0x40000000;
  func_001151F8(piVar3 + 0x20,afStack_38,(undefined4 *)(param_2 + 4));
  piVar3[0x59] = piVar3[0x59] | 0x40000000;
  piVar3[0x1d] = *(int *)(param_2 + 0x10);
  piVar3[0x1e] = *(int *)(param_2 + 0x14);
  piVar3[0x1f] = *(int *)(param_2 + 0x18);
  func_004CEAF0((int)piVar3);
  return piVar3;
}


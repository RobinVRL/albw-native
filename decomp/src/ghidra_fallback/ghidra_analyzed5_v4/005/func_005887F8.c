#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B738(int param_1,int *param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00587BE0(int param_1,int *param_2,int param_3,undefined4 *param_4);
extern int func_00689024(undefined4 *param_1);
extern char s__s__s_00588a34[];
extern char s__s__s__s_00588a28[];
extern char s_cf_00588a28[];
extern char s_cf_00588a34[];

// USA 005887F8 <- EU 005887D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL s_cf_00588a28 string
// GLOBAL s_cf_00588a34 string

int func_005887F8(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define local_d0 (*(uint * *)(albw_frame + 0x10))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x58))
  uVar6 = 0;
  func_0010A464(auStack_88);
  if (param_4 == (undefined4 *)0x0) {
    param_4 = auStack_88;
  }
  if (param_3 != 0) {
    unaff_r4 = *(int **)(param_3 + 0x1c);
  }
  if (param_3 != 0 && unaff_r4 != (int *)0x0) {
    func_00689024(&local_d4);
    iVar4 = *(int *)(*unaff_r4 + 0x10);
    if (iVar4 != 0) {
      (**(code **)(unaff_r4[9] + 8))(unaff_r4 + 9);
      iVar5 = unaff_r4[10];
      (**(code **)(*param_2 + 8))(param_2);
      func_004994B0((int)&local_d4,s__s__s__s_00588a28,param_2[1],iVar5,iVar4 + 0x80);
      (**(code **)(local_d4 + 8))(&local_d4);
      puVar1 = local_d0;
      puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
      uVar3 = func_0056D3E4((int)puVar2,puVar1);
      if (uVar3 != 0xffffffff) {
        iVar4 = func_00587BE0(param_1,&local_d4,param_3,param_4);
        goto joined_r0x005889d8;
      }
      (**(code **)(*param_2 + 8))(param_2);
      func_004994B0((int)&local_d4,s__s__s_00588a34,param_2[1],iVar4 + 0x80);
      (**(code **)(local_d4 + 8))(&local_d4);
      puVar1 = local_d0;
      puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
      uVar3 = func_0056D3E4((int)puVar2,puVar1);
      if (uVar3 != 0xffffffff) {
        iVar4 = func_00587BE0(param_1,&local_d4,param_3,param_4);
        goto joined_r0x005889d8;
      }
    }
    (**(code **)(unaff_r4[9] + 8))(unaff_r4 + 9);
    iVar4 = unaff_r4[10];
    (**(code **)(*param_2 + 8))(param_2);
    func_004994B0((int)&local_d4,s__s__s_00588a34,param_2[1],iVar4);
    (**(code **)(local_d4 + 8))(&local_d4);
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar3 = func_0056D3E4((int)puVar2,local_d0);
    if (uVar3 != 0xffffffff) {
      iVar4 = func_00587BE0(param_1,&local_d4,param_3,param_4);
joined_r0x005889d8:
      if (iVar4 != 0) {
        func_0025B738((int)param_4,param_2);
      }
      func_0025B874(auStack_88);
      return iVar4;
    }
  }
  if (param_5 != 0) {
    uVar6 = func_00587BE0(param_1,param_2,param_3,param_4);
  }
  func_0025B874(auStack_88);
  return uVar6;
}


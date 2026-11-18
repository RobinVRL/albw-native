// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_0025BE98(int *param_1,int param_2);
extern int func_005697E0(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern void func_00588004(undefined4 param_1,int param_2,float fparam_0,float fparam_1);

// USA 00587BE0 <- EU 00587BB8 (Ghidra, non-matching)

uint func_00587BE0(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  float in_s0;
  float fparam_0;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_28 ((uint *)(albw_frame + 0x68))
  (**(code **)(*param_2 + 8))(param_2);
  puVar6 = (uint *)param_2[1];
  puVar1 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  uVar2 = func_0056D3E4((int)puVar1,puVar6);
  if (uVar2 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar7 = 1;
    puVar1 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    iVar3 = func_005697E0((int)puVar1,uVar2,auStack_28);
    if ((iVar3 != 0) && ((auStack_28[0] & 4) == 0)) {
      uVar7 = 0;
    }
    func_0010A464(auStack_88);
    if (param_4 == (undefined4 *)0x0) {
      param_4 = auStack_88;
    }
    piVar4 = func_0025BE98(*(int **)(param_1 + 0x40),uVar2);
    if (piVar4 == (int *)0x0) {
      uVar2 = 0;
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)0x0;
      if (param_4 != (undefined4 *)0x0) {
        piVar5 = (int *)func_0025B6A8((int)param_4,(int)piVar4);
      }
      uVar2 = 1;
    }
    bVar8 = (uVar2 & uVar7) != 0;
    if (bVar8 && param_3 != 0) {
      piVar5 = *(int **)(param_3 + 0x1c);
    }
    if (((bVar8 && param_3 != 0) && piVar5 != (int *)0x0) && (*(int *)(*piVar5 + 0x10) != 0)) {
      func_00588004(param_1,*(int *)(*piVar5 + 0x10),in_s0,in_s1);
      func_0025B810((int)param_4,0,fparam_0);
    }
    func_0025B874(auStack_88);
  }
  return uVar2;
}


#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0049C5BC <- EU 0049C594 (Ghidra, non-matching)

undefined4 * func_0049C5BC(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  float in_s0;
  
  cVar1 = *(char *)(param_1 + 0x74);
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x80) < 1) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5;
    if (*(int *)(param_1 + 0x78) == 0) goto LAB_0049c644;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x84));
  }
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  do {
    uVar4 = puVar2[2];
    if (uVar4 < param_2) goto LAB_0049c62c;
    puVar6 = puVar2;
    if (cVar1 == '\0') break;
    if (puVar5 == (undefined4 *)0x0) {
LAB_0049c628:
      puVar5 = puVar2;
    }
    else if (cVar1 == '\x01') {
      if (uVar4 < (uint)puVar5[2]) goto LAB_0049c628;
    }
    else if ((cVar1 == '\x02') && ((uint)puVar5[2] < uVar4)) goto LAB_0049c628;
LAB_0049c62c:
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x84) + (int)puVar2);
    bVar7 = puVar2 == (undefined4 *)(param_1 + 0x78);
    if (!bVar7) {
      puVar2 = (undefined4 *)((int)puVar2 - *(int *)(param_1 + 0x84));
      bVar7 = puVar2 == (undefined4 *)0x0;
    }
    puVar6 = puVar5;
  } while (!bVar7);
LAB_0049c644:
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (puVar6[2] - param_2 < 0x11) {
    func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + (int)puVar6),in_s0);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    func_0010F1DC((int *)(param_1 + 0x88),(int *)(*(int *)(param_1 + 0x94) + (int)puVar6));
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    return puVar6;
  }
  iVar3 = (puVar6[2] - param_2) - 0x10;
  puVar6[2] = iVar3;
  puVar6 = (undefined4 *)((int)puVar6 + iVar3 + puVar6[3] + 0x10);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  puVar6[2] = param_2;
  func_0010F1DC((int *)(param_1 + 0x88),(int *)(*(int *)(param_1 + 0x94) + (int)puVar6));
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return puVar6;
}


#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A574(undefined4 *param_1,int param_2,uint param_3);
extern int func_0010A644(int param_1,int param_2,uint param_3);
extern longlong func_001104E4(int param_1,int param_2);
extern undefined *DAT_001064c8;
extern int *DAT_001064cc;

// USA 001063C0 <- EU 001063C0 (Ghidra, non-matching)
// GLOBAL DAT_001064c8 undefined *
// GLOBAL DAT_001064cc int *

undefined4 * func_001063C0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  
  puVar2 = (undefined4 *)func_00100118(param_1,DAT_001064c8,0x10,7);
  piVar1 = DAT_001064cc;
  puVar2[0x1c] = 0;
  piVar6 = *(int **)(*piVar1 + 0x18);
  iVar3 = piVar6[2];
  piVar6[3] = iVar3;
  if (iVar3 < 0) {
    lVar7 = func_001104E4(iVar3 - 0x7f,0x80);
    iVar3 = (int)lVar7;
  }
  else {
    lVar7 = func_001104E4(iVar3 + 0x7f,0x80);
    iVar3 = (int)lVar7;
  }
  if ((uint)(iVar3 * 0x80) < (uint)(*piVar6 + piVar6[1])) {
    uVar5 = *piVar6 + piVar6[1] + iVar3 * -0x80;
  }
  else {
    uVar5 = 0;
  }
  func_0010A574(puVar2,(int)piVar6,uVar5);
  piVar6 = *(int **)(*piVar1 + 0x1c);
  iVar3 = piVar6[2];
  piVar6[3] = iVar3;
  if (iVar3 < 0) {
    lVar7 = func_001104E4(iVar3 - 0x7f,0x80);
    iVar3 = (int)lVar7;
  }
  else {
    lVar7 = func_001104E4(iVar3 + 0x7f,0x80);
    iVar3 = (int)lVar7;
  }
  if ((uint)(iVar3 * 0x80) < (uint)(*piVar6 + piVar6[1])) {
    uVar5 = *piVar6 + piVar6[1] + iVar3 * -0x80;
  }
  else {
    uVar5 = 0;
  }
  func_0010A644((int)puVar2,(int)piVar6,uVar5);
  puVar2[0x1c] = 0;
  iVar3 = *piVar1;
  *(undefined4 *)(iVar3 + 0x20) = *puVar2;
  puVar4 = puVar2;
  if ((uint)puVar2[0x1c] < 7) {
    puVar4 = puVar2 + puVar2[0x1c] * 4;
  }
  *(undefined4 *)(iVar3 + 0x24) = puVar4[1];
  return puVar2;
}


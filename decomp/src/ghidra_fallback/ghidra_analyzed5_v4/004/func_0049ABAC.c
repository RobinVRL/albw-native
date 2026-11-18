#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int func_005FF6E4(int param_1);
extern int func_00601658(int param_1);
extern uint *DAT_0049acf0;
extern int DAT_0049acf4;
extern undefined4 *DAT_0049acf8;

// USA 0049ABAC <- EU 0049AB84 (Ghidra, non-matching)
// GLOBAL DAT_0049acf0 uint *
// GLOBAL DAT_0049acf4 int
// GLOBAL DAT_0049acf8 undefined4 *

void func_0049ABAC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = func_0011624C((uint)((ulonglong)*DAT_0049acf0 * 10),
                        DAT_0049acf0[1] * 10 + (int)((ulonglong)*DAT_0049acf0 * 10 >> 0x20),1000,0);
  puVar1 = DAT_0049acf8;
  iVar4 = DAT_0049acf4;
  if (*(int *)(param_1 + 0x14c) < 1) {
    iVar2 = func_005FF6E4(DAT_0049acf4);
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar2 < iVar3) {
      iVar3 = 0x7ffffffe - iVar3;
    }
    else {
      iVar3 = -iVar3;
    }
    uVar6 = iVar3 + iVar2;
    if (uVar6 < *(uint *)(param_1 + 0x70)) {
      do {
        (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x70));
    }
    iVar4 = func_005FF6E4(iVar4);
    *(int *)(param_1 + 0xa0) = iVar4;
    uVar5 = extraout_r1_00;
  }
  else {
    while( true ) {
      iVar2 = func_005FF6E4(iVar4);
      iVar3 = *(int *)(param_1 + 0xa0);
      if (iVar2 < iVar3) {
        iVar3 = 0x7ffffffe - iVar3;
      }
      else {
        iVar3 = -iVar3;
      }
      if (*(uint *)(param_1 + 0x70) <= (uint)(iVar3 + iVar2)) break;
      if (*(uint *)(param_1 + 0x70) == iVar3 + iVar2 + 1U) {
        func_0010E0E0((int *)*puVar1);
        func_00601658(iVar4);
        func_0010E15C((int *)*puVar1);
        (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1);
      }
      else {
        func_0049BCF4((uint)uVar7,(uint)(uVar7 >> 0x20));
      }
    }
    func_0010E0E0((int *)*puVar1);
    func_00601658(iVar4);
    iVar4 = func_0010E15C((int *)*puVar1);
    *(int *)(param_1 + 0xa0) = iVar2;
    uVar5 = extraout_r1;
  }
  software_interrupt(0x28);
  *(int *)(param_1 + 0xb8) = iVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  return;
}


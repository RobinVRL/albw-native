#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int func_005FF6E4(int param_1);
extern int func_00601658(int param_1);
extern undefined4 *DAT_00496324;
extern uint *DAT_00496328;
extern int DAT_0049632c;

// USA 00496238 <- EU 00496210 (Ghidra, non-matching)
// GLOBAL DAT_00496324 undefined4 *
// GLOBAL DAT_00496328 uint *
// GLOBAL DAT_0049632c int

void func_00496238(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  ulonglong uVar6;
  
  puVar1 = DAT_00496324;
  (**(code **)(*(int *)*DAT_00496324 + 0x4c))((int *)*DAT_00496324);
  uVar6 = func_0011624C((uint)((ulonglong)*DAT_00496328 * 10),
                        DAT_00496328[1] * 10 + (int)((ulonglong)*DAT_00496328 * 10 >> 0x20),1000,0);
  iVar2 = DAT_0049632c;
  while( true ) {
    iVar3 = func_005FF6E4(iVar2);
    iVar4 = *(int *)(param_1 + 0xa0);
    if (iVar3 < iVar4) {
      iVar4 = 0x7ffffffe - iVar4;
    }
    else {
      iVar4 = -iVar4;
    }
    if (*(uint *)(param_1 + 0x70) <= (uint)(iVar4 + iVar3)) break;
    if (*(uint *)(param_1 + 0x70) == iVar4 + iVar3 + 1U) {
      func_0010E0E0((int *)*puVar1);
      func_00601658(iVar2);
      func_0010E15C((int *)*puVar1);
      (**(code **)(*(int *)*puVar1 + 0x4c))((int *)*puVar1);
    }
    else {
      func_0049BCF4((uint)uVar6,(uint)(uVar6 >> 0x20));
    }
  }
  func_0010E0E0((int *)*puVar1);
  func_00601658(iVar2);
  uVar5 = func_0010E15C((int *)*puVar1);
  *(int *)(param_1 + 0xa0) = iVar3;
  software_interrupt(0x28);
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = extraout_r1;
  return;
}


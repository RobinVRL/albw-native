#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0024C740(int param_1,int param_2,uint param_3,uint param_4);
extern int func_0024D00C(int param_1,int param_2,uint param_3,uint param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054FAC0(int param_1,uint param_2);
extern int *DAT_0024cdcc;
extern uint *DAT_0024cdd0;
extern undefined4 DAT_0024cdd4;
extern undefined4 *DAT_0024cdd8;
extern uint *DAT_0024cddc;
extern undefined4 *DAT_0024cde0;

// USA 0024CC74 <- EU 0024CC74 (Ghidra, non-matching)
// GLOBAL DAT_0024cdcc int *
// GLOBAL DAT_0024cdd0 uint *
// GLOBAL DAT_0024cdd4 undefined4
// GLOBAL DAT_0024cdd8 undefined4 *
// GLOBAL DAT_0024cddc uint *
// GLOBAL DAT_0024cde0 undefined4 *

undefined4 func_0024CC74(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_0024cdcc + 0x3dbbc,*(uint *)(param_2 + 0x4c));
  uVar1 = DAT_0024cdd4;
  uVar5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    if (((*DAT_0024cdd0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0024cdd0), iVar3 != 0)) {
      *DAT_0024cdd8 = uVar1;
    }
    iVar3 = (**(code **)*puVar2)(puVar2,DAT_0024cdd8);
    puVar6 = puVar2;
    if (iVar3 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    if (((*DAT_0024cddc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0024cddc), iVar3 != 0)) {
      *DAT_0024cde0 = uVar1;
    }
    iVar3 = (**(code **)*puVar2)(puVar2,DAT_0024cde0);
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar5 = 0;
    if (puVar6 != (undefined4 *)0x0 || puVar2 != (undefined4 *)0x0) {
      bVar9 = puVar6 == (undefined4 *)0x0;
      if (bVar9) {
        puVar6 = puVar2 + 0x38c;
      }
      uVar8 = *(uint *)(param_2 + 0x1c);
      if (!bVar9) {
        puVar6 = puVar6 + 0x26d;
      }
      uVar7 = *(uint *)(param_2 + 0x24);
      iVar3 = func_0054FAC0((int)puVar6,uVar8);
      iVar4 = func_0054FAC0((int)puVar6,uVar7);
      if (iVar3 + 0x20000000U >> 0x1e == iVar4 + 0x20000000U >> 0x1e) {
        func_0024D00C(param_1,(int)puVar6,uVar8,uVar7);
      }
      else {
        func_0024C740(param_1,(int)puVar6,uVar8,uVar7);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


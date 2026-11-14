/* USA 0048C6A0 (EU 0048C678): load a sound archive section into a heap (3 arguments: the heap
 * is the 3rd, r2, kept in r6 by the EU code at 0048C680). Native fix of the generated Ghidra
 * text: Ghidra gave it 2 parameters and read the heap from the unaffected register in_r2
 * (natively garbage); callers (virtual +0x14 in 0049E9DC) pass it. Rest unchanged.
 * Confidence: high. */
#include "ghidra_types.h"

extern int func_00100174();
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00408EC4(int param_1,int param_2,int param_3,int param_4);
extern int func_00408F50(undefined4 param_1,int param_2);
extern int func_00569658(int param_1);
extern int func_0057F260(int param_1);
extern uint *DAT_0048c76c;
extern undefined4 *DAT_0048c770;
extern undefined4 DAT_0048c774;

// USA 0048C6A0 <- EU 0048C678 (Ghidra, non-matching)
// GLOBAL DAT_0048c76c uint *
// GLOBAL DAT_0048c770 undefined4 *
// GLOBAL DAT_0048c774 undefined4

int * func_0048C6A0(int param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_2 + 0x1c);
  if (((*DAT_0048c76c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0048c76c), iVar2 != 0)) {
    *DAT_0048c770 = DAT_0048c774;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar5)(puVar5,DAT_0048c770), iVar2 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  puVar5 = func_0057F260(puVar5[0x50]);
  bVar1 = func_00569658((int)puVar5);
  if (bVar1) {
    iVar2 = func_00408F50(*(undefined4 *)(param_1 + 0xc),(int)puVar5);
    iVar3 = func_0010CEE0(iVar2,param_3,0x20);
    *(int *)(param_1 + 0x14) = iVar3;
    iVar2 = func_00408EC4(*(int *)(param_1 + 0xc),(int)puVar5,iVar3,iVar2);
    if (iVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
      piVar4 = (int *)(iVar2 + 100);
      puVar5 = *(undefined4 **)(iVar3 + 0x14);
      *piVar4 = iVar3 + 0x10;
      *(undefined4 **)(iVar2 + 0x68) = puVar5;
      *(int **)(iVar3 + 0x14) = piVar4;
      *puVar5 = piVar4;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
      return piVar4;
    }
  }
  return (int *)0x0;
}


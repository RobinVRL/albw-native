#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547B48(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_003678b8;

// USA 003677EC <- EU 003677C8 (Ghidra, non-matching)
// GLOBAL DAT_003678b8 int *

void func_003677EC(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  
  bVar2 = func_00588BF0(param_1,0);
  piVar1 = DAT_003678b8;
  puVar4 = (uint *)(*(int *)(param_1 + 0x324) + -8);
  if (bVar2) {
    for (; puVar4 != (uint *)(param_1 + 0x318); puVar4 = (uint *)(puVar4[3] - 8)) {
      iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
      if ((iVar3 != 0) && (bVar2 = func_00547B48(iVar3 + 4,0), !bVar2)) {
        func_00588C14(param_1,0,0);
        *(undefined1 *)(param_1 + 0x93d) = 0;
      }
    }
  }
  else {
    while( true ) {
      if (puVar4 == (uint *)(param_1 + 0x318)) {
        *(undefined1 *)(param_1 + 0x93d) = 1;
        return;
      }
      iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,*puVar4);
      if ((iVar3 != 0) && (bVar2 = func_00547B48(iVar3 + 4,0), !bVar2)) break;
      puVar4 = (uint *)(puVar4[3] - 8);
    }
  }
  return;
}


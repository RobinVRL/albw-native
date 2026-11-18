#include "ghidra_types.h"

extern int func_003FA0B0(int *param_1,int param_2,int param_3);
extern int func_003FA1C8(int *param_1,int param_2,int param_3);
extern int func_003FA2E0(int *param_1,int param_2,int param_3);
extern int func_003FB084(int *param_1,int param_2,int param_3);
extern int func_005675BC(int param_1,int *param_2,int *param_3);

// USA 0013388C <- EU 0013388C (Ghidra, non-matching)

uint func_0013388C(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = 0;
  iVar4 = *(int *)(param_2 + 0x50);
  param_1[1] = iVar4;
  piVar6 = *(int **)(param_2 + 0x20);
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar4 + 8);
  cVar1 = *(char *)(iVar3 + 5);
  if (cVar1 == '\0') {
    uVar5 = func_003FA1C8(param_1 + 2,iVar3,iVar4);
  }
  else if (cVar1 == '\x01') {
    uVar5 = func_003FA0B0(param_1 + 2,iVar3,iVar4);
    uVar2 = 0;
    if (*(uint *)(iVar3 + 0x10) != 0) {
      do {
        if (*(short *)(*(int *)(*(int *)(iVar3 + 0xc) + uVar2 * 4) + 6) == 6) {
          func_003FB084(param_1 + 4,iVar3,*(int *)(iVar4 + 0x90));
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 0x10));
    }
    if (piVar6 != (int *)0x0) {
      func_005675BC(iVar3,piVar6,param_1 + 2);
    }
  }
  else if (cVar1 == '\x02') {
    uVar5 = func_003FA2E0(param_1 + 2,iVar3,iVar4);
  }
  return ~(uVar5 >> 0xf) & 1;
}


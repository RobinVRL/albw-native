#include "ghidra_types.h"

extern int func_003FA0B0(int *param_1,int param_2,int param_3);
extern int func_003FA1C8(int *param_1,int param_2,int param_3);
extern int func_003FA2E0(int *param_1,int param_2,int param_3);
extern int func_003FB084(int *param_1,int param_2,int param_3);
extern int func_005675BC(int param_1,int *param_2,int *param_3);

// USA 00133510 <- EU 00133510 (Ghidra, non-matching)

uint func_00133510(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  uVar4 = 0;
  cVar1 = *(char *)(iVar3 + 5);
  if (cVar1 == '\0') {
    uVar4 = func_003FA1C8(param_1 + 2,iVar3,param_2);
  }
  else if (cVar1 == '\x01') {
    uVar4 = func_003FA0B0(param_1 + 2,iVar3,param_2);
    uVar2 = 0;
    if (*(uint *)(iVar3 + 0x10) != 0) {
      do {
        if (*(short *)(*(int *)(*(int *)(iVar3 + 0xc) + uVar2 * 4) + 6) == 6) {
          func_003FB084(param_1 + 4,iVar3,*(int *)(param_2 + 0x90));
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 0x10));
    }
    if (param_3 != (int *)0x0) {
      func_005675BC(iVar3,param_3,param_1 + 2);
    }
  }
  else if (cVar1 == '\x02') {
    uVar4 = func_003FA2E0(param_1 + 2,iVar3,param_2);
  }
  return ~(uVar4 >> 0xf) & 1;
}


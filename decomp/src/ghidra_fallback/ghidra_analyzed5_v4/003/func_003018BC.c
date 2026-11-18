#include "ghidra_types.h"

extern void func_00300E80(int param_1,char *param_2,float fparam_0,float fparam_1);
extern int func_00547514(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);

// USA 003018BC <- EU 00301898 (Ghidra, non-matching)

void func_003018BC(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  float in_s1;
  
  bVar1 = func_00588BF0(param_1,0);
  if (bVar1) {
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0x61c);
    iVar4 = *(int *)(param_1 + 0x620);
    if (iVar3 != 0) {
      do {
        func_00300E80(param_1,(char *)(iVar4 + iVar2 * 0xcc),in_s0,in_s1);
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar3);
    }
    if (*(int *)(param_1 + 0x628) == *(int *)(param_1 + 0x61c)) {
      func_00588C14(param_1,1,1);
      func_00547514(param_1 + 4);
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}


#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_0012C85C(int *param_1,uint param_2);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0044F4B0(int param_1);
extern int func_0051E300(int param_1);
extern float DAT_0044f784;

// USA 0044F6AC <- EU 0044F684 (Ghidra, non-matching)
// GLOBAL DAT_0044f784 float

undefined4 func_0044F6AC(int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = param_1[0x15];
  for (piVar4 = (int *)(param_1[0x13] - iVar5);
      piVar4 != (int *)((int)param_1 + (0x48 - param_1[0x15]));
      piVar4 = (int *)(*(int *)((int)piVar4 + iVar5 + 4) - iVar5)) {
    iVar3 = func_0051E300((int)piVar4);
    if (iVar3 != 0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
  }
  func_0012C85C(param_1,param_1[0x15]);
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar6 = cVar1 == '\0';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  cVar2 = (char)param_1[0x26];
  if (bVar6 && cVar1 == '\0') {
    if (cVar2 != '\t') {
      func_0044F4B0((int)param_1);
      *(undefined1 *)((int)param_1 + 0xe) = 1;
    }
  }
  else if (cVar2 != *(char *)((int)param_1 + 0x99)) {
    if (cVar2 == '\t') {
      return func_0012C790((int)param_1);
    }
    param_1[0x22] = param_1[7];
    *(undefined2 *)((int)param_1 + 0x82) = *(undefined2 *)((int)param_1 + 0x22);
    *(undefined2 *)(param_1 + 0x20) = 0;
    func_002313DC((int)(param_1 + 0x20));
    func_0044F4B0((int)param_1);
    func_00231524((int)(param_1 + 8));
    func_002317C0((undefined2 *)(param_1 + 0x1d),DAT_0044f784);
    return 0;
  }
  return 0;
}


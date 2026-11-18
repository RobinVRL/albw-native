#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0012C85C(int *param_1,uint param_2);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0051E300(int param_1);

// USA 00487290 <- EU 00487268 (Ghidra, non-matching)

undefined4 func_00487290(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[0x15];
  for (piVar3 = (int *)(param_1[0x13] - iVar4);
      piVar3 != (int *)((int)param_1 + (0x48 - param_1[0x15]));
      piVar3 = (int *)(*(int *)((int)piVar3 + iVar4 + 4) - iVar4)) {
    iVar2 = func_0051E300((int)piVar3);
    if (iVar2 != 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  func_0012C85C(param_1,param_1[0x15]);
  cVar1 = (char)param_1[0x20];
  if (*(char *)((int)param_1 + 0x81) != cVar1) {
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        if (cVar1 < '\0') {
          *(char *)((int)param_1 + 0x81) = cVar1;
        }
        else {
          param_1[10] = param_1[7];
          *(short *)((int)param_1 + 0x22) = (short)cVar1;
          *(undefined2 *)(param_1 + 8) = 0;
          param_1[0xd] = param_1[7];
          *(short *)((int)param_1 + 0x2e) = (short)(char)param_1[0x20];
          *(undefined2 *)(param_1 + 0xb) = 2;
          *(char *)((int)param_1 + 0x81) = (char)param_1[0x20];
          *(undefined1 *)((int)param_1 + 0xe) = 1;
        }
      }
    }
    else if ((*(char *)((int)param_1 + 0xd) == '\x03') && (*(char *)((int)param_1 + 0xe) == '\x03'))
    {
      if (cVar1 == -1) {
        return func_0012C718((int)param_1);
      }
      param_1[0x1f] = param_1[7];
      *(undefined2 *)((int)param_1 + 0x76) = *(undefined2 *)((int)param_1 + 0x22);
      *(undefined2 *)(param_1 + 0x1d) = 0;
      func_002313DC((int)(param_1 + 0x1d));
      param_1[10] = param_1[7];
      *(short *)((int)param_1 + 0x22) = (short)(char)param_1[0x20];
      *(undefined2 *)(param_1 + 8) = 0;
      param_1[0xd] = param_1[7];
      *(short *)((int)param_1 + 0x2e) = (short)(char)param_1[0x20];
      *(undefined2 *)(param_1 + 0xb) = 2;
      *(char *)((int)param_1 + 0x81) = (char)param_1[0x20];
      return func_00231524((int)(param_1 + 8));
    }
  }
  return 0;
}


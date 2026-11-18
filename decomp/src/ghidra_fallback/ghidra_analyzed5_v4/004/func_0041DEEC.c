#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0041DEEC <- EU 0041DECC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1

void func_0041DEEC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5
                  )

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,0xb);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x22;
  puVar2[4] = param_1 + 0x120;
  iVar3 = param_4[1];
  iVar4 = param_4[2];
  puVar2[5] = *param_4;
  puVar2[6] = iVar3;
  puVar2[7] = iVar4;
  puVar2[8] = param_2;
  puVar2[9] = param_3;
  *(undefined1 *)(puVar2 + 10) = param_5;
  func_00412C68((int)piVar1,puVar2);
  *(undefined1 *)(param_1 + 0x11d) = 1;
  return;
}


#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00676530(int *param_1);

// USA 00412E98 <- EU 00412E78 (Ghidra, non-matching)

void func_00412E98(undefined1 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,7);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x36;
  *(undefined1 *)(puVar2 + 4) = param_1;
  puVar2[6] = param_2;
  func_00412C68((int)piVar1,puVar2);
  iVar3 = func_00412C8C(piVar1,1);
  do {
    piVar4 = (int *)func_00676530(piVar1 + 0x2d);
    piVar1[0x5e] = piVar4[2];
    piVar7 = piVar4;
    if (piVar4 != (int *)0x0) {
      do {
        piVar5 = piVar7;
        piVar7 = (int *)*piVar5;
      } while (piVar7 != (int *)0x0);
      iVar6 = piVar5[3];
      piVar1[0x62] = iVar6;
      *(undefined1 *)(piVar1 + 99) = 0;
      if (piVar1[0x61] == iVar6) {
        piVar1[0x62] = 0;
        piVar1[0x61] = 0;
      }
    }
  } while (piVar4[2] != iVar3);
  return;
}


#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int DAT_004082a4;

// USA 00408254 <- EU 00408234 (Ghidra, non-matching)
// GLOBAL DAT_004082a4 int

bool func_00408254(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  bVar6 = *(char *)(DAT_004082a4 + param_1 * 0x10 + 0x294) == '\0';
  if (bVar6) {
    piVar1 = (int *)func_00412BB4();
    puVar2 = (undefined4 *)func_00412A3C(piVar1,10);
    puVar2[3] = piVar1[0x61];
    *(undefined1 *)(puVar2 + 1) = 0x34;
    *(char *)(puVar2 + 4) = (char)param_1;
    puVar2[5] = param_2;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar2[6] = *param_3;
    puVar2[7] = uVar3;
    puVar2[8] = uVar4;
    puVar2[9] = uVar5;
    func_00412C68((int)piVar1,puVar2);
  }
  return bVar6;
}


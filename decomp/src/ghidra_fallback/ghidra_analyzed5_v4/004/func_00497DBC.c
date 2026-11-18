#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int DAT_00497e4c;
extern undefined4 DAT_00497e50;
extern int DAT_00497e54;

// USA 00497DBC <- EU 00497D94 (Ghidra, non-matching)
// GLOBAL DAT_00497e4c int
// GLOBAL DAT_00497e50 undefined4
// GLOBAL DAT_00497e54 int

void func_00497DBC(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined1 *)(param_1 + 0x324) = 3;
  *(undefined4 *)(param_1 + 0x4878) = 0;
  piVar4 = (int *)(param_1 + 0x487c);
  *(undefined4 *)(param_1 + 0x328) = 0;
  func_006003D8(0x208,piVar4);
  iVar1 = DAT_00497e4c;
  puVar7 = (undefined4 *)*piVar4;
  *(undefined4 **)(param_1 + 0x4880) = puVar7;
  *puVar7 = 0;
  puVar7[1] = iVar1;
  puVar7[2] = 0;
  puVar7[3] = iVar1 + 1;
  func_00110490(puVar7 + 4,0x98);
  iVar1 = DAT_00497e54;
  piVar2 = puVar7 + 0x2a;
  puVar7[5] = DAT_00497e50;
  iVar5 = 0;
  iVar6 = 0xc;
  do {
    iVar6 = iVar6 + -1;
    piVar2[1] = iVar1;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar3 = piVar2 + 5;
    *piVar2 = iVar5;
    iVar5 = iVar5 + 1;
    piVar2 = piVar2 + 6;
    *piVar3 = 0;
  } while (iVar6 != 0);
  *piVar4 = (int)(puVar7 + 0x72);
  return;
}


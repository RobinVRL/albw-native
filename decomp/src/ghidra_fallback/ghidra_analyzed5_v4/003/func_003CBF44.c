#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003CBA44(undefined4 *param_1,int param_2);
extern int func_003CBC1C(undefined4 *param_1,int param_2);
extern int func_003CCFF4(int *param_1);
extern int func_003CD350(undefined4 *param_1,int param_2);
extern int DAT_003cbff4;
extern int DAT_003cbff8;
extern int DAT_003cbffc;
extern int DAT_003cc000;
extern int DAT_003cc004;
extern undefined4 DAT_003cc008;

// USA 003CBF44 <- EU 003CBF20 (Ghidra, non-matching)
// GLOBAL DAT_003cbff4 int
// GLOBAL DAT_003cbff8 int
// GLOBAL DAT_003cbffc int
// GLOBAL DAT_003cc000 int
// GLOBAL DAT_003cc004 int
// GLOBAL DAT_003cc008 undefined4

undefined4 * func_003CBF44(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar4 = func_003CCFF4(param_1);
  iVar1 = DAT_003cbff4;
  piVar4[1] = DAT_003cbff4;
  *piVar4 = 0;
  piVar4[3] = iVar1 + 1;
  piVar4[2] = 0;
  func_00110490(piVar4 + 4,0x98);
  iVar1 = DAT_003cbffc;
  iVar7 = 0;
  piVar4[5] = DAT_003cbff8;
  piVar6 = piVar4 + 0x2a;
  iVar8 = 0xc;
  do {
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    *piVar6 = iVar7;
    piVar6[1] = iVar1;
    iVar2 = DAT_003cc000;
    iVar8 = iVar8 + -1;
    piVar6 = piVar6 + 6;
    iVar7 = iVar7 + 1;
  } while (iVar8 != 0);
  piVar4[0x72] = 0;
  piVar4[0x73] = iVar2;
  puVar5 = func_003CBC1C(piVar4 + 0x74,1);
  puVar5 = func_003CD350(puVar5,1);
  iVar1 = DAT_003cc004;
  *puVar5 = 0;
  puVar5[1] = iVar1;
  puVar5[2] = 0;
  puVar5[3] = iVar1 + 0xb6;
  puVar5[4] = 0;
  puVar5[5] = iVar1 + -0x1b;
  puVar5 = func_003CBA44(puVar5 + 6,1);
  uVar3 = DAT_003cc008;
  *puVar5 = 0;
  puVar5[1] = uVar3;
  return puVar5 + 2;
}


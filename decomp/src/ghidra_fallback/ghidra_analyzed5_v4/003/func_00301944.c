#include "ghidra_types.h"

extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_005821B4(int param_1,int param_2);
extern int DAT_003019a4;
extern int *DAT_003019a8;

// USA 00301944 <- EU 00301920 (Ghidra, non-matching)
// GLOBAL DAT_003019a4 int
// GLOBAL DAT_003019a8 int *

int * func_00301944(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  
  piVar2 = func_001E56CC(param_1,param_2);
  iVar3 = DAT_003019a4 + 0x78;
  *piVar2 = DAT_003019a4;
  piVar2[200] = iVar3;
  piVar2[0x187] = 0;
  piVar2[0x188] = 0;
  fVar4 = func_0054DE3C(piVar2,0,1);
  piVar2[0x189] = (int)ALBW_AS_U32(fVar4);
  piVar1 = DAT_003019a8;
  piVar2[0x18a] = 0;
  piVar2[0x18b] = 0;
  iVar3 = func_005821B4(*piVar1,(int)(short)param_2[0x14]);
  piVar2[0x18b] = iVar3;
  func_001E518C(piVar2,param_2,1,0,0);
  return piVar2;
}


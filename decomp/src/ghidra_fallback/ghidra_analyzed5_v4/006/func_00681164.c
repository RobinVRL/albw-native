#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00488208(int param_1);
extern int func_00488234(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_006811b8;
extern int DAT_006811bc;

// USA 00681164 <- EU 0068113C (Ghidra, non-matching)
// GLOBAL DAT_006811b8 undefined4 *
// GLOBAL DAT_006811bc int

int * func_00681164(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = DAT_006811b8;
  if (param_1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_006811b8,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x154,param_1,4);
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)func_00488234(puVar2,0);
    iVar3 = DAT_006811bc + 0xac;
    *piVar4 = DAT_006811bc;
    piVar4[0xe] = iVar3;
    func_00488208((int)piVar4);
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return piVar4;
}


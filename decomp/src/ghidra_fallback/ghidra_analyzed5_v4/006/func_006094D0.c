#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004356B4(int *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_00609530;
extern int DAT_00609534;
extern int *DAT_00609538;
extern int DAT_0060953c;

// USA 006094D0 <- EU 006094A8 (Ghidra, non-matching)
// GLOBAL DAT_00609530 undefined4
// GLOBAL DAT_00609534 int
// GLOBAL DAT_00609538 int *
// GLOBAL DAT_0060953c int

int * func_006094D0(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00609530);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar4 = DAT_00609534;
    piVar3[200] = DAT_00609534 + 0x54;
    *piVar3 = iVar4;
    iVar4 = func_0054D964((int)piVar3,0);
    piVar1 = DAT_00609538;
    piVar3[0x103] = iVar4;
    piVar3[0x105] = 0;
    iVar4 = piVar1[3];
    piVar3[0x106] = piVar1[2];
    piVar3[0x107] = iVar4;
    iVar4 = DAT_0060953c;
    piVar3[0x108] = 0;
    piVar3[0x104] = iVar4;
    func_004356B4((int *)piVar3[0x103]);
    iVar4 = *piVar1;
    iVar5 = piVar1[1];
    piVar3[0x105] = (int)piVar3;
    piVar3[0x106] = iVar4;
    piVar3[0x107] = iVar5;
  }
  return piVar3;
}


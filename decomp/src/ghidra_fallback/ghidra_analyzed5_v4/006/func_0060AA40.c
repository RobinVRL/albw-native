#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E548C(int param_1);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_004D4AC0(int param_1);
extern int func_004D4CDC(int param_1);
extern int func_004D548C(int param_1);
extern undefined4 DAT_0060aac4;
extern int DAT_0060aac8;
extern int DAT_0060aacc;

// USA 0060AA40 <- EU 0060AA18 (Ghidra, non-matching)
// GLOBAL DAT_0060aac4 undefined4
// GLOBAL DAT_0060aac8 int
// GLOBAL DAT_0060aacc int

int * func_0060AA40(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_0060aac4);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_001E56CC(puVar3,param_1);
    iVar2 = DAT_0060aacc;
    iVar1 = DAT_0060aac8;
    piVar4[200] = DAT_0060aac8 + 0x74;
    *piVar4 = iVar1;
    piVar4[0x187] = iVar2;
    piVar4[0x188] = 0;
    piVar4[0x189] = 0;
    piVar4[0x18a] = 0;
    piVar4[0x18b] = 0;
    piVar4[0x18c] = 0;
    func_001E518C(piVar4,param_1,0,0,0);
    func_004D548C((int)piVar4);
    func_001E548C((int)piVar4);
    func_004D4CDC((int)piVar4);
    func_004D4AC0((int)piVar4);
  }
  return piVar4;
}


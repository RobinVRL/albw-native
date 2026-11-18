#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001511F0(int *param_1);
extern int func_001512E8(int *param_1);
extern int func_0032740C(undefined4 *param_1,uint *param_2,int param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern undefined4 DAT_00606c8c;
extern int DAT_00606c90;
extern int DAT_00606c94;

// USA 00606C44 <- EU 00606C1C (Ghidra, non-matching)
// GLOBAL DAT_00606c8c undefined4
// GLOBAL DAT_00606c90 int
// GLOBAL DAT_00606c94 int

int * func_00606C44(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00606c8c);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_0032740C(puVar2,param_1,DAT_00606c90);
    iVar1 = DAT_00606c94;
    piVar3[200] = DAT_00606c94 + 0x5c;
    *piVar3 = iVar1;
    piVar4 = (int *)func_0054D89C((int)piVar3,0);
    piVar3[0x14e] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      func_001511F0(piVar4);
      func_001512E8((int *)piVar3[0x14e]);
    }
  }
  return piVar3;
}


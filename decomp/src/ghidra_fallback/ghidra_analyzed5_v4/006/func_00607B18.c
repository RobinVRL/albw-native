#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_00607b50;
extern float *DAT_00607b54;
extern int DAT_00607b58;

// USA 00607B18 <- EU 00607AF0 (Ghidra, non-matching)
// GLOBAL DAT_00607b50 undefined4
// GLOBAL DAT_00607b54 float *
// GLOBAL DAT_00607b58 int

int * func_00607B18(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607b50);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00309850(puVar1,param_1,1,1,DAT_00607b54,1,1);
    iVar3 = DAT_00607b58 + 0x54;
    *piVar2 = DAT_00607b58;
    piVar2[200] = iVar3;
    func_003094A0((int)piVar2);
  }
  return piVar2;
}


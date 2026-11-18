#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_00609c30;
extern float *DAT_00609c34;
extern int DAT_00609c38;

// USA 00609BF4 <- EU 00609BCC (Ghidra, non-matching)
// GLOBAL DAT_00609c30 undefined4
// GLOBAL DAT_00609c34 float *
// GLOBAL DAT_00609c38 int

int * func_00609BF4(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00609c30);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00309850(puVar2,param_1,2,1,DAT_00609c34,0,0);
    iVar1 = DAT_00609c38;
    *piVar3 = DAT_00609c38;
    *(undefined1 *)((int)piVar3 + 0x436) = 0;
    piVar3[200] = iVar1 + 0x54;
    func_003094A0((int)piVar3);
  }
  return piVar3;
}


#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00182E50(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C0808(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern undefined4 DAT_00607cdc;
extern int DAT_00607ce0;
extern undefined4 *DAT_00607ce4;
extern float DAT_00607ce8;
extern int DAT_00607cec;

// USA 00607C9C <- EU 00607C74 (Ghidra, non-matching)
// GLOBAL DAT_00607cdc undefined4
// GLOBAL DAT_00607ce0 int
// GLOBAL DAT_00607ce4 undefined4 *
// GLOBAL DAT_00607ce8 float
// GLOBAL DAT_00607cec int

int * func_00607C9C(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00607cdc);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00182E50(puVar2,param_1);
    iVar1 = DAT_00607ce0;
    *piVar3 = DAT_00607ce0;
    *(undefined1 *)(piVar3 + 0x266) = 0;
    piVar3[200] = iVar1 + 0xb8;
    func_004C03B8((int)piVar3,DAT_00607ce4);
    func_004C0808((int)piVar3,1,DAT_00607cec,0,DAT_00607ce8);
  }
  return piVar3;
}


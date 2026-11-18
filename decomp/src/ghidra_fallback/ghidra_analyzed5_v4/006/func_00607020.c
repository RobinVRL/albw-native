#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00182E50(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C0808(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern undefined4 DAT_00607090;
extern int DAT_00607094;
extern int *DAT_00607098;
extern undefined4 *DAT_0060709c;
extern float DAT_006070a0;
extern int DAT_006070a4;

// USA 00607020 <- EU 00606FF8 (Ghidra, non-matching)
// GLOBAL DAT_00607090 undefined4
// GLOBAL DAT_00607094 int
// GLOBAL DAT_00607098 int *
// GLOBAL DAT_0060709c undefined4 *
// GLOBAL DAT_006070a0 float
// GLOBAL DAT_006070a4 int

int * func_00607020(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00607090);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00182E50(puVar2,param_1);
    piVar1 = DAT_00607098;
    iVar4 = DAT_00607094 + 0xb8;
    *piVar3 = DAT_00607094;
    piVar3[200] = iVar4;
    *(undefined1 *)(piVar3 + 0x266) = 3;
    *(undefined1 *)((int)piVar3 + 0x999) = 0;
    if (*(char *)(*piVar1 + 0x2ec) == '\0') {
      *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    }
    else {
      func_004C03B8((int)piVar3,DAT_0060709c);
      func_004C0808((int)piVar3,1,DAT_006070a4,0,DAT_006070a0);
      *(undefined1 *)(piVar3 + 0x266) = *(undefined1 *)(*piVar1 + 0x2e4);
    }
  }
  return piVar3;
}


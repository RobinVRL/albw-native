#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_006079f0;
extern float DAT_006079f4;
extern undefined4 DAT_006079f8;
extern int DAT_006079fc;

// USA 006079A0 <- EU 00607978 (Ghidra, non-matching)
// GLOBAL DAT_006079f0 undefined4
// GLOBAL DAT_006079f4 float
// GLOBAL DAT_006079f8 undefined4
// GLOBAL DAT_006079fc int

int * func_006079A0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006079f0);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    local_1c = DAT_006079f4;
    local_18 = DAT_006079f4;
    uStack_14 = DAT_006079f8;
    piVar3 = func_00309850(puVar2,param_1,0,1,&local_1c,0,0);
    iVar1 = DAT_006079fc;
    *piVar3 = DAT_006079fc;
    *(undefined1 *)((int)piVar3 + 0x436) = 0;
    piVar3[200] = iVar1 + 0x54;
    func_003094A0((int)piVar3);
  }
  return piVar3;
}


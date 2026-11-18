#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_006078b8;
extern float *DAT_006078bc;
extern int DAT_006078c0;
extern float DAT_006078c4;
extern undefined4 DAT_006078c8;

// USA 0060783C <- EU 00607814 (Ghidra, non-matching)
// GLOBAL DAT_006078b8 undefined4
// GLOBAL DAT_006078bc float *
// GLOBAL DAT_006078c0 int
// GLOBAL DAT_006078c4 float
// GLOBAL DAT_006078c8 undefined4

int * func_0060783C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006078b8);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00309850(puVar1,param_1,3,0,DAT_006078bc,1,0);
    iVar3 = DAT_006078c0 + 0x54;
    *piVar2 = DAT_006078c0;
    piVar2[200] = iVar3;
    *(undefined1 *)((int)piVar2 + 0x436) = 0;
    *(undefined1 *)((int)piVar2 + 0x437) = 1;
    func_003094A0((int)piVar2);
    func_004D80A4(&fStack_1c,piVar2[0xfa],*(float *)(piVar2[0x106] + 0x60) * DAT_006078c4);
    local_18 = DAT_006078c8;
    func_00115C54((float *)(piVar2 + 0x109),(float *)(piVar2 + 0x109),&fStack_1c);
  }
  return piVar2;
}


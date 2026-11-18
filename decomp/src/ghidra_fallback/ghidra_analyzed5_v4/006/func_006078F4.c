#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_00607968;
extern float *DAT_0060796c;
extern int DAT_00607970;
extern undefined4 DAT_00607974;

// USA 006078F4 <- EU 006078CC (Ghidra, non-matching)
// GLOBAL DAT_00607968 undefined4
// GLOBAL DAT_0060796c float *
// GLOBAL DAT_00607970 int
// GLOBAL DAT_00607974 undefined4

int * func_006078F4(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607968);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00309850(puVar1,param_1,3,0,DAT_0060796c,1,0);
    iVar3 = DAT_00607970 + 0x54;
    *piVar2 = DAT_00607970;
    piVar2[200] = iVar3;
    *(undefined1 *)((int)piVar2 + 0x436) = 0;
    *(undefined1 *)((int)piVar2 + 0x437) = 1;
    func_003094A0((int)piVar2);
    func_004D80A4(&fStack_1c,piVar2[0xfa],*(float *)(piVar2[0x106] + 0x60));
    local_18 = DAT_00607974;
    func_00115C54((float *)(piVar2 + 0x109),(float *)(piVar2 + 0x109),&fStack_1c);
  }
  return piVar2;
}


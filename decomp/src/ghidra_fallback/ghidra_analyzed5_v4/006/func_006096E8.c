#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern undefined4 DAT_00609774;
extern float DAT_00609778;
extern undefined4 DAT_0060977c;
extern int DAT_00609780;

// USA 006096E8 <- EU 006096C0 (Ghidra, non-matching)
// GLOBAL DAT_00609774 undefined4
// GLOBAL DAT_00609778 float
// GLOBAL DAT_0060977c undefined4
// GLOBAL DAT_00609780 int

int * func_006096E8(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00609774);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_2c = DAT_00609778;
    local_28 = DAT_00609778;
    local_24 = DAT_0060977c;
    fVar4 = DAT_00609778;
    piVar2 = func_00309850(puVar1,param_1,3,0,&local_2c,0,0);
    iVar3 = DAT_00609780 + 0x54;
    *piVar2 = DAT_00609780;
    piVar2[200] = iVar3;
    *(undefined1 *)((int)piVar2 + 0x436) = 0;
    *(undefined1 *)((int)piVar2 + 0x437) = 1;
    func_003094A0((int)piVar2);
    func_004D80A4(&fStack_20,piVar2[0xfa],*(float *)(piVar2[0x106] + 0x60));
    local_1c = fVar4;
    func_00115C54((float *)(piVar2 + 0x109),(float *)(piVar2 + 0x109),&fStack_20);
  }
  return piVar2;
}


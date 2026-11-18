#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_00608cd0;
extern float DAT_00608cd4;
extern undefined4 DAT_00608cd8;
extern int DAT_00608cdc;

// USA 00608C84 <- EU 00608C5C (Ghidra, non-matching)
// GLOBAL DAT_00608cd0 undefined4
// GLOBAL DAT_00608cd4 float
// GLOBAL DAT_00608cd8 undefined4
// GLOBAL DAT_00608cdc int

int * func_00608C84(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00608cd0);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = DAT_00608cd4;
    local_10 = DAT_00608cd4;
    uStack_c = DAT_00608cd8;
    piVar2 = func_00309850(puVar1,param_1,0,1,&local_14,0,0);
    iVar3 = DAT_00608cdc + 0x54;
    *piVar2 = DAT_00608cdc;
    piVar2[200] = iVar3;
    func_003094A0((int)piVar2);
  }
  return piVar2;
}


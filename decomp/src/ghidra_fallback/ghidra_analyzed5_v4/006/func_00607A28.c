#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003094A0(int param_1);
extern int func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5, int param_6,int param_7);
extern undefined4 DAT_00607a74;
extern float DAT_00607a78;
extern undefined4 DAT_00607a7c;
extern int DAT_00607a80;

// USA 00607A28 <- EU 00607A00 (Ghidra, non-matching)
// GLOBAL DAT_00607a74 undefined4
// GLOBAL DAT_00607a78 float
// GLOBAL DAT_00607a7c undefined4
// GLOBAL DAT_00607a80 int

int * func_00607A28(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607a74);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = DAT_00607a78;
    local_10 = DAT_00607a78;
    uStack_c = DAT_00607a7c;
    piVar2 = func_00309850(puVar1,param_1,0,1,&local_14,0,0);
    iVar3 = DAT_00607a80 + 0x54;
    *piVar2 = DAT_00607a80;
    piVar2[200] = iVar3;
    func_003094A0((int)piVar2);
  }
  return piVar2;
}


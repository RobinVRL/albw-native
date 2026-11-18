#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001E8440(int param_1,float *param_2,float param_3);
extern int func_004F68AC();
extern int func_00520FC0(void);
extern float DAT_002674b8;
extern int *DAT_002674bc;

// USA 00267404 <- EU 0026742C (Ghidra, non-matching)
// GLOBAL DAT_002674b8 float
// GLOBAL DAT_002674bc int *

undefined4 func_00267404(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  cVar1 = *(char *)(param_1 + 0x8cc);
  if ((cVar1 != '\x0f' && cVar1 != '\x11') && (cVar1 != '\x12' && cVar1 != '\x14')) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C54(afStack_20,(float *)(param_1 + 0x3d0),pfVar2);
    func_00115D70(afStack_20,afStack_20,DAT_002674b8);
    param_3 = 1;
    func_001E8440(*(int *)(*DAT_002674bc + 0x18),afStack_20,1);
  }
  return func_004F68AC(param_1,param_2,param_3,param_4);
}


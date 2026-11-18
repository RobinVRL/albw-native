#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam001a98d4;
extern undefined DAT_001a98bc;
extern char s_cf_001a98c0[];
extern undefined4 _DAT_001a98bc;

// USA 001A985C <- EU 001A985C (Ghidra, non-matching)
// GLOBAL DAT_001a98bc undefined
// GLOBAL UNK_001a98d4 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001A985C(int param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),ALBW_AS_F32(_DAT_001a98bc));
  fVar1 = func_004F898C();
  *(float *)(param_1 + 0x3e0) = fVar1;
  func_004FABDC(param_1,3,0,0);
  pcStack_c = s_cf_001a98c0;
  iStack_10 = iRam001a98d4;
  return func_00150A84((int *)param_1,&iStack_10,0);
}


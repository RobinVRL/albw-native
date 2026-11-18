#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00129EE4(int param_1);
extern int func_0012A4C4(int param_1,int param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern float *DAT_001299bc;

// USA 0012994C <- EU 0012994C (Ghidra, non-matching)
// GLOBAL DAT_001299bc float *

undefined4 func_0012994C(int param_1)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  local_18 = *DAT_001299bc;
  fStack_14 = DAT_001299bc[1];
  local_10 = DAT_001299bc[2];
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_18,pfVar1,(float *)(param_1 + 0x3d0));
  iVar2 = func_004904CC(local_18,local_10);
  *(int *)(param_1 + 0x930) = iVar2;
  iVar2 = func_0012A4C4(param_1,1);
  if (iVar2 != 0) {
    return func_00129EE4(param_1);
  }
  return 0;
}


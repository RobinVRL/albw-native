#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0058A7D4(void);
extern float DAT_002fb0b8;
extern int *DAT_002fb0bc;
extern int DAT_002fb0d4;
extern char s_SE_StalfosBone_HIT_002fb0c0[];

// USA 002FB054 <- EU 002FB030 (Ghidra, non-matching)
// GLOBAL DAT_002fb0b8 float
// GLOBAL DAT_002fb0bc int *
// GLOBAL DAT_002fb0d4 int
// GLOBAL s_SE_StalfosBone_HIT_002fb0c0 string

undefined4 func_002FB054(int *param_1)

{
  float fparam_0;
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  fparam_0 = DAT_002fb0b8;
  param_1[0x167] = param_1[0x167] & 0xffffff7bU | 0x800;
  param_1[0x243] = param_1[0xf5];
  func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),fparam_0);
  puVar2 = (uint *)func_0058A7D4();
  piVar1 = DAT_002fb0bc;
  iVar4 = *DAT_002fb0bc;
  uVar3 = func_00111A64(puVar2);
  local_18 = DAT_002fb0d4;
  param_1[0x141] = (int)((ulonglong)(uint)(iVar4 << 1) * (ulonglong)uVar3 >> 0x20) - *piVar1;
  local_14 = s_SE_StalfosBone_HIT_002fb0c0;
  return func_00150A84(param_1,&local_18,0);
}


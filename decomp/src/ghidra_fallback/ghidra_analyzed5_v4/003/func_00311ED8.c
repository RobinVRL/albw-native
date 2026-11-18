#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004C01E4(undefined4 *param_1);
extern int func_004C1418(int *param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int DAT_00311fe8;
extern float DAT_00311fec;
extern float DAT_00311ff0;

// USA 00311ED8 <- EU 00311EB4 (Ghidra, non-matching)
// GLOBAL DAT_00311fe8 int
// GLOBAL DAT_00311fec float
// GLOBAL DAT_00311ff0 float

undefined4 func_00311ED8(int *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  if ((char)param_1[0x262] != '\0') {
    func_004C1418(param_1,1);
    return func_004C01E4(param_1);
  }
  pfVar2 = (float *)(param_1 + 0x285);
  func_00115C70(&local_28,pfVar2,(float *)(param_1 + 0xf4));
  iVar1 = func_004904CC(local_28,local_20);
  func_0051D2F4(param_1 + 0xfa,iVar1,DAT_00311fe8,0x7fffffff,DAT_00311fec);
  pfVar3 = (float *)(param_1 + 0xf4);
  fparam_0 = ALBW_AS_F32(param_1[0x20d]);
  func_00115C70(&local_28,pfVar2,pfVar3);
  fVar4 = SQRT(local_28 * local_28 + local_24 * local_24 + local_20 * local_20);
  if (fparam_0 < fVar4) {
    fVar4 = DAT_00311ff0 / fVar4;
    local_28 = local_28 * fVar4;
    local_20 = local_20 * fVar4;
    local_24 = local_24 * fVar4;
    return func_00115DAC(pfVar3,&local_28,pfVar3,fparam_0);
  }
  *pfVar3 = *pfVar2;
  param_1[0xf5] = param_1[0x286];
  param_1[0xf6] = param_1[0x287];
  (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  *(char *)(param_1 + 0x262) = (char)param_1[0x262] + '\x01';
  return 0;
}


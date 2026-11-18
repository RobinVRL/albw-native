#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00520ED8(int param_1);
extern float DAT_00188420;
extern float DAT_00188424;
extern undefined DAT_00188428;
extern int DAT_0018843c;
extern char s__SE_BombS_FUSE_0018842b[];
extern char s_cf_0018842b[];
extern undefined4 _DAT_00188428;

// USA 00188324 <- EU 00188324 (Ghidra, non-matching)
// GLOBAL DAT_00188420 float
// GLOBAL DAT_00188424 float
// GLOBAL DAT_00188428 undefined
// GLOBAL DAT_0018843c int
// GLOBAL s_cf_0018842b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00188324(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  fVar4 = *(float *)(param_1 + 0x3e0) - DAT_00188420;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 <= DAT_00188424) << 0x1d;
  fVar3 = DAT_00188424;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x3e0) = fVar3;
  fVar3 = ALBW_AS_F32(_DAT_00188428);
  if (*(int *)(param_1 + 0x4fc) < 0x1e) {
    fVar4 = (float)VectorSignedToFloat(0x1e - *(int *)(param_1 + 0x4fc),(byte)(uVar1 >> 0x15) & 3);
    fVar4 = fVar4 * ALBW_AS_F32(_DAT_00188428);
    *(float *)(param_1 + 0x568) = fVar4;
    iVar2 = func_00520ED8(param_1);
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x4f8) != 0)) {
      func_0010A464(auStack_78);
      local_14 = s__SE_BombS_FUSE_0018842b + 1;
      local_18 = DAT_0018843c;
      func_001507D8(param_1,&local_18,(int)auStack_78);
      func_0025B860((int)auStack_78,0,fVar4,fVar3);
      return func_0025B874(auStack_78);
    }
  }
  else {
    iVar2 = func_00520ED8(param_1);
    if (iVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 800) + 0x34))(param_1 + 800);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}


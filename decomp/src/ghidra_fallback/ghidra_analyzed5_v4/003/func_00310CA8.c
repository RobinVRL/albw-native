#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float DAT_00310d10;
extern float DAT_00310d14;
extern undefined DAT_00310d18;
extern int DAT_00310d34;
extern char s_L_SE_ShopManKinSta_RETURN_00310d1a[];
extern char s_cf_00310d1a[];
extern undefined4 _DAT_00310d18;

// USA 00310CA8 <- EU 00310C84 (Ghidra, non-matching)
// GLOBAL DAT_00310d10 float
// GLOBAL DAT_00310d14 float
// GLOBAL DAT_00310d18 undefined
// GLOBAL DAT_00310d34 int
// GLOBAL s_cf_00310d1a string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00310CA8(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fVar3 = ALBW_AS_F32(_DAT_00310d18);
  fVar2 = DAT_00310d14;
  fVar1 = DAT_00310d10;
  iVar6 = param_1[2];
  iVar7 = param_1[3];
  fVar5 = ALBW_AS_F32(param_1[4]) + DAT_00310d10;
  pfVar4 = (float *)param_1[0x2b9];
  *pfVar4 = DAT_00310d10;
  pfVar4[1] = fVar2;
  pfVar4[2] = fVar3;
  pfVar4[4] = fVar1;
  pfVar4[3] = fVar2;
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  param_1[0xf6] = (int)ALBW_AS_U32(fVar5);
  local_20 = DAT_00310d34;
  param_1[0xf4] = iVar6;
  param_1[0xf5] = iVar7;
  local_1c = s_L_SE_ShopManKinSta_RETURN_00310d1a + 2;
  return func_00150A84(param_1,&local_20,0);
}


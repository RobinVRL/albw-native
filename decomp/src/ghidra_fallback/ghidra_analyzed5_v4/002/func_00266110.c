#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern float DAT_00266208;
extern int DAT_0026620c;
extern undefined DAT_00266210;
extern int DAT_0026622c;
extern char s__SE_IceBubble_BURNING_00266213[];
extern char s_cf_00266213[];
extern undefined4 _DAT_00266210;

// USA 00266110 <- EU 00266138 (Ghidra, non-matching)
// GLOBAL DAT_00266208 float
// GLOBAL DAT_0026620c int
// GLOBAL DAT_00266210 undefined
// GLOBAL DAT_0026622c int
// GLOBAL s_cf_00266213 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00266110(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x424),param_1 + 0x8ec,4,0,0);
  iVar2 = DAT_0026620c;
  fVar1 = DAT_00266208;
  if (*(char *)(param_1 + 0x93c) == '\0') {
    uVar4 = *(uint *)(param_1 + 1000);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x908);
    *(undefined1 *)(param_1 + 0x93c) = 0;
    *(uint *)(param_1 + 1000) = uVar4;
  }
  local_18 = DAT_0026622c;
  fVar3 = ALBW_AS_F32(_DAT_00266210);
  pfVar5 = (float *)(iVar2 + (uVar4 >> 0x18) * 0x10);
  fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x3d0) + (*pfVar5 + pfVar5[1] * fVar6 * fVar1) * ALBW_AS_F32(_DAT_00266210);
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x3d8) + (pfVar5[2] + pfVar5[3] * fVar7 * fVar1) * fVar3;
  local_14 = s__SE_IceBubble_BURNING_00266213 + 1;
  return func_001507D8(param_1,&local_18,0);
}


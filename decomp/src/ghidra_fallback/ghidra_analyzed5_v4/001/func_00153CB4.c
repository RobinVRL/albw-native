#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern float DAT_00153d78;
extern int DAT_00153d7c;
extern undefined DAT_00153d80;
extern int DAT_00153d98;
extern char s__SE_Bubble_BURNING_00153d83[];
extern char s_cf_00153d83[];
extern undefined4 _DAT_00153d80;

// USA 00153CB4 <- EU 00153CB8 (Ghidra, non-matching)
// GLOBAL DAT_00153d78 float
// GLOBAL DAT_00153d7c int
// GLOBAL DAT_00153d80 undefined
// GLOBAL DAT_00153d98 int
// GLOBAL s_cf_00153d83 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00153CB4(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x931) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x930) != '\0') {
    *(undefined1 *)(param_1 + 0x930) = 0;
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8f8);
  }
  local_10 = DAT_00153d98;
  fVar2 = ALBW_AS_F32(_DAT_00153d80);
  fVar1 = DAT_00153d78;
  uVar3 = *(uint *)(param_1 + 1000);
  pfVar4 = (float *)(DAT_00153d7c + (uVar3 >> 0x18) * 0x10);
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d0) =
       *(float *)(param_1 + 0x3d0) + (*pfVar4 + pfVar4[1] * fVar5 * DAT_00153d78) * ALBW_AS_F32(_DAT_00153d80);
  *(float *)(param_1 + 0x3d8) =
       *(float *)(param_1 + 0x3d8) + (pfVar4[2] + pfVar4[3] * fVar6 * fVar1) * fVar2;
  local_c = s__SE_Bubble_BURNING_00153d83 + 1;
  return func_001507D8(param_1,&local_10,0);
}


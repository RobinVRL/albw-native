#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern float func_0052F864(int param_1);
extern int DAT_002c654c;
extern undefined DAT_002c6550;
extern int DAT_002c656c;
extern char s__SE_DoorWallHide_OPEN_002c6553[];
extern undefined4 _DAT_002c6550;

// USA 002C64D8 <- EU 002C64B4 (Ghidra, non-matching)
// GLOBAL DAT_002c654c int
// GLOBAL DAT_002c6550 undefined
// GLOBAL DAT_002c656c int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002C64D8(int *param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x125) = 1;
  *(undefined1 *)(param_1[0x121] + 0x44) = 0;
  func_001E4090((int)param_1,0);
  fVar1 = func_0052F864(param_1);
  iVar2 = VectorFloatToUnsigned(fVar1,3);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = DAT_002c654c;
  }
  param_1[0x13a] = iVar2;
  if (iVar2 == 0) {
    param_1[0x13b] = iVar3;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x13b] = (int)ALBW_AS_U32((ALBW_AS_F32(_DAT_002c6550) / fVar1));
  }
  param_1[0x139] = 0;
  local_14 = s__SE_DoorWallHide_OPEN_002c6553 + 1;
  local_18 = DAT_002c656c;
  return func_00150A84(param_1,&local_18,0);
}


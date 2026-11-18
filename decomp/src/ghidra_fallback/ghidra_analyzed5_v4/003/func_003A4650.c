#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E405C(int param_1,undefined4 param_2);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_002E01FC(int param_1);
extern float func_0052F864(int param_1);
extern int DAT_003a46e0;
extern undefined DAT_003a46e4;
extern int DAT_003a46f8;
extern char s__SE_Door_OPEN_003a46e7[];
extern undefined4 _DAT_003a46e4;

// USA 003A4650 <- EU 003A462C (Ghidra, non-matching)
// GLOBAL DAT_003a46e0 int
// GLOBAL DAT_003a46e4 undefined
// GLOBAL DAT_003a46f8 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003A4650(int *param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined1 *)(param_1 + 0x125) = 1;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  func_002E01FC((int)param_1);
  func_001E4090((int)param_1,0);
  if (param_1[0x124] != 0) {
    func_001E405C((int)param_1,0);
  }
  fVar1 = func_0052F864(param_1);
  iVar2 = VectorFloatToUnsigned(fVar1,3);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    iVar3 = DAT_003a46e0;
  }
  param_1[0x13a] = iVar2;
  if (iVar2 == 0) {
    param_1[0x13b] = iVar3;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x13b] = (int)ALBW_AS_U32((ALBW_AS_F32(_DAT_003a46e4) / fVar1));
  }
  param_1[0x139] = 0;
  local_14 = s__SE_Door_OPEN_003a46e7 + 1;
  local_18 = DAT_003a46f8;
  return func_00150A84(param_1,&local_18,0);
}


#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined DAT_00253e9c;
extern int DAT_00253eb4;
extern float DAT_00253eb8;
extern char s__SE_TurtleWall_WATER_00253e9f[];
extern undefined4 _DAT_00253e9c;

// USA 00253E08 <- EU 00253E30 (Ghidra, non-matching)
// GLOBAL DAT_00253e9c undefined
// GLOBAL DAT_00253eb4 int
// GLOBAL DAT_00253eb8 float

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00253E08(int *param_1)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_18 = DAT_00253eb4;
  param_1[0x12d] = _DAT_00253e9c;
  local_14 = s__SE_TurtleWall_WATER_00253e9f + 1;
  func_00150A84(param_1,&local_18,0);
  param_1[0x1fa] = param_1[0xf4];
  fVar1 = DAT_00253eb8;
  param_1[0x1fb] = param_1[0xf5];
  param_1[0x1fc] = param_1[0xf6];
  param_1[0x1fc] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf6]) + fVar1));
  return;
}


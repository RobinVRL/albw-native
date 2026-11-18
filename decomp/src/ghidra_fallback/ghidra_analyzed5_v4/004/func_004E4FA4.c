#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e5010;
extern int DAT_004e5024;
extern char s_SE_BombL_FUSE_004e5014[];

// USA 004E4FA4 <- EU 004E4F7C (Ghidra, non-matching)
// GLOBAL DAT_004e5010 float
// GLOBAL DAT_004e5024 int
// GLOBAL s_SE_BombL_FUSE_004e5014 string

undefined4 func_004E4FA4(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = *(int *)(*(int *)(param_1 + 0x47c) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_004e5010) {
      if (*(float *)(iVar1 + 8) <= DAT_004e5010) goto LAB_004e4fd4;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_004e4fd4:
      return func_0066A8D8((undefined4 *)(param_1 + 0x484),7);
    }
  }
  local_c = s_SE_BombL_FUSE_004e5014;
  local_10 = DAT_004e5024;
  return func_001507D8(param_1,&local_10,0);
}


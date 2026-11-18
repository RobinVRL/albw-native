#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00659024(undefined4 *param_1,undefined1 param_2);
extern float DAT_00177488;
extern float DAT_0017748c;
extern int DAT_00177490;
extern char s_SE_FanL_MOVE_00177494[];
extern char s_SE_FanS_MOVE_001774a4[];

// USA 00177390 <- EU 00177390 (Ghidra, non-matching)
// GLOBAL DAT_00177488 float
// GLOBAL DAT_0017748c float
// GLOBAL DAT_00177490 int
// GLOBAL s_SE_FanL_MOVE_00177494 string
// GLOBAL s_SE_FanS_MOVE_001774a4 string

undefined4 func_00177390(int param_1)

{
  bool bVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x4b4)) < 0x3f800000) {
    fVar2 = *(float *)(param_1 + 0x4b4) + DAT_00177488;
    *(float *)(param_1 + 0x4b4) = fVar2;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar2)) {
      fVar2 = DAT_0017748c;
    }
    *(float *)(param_1 + 0x4b4) = fVar2;
  }
  if (((*(short *)(param_1 + 0x36) != 0) &&
      ((*(char *)(param_1 + 0x4b1) != '\0' || (bVar1 = func_00588BF0(param_1,0), !bVar1)))) &&
     ((*(char *)(param_1 + 0x4b1) != '\x01' || (bVar1 = func_00588BF0(param_1,0), bVar1)))) {
    return func_00659024((undefined4 *)(param_1 + 0x40c),3);
  }
  local_18 = DAT_00177490;
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    local_14 = s_SE_FanL_MOVE_00177494;
    return func_001507D8(param_1,&local_18,0);
  }
  local_14 = s_SE_FanS_MOVE_001774a4;
  return func_001507D8(param_1,&local_18,0);
}


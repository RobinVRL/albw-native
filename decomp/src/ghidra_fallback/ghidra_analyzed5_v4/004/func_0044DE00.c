#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined DAT_0044de7c;
extern int DAT_0044de94;
extern int *DAT_0044de98;
extern char s__SE_S_MAP_PIN_HOLD_0044de7f[];
extern undefined4 _DAT_0044de7c;

// USA 0044DE00 <- EU 0044DDD8 (Ghidra, non-matching)
// GLOBAL DAT_0044de7c undefined
// GLOBAL DAT_0044de94 int
// GLOBAL DAT_0044de98 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0044DE00(int param_1)

{
  float fparam_0;
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_002313DC(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x76) = 2;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_00231524(param_1 + 0x74);
  fparam_0 = ALBW_AS_F32(_DAT_0044de7c);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x8e) = 3;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
  local_c = s__SE_S_MAP_PIN_HOLD_0044de7f + 1;
  local_10 = DAT_0044de94;
  func_00533078(param_1,&local_10,0);
  uVar1 = *(undefined4 *)(*DAT_0044de98 + 0x14);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(*DAT_0044de98 + 0x10);
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  return;
}


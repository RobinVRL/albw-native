#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern undefined4 DAT_00422a1c;
extern float DAT_00422a20;

// USA 004229B8 <- EU 00422998 (Ghidra, non-matching)
// GLOBAL DAT_00422a1c undefined4
// GLOBAL DAT_00422a20 float

void func_004229B8(int param_1)

{
  float fparam_0;
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  local_18 = *(undefined4 *)(param_1 + 0xac);
  iVar1 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
  local_14 = *(undefined4 *)(param_1 + 0xb0);
  local_10 = DAT_00422a1c;
  func_003FFE6C(iVar1,&local_18);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  func_00167E04(*(int *)(param_1 + 0x1c),iVar1,1);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x96) = 0;
  fparam_0 = DAT_00422a20;
  *(undefined2 *)(param_1 + 0x94) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x94),fparam_0);
  return;
}


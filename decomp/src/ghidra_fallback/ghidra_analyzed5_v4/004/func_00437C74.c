#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern int func_001B6C04(int param_1);
extern int func_00463C68(int param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int *DAT_00437ce0;
extern int DAT_00437cf8;
extern char s_SE_S_COLLECT_APPEAR_00437ce4[];

// USA 00437C74 <- EU 00437C54 (Ghidra, non-matching)
// GLOBAL DAT_00437ce0 int *
// GLOBAL DAT_00437cf8 int
// GLOBAL s_SE_S_COLLECT_APPEAR_00437ce4 string

void func_00437C74(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_001B6C04(param_1);
  func_00463C68(*(int *)(param_1 + 0x78));
  piVar1 = DAT_00437ce0;
  *(uint *)(*(int *)(param_1 + 0x78) + 0x18) =
       *(uint *)(*(int *)(param_1 + 0x78) + 0x18) & 0xfffffffd;
  func_0016656C(*piVar1,param_1);
  func_00166C00(*piVar1,0);
  func_004B948C(param_1,*(int *)(param_1 + 0x74));
  func_004B948C(param_1,*(int *)(param_1 + 0x78));
  local_14 = s_SE_S_COLLECT_APPEAR_00437ce4;
  local_18 = DAT_00437cf8;
  func_00533078(param_1,&local_18,0);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}


#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_001c64a4;
extern int DAT_001c64c0;
extern char s_SE_OBJ_RECOVER_FROM_ICE_001c64a8[];

// USA 001C643C <- EU 001C643C (Ghidra, non-matching)
// GLOBAL DAT_001c64a4 int
// GLOBAL DAT_001c64c0 int
// GLOBAL s_SE_OBJ_RECOVER_FROM_ICE_001c64a8 string

undefined4 func_001C643C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  func_0014F4EC(param_1[0x103]);
  func_00150688(param_1,(int)(param_1 + 0x10f),(undefined2 *)param_1[0xe9]);
  local_10 = DAT_001c64c0;
  iVar1 = DAT_001c64a4;
  param_1[0x129] = DAT_001c64a4;
  param_1[0x12a] = iVar1;
  param_1[299] = iVar1;
  local_c = s_SE_OBJ_RECOVER_FROM_ICE_001c64a8;
  return func_00150A84(param_1,&local_10,0);
}


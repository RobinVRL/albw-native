#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_001577cc;
extern int DAT_001577d0;
extern int DAT_001577d4;
extern char s_SE_Gapura_V_DAMAGE_001577e8[];
extern char s_SE_Gapura_V_DIE_001577d8[];

// USA 00157764 <- EU 00157768 (Ghidra, non-matching)
// GLOBAL DAT_001577cc int
// GLOBAL DAT_001577d0 int
// GLOBAL DAT_001577d4 int
// GLOBAL s_SE_Gapura_V_DAMAGE_001577e8 string
// GLOBAL s_SE_Gapura_V_DIE_001577d8 string

undefined4 func_00157764(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_001577d0;
  iVar1 = DAT_001577cc;
  param_1[0xf7] = DAT_001577cc;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  local_10 = DAT_001577d4;
  if (*(short *)(iVar2 + (int)param_1) < 1) {
    local_c = s_SE_Gapura_V_DIE_001577d8;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_Gapura_V_DAMAGE_001577e8;
  return func_00150A84(param_1,&local_10,0);
}


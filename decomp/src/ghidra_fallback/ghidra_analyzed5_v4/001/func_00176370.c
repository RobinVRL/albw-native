#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern float DAT_001763fc;
extern undefined DAT_00176400;
extern int DAT_00176414;
extern char s__SE_Tomb_MOVE_00176403[];
extern undefined4 _DAT_00176400;

// USA 00176370 <- EU 00176370 (Ghidra, non-matching)
// GLOBAL DAT_001763fc float
// GLOBAL DAT_00176400 undefined
// GLOBAL DAT_00176414 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00176370(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1[0x14c] + 0x14);
  if (*(float *)(iVar1 + 8) != DAT_001763fc) {
    *(float *)(iVar1 + 8) = DAT_001763fc;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x14c] + 0x14) + 0x10) = _DAT_00176400;
  func_00588C14((int)param_1,0,1);
  local_14 = s__SE_Tomb_MOVE_00176403 + 1;
  local_18 = DAT_00176414;
  func_00150A84(param_1,&local_18,0);
  *(undefined1 *)(param_1 + 0x133) = 1;
  *(undefined1 *)(param_1 + 0x124) = 2;
  return;
}


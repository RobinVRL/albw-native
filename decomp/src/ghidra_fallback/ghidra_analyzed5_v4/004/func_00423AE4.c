#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0045F6F8(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int DAT_00423b94;
extern int *DAT_00423b98;
extern int *DAT_00423b9c;
extern int DAT_00423bb8;
extern char s_SE_S_ITEM_SHORT_CUT_ON_00423ba0[];

// USA 00423AE4 <- EU 00423AC4 (Ghidra, non-matching)
// GLOBAL DAT_00423b94 int
// GLOBAL DAT_00423b98 int *
// GLOBAL DAT_00423b9c int *
// GLOBAL DAT_00423bb8 int
// GLOBAL s_SE_S_ITEM_SHORT_CUT_ON_00423ba0 string

undefined4 func_00423AE4(int param_1)

{
  int iVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  fVar2 = *(float *)(*DAT_00423b98 + 0x14) - *(float *)(param_1 + 0xf0);
  if ((int)ALBW_AS_U32(fVar2) < DAT_00423b94) {
    if ((uint)ALBW_AS_U32(fVar2) < 0xc1400000) {
      func_002313DC(param_1 + 200);
      func_002313DC(param_1 + 0xd4);
      iVar1 = 0;
    }
    else {
      func_002313DC(param_1 + 200);
      func_00231524(param_1 + 0xd4);
      iVar1 = 2;
    }
  }
  else {
    func_00231524(param_1 + 200);
    func_002313DC(param_1 + 0xd4);
    iVar1 = 1;
  }
  if (*(int *)(*DAT_00423b9c + 0xe8) != 0) {
    func_0045F6F8(*(int *)(*DAT_00423b9c + 0xe8),iVar1);
  }
  *(undefined2 *)(param_1 + 0xf4) = 0;
  local_c = s_SE_S_ITEM_SHORT_CUT_ON_00423ba0;
  local_10 = DAT_00423bb8;
  return func_00533078(param_1,&local_10,0);
}


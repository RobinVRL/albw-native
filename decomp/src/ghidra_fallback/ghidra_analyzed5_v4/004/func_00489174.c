#include "ghidra_types.h"

extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532BA0(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_004891e4;
extern int DAT_00489200;
extern int *DAT_00489204;
extern char s__SE_S_TITLE_LOGO_FLASH_004891e7[];
extern undefined4 _DAT_004891e4;

// USA 00489174 <- EU 0048914C (Ghidra, non-matching)
// GLOBAL DAT_004891e4 undefined
// GLOBAL DAT_00489200 int
// GLOBAL DAT_00489204 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00489174(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    iVar1 = func_00532BA0(param_1 + 0x20);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x80) = 2;
    }
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      func_002317C0((undefined2 *)(param_1 + 0x74),ALBW_AS_F32(_DAT_004891e4));
      local_14 = s__SE_S_TITLE_LOGO_FLASH_004891e7 + 1;
      local_18 = DAT_00489200;
      func_00587F74(*DAT_00489204,&local_18,0);
      *(undefined4 *)(param_1 + 0x80) = 3;
    }
    return;
  }
  func_00231524(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x80) = 2;
  return;
}


#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_004741e0;
extern undefined4 DAT_004741e4;
extern undefined4 DAT_004741e8;
extern int *DAT_004741ec;
extern int *DAT_004741f0;
extern int *DAT_004741f4;

// USA 00474138 <- EU 00474110 (Ghidra, non-matching)
// GLOBAL DAT_004741e0 int
// GLOBAL DAT_004741e4 undefined4
// GLOBAL DAT_004741e8 undefined4
// GLOBAL DAT_004741ec int *
// GLOBAL DAT_004741f0 int *
// GLOBAL DAT_004741f4 int *

void func_00474138(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_25 (*(undefined1 *)(albw_frame + 0x1b))
  #define local_20 ((int *)(albw_frame + 0x20))
  if (*(int *)(param_1 + 0x80) != 0) {
    local_3c = local_34;
    uStack_38 = 0x10;
    uStack_25 = 0;
    local_34[0] = 0;
    local_40 = DAT_004741e0;
    uVar2 = (uint)*(short *)(param_1 + 0x8c);
    if (uVar2 != 0) {
      if ((int)uVar2 < 1) {
        func_004994B0((int)&local_40,DAT_004741e8,-uVar2,param_4);
      }
      else {
        func_004994B0((int)&local_40,DAT_004741e4,uVar2,param_4);
      }
      local_20[3] = 0xffffffff;
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      iVar1 = func_005826A4(*DAT_004741f0,local_20,DAT_004741ec,&local_40);
      if (iVar1 == 0) {
        local_20[0] = *DAT_004741f4;
      }
      (**(code **)(**(int **)(param_1 + 0x80) + 0x5c))(*(int **)(param_1 + 0x80),local_20[0],0);
    }
  }
  return;
}


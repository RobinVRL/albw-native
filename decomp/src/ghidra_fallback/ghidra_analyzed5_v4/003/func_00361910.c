#include "ghidra_types.h"

extern int func_004A9640(int param_1,int *param_2,uint param_3);
extern int func_0052E58C(int param_1);
extern int *DAT_003619cc;

// USA 00361910 <- EU 003618EC (Ghidra, non-matching)
// GLOBAL DAT_003619cc int *

uint func_00361910(int param_1)

{
  int iVar1;
  uint uVar2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x20))
  iVar1 = func_0052E58C(*(int *)(param_1 + 0x10));
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000)) {
    *(undefined2 *)(param_1 + 0x1b4) = 0xe0;
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x70;
    uStack_20 = in_r3 & 0xffff0000 | 0xffff;
    local_30 = 0;
    local_10 = 0;
    local_14 = param_1 + 0x18c;
    local_2c = param_1 + 0x5a8;
    local_24 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2cc);
    local_28 = param_1 + 0x5b8;
    local_1c = 0xffffffff;
    local_18 = *(undefined4 *)(param_1 + 0x5c8);
    uVar2 = func_004A9640(*DAT_003619cc,&local_30,0xc);
    return uVar2;
  }
  return 0;
}


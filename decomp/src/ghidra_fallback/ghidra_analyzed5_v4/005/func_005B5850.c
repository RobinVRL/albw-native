#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b58e0;
extern undefined4 *DAT_005b58e4;
extern uint DAT_005b58e8;
extern uint DAT_005b58ec;
extern undefined4 *DAT_005b58f0;
extern undefined DAT_005b58f4;
extern undefined4 DAT_005b5904;
extern uint *DAT_005b5918;
extern undefined4 DAT_005b591c;
extern undefined4 *DAT_005b5920;
extern undefined4 DAT_005b5924;
extern undefined4 DAT_005b5928;
extern char s_MojTrapFloat_005b5908[];

// USA 005B5850 <- EU 005B5828 (Ghidra, non-matching)
// GLOBAL DAT_005b58e0 int
// GLOBAL DAT_005b58e4 undefined4 *
// GLOBAL DAT_005b58e8 uint
// GLOBAL DAT_005b58ec uint
// GLOBAL DAT_005b58f0 undefined4 *
// GLOBAL DAT_005b58f4 undefined
// GLOBAL DAT_005b5904 undefined4
// GLOBAL DAT_005b5918 uint *
// GLOBAL DAT_005b591c undefined4
// GLOBAL DAT_005b5920 undefined4 *
// GLOBAL DAT_005b5924 undefined4
// GLOBAL DAT_005b5928 undefined4
// GLOBAL s_MojTrapFloat_005b5908 string

undefined8 func_005B5850(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005b58e0;
  *(undefined4 *)(DAT_005b58e0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b58e4;
  puVar4 = DAT_005b58e4 + -4;
  *DAT_005b58e4 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005b58e8,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_005b58ec,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-3] = (int)uVar5;
  puVar2 = DAT_005b58f0;
  puVar4 = DAT_005b58f0 + 3;
  *DAT_005b58f0 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005b5904;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005b58f4;
  local_18 = local_10;
  local_14 = s_MojTrapFloat_005b5908;
  uVar3 = func_0019B51C(DAT_005b5920,DAT_005b591c,*DAT_005b5918,(int)&local_18,DAT_005b58f0,
                        &local_10,0);
  return CONCAT44(DAT_005b5928,uVar3);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a60d8;
extern undefined4 *DAT_005a60dc;
extern undefined4 *DAT_005a60e0;
extern undefined DAT_005a60e4;
extern undefined4 DAT_005a60f0;
extern uint *DAT_005a6100;
extern undefined4 DAT_005a6104;
extern undefined4 *DAT_005a6108;
extern undefined4 DAT_005a610c;
extern undefined4 DAT_005a6110;
extern undefined4 *DAT_005a6114;
extern undefined DAT_005a6118;
extern undefined DAT_005a6120;
extern undefined DAT_005a6128;
extern undefined4 DAT_005a612c;
extern undefined4 *DAT_005a6130;
extern uint DAT_005a6134;
extern char s_MojCurtain_005a60f4[];

// USA 005A5FF8 <- EU 005A5FD0 (Ghidra, non-matching)
// GLOBAL DAT_005a60d8 undefined4 *
// GLOBAL DAT_005a60dc undefined4 *
// GLOBAL DAT_005a60e0 undefined4 *
// GLOBAL DAT_005a60e4 undefined
// GLOBAL DAT_005a60f0 undefined4
// GLOBAL DAT_005a6100 uint *
// GLOBAL DAT_005a6104 undefined4
// GLOBAL DAT_005a6108 undefined4 *
// GLOBAL DAT_005a610c undefined4
// GLOBAL DAT_005a6110 undefined4
// GLOBAL DAT_005a6114 undefined4 *
// GLOBAL DAT_005a6118 undefined
// GLOBAL DAT_005a6120 undefined
// GLOBAL DAT_005a6128 undefined
// GLOBAL DAT_005a612c undefined4
// GLOBAL DAT_005a6130 undefined4 *
// GLOBAL DAT_005a6134 uint
// GLOBAL s_MojCurtain_005a60f4 string

longlong func_005A5FF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a60d8;
  *DAT_005a60d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005a60f0;
  puVar1 = DAT_005a60dc;
  *DAT_005a60dc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a60e0;
  puVar4 = DAT_005a60e0 + 3;
  puVar3 = DAT_005a60e0 + 1;
  *DAT_005a60e0 = 0;
  *puVar3 = 5;
  puVar1[2] = puVar4;
  local_c = &DAT_005a60e4;
  local_14 = s_MojCurtain_005a60f4;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005a6108,DAT_005a6104,*DAT_005a6100,(int)&uStack_18,DAT_005a60e0,&local_10,0);
  puVar1 = DAT_005a6114;
  DAT_005a6114[1] = &DAT_005a6118;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005a6120;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005a6128;
  puVar1 = DAT_005a6130;
  DAT_005a6130[1] = &DAT_005a6120;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005a6128;
  return (ulonglong)DAT_005a6134 << 0x20;
}


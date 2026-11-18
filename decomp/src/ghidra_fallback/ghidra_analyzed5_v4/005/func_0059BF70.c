#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059c020;
extern undefined4 *DAT_0059c024;
extern undefined4 *DAT_0059c028;
extern undefined DAT_0059c02c;
extern undefined4 DAT_0059c030;
extern uint *DAT_0059c040;
extern undefined4 DAT_0059c044;
extern undefined4 *DAT_0059c048;
extern undefined4 DAT_0059c04c;
extern undefined4 DAT_0059c050;
extern undefined4 *DAT_0059c054;
extern undefined4 DAT_0059c060;
extern undefined4 *DAT_0059c064;
extern uint DAT_0059c068;
extern char s_Cloud_0059c058[];
extern char s_MojCloud_0059c034[];

// USA 0059BF70 <- EU 0059BF48 (Ghidra, non-matching)
// GLOBAL DAT_0059c020 undefined4 *
// GLOBAL DAT_0059c024 undefined4 *
// GLOBAL DAT_0059c028 undefined4 *
// GLOBAL DAT_0059c02c undefined
// GLOBAL DAT_0059c030 undefined4
// GLOBAL DAT_0059c040 uint *
// GLOBAL DAT_0059c044 undefined4
// GLOBAL DAT_0059c048 undefined4 *
// GLOBAL DAT_0059c04c undefined4
// GLOBAL DAT_0059c050 undefined4
// GLOBAL DAT_0059c054 undefined4 *
// GLOBAL DAT_0059c060 undefined4
// GLOBAL DAT_0059c064 undefined4 *
// GLOBAL DAT_0059c068 uint
// GLOBAL s_Cloud_0059c058 string
// GLOBAL s_MojCloud_0059c034 string

longlong func_0059BF70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059c020;
  *DAT_0059c020 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_0059c030;
  puVar1 = DAT_0059c024;
  *DAT_0059c024 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059c028;
  puVar3 = DAT_0059c028 + 3;
  *DAT_0059c028 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_0059c02c;
  local_14 = s_MojCloud_0059c034;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_0059c048,DAT_0059c044,*DAT_0059c040,(int)&uStack_18,DAT_0059c028,&local_10,0);
  puVar1 = DAT_0059c054;
  DAT_0059c054[1] = s_Cloud_0059c058;
  *puVar1 = uVar2;
  puVar1 = DAT_0059c064;
  DAT_0059c064[1] = s_Cloud_0059c058;
  *puVar1 = uVar2;
  return (ulonglong)DAT_0059c068 << 0x20;
}


#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_00598f70;
extern undefined4 *DAT_00598f74;
extern uint DAT_00598f78;
extern uint DAT_00598f7c;
extern uint DAT_00598f80;
extern undefined4 *DAT_00598f84;
extern undefined DAT_00598f88;
extern undefined4 DAT_00598f98;
extern uint *DAT_00598fac;
extern undefined4 DAT_00598fb0;
extern undefined4 *DAT_00598fb4;
extern undefined4 DAT_00598fb8;
extern undefined4 DAT_00598fbc;
extern undefined4 *DAT_00598fc0;
extern undefined DAT_00598fc4;
extern uint *DAT_00598fe8;
extern undefined4 *DAT_00598fec;
extern char s_MassPotLight_00598f9c[];
extern char s_MassPotSkull_00598fd8[];

// USA 00598E60 <- EU 00598E38 (Ghidra, non-matching)
// GLOBAL DAT_00598f70 int
// GLOBAL DAT_00598f74 undefined4 *
// GLOBAL DAT_00598f78 uint
// GLOBAL DAT_00598f7c uint
// GLOBAL DAT_00598f80 uint
// GLOBAL DAT_00598f84 undefined4 *
// GLOBAL DAT_00598f88 undefined
// GLOBAL DAT_00598f98 undefined4
// GLOBAL DAT_00598fac uint *
// GLOBAL DAT_00598fb0 undefined4
// GLOBAL DAT_00598fb4 undefined4 *
// GLOBAL DAT_00598fb8 undefined4
// GLOBAL DAT_00598fbc undefined4
// GLOBAL DAT_00598fc0 undefined4 *
// GLOBAL DAT_00598fc4 undefined
// GLOBAL DAT_00598fe8 uint *
// GLOBAL DAT_00598fec undefined4 *
// GLOBAL s_MassPotLight_00598f9c string
// GLOBAL s_MassPotSkull_00598fd8 string

undefined8 func_00598E60(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  iVar1 = DAT_00598f70;
  *(undefined4 *)(DAT_00598f70 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_00598f74;
  puVar4 = DAT_00598f74 + -6;
  *DAT_00598f74 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_00598f78,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_00598f7c,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-5] = (int)uVar5;
  uVar5 = func_00114608(DAT_00598f80,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-4] = (int)uVar5;
  puVar2 = DAT_00598f84;
  puVar4 = DAT_00598f84 + 3;
  DAT_00598f84[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  uVar3 = DAT_00598f98;
  local_24 = &DAT_00598f88;
  local_2c = s_MassPotLight_00598f9c;
  local_28 = DAT_00598f98;
  local_30 = DAT_00598f98;
  func_0019B51C(DAT_00598fb4,DAT_00598fb0,*DAT_00598fac,(int)&local_30,DAT_00598f84,&local_28,0);
  puVar2 = DAT_00598fc0;
  puVar4 = DAT_00598fc0 + 3;
  DAT_00598fc0[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_00598fc4;
  local_1c = s_MassPotSkull_00598fd8;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_00598fec,DAT_00598fb0,*DAT_00598fe8,(int)&local_20,DAT_00598fc0,
                        &local_18,0);
  return CONCAT44(DAT_00598fbc,uVar3);
}


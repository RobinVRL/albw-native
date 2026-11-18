#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f22cc;
extern undefined4 *DAT_005f22d0;
extern undefined4 *DAT_005f22d4;
extern undefined4 DAT_005f22e4;
extern undefined4 DAT_005f230c;
extern uint DAT_005f2310;
extern undefined4 DAT_005f2314;
extern undefined4 *DAT_005f2318;
extern undefined4 DAT_005f231c;
extern uint DAT_005f2320;
extern uint DAT_005f2324;
extern uint DAT_005f2328;
extern uint DAT_005f232c;
extern undefined4 *DAT_005f2330;
extern undefined4 DAT_005f2334;
extern undefined4 *DAT_005f2338;
extern undefined DAT_005f233c;
extern uint *DAT_005f2374;
extern undefined4 DAT_005f2378;
extern undefined4 *DAT_005f237c;
extern undefined4 DAT_005f2380;
extern char s_N_ArrowB_00_005f22e8[];
extern char s_N_ArrowL_00_005f22f4[];
extern char s_N_ArrowR_00_005f2300[];
extern char s_N_ArrowT_00_005f22d8[];
extern char s_TagSageRoomCameraMgr_005f235c[];

// USA 005F2198 <- EU 005F2170 (Ghidra, non-matching)
// GLOBAL DAT_005f22cc undefined4 *
// GLOBAL DAT_005f22d0 undefined4 *
// GLOBAL DAT_005f22d4 undefined4 *
// GLOBAL DAT_005f22e4 undefined4
// GLOBAL DAT_005f230c undefined4
// GLOBAL DAT_005f2310 uint
// GLOBAL DAT_005f2314 undefined4
// GLOBAL DAT_005f2318 undefined4 *
// GLOBAL DAT_005f231c undefined4
// GLOBAL DAT_005f2320 uint
// GLOBAL DAT_005f2324 uint
// GLOBAL DAT_005f2328 uint
// GLOBAL DAT_005f232c uint
// GLOBAL DAT_005f2330 undefined4 *
// GLOBAL DAT_005f2334 undefined4
// GLOBAL DAT_005f2338 undefined4 *
// GLOBAL DAT_005f233c undefined
// GLOBAL DAT_005f2374 uint *
// GLOBAL DAT_005f2378 undefined4
// GLOBAL DAT_005f237c undefined4 *
// GLOBAL DAT_005f2380 undefined4
// GLOBAL s_N_ArrowB_00_005f22e8 string
// GLOBAL s_N_ArrowL_00_005f22f4 string
// GLOBAL s_N_ArrowR_00_005f2300 string
// GLOBAL s_N_ArrowT_00_005f22d8 string
// GLOBAL s_TagSageRoomCameraMgr_005f235c string

undefined8 func_005F2198(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005f22cc;
  DAT_005f22cc[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  uVar4 = DAT_005f22e4;
  puVar1 = DAT_005f22d0;
  *DAT_005f22d0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f22d4;
  DAT_005f22d4[1] = s_N_ArrowT_00_005f22d8;
  *puVar1 = uVar4;
  puVar1[3] = s_N_ArrowB_00_005f22e8;
  puVar1[2] = uVar4;
  puVar1[5] = s_N_ArrowL_00_005f22f4;
  puVar1[4] = uVar4;
  puVar1[6] = uVar4;
  puVar1[7] = s_N_ArrowR_00_005f2300;
  uVar3 = DAT_005f231c;
  puVar5 = DAT_005f2318;
  uVar6 = DAT_005f2314;
  uVar2 = DAT_005f2310;
  puVar1 = DAT_005f22cc;
  *DAT_005f2318 = DAT_005f2314;
  puVar5[1] = uVar3;
  puVar5[2] = uVar6;
  uVar7 = func_00114608(DAT_005f2320,uVar2);
  *puVar1 = (int)uVar7;
  uVar7 = func_00114608(DAT_005f2324,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[1] = (int)uVar7;
  uVar7 = func_00114608(DAT_005f2328,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[2] = (int)uVar7;
  uVar7 = func_00114608(DAT_005f232c,(uint)((ulonglong)uVar7 >> 0x20));
  uVar3 = DAT_005f2334;
  puVar5 = DAT_005f2330;
  puVar1[3] = (int)uVar7;
  *puVar5 = uVar6;
  puVar5[1] = uVar3;
  puVar5[2] = uVar6;
  puVar1[4] = (int)uVar7;
  puVar1 = DAT_005f2338;
  puVar5 = DAT_005f2338 + 3;
  *DAT_005f2338 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar5;
  local_28 = uVar4;
  puStack_24 = &DAT_005f233c;
  uStack_20 = uVar4;
  local_1c = s_TagSageRoomCameraMgr_005f235c;
  uVar4 = func_0019B51C(DAT_005f237c,DAT_005f2378,*DAT_005f2374,(int)&uStack_20,DAT_005f2338,
                        &local_28,0);
  return CONCAT44(DAT_005f2380,uVar4);
}


#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b3f88;
extern undefined4 *DAT_005b3f8c;
extern undefined4 DAT_005b3f9c;
extern undefined4 DAT_005b3fa0;
extern uint DAT_005b3fa4;
extern uint DAT_005b3fa8;
extern uint DAT_005b3fac;
extern undefined4 *DAT_005b3fb0;
extern undefined DAT_005b3fb4;
extern uint *DAT_005b3fcc;
extern undefined4 DAT_005b3fd0;
extern undefined4 *DAT_005b3fd4;
extern undefined4 DAT_005b3fd8;
extern char s_BoardFall_005b3f90[];
extern char s_MojBoardFall_005b3fbc[];

// USA 005B3ED4 <- EU 005B3EAC (Ghidra, non-matching)
// GLOBAL DAT_005b3f88 undefined4 *
// GLOBAL DAT_005b3f8c undefined4 *
// GLOBAL DAT_005b3f9c undefined4
// GLOBAL DAT_005b3fa0 undefined4
// GLOBAL DAT_005b3fa4 uint
// GLOBAL DAT_005b3fa8 uint
// GLOBAL DAT_005b3fac uint
// GLOBAL DAT_005b3fb0 undefined4 *
// GLOBAL DAT_005b3fb4 undefined
// GLOBAL DAT_005b3fcc uint *
// GLOBAL DAT_005b3fd0 undefined4
// GLOBAL DAT_005b3fd4 undefined4 *
// GLOBAL DAT_005b3fd8 undefined4
// GLOBAL s_BoardFall_005b3f90 string
// GLOBAL s_MojBoardFall_005b3fbc string

undefined8 func_005B3ED4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_005b3f88;
  DAT_005b3f88[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005b3f9c;
  puVar1 = DAT_005b3f8c;
  *DAT_005b3f8c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_BoardFall_005b3f90;
  puVar1[2] = uVar2;
  puVar1 = DAT_005b3f88;
  uVar4 = func_00114608(DAT_005b3fa8,DAT_005b3fa4);
  *puVar1 = (int)uVar4;
  uVar4 = func_00114608(DAT_005b3fac,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[1] = (int)uVar4;
  puVar1 = DAT_005b3fb0;
  puVar3 = DAT_005b3fb0 + 3;
  *DAT_005b3fb0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_20 = uVar2;
  puStack_1c = &DAT_005b3fb4;
  uStack_18 = uVar2;
  local_14 = s_MojBoardFall_005b3fbc;
  uVar2 = func_0019B51C(DAT_005b3fd4,DAT_005b3fd0,*DAT_005b3fcc,(int)&uStack_18,DAT_005b3fb0,
                        &local_20,0);
  return CONCAT44(DAT_005b3fd8,uVar2);
}


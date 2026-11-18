#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c68c0;
extern undefined4 *DAT_005c68c4;
extern undefined4 *DAT_005c68c8;
extern undefined DAT_005c68cc;
extern undefined4 DAT_005c68dc;
extern uint *DAT_005c68f0;
extern undefined4 DAT_005c68f4;
extern undefined4 *DAT_005c68f8;
extern undefined4 DAT_005c68fc;
extern undefined4 DAT_005c6900;
extern char s_ObjDemonPurple_005c68e0[];

// USA 005C6854 <- EU 005C682C (Ghidra, non-matching)
// GLOBAL DAT_005c68c0 undefined4 *
// GLOBAL DAT_005c68c4 undefined4 *
// GLOBAL DAT_005c68c8 undefined4 *
// GLOBAL DAT_005c68cc undefined
// GLOBAL DAT_005c68dc undefined4
// GLOBAL DAT_005c68f0 uint *
// GLOBAL DAT_005c68f4 undefined4
// GLOBAL DAT_005c68f8 undefined4 *
// GLOBAL DAT_005c68fc undefined4
// GLOBAL DAT_005c6900 undefined4
// GLOBAL s_ObjDemonPurple_005c68e0 string

undefined8 func_005C6854(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c68c0;
  *DAT_005c68c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c68c4;
  *DAT_005c68c4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c68c8;
  puVar3 = DAT_005c68c8 + 3;
  *DAT_005c68c8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c68dc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c68cc;
  local_18 = local_10;
  local_14 = s_ObjDemonPurple_005c68e0;
  uVar2 = func_0019B51C(DAT_005c68f8,DAT_005c68f4,*DAT_005c68f0,(int)&local_18,DAT_005c68c8,
                        &local_10,0);
  return CONCAT44(DAT_005c6900,uVar2);
}


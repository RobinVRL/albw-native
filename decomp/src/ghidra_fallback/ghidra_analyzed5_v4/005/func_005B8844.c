#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b88d4;
extern undefined4 *DAT_005b88d8;
extern uint DAT_005b88dc;
extern uint DAT_005b88e0;
extern undefined4 *DAT_005b88e4;
extern undefined DAT_005b88e8;
extern undefined4 DAT_005b88f4;
extern uint *DAT_005b8908;
extern undefined4 DAT_005b890c;
extern undefined4 *DAT_005b8910;
extern undefined4 DAT_005b8914;
extern undefined4 DAT_005b8918;
extern char s_ObjSwordBeam_005b88f8[];

// USA 005B8844 <- EU 005B881C (Ghidra, non-matching)
// GLOBAL DAT_005b88d4 int
// GLOBAL DAT_005b88d8 undefined4 *
// GLOBAL DAT_005b88dc uint
// GLOBAL DAT_005b88e0 uint
// GLOBAL DAT_005b88e4 undefined4 *
// GLOBAL DAT_005b88e8 undefined
// GLOBAL DAT_005b88f4 undefined4
// GLOBAL DAT_005b8908 uint *
// GLOBAL DAT_005b890c undefined4
// GLOBAL DAT_005b8910 undefined4 *
// GLOBAL DAT_005b8914 undefined4
// GLOBAL DAT_005b8918 undefined4
// GLOBAL s_ObjSwordBeam_005b88f8 string

undefined8 func_005B8844(void)

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
  iVar1 = DAT_005b88d4;
  *(undefined4 *)(DAT_005b88d4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b88d8;
  puVar4 = DAT_005b88d8 + -4;
  *DAT_005b88d8 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005b88dc,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_005b88e0,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-3] = (int)uVar5;
  puVar2 = DAT_005b88e4;
  puVar4 = DAT_005b88e4 + 3;
  *DAT_005b88e4 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005b88f4;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005b88e8;
  local_18 = local_10;
  local_14 = s_ObjSwordBeam_005b88f8;
  uVar3 = func_0019B51C(DAT_005b8910,DAT_005b890c,*DAT_005b8908,(int)&local_18,DAT_005b88e4,
                        &local_10,0);
  return CONCAT44(DAT_005b8918,uVar3);
}


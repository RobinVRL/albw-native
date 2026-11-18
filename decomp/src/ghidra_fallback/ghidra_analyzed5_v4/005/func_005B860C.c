#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined1 *DAT_005b86ec;
extern undefined4 *DAT_005b86f0;
extern undefined4 *DAT_005b86f4;
extern undefined4 DAT_005b8700;
extern undefined DAT_005b8704;
extern undefined4 DAT_005b870c;
extern undefined4 DAT_005b8710;
extern undefined4 DAT_005b8714;
extern undefined4 *DAT_005b8718;
extern undefined4 DAT_005b871c;
extern undefined DAT_005b8720;
extern undefined4 DAT_005b8738;
extern uint *DAT_005b873c;
extern undefined4 DAT_005b8740;
extern undefined4 *DAT_005b8744;
extern undefined4 DAT_005b8748;
extern char s_ObjScarecrow_005b8728[];
extern char s_damage_005b86f8[];

// USA 005B860C <- EU 005B85E4 (Ghidra, non-matching)
// GLOBAL DAT_005b86ec undefined1 *
// GLOBAL DAT_005b86f0 undefined4 *
// GLOBAL DAT_005b86f4 undefined4 *
// GLOBAL DAT_005b8700 undefined4
// GLOBAL DAT_005b8704 undefined
// GLOBAL DAT_005b870c undefined4
// GLOBAL DAT_005b8710 undefined4
// GLOBAL DAT_005b8714 undefined4
// GLOBAL DAT_005b8718 undefined4 *
// GLOBAL DAT_005b871c undefined4
// GLOBAL DAT_005b8720 undefined
// GLOBAL DAT_005b8738 undefined4
// GLOBAL DAT_005b873c uint *
// GLOBAL DAT_005b8740 undefined4
// GLOBAL DAT_005b8744 undefined4 *
// GLOBAL DAT_005b8748 undefined4
// GLOBAL s_ObjScarecrow_005b8728 string
// GLOBAL s_damage_005b86f8 string

undefined8 func_005B860C(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b86ec;
  *(undefined4 *)(DAT_005b86ec + 8) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  local_18 = DAT_005b8700;
  puVar2 = DAT_005b86f0;
  *DAT_005b86f0 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005b86f4;
  DAT_005b86f4[1] = s_damage_005b86f8;
  *puVar2 = local_18;
  puVar2[3] = s_damage_005b86f8;
  puVar2[2] = local_18;
  puVar2[4] = local_18;
  puVar2[5] = &DAT_005b8704;
  uVar4 = DAT_005b8714;
  puVar1 = DAT_005b86ec;
  *DAT_005b86ec = 0xdc;
  puVar1[1] = 0xff;
  puVar1[2] = 0xff;
  puVar1[3] = 0xff;
  uVar3 = DAT_005b871c;
  puVar2 = DAT_005b8718;
  *DAT_005b8718 = uVar4;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[-0xa0] = 0;
  puVar2[-0x9f] = 5;
  puVar2[-0x9e] = puVar2 + -0x9d;
  puStack_14 = &DAT_005b8720;
  uStack_10 = local_18;
  local_c = s_ObjScarecrow_005b8728;
  uVar4 = func_0019B51C(DAT_005b8744,DAT_005b8740,*DAT_005b873c,(int)&uStack_10,DAT_005b8738,
                        &local_18,0);
  return CONCAT44(DAT_005b8748,uVar4);
}


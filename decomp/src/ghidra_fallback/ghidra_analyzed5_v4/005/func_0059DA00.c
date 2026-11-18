#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_0059dafc;
extern undefined4 *DAT_0059db00;
extern uint DAT_0059db04;
extern undefined4 *DAT_0059db08;
extern undefined4 DAT_0059db14;
extern undefined4 DAT_0059db20;
extern undefined4 DAT_0059db24;
extern undefined4 *DAT_0059db28;
extern undefined DAT_0059db2c;
extern undefined4 DAT_0059db3c;
extern undefined4 *DAT_0059db40;
extern undefined DAT_0059db44;
extern int DAT_0059db5c;
extern uint *DAT_0059db60;
extern undefined4 DAT_0059db64;
extern undefined4 DAT_0059db68;
extern char s_ObjBombL_0059db50[];
extern char s_birth_0059db34[];
extern char s_damage_0059db0c[];
extern char s_start_0059db18[];

// USA 0059DA00 <- EU 0059D9D8 (Ghidra, non-matching)
// GLOBAL DAT_0059dafc int
// GLOBAL DAT_0059db00 undefined4 *
// GLOBAL DAT_0059db04 uint
// GLOBAL DAT_0059db08 undefined4 *
// GLOBAL DAT_0059db14 undefined4
// GLOBAL DAT_0059db20 undefined4
// GLOBAL DAT_0059db24 undefined4
// GLOBAL DAT_0059db28 undefined4 *
// GLOBAL DAT_0059db2c undefined
// GLOBAL DAT_0059db3c undefined4
// GLOBAL DAT_0059db40 undefined4 *
// GLOBAL DAT_0059db44 undefined
// GLOBAL DAT_0059db5c int
// GLOBAL DAT_0059db60 uint *
// GLOBAL DAT_0059db64 undefined4
// GLOBAL DAT_0059db68 undefined4
// GLOBAL s_ObjBombL_0059db50 string
// GLOBAL s_birth_0059db34 string
// GLOBAL s_damage_0059db0c string
// GLOBAL s_start_0059db18 string

undefined8 func_0059DA00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_0059dafc;
  *(undefined4 *)(DAT_0059dafc + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059db00;
  puVar4 = DAT_0059db00 + -4;
  *DAT_0059db00 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_0059db04,0);
  *puVar4 = (int)uVar5;
  local_18 = DAT_0059db14;
  puVar2 = DAT_0059db08;
  DAT_0059db08[1] = s_damage_0059db0c;
  *puVar2 = local_18;
  puVar2[2] = local_18;
  puVar2[3] = s_start_0059db18;
  puVar2 = DAT_0059db28;
  DAT_0059db28[1] = s_damage_0059db0c;
  *puVar2 = local_18;
  puVar2[3] = &DAT_0059db2c;
  puVar2[2] = local_18;
  puVar2[5] = s_birth_0059db34;
  puVar2[4] = local_18;
  puVar2[6] = local_18;
  puVar2[7] = s_start_0059db18;
  puVar2 = DAT_0059db40;
  puVar4 = DAT_0059db40 + 3;
  *DAT_0059db40 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  puStack_14 = &DAT_0059db44;
  uStack_10 = local_18;
  local_c = s_ObjBombL_0059db50;
  uVar3 = func_0019B51C(DAT_0059db40 + 8,DAT_0059db64,*DAT_0059db60,(int)&uStack_10,DAT_0059db40,
                        &local_18,DAT_0059db5c);
  return CONCAT44(DAT_0059db68,uVar3);
}


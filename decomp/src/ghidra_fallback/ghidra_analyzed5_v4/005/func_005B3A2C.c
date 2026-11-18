#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005b3b84;
extern undefined4 *DAT_005b3b88;
extern uint DAT_005b3b8c;
extern undefined4 *DAT_005b3b90;
extern undefined DAT_005b3b94;
extern undefined4 DAT_005b3ba8;
extern uint *DAT_005b3bc0;
extern undefined4 DAT_005b3bc4;
extern undefined4 *DAT_005b3bc8;
extern undefined4 DAT_005b3bcc;
extern undefined4 DAT_005b3bd0;
extern undefined4 *DAT_005b3bd4;
extern undefined DAT_005b3bd8;
extern uint *DAT_005b3c04;
extern undefined4 DAT_005b3c08;
extern undefined4 *DAT_005b3c0c;
extern undefined4 *DAT_005b3c10;
extern undefined DAT_005b3c14;
extern uint *DAT_005b3c40;
extern undefined4 DAT_005b3c44;
extern undefined4 *DAT_005b3c48;
extern char s_MassYukaByunGanon_005b3bf0[];
extern char s_MassYukaByunHera_005b3bac[];
extern char s_MassYukaByunSand_005b3c2c[];

// USA 005B3A2C <- EU 005B3A04 (Ghidra, non-matching)
// GLOBAL DAT_005b3b84 int
// GLOBAL DAT_005b3b88 undefined4 *
// GLOBAL DAT_005b3b8c uint
// GLOBAL DAT_005b3b90 undefined4 *
// GLOBAL DAT_005b3b94 undefined
// GLOBAL DAT_005b3ba8 undefined4
// GLOBAL DAT_005b3bc0 uint *
// GLOBAL DAT_005b3bc4 undefined4
// GLOBAL DAT_005b3bc8 undefined4 *
// GLOBAL DAT_005b3bcc undefined4
// GLOBAL DAT_005b3bd0 undefined4
// GLOBAL DAT_005b3bd4 undefined4 *
// GLOBAL DAT_005b3bd8 undefined
// GLOBAL DAT_005b3c04 uint *
// GLOBAL DAT_005b3c08 undefined4
// GLOBAL DAT_005b3c0c undefined4 *
// GLOBAL DAT_005b3c10 undefined4 *
// GLOBAL DAT_005b3c14 undefined
// GLOBAL DAT_005b3c40 uint *
// GLOBAL DAT_005b3c44 undefined4
// GLOBAL DAT_005b3c48 undefined4 *
// GLOBAL s_MassYukaByunGanon_005b3bf0 string
// GLOBAL s_MassYukaByunHera_005b3bac string
// GLOBAL s_MassYukaByunSand_005b3c2c string

undefined8 func_005B3A2C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  iVar1 = DAT_005b3b84;
  *(undefined4 *)(DAT_005b3b84 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b3b88;
  puVar4 = DAT_005b3b88 + -4;
  *DAT_005b3b88 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005b3b8c,0);
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005b3b90;
  puVar4 = DAT_005b3b90 + 3;
  DAT_005b3b90[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  uVar3 = DAT_005b3ba8;
  local_34 = &DAT_005b3b94;
  local_3c = s_MassYukaByunHera_005b3bac;
  local_38 = DAT_005b3ba8;
  local_40 = DAT_005b3ba8;
  func_0019B51C(DAT_005b3bc8,DAT_005b3bc4,*DAT_005b3bc0,(int)&local_40,DAT_005b3b90,&local_38,0);
  puVar2 = DAT_005b3bd4;
  puVar4 = DAT_005b3bd4 + 3;
  DAT_005b3bd4[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_24 = &DAT_005b3bd8;
  local_2c = s_MassYukaByunGanon_005b3bf0;
  local_28 = uVar3;
  local_30 = uVar3;
  func_0019B51C(DAT_005b3c0c,DAT_005b3c08,*DAT_005b3c04,(int)&local_30,DAT_005b3bd4,&local_28,0);
  puVar2 = DAT_005b3c10;
  puVar4 = DAT_005b3c10 + 3;
  DAT_005b3c10[1] = 5;
  puVar2[2] = puVar4;
  *puVar2 = 0;
  local_14 = &DAT_005b3c14;
  local_1c = s_MassYukaByunSand_005b3c2c;
  local_18 = uVar3;
  local_20 = uVar3;
  uVar3 = func_0019B51C(DAT_005b3c48,DAT_005b3c44,*DAT_005b3c40,(int)&local_20,DAT_005b3c10,
                        &local_18,0);
  return CONCAT44(DAT_005b3bd0,uVar3);
}


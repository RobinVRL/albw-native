#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e0e34;
extern undefined4 *DAT_005e0e38;
extern undefined DAT_005e0e3c;
extern undefined4 DAT_005e0e44;
extern undefined4 DAT_005e0e48;
extern undefined4 DAT_005e0e4c;
extern undefined4 *DAT_005e0e50;
extern undefined4 DAT_005e0e74;
extern undefined4 *DAT_005e0e78;
extern undefined DAT_005e0e7c;
extern uint *DAT_005e0ea0;
extern undefined4 DAT_005e0ea4;
extern undefined4 *DAT_005e0ea8;
extern undefined4 DAT_005e0eac;
extern char s_MojDoorBossGanon_005e0e8c[];
extern char s_key_A_005e0e54[];
extern char s_key_B_005e0e5c[];
extern char s_key_C_005e0e64[];
extern char s_key_D_005e0e6c[];

// USA 005E0D50 <- EU 005E0D28 (Ghidra, non-matching)
// GLOBAL DAT_005e0e34 undefined4 *
// GLOBAL DAT_005e0e38 undefined4 *
// GLOBAL DAT_005e0e3c undefined
// GLOBAL DAT_005e0e44 undefined4
// GLOBAL DAT_005e0e48 undefined4
// GLOBAL DAT_005e0e4c undefined4
// GLOBAL DAT_005e0e50 undefined4 *
// GLOBAL DAT_005e0e74 undefined4
// GLOBAL DAT_005e0e78 undefined4 *
// GLOBAL DAT_005e0e7c undefined
// GLOBAL DAT_005e0ea0 uint *
// GLOBAL DAT_005e0ea4 undefined4
// GLOBAL DAT_005e0ea8 undefined4 *
// GLOBAL DAT_005e0eac undefined4
// GLOBAL s_MojDoorBossGanon_005e0e8c string
// GLOBAL s_key_A_005e0e54 string
// GLOBAL s_key_B_005e0e5c string
// GLOBAL s_key_C_005e0e64 string
// GLOBAL s_key_D_005e0e6c string

undefined8 func_005E0D50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e0e34;
  *DAT_005e0e34 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e0e44;
  puVar1 = DAT_005e0e38;
  *DAT_005e0e38 = 0;
  puVar1[1] = 0;
  puVar1[3] = &DAT_005e0e3c;
  puVar1[2] = local_18;
  puVar1 = DAT_005e0e50;
  DAT_005e0e50[1] = s_key_A_005e0e54;
  *puVar1 = local_18;
  puVar1[3] = s_key_B_005e0e5c;
  puVar1[2] = local_18;
  puVar1[5] = s_key_C_005e0e64;
  puVar1[4] = local_18;
  puVar1[7] = s_key_D_005e0e6c;
  puVar1[6] = local_18;
  puVar1[8] = local_18;
  puVar1[9] = &DAT_005e0e3c;
  puVar1 = DAT_005e0e78;
  puVar3 = DAT_005e0e78 + 3;
  *DAT_005e0e78 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e0e7c;
  uStack_10 = local_18;
  local_c = s_MojDoorBossGanon_005e0e8c;
  uVar2 = func_0019B51C(DAT_005e0ea8,DAT_005e0ea4,*DAT_005e0ea0,(int)&uStack_10,DAT_005e0e78,
                        &local_18,0);
  return CONCAT44(DAT_005e0eac,uVar2);
}


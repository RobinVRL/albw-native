#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005a4e0c;
extern undefined4 *DAT_005a4e10;
extern undefined4 DAT_005a4e1c;
extern undefined4 DAT_005a4e48;
extern undefined4 DAT_005a4e4c;
extern undefined4 *DAT_005a4e50;
extern undefined4 DAT_005a4e54;
extern undefined4 *DAT_005a4e58;
extern undefined DAT_005a4e5c;
extern int DAT_005a4e74;
extern uint *DAT_005a4e78;
extern undefined4 DAT_005a4e7c;
extern undefined4 *DAT_005a4e80;
extern undefined4 DAT_005a4e84;
extern char s_EnemyHover_005a4e68[];
extern char s_damage00_005a4e28[];
extern char s_piyopiyo00_005a4e3c[];
extern char s_turn00_005a4e34[];
extern char s_wait00_005a4e14[];
extern char s_walk00_005a4e20[];

// USA 005A4CF4 <- EU 005A4CCC (Ghidra, non-matching)
// GLOBAL DAT_005a4e0c int *
// GLOBAL DAT_005a4e10 undefined4 *
// GLOBAL DAT_005a4e1c undefined4
// GLOBAL DAT_005a4e48 undefined4
// GLOBAL DAT_005a4e4c undefined4
// GLOBAL DAT_005a4e50 undefined4 *
// GLOBAL DAT_005a4e54 undefined4
// GLOBAL DAT_005a4e58 undefined4 *
// GLOBAL DAT_005a4e5c undefined
// GLOBAL DAT_005a4e74 int
// GLOBAL DAT_005a4e78 uint *
// GLOBAL DAT_005a4e7c undefined4
// GLOBAL DAT_005a4e80 undefined4 *
// GLOBAL DAT_005a4e84 undefined4
// GLOBAL s_EnemyHover_005a4e68 string
// GLOBAL s_damage00_005a4e28 string
// GLOBAL s_piyopiyo00_005a4e3c string
// GLOBAL s_turn00_005a4e34 string
// GLOBAL s_wait00_005a4e14 string
// GLOBAL s_walk00_005a4e20 string

undefined8 func_005A4CF4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined1 *)(albw_frame + 0x8))
  #define local_27 (*(undefined1 *)(albw_frame + 0x9))
  #define local_26 (*(undefined1 *)(albw_frame + 0xa))
  #define local_25 (*(undefined1 *)(albw_frame + 0xb))
  #define local_24 (*(undefined1 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  piVar1 = DAT_005a4e0c;
  DAT_005a4e0c[2] = -1;
  piVar1[3] = -1;
  uVar3 = DAT_005a4e1c;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005a4e10;
  DAT_005a4e10[1] = s_wait00_005a4e14;
  *puVar2 = uVar3;
  puVar2[3] = s_walk00_005a4e20;
  puVar2[2] = uVar3;
  puVar2[5] = s_damage00_005a4e28;
  puVar2[4] = uVar3;
  puVar2[7] = s_turn00_005a4e34;
  puVar2[6] = uVar3;
  puVar2[8] = uVar3;
  puVar2[9] = s_piyopiyo00_005a4e3c;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_24 = 0xff;
  local_25 = 0xff;
  func_004FC6FC(DAT_005a4e50,0,1,0,0,(undefined4 *)&local_28,0xb);
  puVar2 = DAT_005a4e58;
  puVar5 = DAT_005a4e58 + 3;
  DAT_005a4e58[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a4e5c;
  local_18 = uVar3;
  local_1c = s_EnemyHover_005a4e68;
  local_20 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a4e74;
  }
  uVar3 = func_0019B51C(DAT_005a4e80,DAT_005a4e7c,*DAT_005a4e78,(int)&local_20,DAT_005a4e58,
                        &local_18,iVar4);
  return CONCAT44(DAT_005a4e84,uVar3);
}


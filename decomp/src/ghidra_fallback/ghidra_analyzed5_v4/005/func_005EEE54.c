#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005eef34;
extern undefined4 *DAT_005eef38;
extern undefined4 *DAT_005eef3c;
extern undefined DAT_005eef40;
extern undefined4 DAT_005eef50;
extern uint *DAT_005eef68;
extern undefined4 DAT_005eef6c;
extern undefined4 *DAT_005eef70;
extern undefined4 DAT_005eef74;
extern undefined4 DAT_005eef78;
extern undefined4 *DAT_005eef7c;
extern undefined DAT_005eef80;
extern uint *DAT_005eefb4;
extern undefined4 DAT_005eefb8;
extern undefined4 *DAT_005eefbc;
extern char s_TagHolocaustChecker_005eef54[];
extern char s_TagHolocaustOnEventChecker_005eef98[];

// USA 005EEE54 <- EU 005EEE2C (Ghidra, non-matching)
// GLOBAL DAT_005eef34 undefined4 *
// GLOBAL DAT_005eef38 undefined4 *
// GLOBAL DAT_005eef3c undefined4 *
// GLOBAL DAT_005eef40 undefined
// GLOBAL DAT_005eef50 undefined4
// GLOBAL DAT_005eef68 uint *
// GLOBAL DAT_005eef6c undefined4
// GLOBAL DAT_005eef70 undefined4 *
// GLOBAL DAT_005eef74 undefined4
// GLOBAL DAT_005eef78 undefined4
// GLOBAL DAT_005eef7c undefined4 *
// GLOBAL DAT_005eef80 undefined
// GLOBAL DAT_005eefb4 uint *
// GLOBAL DAT_005eefb8 undefined4
// GLOBAL DAT_005eefbc undefined4 *
// GLOBAL s_TagHolocaustChecker_005eef54 string
// GLOBAL s_TagHolocaustOnEventChecker_005eef98 string

undefined8 func_005EEE54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005eef34;
  *DAT_005eef34 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eef38;
  *DAT_005eef38 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005eef50;
  puVar1 = DAT_005eef3c;
  puVar3 = DAT_005eef3c + 3;
  DAT_005eef3c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005eef40;
  local_2c = s_TagHolocaustChecker_005eef54;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005eef70,DAT_005eef6c,*DAT_005eef68,(int)&local_30,DAT_005eef3c,&local_28,0);
  puVar1 = DAT_005eef7c;
  puVar3 = DAT_005eef7c + 3;
  DAT_005eef7c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005eef80;
  local_1c = s_TagHolocaustOnEventChecker_005eef98;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005eefbc,DAT_005eefb8,*DAT_005eefb4,(int)&local_20,DAT_005eef7c,
                        &local_18,0);
  return CONCAT44(DAT_005eef78,uVar2);
}


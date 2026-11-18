#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a61f4;
extern undefined4 *DAT_005a61f8;
extern undefined4 DAT_005a6204;
extern undefined4 DAT_005a6208;
extern undefined4 DAT_005a620c;
extern undefined4 *DAT_005a6210;
extern undefined DAT_005a6214;
extern uint *DAT_005a6228;
extern undefined4 DAT_005a622c;
extern undefined4 *DAT_005a6230;
extern undefined4 DAT_005a6234;
extern char s_DoorKey_005a61fc[];
extern char s_MojDoorKey_005a621c[];

// USA 005A6160 <- EU 005A6138 (Ghidra, non-matching)
// GLOBAL DAT_005a61f4 undefined4 *
// GLOBAL DAT_005a61f8 undefined4 *
// GLOBAL DAT_005a6204 undefined4
// GLOBAL DAT_005a6208 undefined4
// GLOBAL DAT_005a620c undefined4
// GLOBAL DAT_005a6210 undefined4 *
// GLOBAL DAT_005a6214 undefined
// GLOBAL DAT_005a6228 uint *
// GLOBAL DAT_005a622c undefined4
// GLOBAL DAT_005a6230 undefined4 *
// GLOBAL DAT_005a6234 undefined4
// GLOBAL s_DoorKey_005a61fc string
// GLOBAL s_MojDoorKey_005a621c string

undefined8 func_005A6160(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005a61f4;
  *DAT_005a61f4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005a6204;
  puVar1 = DAT_005a61f8;
  *DAT_005a61f8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_DoorKey_005a61fc;
  puVar1[2] = local_18;
  puVar1 = DAT_005a6210;
  puVar3 = DAT_005a6210 + 3;
  *DAT_005a6210 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005a6214;
  uStack_10 = local_18;
  local_c = s_MojDoorKey_005a621c;
  uVar2 = func_0019B51C(DAT_005a6230,DAT_005a622c,*DAT_005a6228,(int)&uStack_10,DAT_005a6210,
                        &local_18,0);
  return CONCAT44(DAT_005a6234,uVar2);
}


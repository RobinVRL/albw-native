#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab574;
extern undefined4 *DAT_005ab578;
extern undefined4 *DAT_005ab57c;
extern undefined DAT_005ab580;
extern undefined4 DAT_005ab590;
extern uint *DAT_005ab5a0;
extern undefined4 DAT_005ab5a4;
extern undefined4 *DAT_005ab5a8;
extern undefined4 DAT_005ab5ac;
extern undefined4 DAT_005ab5b0;
extern undefined4 *DAT_005ab5b4;
extern undefined DAT_005ab5b8;
extern uint *DAT_005ab5e0;
extern undefined4 DAT_005ab5e4;
extern undefined4 *DAT_005ab5e8;
extern char s_MojBossSandThrough_005ab5cc[];
extern char s_MojBossSand_005ab594[];

// USA 005AB494 <- EU 005AB46C (Ghidra, non-matching)
// GLOBAL DAT_005ab574 undefined4 *
// GLOBAL DAT_005ab578 undefined4 *
// GLOBAL DAT_005ab57c undefined4 *
// GLOBAL DAT_005ab580 undefined
// GLOBAL DAT_005ab590 undefined4
// GLOBAL DAT_005ab5a0 uint *
// GLOBAL DAT_005ab5a4 undefined4
// GLOBAL DAT_005ab5a8 undefined4 *
// GLOBAL DAT_005ab5ac undefined4
// GLOBAL DAT_005ab5b0 undefined4
// GLOBAL DAT_005ab5b4 undefined4 *
// GLOBAL DAT_005ab5b8 undefined
// GLOBAL DAT_005ab5e0 uint *
// GLOBAL DAT_005ab5e4 undefined4
// GLOBAL DAT_005ab5e8 undefined4 *
// GLOBAL s_MojBossSandThrough_005ab5cc string
// GLOBAL s_MojBossSand_005ab594 string

undefined8 func_005AB494(void)

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
  puVar1 = DAT_005ab574;
  *DAT_005ab574 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab578;
  *DAT_005ab578 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ab590;
  puVar1 = DAT_005ab57c;
  puVar3 = DAT_005ab57c + 3;
  DAT_005ab57c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ab580;
  local_2c = s_MojBossSand_005ab594;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005ab5a8,DAT_005ab5a4,*DAT_005ab5a0,(int)&local_30,DAT_005ab57c,&local_28,0);
  puVar1 = DAT_005ab5b4;
  puVar3 = DAT_005ab5b4 + 3;
  DAT_005ab5b4[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005ab5b8;
  local_1c = s_MojBossSandThrough_005ab5cc;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005ab5e8,DAT_005ab5e4,*DAT_005ab5e0,(int)&local_20,DAT_005ab5b4,
                        &local_18,0);
  return CONCAT44(DAT_005ab5b0,uVar2);
}


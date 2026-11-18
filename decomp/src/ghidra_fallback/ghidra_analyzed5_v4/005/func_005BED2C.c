#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bed98;
extern undefined4 *DAT_005bed9c;
extern undefined4 *DAT_005beda0;
extern undefined DAT_005beda4;
extern undefined4 DAT_005bedb4;
extern uint *DAT_005bedc8;
extern undefined4 DAT_005bedcc;
extern undefined4 *DAT_005bedd0;
extern undefined4 DAT_005bedd4;
extern undefined4 DAT_005bedd8;
extern char s_MojSwitchStep_005bedb8[];

// USA 005BED2C <- EU 005BED04 (Ghidra, non-matching)
// GLOBAL DAT_005bed98 undefined4 *
// GLOBAL DAT_005bed9c undefined4 *
// GLOBAL DAT_005beda0 undefined4 *
// GLOBAL DAT_005beda4 undefined
// GLOBAL DAT_005bedb4 undefined4
// GLOBAL DAT_005bedc8 uint *
// GLOBAL DAT_005bedcc undefined4
// GLOBAL DAT_005bedd0 undefined4 *
// GLOBAL DAT_005bedd4 undefined4
// GLOBAL DAT_005bedd8 undefined4
// GLOBAL s_MojSwitchStep_005bedb8 string

undefined8 func_005BED2C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bed98;
  *DAT_005bed98 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bed9c;
  *DAT_005bed9c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005beda0;
  puVar3 = DAT_005beda0 + 3;
  *DAT_005beda0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005bedb4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005beda4;
  local_18 = local_10;
  local_14 = s_MojSwitchStep_005bedb8;
  uVar2 = func_0019B51C(DAT_005bedd0,DAT_005bedcc,*DAT_005bedc8,(int)&local_18,DAT_005beda0,
                        &local_10,0);
  return CONCAT44(DAT_005bedd8,uVar2);
}


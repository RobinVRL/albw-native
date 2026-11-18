#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b3e6c;
extern undefined4 *DAT_005b3e70;
extern undefined4 *DAT_005b3e74;
extern undefined DAT_005b3e78;
extern undefined4 DAT_005b3e84;
extern uint *DAT_005b3e98;
extern undefined4 DAT_005b3e9c;
extern undefined4 *DAT_005b3ea0;
extern undefined4 DAT_005b3ea4;
extern undefined4 DAT_005b3ea8;
extern char s_MojArrowWall_005b3e88[];

// USA 005B3E00 <- EU 005B3DD8 (Ghidra, non-matching)
// GLOBAL DAT_005b3e6c undefined4 *
// GLOBAL DAT_005b3e70 undefined4 *
// GLOBAL DAT_005b3e74 undefined4 *
// GLOBAL DAT_005b3e78 undefined
// GLOBAL DAT_005b3e84 undefined4
// GLOBAL DAT_005b3e98 uint *
// GLOBAL DAT_005b3e9c undefined4
// GLOBAL DAT_005b3ea0 undefined4 *
// GLOBAL DAT_005b3ea4 undefined4
// GLOBAL DAT_005b3ea8 undefined4
// GLOBAL s_MojArrowWall_005b3e88 string

undefined8 func_005B3E00(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b3e6c;
  *DAT_005b3e6c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3e70;
  *DAT_005b3e70 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b3e74;
  puVar3 = DAT_005b3e74 + 3;
  *DAT_005b3e74 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b3e84;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b3e78;
  local_18 = local_10;
  local_14 = s_MojArrowWall_005b3e88;
  uVar2 = func_0019B51C(DAT_005b3ea0,DAT_005b3e9c,*DAT_005b3e98,(int)&local_18,DAT_005b3e74,
                        &local_10,0);
  return CONCAT44(DAT_005b3ea8,uVar2);
}


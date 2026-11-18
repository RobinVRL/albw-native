#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c49f0;
extern undefined4 *DAT_005c49f4;
extern undefined4 *DAT_005c49f8;
extern undefined DAT_005c49fc;
extern undefined4 DAT_005c4a0c;
extern uint *DAT_005c4a20;
extern undefined4 DAT_005c4a24;
extern undefined4 *DAT_005c4a28;
extern undefined4 DAT_005c4a2c;
extern undefined4 DAT_005c4a30;
extern char s_MojGuruGuruBar_005c4a10[];

// USA 005C4984 <- EU 005C495C (Ghidra, non-matching)
// GLOBAL DAT_005c49f0 undefined4 *
// GLOBAL DAT_005c49f4 undefined4 *
// GLOBAL DAT_005c49f8 undefined4 *
// GLOBAL DAT_005c49fc undefined
// GLOBAL DAT_005c4a0c undefined4
// GLOBAL DAT_005c4a20 uint *
// GLOBAL DAT_005c4a24 undefined4
// GLOBAL DAT_005c4a28 undefined4 *
// GLOBAL DAT_005c4a2c undefined4
// GLOBAL DAT_005c4a30 undefined4
// GLOBAL s_MojGuruGuruBar_005c4a10 string

undefined8 func_005C4984(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c49f0;
  *DAT_005c49f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c49f4;
  *DAT_005c49f4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c49f8;
  puVar3 = DAT_005c49f8 + 3;
  *DAT_005c49f8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c4a0c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c49fc;
  local_18 = local_10;
  local_14 = s_MojGuruGuruBar_005c4a10;
  uVar2 = func_0019B51C(DAT_005c4a28,DAT_005c4a24,*DAT_005c4a20,(int)&local_18,DAT_005c49f8,
                        &local_10,0);
  return CONCAT44(DAT_005c4a30,uVar2);
}


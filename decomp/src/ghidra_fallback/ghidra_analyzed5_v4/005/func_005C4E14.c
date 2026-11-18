#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c4ec0;
extern uint DAT_005c4ec4;
extern uint DAT_005c4ec8;
extern uint DAT_005c4ecc;
extern uint DAT_005c4ed0;
extern uint DAT_005c4ed4;
extern undefined4 *DAT_005c4ed8;
extern undefined DAT_005c4edc;
extern undefined4 DAT_005c4ee8;
extern uint *DAT_005c4efc;
extern undefined4 DAT_005c4f00;
extern undefined4 *DAT_005c4f04;
extern undefined4 DAT_005c4f08;
extern undefined4 DAT_005c4f0c;
extern char s_MojTileTornado_005c4eec[];

// USA 005C4E14 <- EU 005C4DEC (Ghidra, non-matching)
// GLOBAL DAT_005c4ec0 undefined4 *
// GLOBAL DAT_005c4ec4 uint
// GLOBAL DAT_005c4ec8 uint
// GLOBAL DAT_005c4ecc uint
// GLOBAL DAT_005c4ed0 uint
// GLOBAL DAT_005c4ed4 uint
// GLOBAL DAT_005c4ed8 undefined4 *
// GLOBAL DAT_005c4edc undefined
// GLOBAL DAT_005c4ee8 undefined4
// GLOBAL DAT_005c4efc uint *
// GLOBAL DAT_005c4f00 undefined4
// GLOBAL DAT_005c4f04 undefined4 *
// GLOBAL DAT_005c4f08 undefined4
// GLOBAL DAT_005c4f0c undefined4
// GLOBAL s_MojTileTornado_005c4eec string

undefined8 func_005C4E14(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c4ec0;
  DAT_005c4ec0[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  uVar4 = func_00114608(DAT_005c4ec4,0xffffffff);
  *puVar1 = (int)uVar4;
  uVar4 = func_00114608(DAT_005c4ec8,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[1] = (int)uVar4;
  uVar4 = func_00114608(DAT_005c4ecc,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[2] = (int)uVar4;
  uVar4 = func_00114608(DAT_005c4ed0,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[3] = (int)uVar4;
  uVar4 = func_00114608(DAT_005c4ed4,(uint)((ulonglong)uVar4 >> 0x20));
  puVar1[4] = (int)uVar4;
  puVar1 = DAT_005c4ed8;
  puVar3 = DAT_005c4ed8 + 3;
  *DAT_005c4ed8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c4ee8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c4edc;
  local_18 = local_10;
  local_14 = s_MojTileTornado_005c4eec;
  uVar2 = func_0019B51C(DAT_005c4f04,DAT_005c4f00,*DAT_005c4efc,(int)&local_18,DAT_005c4ed8,
                        &local_10,0);
  return CONCAT44(DAT_005c4f0c,uVar2);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005be0d4;
extern undefined4 *DAT_005be0d8;
extern undefined4 DAT_005be0e8;
extern undefined4 DAT_005be0ec;
extern undefined4 DAT_005be0f0;
extern undefined4 *DAT_005be0f4;
extern undefined DAT_005be0f8;
extern uint *DAT_005be11c;
extern undefined4 DAT_005be120;
extern undefined4 *DAT_005be124;
extern undefined4 DAT_005be128;
extern char s_BlockBound_005be0dc[];
extern char s_MojBlockBound_005be10c[];

// USA 005BE040 <- EU 005BE018 (Ghidra, non-matching)
// GLOBAL DAT_005be0d4 undefined4 *
// GLOBAL DAT_005be0d8 undefined4 *
// GLOBAL DAT_005be0e8 undefined4
// GLOBAL DAT_005be0ec undefined4
// GLOBAL DAT_005be0f0 undefined4
// GLOBAL DAT_005be0f4 undefined4 *
// GLOBAL DAT_005be0f8 undefined
// GLOBAL DAT_005be11c uint *
// GLOBAL DAT_005be120 undefined4
// GLOBAL DAT_005be124 undefined4 *
// GLOBAL DAT_005be128 undefined4
// GLOBAL s_BlockBound_005be0dc string
// GLOBAL s_MojBlockBound_005be10c string

undefined8 func_005BE040(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005be0d4;
  *DAT_005be0d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005be0e8;
  puVar1 = DAT_005be0d8;
  *DAT_005be0d8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_BlockBound_005be0dc;
  puVar1[2] = local_18;
  puVar1 = DAT_005be0f4;
  puVar3 = DAT_005be0f4 + 3;
  *DAT_005be0f4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005be0f8;
  uStack_10 = local_18;
  local_c = s_MojBlockBound_005be10c;
  uVar2 = func_0019B51C(DAT_005be124,DAT_005be120,*DAT_005be11c,(int)&uStack_10,DAT_005be0f4,
                        &local_18,0);
  return CONCAT44(DAT_005be128,uVar2);
}


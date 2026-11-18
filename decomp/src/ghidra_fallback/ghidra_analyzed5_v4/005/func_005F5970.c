#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f59dc;
extern undefined4 *DAT_005f59e0;
extern undefined4 *DAT_005f59e4;
extern undefined DAT_005f59e8;
extern undefined4 DAT_005f5a04;
extern uint *DAT_005f5a20;
extern undefined4 DAT_005f5a24;
extern undefined4 *DAT_005f5a28;
extern undefined4 DAT_005f5a2c;
extern undefined4 DAT_005f5a30;
extern char s_TagCrossLavaGenerator_005f5a08[];

// USA 005F5970 <- EU 005F5948 (Ghidra, non-matching)
// GLOBAL DAT_005f59dc undefined4 *
// GLOBAL DAT_005f59e0 undefined4 *
// GLOBAL DAT_005f59e4 undefined4 *
// GLOBAL DAT_005f59e8 undefined
// GLOBAL DAT_005f5a04 undefined4
// GLOBAL DAT_005f5a20 uint *
// GLOBAL DAT_005f5a24 undefined4
// GLOBAL DAT_005f5a28 undefined4 *
// GLOBAL DAT_005f5a2c undefined4
// GLOBAL DAT_005f5a30 undefined4
// GLOBAL s_TagCrossLavaGenerator_005f5a08 string

undefined8 func_005F5970(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f59dc;
  *DAT_005f59dc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f59e0;
  *DAT_005f59e0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f59e4;
  puVar3 = DAT_005f59e4 + 3;
  *DAT_005f59e4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f5a04;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f59e8;
  local_18 = local_10;
  local_14 = s_TagCrossLavaGenerator_005f5a08;
  uVar2 = func_0019B51C(DAT_005f5a28,DAT_005f5a24,*DAT_005f5a20,(int)&local_18,DAT_005f59e4,
                        &local_10,0);
  return CONCAT44(DAT_005f5a30,uVar2);
}


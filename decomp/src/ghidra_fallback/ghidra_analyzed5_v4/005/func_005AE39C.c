#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ae4c4;
extern undefined4 *DAT_005ae4c8;
extern undefined4 *DAT_005ae4cc;
extern undefined DAT_005ae4d0;
extern undefined4 DAT_005ae4d8;
extern undefined DAT_005ae4dc;
extern undefined DAT_005ae4e8;
extern undefined4 DAT_005ae4f0;
extern undefined4 DAT_005ae4f4;
extern undefined4 *DAT_005ae4f8;
extern undefined DAT_005ae4fc;
extern undefined4 DAT_005ae504;
extern undefined4 *DAT_005ae508;
extern undefined DAT_005ae50c;
extern undefined4 *DAT_005ae514;
extern undefined4 *DAT_005ae520;
extern undefined4 *DAT_005ae52c;
extern undefined DAT_005ae530;
extern uint *DAT_005ae544;
extern undefined4 DAT_005ae548;
extern undefined4 *DAT_005ae54c;
extern undefined4 DAT_005ae550;
extern char s_ObjSquirrel_005ae538[];
extern char s_Tail_1_005ae518[];
extern char s_Tail_2_005ae524[];
extern char s_search_005ae4e0[];

// USA 005AE39C <- EU 005AE374 (Ghidra, non-matching)
// GLOBAL DAT_005ae4c4 undefined4 *
// GLOBAL DAT_005ae4c8 undefined4 *
// GLOBAL DAT_005ae4cc undefined4 *
// GLOBAL DAT_005ae4d0 undefined
// GLOBAL DAT_005ae4d8 undefined4
// GLOBAL DAT_005ae4dc undefined
// GLOBAL DAT_005ae4e8 undefined
// GLOBAL DAT_005ae4f0 undefined4
// GLOBAL DAT_005ae4f4 undefined4
// GLOBAL DAT_005ae4f8 undefined4 *
// GLOBAL DAT_005ae4fc undefined
// GLOBAL DAT_005ae504 undefined4
// GLOBAL DAT_005ae508 undefined4 *
// GLOBAL DAT_005ae50c undefined
// GLOBAL DAT_005ae514 undefined4 *
// GLOBAL DAT_005ae520 undefined4 *
// GLOBAL DAT_005ae52c undefined4 *
// GLOBAL DAT_005ae530 undefined
// GLOBAL DAT_005ae544 uint *
// GLOBAL DAT_005ae548 undefined4
// GLOBAL DAT_005ae54c undefined4 *
// GLOBAL DAT_005ae550 undefined4
// GLOBAL s_ObjSquirrel_005ae538 string
// GLOBAL s_Tail_1_005ae518 string
// GLOBAL s_Tail_2_005ae524 string
// GLOBAL s_search_005ae4e0 string

undefined8 func_005AE39C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ae4c4;
  *DAT_005ae4c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ae4d8;
  puVar1 = DAT_005ae4c8;
  *DAT_005ae4c8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ae4cc;
  DAT_005ae4cc[1] = &DAT_005ae4d0;
  *puVar1 = local_18;
  puVar1[3] = &DAT_005ae4dc;
  puVar1[2] = local_18;
  puVar1[5] = s_search_005ae4e0;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = &DAT_005ae4e8;
  puVar1 = DAT_005ae4f8;
  DAT_005ae4f8[1] = &DAT_005ae4fc;
  *puVar1 = local_18;
  puVar1 = DAT_005ae508;
  DAT_005ae508[1] = &DAT_005ae50c;
  *puVar1 = local_18;
  puVar1 = DAT_005ae514;
  DAT_005ae514[1] = s_Tail_1_005ae518;
  *puVar1 = local_18;
  puVar1 = DAT_005ae520;
  DAT_005ae520[1] = s_Tail_2_005ae524;
  *puVar1 = local_18;
  puVar1 = DAT_005ae52c;
  puVar3 = DAT_005ae52c + 3;
  *DAT_005ae52c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ae530;
  uStack_10 = local_18;
  local_c = s_ObjSquirrel_005ae538;
  uVar2 = func_0019B51C(DAT_005ae54c,DAT_005ae548,*DAT_005ae544,(int)&uStack_10,DAT_005ae52c,
                        &local_18,0);
  return CONCAT44(DAT_005ae550,uVar2);
}


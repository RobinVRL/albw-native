#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ec17c;
extern undefined4 *DAT_005ec180;
extern undefined4 *DAT_005ec184;
extern undefined4 DAT_005ec190;
extern undefined4 DAT_005ec1a4;
extern undefined4 DAT_005ec1a8;
extern undefined4 *DAT_005ec1ac;
extern undefined DAT_005ec1b0;
extern uint *DAT_005ec1dc;
extern undefined4 DAT_005ec1e0;
extern undefined4 *DAT_005ec1e4;
extern undefined4 DAT_005ec1e8;
extern char s_MojJewelRockCandle_005ec1c8[];
extern char s_fade1_005ec188[];
extern char s_fade2_005ec194[];
extern char s_fade3_005ec19c[];

// USA 005EC0CC <- EU 005EC0A4 (Ghidra, non-matching)
// GLOBAL DAT_005ec17c int
// GLOBAL DAT_005ec180 undefined4 *
// GLOBAL DAT_005ec184 undefined4 *
// GLOBAL DAT_005ec190 undefined4
// GLOBAL DAT_005ec1a4 undefined4
// GLOBAL DAT_005ec1a8 undefined4
// GLOBAL DAT_005ec1ac undefined4 *
// GLOBAL DAT_005ec1b0 undefined
// GLOBAL DAT_005ec1dc uint *
// GLOBAL DAT_005ec1e0 undefined4
// GLOBAL DAT_005ec1e4 undefined4 *
// GLOBAL DAT_005ec1e8 undefined4
// GLOBAL s_MojJewelRockCandle_005ec1c8 string
// GLOBAL s_fade1_005ec188 string
// GLOBAL s_fade2_005ec194 string
// GLOBAL s_fade3_005ec19c string

undefined8 func_005EC0CC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_005ec17c;
  *(undefined4 *)(DAT_005ec17c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  local_18 = DAT_005ec190;
  puVar2 = DAT_005ec180;
  *DAT_005ec180 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005ec184;
  DAT_005ec184[1] = s_fade1_005ec188;
  *puVar2 = local_18;
  puVar2[3] = s_fade2_005ec194;
  puVar2[2] = local_18;
  puVar2[4] = local_18;
  puVar2[5] = s_fade3_005ec19c;
  puVar2 = DAT_005ec1ac;
  puVar4 = DAT_005ec1ac + 3;
  *DAT_005ec1ac = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  puStack_14 = &DAT_005ec1b0;
  uStack_10 = local_18;
  local_c = s_MojJewelRockCandle_005ec1c8;
  uVar3 = func_0019B51C(DAT_005ec1e4,DAT_005ec1e0,*DAT_005ec1dc,(int)&uStack_10,DAT_005ec1ac,
                        &local_18,0);
  return CONCAT44(DAT_005ec1e8,uVar3);
}


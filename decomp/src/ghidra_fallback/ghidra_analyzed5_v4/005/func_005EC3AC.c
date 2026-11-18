#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ec42c;
extern undefined4 *DAT_005ec430;
extern uint DAT_005ec434;
extern undefined4 *DAT_005ec438;
extern undefined DAT_005ec43c;
extern undefined4 DAT_005ec454;
extern uint *DAT_005ec46c;
extern undefined4 DAT_005ec470;
extern undefined4 *DAT_005ec474;
extern undefined4 DAT_005ec478;
extern undefined4 DAT_005ec47c;
extern char s_ObjJewelRockBullet_005ec458[];

// USA 005EC3AC <- EU 005EC384 (Ghidra, non-matching)
// GLOBAL DAT_005ec42c int
// GLOBAL DAT_005ec430 undefined4 *
// GLOBAL DAT_005ec434 uint
// GLOBAL DAT_005ec438 undefined4 *
// GLOBAL DAT_005ec43c undefined
// GLOBAL DAT_005ec454 undefined4
// GLOBAL DAT_005ec46c uint *
// GLOBAL DAT_005ec470 undefined4
// GLOBAL DAT_005ec474 undefined4 *
// GLOBAL DAT_005ec478 undefined4
// GLOBAL DAT_005ec47c undefined4
// GLOBAL s_ObjJewelRockBullet_005ec458 string

undefined8 func_005EC3AC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005ec42c;
  *(undefined4 *)(DAT_005ec42c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ec430;
  puVar4 = DAT_005ec430 + -4;
  *DAT_005ec430 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005ec434,0);
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005ec438;
  puVar4 = DAT_005ec438 + 3;
  *DAT_005ec438 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005ec454;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005ec43c;
  local_18 = local_10;
  local_14 = s_ObjJewelRockBullet_005ec458;
  uVar3 = func_0019B51C(DAT_005ec474,DAT_005ec470,*DAT_005ec46c,(int)&local_18,DAT_005ec438,
                        &local_10,0);
  return CONCAT44(DAT_005ec47c,uVar3);
}


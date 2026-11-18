#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c0548;
extern undefined4 *DAT_005c054c;
extern undefined4 DAT_005c0550;
extern undefined4 *DAT_005c0554;
extern undefined4 *DAT_005c0558;
extern uint DAT_005c055c;
extern undefined4 *DAT_005c0560;
extern undefined DAT_005c0564;
extern undefined4 DAT_005c056c;
extern uint *DAT_005c0580;
extern undefined4 DAT_005c0584;
extern undefined4 *DAT_005c0588;
extern undefined4 DAT_005c058c;
extern undefined4 DAT_005c0590;
extern char s_ObjFirePillar_005c0570[];

// USA 005C04B4 <- EU 005C048C (Ghidra, non-matching)
// GLOBAL DAT_005c0548 int
// GLOBAL DAT_005c054c undefined4 *
// GLOBAL DAT_005c0550 undefined4
// GLOBAL DAT_005c0554 undefined4 *
// GLOBAL DAT_005c0558 undefined4 *
// GLOBAL DAT_005c055c uint
// GLOBAL DAT_005c0560 undefined4 *
// GLOBAL DAT_005c0564 undefined
// GLOBAL DAT_005c056c undefined4
// GLOBAL DAT_005c0580 uint *
// GLOBAL DAT_005c0584 undefined4
// GLOBAL DAT_005c0588 undefined4 *
// GLOBAL DAT_005c058c undefined4
// GLOBAL DAT_005c0590 undefined4
// GLOBAL s_ObjFirePillar_005c0570 string

undefined8 func_005C04B4(void)

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
  iVar1 = DAT_005c0548;
  *(undefined4 *)(DAT_005c0548 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005c0550;
  puVar2 = DAT_005c054c;
  *DAT_005c054c = 0;
  puVar2[1] = 0;
  puVar4 = DAT_005c0558;
  puVar2 = DAT_005c0554;
  *DAT_005c0554 = uVar3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar3;
  uVar5 = func_00114608(DAT_005c055c,0);
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005c0560;
  puVar4 = DAT_005c0560 + 3;
  *DAT_005c0560 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005c056c;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005c0564;
  local_18 = local_10;
  local_14 = s_ObjFirePillar_005c0570;
  uVar3 = func_0019B51C(DAT_005c0588,DAT_005c0584,*DAT_005c0580,(int)&local_18,DAT_005c0560,
                        &local_10,0);
  return CONCAT44(DAT_005c0590,uVar3);
}


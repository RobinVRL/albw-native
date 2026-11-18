#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005f5708;
extern undefined4 *DAT_005f570c;
extern uint DAT_005f5710;
extern undefined4 *DAT_005f5714;
extern undefined DAT_005f5718;
extern undefined4 DAT_005f572c;
extern int DAT_005f5748;
extern uint *DAT_005f574c;
extern undefined4 DAT_005f5750;
extern undefined4 DAT_005f5754;
extern undefined4 DAT_005f5758;
extern char s_ObjMediumGanonFireObj_005f5730[];

// USA 005F5680 <- EU 005F5658 (Ghidra, non-matching)
// GLOBAL DAT_005f5708 int
// GLOBAL DAT_005f570c undefined4 *
// GLOBAL DAT_005f5710 uint
// GLOBAL DAT_005f5714 undefined4 *
// GLOBAL DAT_005f5718 undefined
// GLOBAL DAT_005f572c undefined4
// GLOBAL DAT_005f5748 int
// GLOBAL DAT_005f574c uint *
// GLOBAL DAT_005f5750 undefined4
// GLOBAL DAT_005f5754 undefined4
// GLOBAL DAT_005f5758 undefined4
// GLOBAL s_ObjMediumGanonFireObj_005f5730 string

undefined8 func_005F5680(void)

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
  iVar1 = DAT_005f5708;
  *(undefined4 *)(DAT_005f5708 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f570c;
  puVar4 = DAT_005f570c + -4;
  *DAT_005f570c = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005f5710,0);
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005f5714;
  puVar4 = DAT_005f5714 + 3;
  *DAT_005f5714 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005f572c;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005f5718;
  local_18 = local_10;
  local_14 = s_ObjMediumGanonFireObj_005f5730;
  uVar3 = func_0019B51C(DAT_005f5714 + 8,DAT_005f5750,*DAT_005f574c,(int)&local_18,DAT_005f5714,
                        &local_10,DAT_005f5748);
  return CONCAT44(DAT_005f5758,uVar3);
}


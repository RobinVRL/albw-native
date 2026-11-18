#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f5898;
extern undefined4 *DAT_005f589c;
extern undefined4 DAT_005f58a0;
extern undefined4 DAT_005f58a4;
extern undefined4 *DAT_005f58a8;
extern undefined4 *DAT_005f58ac;
extern undefined4 DAT_005f58b0;
extern undefined4 DAT_005f58b4;
extern undefined4 DAT_005f58b8;
extern undefined4 *DAT_005f58bc;
extern undefined4 DAT_005f58c0;
extern undefined4 *DAT_005f58c4;
extern undefined4 DAT_005f58c8;
extern undefined4 *DAT_005f58cc;
extern uint DAT_005f58d0;
extern undefined4 *DAT_005f58d4;
extern undefined DAT_005f58d8;
extern undefined4 DAT_005f58ec;
extern int DAT_005f5908;
extern uint *DAT_005f590c;
extern undefined4 DAT_005f5910;
extern undefined4 DAT_005f5914;
extern undefined4 DAT_005f5918;
extern char s_ObjMediumGanonTrident_005f58f0[];

// USA 005F5784 <- EU 005F575C (Ghidra, non-matching)
// GLOBAL DAT_005f5898 undefined4 *
// GLOBAL DAT_005f589c undefined4 *
// GLOBAL DAT_005f58a0 undefined4
// GLOBAL DAT_005f58a4 undefined4
// GLOBAL DAT_005f58a8 undefined4 *
// GLOBAL DAT_005f58ac undefined4 *
// GLOBAL DAT_005f58b0 undefined4
// GLOBAL DAT_005f58b4 undefined4
// GLOBAL DAT_005f58b8 undefined4
// GLOBAL DAT_005f58bc undefined4 *
// GLOBAL DAT_005f58c0 undefined4
// GLOBAL DAT_005f58c4 undefined4 *
// GLOBAL DAT_005f58c8 undefined4
// GLOBAL DAT_005f58cc undefined4 *
// GLOBAL DAT_005f58d0 uint
// GLOBAL DAT_005f58d4 undefined4 *
// GLOBAL DAT_005f58d8 undefined
// GLOBAL DAT_005f58ec undefined4
// GLOBAL DAT_005f5908 int
// GLOBAL DAT_005f590c uint *
// GLOBAL DAT_005f5910 undefined4
// GLOBAL DAT_005f5914 undefined4
// GLOBAL DAT_005f5918 undefined4
// GLOBAL s_ObjMediumGanonTrident_005f58f0 string

undefined8 func_005F5784(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f5898;
  DAT_005f5898[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar4 = DAT_005f58a0;
  puVar1 = DAT_005f589c;
  *DAT_005f589c = 0;
  puVar1[1] = 0;
  uVar3 = DAT_005f58b0;
  puVar5 = DAT_005f58a8;
  uVar2 = DAT_005f58a4;
  puVar1 = DAT_005f5898;
  *DAT_005f58a8 = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  puVar5 = DAT_005f58ac;
  *DAT_005f58ac = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar3;
  uVar3 = DAT_005f58b4;
  puVar5[3] = uVar4;
  puVar5[4] = uVar4;
  puVar5[5] = uVar3;
  uVar3 = DAT_005f58b8;
  puVar5[6] = uVar4;
  puVar5[7] = uVar4;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  puVar5[10] = uVar4;
  puVar5[0xb] = uVar2;
  uVar2 = DAT_005f58c0;
  puVar5 = DAT_005f58bc;
  *DAT_005f58bc = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  uVar2 = DAT_005f58c8;
  puVar5 = DAT_005f58c4;
  *DAT_005f58c4 = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  puVar5 = DAT_005f58cc;
  *DAT_005f58cc = uVar4;
  puVar5[1] = uVar4;
  puVar5[2] = uVar3;
  uVar6 = func_00114608(DAT_005f58d0,0);
  *puVar1 = (int)uVar6;
  puVar1 = DAT_005f58d4;
  puVar5 = DAT_005f58d4 + 3;
  *DAT_005f58d4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f58ec;
  puVar1[2] = puVar5;
  puStack_c = &DAT_005f58d8;
  local_18 = local_10;
  local_14 = s_ObjMediumGanonTrident_005f58f0;
  uVar4 = func_0019B51C(DAT_005f58d4 + 8,DAT_005f5910,*DAT_005f590c,(int)&local_18,DAT_005f58d4,
                        &local_10,DAT_005f5908);
  return CONCAT44(DAT_005f5918,uVar4);
}


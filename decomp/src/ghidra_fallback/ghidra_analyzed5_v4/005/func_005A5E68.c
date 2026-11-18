#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005a5f60;
extern undefined4 *DAT_005a5f64;
extern undefined4 *DAT_005a5f68;
extern undefined4 DAT_005a5f74;
extern undefined DAT_005a5f78;
extern undefined4 DAT_005a5f80;
extern uint DAT_005a5f84;
extern undefined4 DAT_005a5f88;
extern undefined4 *DAT_005a5f8c;
extern undefined4 DAT_005a5f90;
extern undefined4 *DAT_005a5f94;
extern uint DAT_005a5f98;
extern undefined4 *DAT_005a5f9c;
extern undefined4 DAT_005a5fa0;
extern undefined4 DAT_005a5fa4;
extern undefined DAT_005a5fa8;
extern undefined4 DAT_005a5fbc;
extern uint *DAT_005a5fc0;
extern undefined4 DAT_005a5fc4;
extern undefined4 *DAT_005a5fc8;
extern undefined4 DAT_005a5fcc;
extern char s_Barrier_005a5f6c[];
extern char s_MojBarrier_005a5fb0[];

// USA 005A5E68 <- EU 005A5E40 (Ghidra, non-matching)
// GLOBAL DAT_005a5f60 int
// GLOBAL DAT_005a5f64 undefined4 *
// GLOBAL DAT_005a5f68 undefined4 *
// GLOBAL DAT_005a5f74 undefined4
// GLOBAL DAT_005a5f78 undefined
// GLOBAL DAT_005a5f80 undefined4
// GLOBAL DAT_005a5f84 uint
// GLOBAL DAT_005a5f88 undefined4
// GLOBAL DAT_005a5f8c undefined4 *
// GLOBAL DAT_005a5f90 undefined4
// GLOBAL DAT_005a5f94 undefined4 *
// GLOBAL DAT_005a5f98 uint
// GLOBAL DAT_005a5f9c undefined4 *
// GLOBAL DAT_005a5fa0 undefined4
// GLOBAL DAT_005a5fa4 undefined4
// GLOBAL DAT_005a5fa8 undefined
// GLOBAL DAT_005a5fbc undefined4
// GLOBAL DAT_005a5fc0 uint *
// GLOBAL DAT_005a5fc4 undefined4
// GLOBAL DAT_005a5fc8 undefined4 *
// GLOBAL DAT_005a5fcc undefined4
// GLOBAL s_Barrier_005a5f6c string
// GLOBAL s_MojBarrier_005a5fb0 string

undefined8 func_005A5E68(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  iVar1 = DAT_005a5f60;
  *(undefined4 *)(DAT_005a5f60 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  uVar7 = DAT_005a5f74;
  puVar2 = DAT_005a5f64;
  *DAT_005a5f64 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005a5f68;
  DAT_005a5f68[1] = s_Barrier_005a5f6c;
  *puVar2 = uVar7;
  puVar2[2] = uVar7;
  puVar2[3] = &DAT_005a5f78;
  puVar5 = DAT_005a5f94;
  uVar4 = DAT_005a5f90;
  puVar2 = DAT_005a5f8c;
  uVar8 = DAT_005a5f88;
  uVar3 = DAT_005a5f84;
  *DAT_005a5f8c = DAT_005a5f88;
  puVar2[1] = uVar8;
  puVar2[2] = uVar4;
  uVar9 = func_00114608(DAT_005a5f98,uVar3);
  *puVar5 = (int)uVar9;
  uVar9 = func_00114608(0,(uint)((ulonglong)uVar9 >> 0x20));
  puVar5[1] = (int)uVar9;
  uVar6 = DAT_005a5fa4;
  uVar4 = DAT_005a5fa0;
  puVar2 = DAT_005a5f9c;
  *DAT_005a5f9c = uVar8;
  puVar2[1] = uVar4;
  puVar2[2] = uVar6;
  puVar2[-0xa1] = 0;
  puVar2[-0xa0] = 5;
  puVar2[-0x9f] = puVar2 + -0x9e;
  local_28 = uVar7;
  puStack_24 = &DAT_005a5fa8;
  uStack_20 = uVar7;
  local_1c = s_MojBarrier_005a5fb0;
  uVar7 = func_0019B51C(DAT_005a5fc8,DAT_005a5fc4,*DAT_005a5fc0,(int)&uStack_20,DAT_005a5fbc,
                        &local_28,0);
  return CONCAT44(DAT_005a5fcc,uVar7);
}


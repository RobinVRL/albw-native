#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ec290;
extern undefined4 *DAT_005ec294;
extern undefined DAT_005ec298;
extern undefined4 DAT_005ec2a8;
extern uint *DAT_005ec2c0;
extern undefined4 DAT_005ec2c4;
extern undefined4 *DAT_005ec2c8;
extern undefined4 DAT_005ec2cc;
extern undefined4 DAT_005ec2d0;
extern char s_MojWaterMoveStatue_005ec2ac[];

// USA 005EC214 <- EU 005EC1EC (Ghidra, non-matching)
// GLOBAL DAT_005ec290 undefined4 *
// GLOBAL DAT_005ec294 undefined4 *
// GLOBAL DAT_005ec298 undefined
// GLOBAL DAT_005ec2a8 undefined4
// GLOBAL DAT_005ec2c0 uint *
// GLOBAL DAT_005ec2c4 undefined4
// GLOBAL DAT_005ec2c8 undefined4 *
// GLOBAL DAT_005ec2cc undefined4
// GLOBAL DAT_005ec2d0 undefined4
// GLOBAL s_MojWaterMoveStatue_005ec2ac string

undefined8 func_005EC214(void)

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
  puVar1 = DAT_005ec290;
  DAT_005ec290[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar4 = func_00114608(0x4e000000,0xffffffff);
  *puVar1 = (int)uVar4;
  puVar1 = DAT_005ec294;
  puVar3 = DAT_005ec294 + 3;
  *DAT_005ec294 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ec2a8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ec298;
  local_18 = local_10;
  local_14 = s_MojWaterMoveStatue_005ec2ac;
  uVar2 = func_0019B51C(DAT_005ec2c8,DAT_005ec2c4,*DAT_005ec2c0,(int)&local_18,DAT_005ec294,
                        &local_10,0);
  return CONCAT44(DAT_005ec2d0,uVar2);
}


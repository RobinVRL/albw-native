#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005caa24;
extern undefined4 *DAT_005caa28;
extern undefined4 *DAT_005caa2c;
extern undefined DAT_005caa30;
extern undefined4 DAT_005caa40;
extern uint *DAT_005caa54;
extern undefined4 DAT_005caa58;
extern undefined4 *DAT_005caa5c;
extern undefined4 DAT_005caa60;
extern uint DAT_005caa64;
extern undefined4 *DAT_005caa68;
extern uint DAT_005caa6c;
extern uint DAT_005caa70;
extern uint DAT_005caa74;
extern uint DAT_005caa78;
extern undefined4 DAT_005caa7c;
extern char s_TagTowerCamera_005caa44[];

// USA 005CA92C <- EU 005CA904 (Ghidra, non-matching)
// GLOBAL DAT_005caa24 undefined4 *
// GLOBAL DAT_005caa28 undefined4 *
// GLOBAL DAT_005caa2c undefined4 *
// GLOBAL DAT_005caa30 undefined
// GLOBAL DAT_005caa40 undefined4
// GLOBAL DAT_005caa54 uint *
// GLOBAL DAT_005caa58 undefined4
// GLOBAL DAT_005caa5c undefined4 *
// GLOBAL DAT_005caa60 undefined4
// GLOBAL DAT_005caa64 uint
// GLOBAL DAT_005caa68 undefined4 *
// GLOBAL DAT_005caa6c uint
// GLOBAL DAT_005caa70 uint
// GLOBAL DAT_005caa74 uint
// GLOBAL DAT_005caa78 uint
// GLOBAL DAT_005caa7c undefined4
// GLOBAL s_TagTowerCamera_005caa44 string

void func_005CA92C(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_24 (*(undefined * *)(albw_frame + 0xc))
  puVar1 = DAT_005caa24;
  *DAT_005caa24 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005caa28;
  *DAT_005caa28 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005caa2c;
  puVar4 = DAT_005caa2c + 3;
  DAT_005caa2c[1] = 5;
  puVar1[2] = puVar4;
  uStack_28 = DAT_005caa40;
  *puVar1 = 0;
  puStack_24 = &DAT_005caa30;
  local_30 = uStack_28;
  local_2c = s_TagTowerCamera_005caa44;
  func_0019B51C(DAT_005caa5c,DAT_005caa58,*DAT_005caa54,(int)&local_30,DAT_005caa2c,&uStack_28,0);
  puVar1 = DAT_005caa68;
  uVar5 = func_00114608(DAT_005caa6c,DAT_005caa64);
  *puVar1 = (int)uVar5;
  uVar6 = func_00114608(DAT_005caa70,(uint)((ulonglong)uVar5 >> 0x20));
  puVar1[5] = (int)uVar6;
  uVar6 = func_00114608(DAT_005caa74,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[10] = (int)uVar6;
  uVar7 = func_00114608(0,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[0xb] = (int)uVar7;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  uVar2 = DAT_005caa78;
  puVar1[0x10] = (int)uVar5;
  uVar5 = func_00114608(uVar2,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[0x15] = (int)uVar5;
  uVar3 = DAT_005caa7c;
  puVar1[0x1c] = 0x80000000;
  puVar1[0x1b] = (int)uVar7;
  puVar1[0x1a] = (int)uVar6;
  puVar1[0x1f] = uVar3;
  return;
}


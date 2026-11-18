#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c0444;
extern undefined4 *DAT_005c0448;
extern uint DAT_005c044c;
extern uint DAT_005c0450;
extern undefined4 *DAT_005c0454;
extern undefined DAT_005c0458;
extern undefined4 DAT_005c0464;
extern uint *DAT_005c0478;
extern undefined4 DAT_005c047c;
extern undefined4 *DAT_005c0480;
extern undefined4 DAT_005c0484;
extern undefined4 DAT_005c0488;
extern char s_ObjBowOfLight_005c0468[];

// USA 005C03A4 <- EU 005C037C (Ghidra, non-matching)
// GLOBAL DAT_005c0444 int
// GLOBAL DAT_005c0448 undefined4 *
// GLOBAL DAT_005c044c uint
// GLOBAL DAT_005c0450 uint
// GLOBAL DAT_005c0454 undefined4 *
// GLOBAL DAT_005c0458 undefined
// GLOBAL DAT_005c0464 undefined4
// GLOBAL DAT_005c0478 uint *
// GLOBAL DAT_005c047c undefined4
// GLOBAL DAT_005c0480 undefined4 *
// GLOBAL DAT_005c0484 undefined4
// GLOBAL DAT_005c0488 undefined4
// GLOBAL s_ObjBowOfLight_005c0468 string

undefined8 func_005C03A4(void)

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
  iVar1 = DAT_005c0444;
  *(undefined4 *)(DAT_005c0444 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005c0448;
  puVar4 = DAT_005c0448 + -6;
  *DAT_005c0448 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005c044c,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(0,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-5] = (int)uVar5;
  uVar5 = func_00114608(DAT_005c0450,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-4] = (int)uVar5;
  puVar2 = DAT_005c0454;
  puVar4 = DAT_005c0454 + 3;
  *DAT_005c0454 = 0;
  puVar2[1] = 5;
  puVar2[2] = puVar4;
  local_10 = DAT_005c0464;
  puStack_c = &DAT_005c0458;
  local_18 = DAT_005c0464;
  local_14 = s_ObjBowOfLight_005c0468;
  uVar3 = func_0019B51C(DAT_005c0480,DAT_005c047c,*DAT_005c0478,(int)&local_18,DAT_005c0454,
                        &local_10,0);
  return CONCAT44(DAT_005c0488,uVar3);
}


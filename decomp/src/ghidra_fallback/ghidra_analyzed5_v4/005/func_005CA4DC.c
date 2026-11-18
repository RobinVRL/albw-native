#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca548;
extern undefined4 *DAT_005ca54c;
extern undefined4 *DAT_005ca550;
extern undefined DAT_005ca554;
extern undefined4 DAT_005ca568;
extern uint *DAT_005ca57c;
extern undefined4 DAT_005ca580;
extern undefined4 *DAT_005ca584;
extern undefined4 DAT_005ca588;
extern undefined4 DAT_005ca58c;
extern char s_TagCaveSparkle_005ca56c[];

// USA 005CA4DC <- EU 005CA4B4 (Ghidra, non-matching)
// GLOBAL DAT_005ca548 undefined4 *
// GLOBAL DAT_005ca54c undefined4 *
// GLOBAL DAT_005ca550 undefined4 *
// GLOBAL DAT_005ca554 undefined
// GLOBAL DAT_005ca568 undefined4
// GLOBAL DAT_005ca57c uint *
// GLOBAL DAT_005ca580 undefined4
// GLOBAL DAT_005ca584 undefined4 *
// GLOBAL DAT_005ca588 undefined4
// GLOBAL DAT_005ca58c undefined4
// GLOBAL s_TagCaveSparkle_005ca56c string

undefined8 func_005CA4DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca548;
  *DAT_005ca548 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca54c;
  *DAT_005ca54c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca550;
  puVar3 = DAT_005ca550 + 3;
  *DAT_005ca550 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca568;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca554;
  local_18 = local_10;
  local_14 = s_TagCaveSparkle_005ca56c;
  uVar2 = func_0019B51C(DAT_005ca584,DAT_005ca580,*DAT_005ca57c,(int)&local_18,DAT_005ca550,
                        &local_10,0);
  return CONCAT44(DAT_005ca58c,uVar2);
}


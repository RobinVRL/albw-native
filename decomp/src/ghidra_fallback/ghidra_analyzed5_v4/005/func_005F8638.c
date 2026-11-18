#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f86ac;
extern undefined4 *DAT_005f86b0;
extern undefined4 *DAT_005f86b4;
extern undefined DAT_005f86b8;
extern undefined4 DAT_005f86c8;
extern int DAT_005f86e4;
extern uint *DAT_005f86e8;
extern undefined4 DAT_005f86ec;
extern undefined4 DAT_005f86f0;
extern undefined4 DAT_005f86f4;
extern char s_ObjMediumGanonBallChild_005f86cc[];

// USA 005F8638 <- EU 005F8610 (Ghidra, non-matching)
// GLOBAL DAT_005f86ac undefined4 *
// GLOBAL DAT_005f86b0 undefined4 *
// GLOBAL DAT_005f86b4 undefined4 *
// GLOBAL DAT_005f86b8 undefined
// GLOBAL DAT_005f86c8 undefined4
// GLOBAL DAT_005f86e4 int
// GLOBAL DAT_005f86e8 uint *
// GLOBAL DAT_005f86ec undefined4
// GLOBAL DAT_005f86f0 undefined4
// GLOBAL DAT_005f86f4 undefined4
// GLOBAL s_ObjMediumGanonBallChild_005f86cc string

undefined8 func_005F8638(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f86ac;
  *DAT_005f86ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar2 = DAT_005f86b4;
  puVar1 = DAT_005f86b0;
  *DAT_005f86b0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f86b4;
  puVar4 = DAT_005f86b4 + 3;
  *DAT_005f86b4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f86c8;
  puVar1[2] = puVar4;
  puStack_c = &DAT_005f86b8;
  local_18 = local_10;
  local_14 = s_ObjMediumGanonBallChild_005f86cc;
  uVar3 = func_0019B51C(puVar2 + 8,DAT_005f86ec,*DAT_005f86e8,(int)&local_18,puVar2,&local_10,
                        DAT_005f86e4);
  return CONCAT44(DAT_005f86f4,uVar3);
}


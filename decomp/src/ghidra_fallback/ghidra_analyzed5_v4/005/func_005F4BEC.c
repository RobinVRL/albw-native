#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f4c7c;
extern undefined4 *DAT_005f4c80;
extern undefined4 *DAT_005f4c84;
extern undefined DAT_005f4c88;
extern undefined4 DAT_005f4c9c;
extern uint *DAT_005f4cb8;
extern undefined4 DAT_005f4cbc;
extern undefined4 *DAT_005f4cc0;
extern undefined4 DAT_005f4cc4;
extern undefined4 DAT_005f4cc8;
extern undefined4 *DAT_005f4ccc;
extern uint DAT_005f4ce4;
extern char s_MojHyruleSoliderPaint_005f4ca0[];
extern char s_SoliderPaintHyrule_005f4cd0[];

// USA 005F4BEC <- EU 005F4BC4 (Ghidra, non-matching)
// GLOBAL DAT_005f4c7c undefined4 *
// GLOBAL DAT_005f4c80 undefined4 *
// GLOBAL DAT_005f4c84 undefined4 *
// GLOBAL DAT_005f4c88 undefined
// GLOBAL DAT_005f4c9c undefined4
// GLOBAL DAT_005f4cb8 uint *
// GLOBAL DAT_005f4cbc undefined4
// GLOBAL DAT_005f4cc0 undefined4 *
// GLOBAL DAT_005f4cc4 undefined4
// GLOBAL DAT_005f4cc8 undefined4
// GLOBAL DAT_005f4ccc undefined4 *
// GLOBAL DAT_005f4ce4 uint
// GLOBAL s_MojHyruleSoliderPaint_005f4ca0 string
// GLOBAL s_SoliderPaintHyrule_005f4cd0 string

longlong func_005F4BEC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f4c7c;
  *DAT_005f4c7c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f4c9c;
  puVar1 = DAT_005f4c80;
  *DAT_005f4c80 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f4c84;
  puVar3 = DAT_005f4c84 + 3;
  *DAT_005f4c84 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005f4c88;
  local_14 = s_MojHyruleSoliderPaint_005f4ca0;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005f4cc0,DAT_005f4cbc,*DAT_005f4cb8,(int)&uStack_18,DAT_005f4c84,&local_10,0);
  puVar1 = DAT_005f4ccc;
  DAT_005f4ccc[1] = s_SoliderPaintHyrule_005f4cd0;
  *puVar1 = uVar2;
  return (ulonglong)DAT_005f4ce4 << 0x20;
}


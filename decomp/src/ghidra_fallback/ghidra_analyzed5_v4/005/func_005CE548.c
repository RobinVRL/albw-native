#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ce5d8;
extern undefined4 *DAT_005ce5dc;
extern undefined4 *DAT_005ce5e0;
extern undefined DAT_005ce5e4;
extern undefined4 DAT_005ce5f0;
extern uint *DAT_005ce604;
extern undefined4 DAT_005ce608;
extern undefined4 *DAT_005ce60c;
extern undefined4 DAT_005ce610;
extern undefined4 DAT_005ce614;
extern undefined4 *DAT_005ce618;
extern uint DAT_005ce62c;
extern char s_MojSoliderPaint_005ce5f4[];
extern char s_SoliderPaint_005ce61c[];

// USA 005CE548 <- EU 005CE520 (Ghidra, non-matching)
// GLOBAL DAT_005ce5d8 undefined4 *
// GLOBAL DAT_005ce5dc undefined4 *
// GLOBAL DAT_005ce5e0 undefined4 *
// GLOBAL DAT_005ce5e4 undefined
// GLOBAL DAT_005ce5f0 undefined4
// GLOBAL DAT_005ce604 uint *
// GLOBAL DAT_005ce608 undefined4
// GLOBAL DAT_005ce60c undefined4 *
// GLOBAL DAT_005ce610 undefined4
// GLOBAL DAT_005ce614 undefined4
// GLOBAL DAT_005ce618 undefined4 *
// GLOBAL DAT_005ce62c uint
// GLOBAL s_MojSoliderPaint_005ce5f4 string
// GLOBAL s_SoliderPaint_005ce61c string

longlong func_005CE548(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ce5d8;
  *DAT_005ce5d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ce5f0;
  puVar1 = DAT_005ce5dc;
  *DAT_005ce5dc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ce5e0;
  puVar3 = DAT_005ce5e0 + 3;
  *DAT_005ce5e0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005ce5e4;
  local_14 = s_MojSoliderPaint_005ce5f4;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005ce60c,DAT_005ce608,*DAT_005ce604,(int)&uStack_18,DAT_005ce5e0,&local_10,0);
  puVar1 = DAT_005ce618;
  DAT_005ce618[1] = s_SoliderPaint_005ce61c;
  *puVar1 = uVar2;
  return (ulonglong)DAT_005ce62c << 0x20;
}


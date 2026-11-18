#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005be968;
extern undefined4 *DAT_005be96c;
extern undefined4 *DAT_005be970;
extern undefined DAT_005be974;
extern undefined4 DAT_005be984;
extern uint *DAT_005be998;
extern undefined4 DAT_005be99c;
extern undefined4 *DAT_005be9a0;
extern undefined4 DAT_005be9a4;
extern undefined4 DAT_005be9a8;
extern undefined4 *DAT_005be9ac;
extern uint DAT_005be9bc;
extern char s_HeartPaint_005be9b0[];
extern char s_MojHeartPaint_005be988[];

// USA 005BE8D8 <- EU 005BE8B0 (Ghidra, non-matching)
// GLOBAL DAT_005be968 undefined4 *
// GLOBAL DAT_005be96c undefined4 *
// GLOBAL DAT_005be970 undefined4 *
// GLOBAL DAT_005be974 undefined
// GLOBAL DAT_005be984 undefined4
// GLOBAL DAT_005be998 uint *
// GLOBAL DAT_005be99c undefined4
// GLOBAL DAT_005be9a0 undefined4 *
// GLOBAL DAT_005be9a4 undefined4
// GLOBAL DAT_005be9a8 undefined4
// GLOBAL DAT_005be9ac undefined4 *
// GLOBAL DAT_005be9bc uint
// GLOBAL s_HeartPaint_005be9b0 string
// GLOBAL s_MojHeartPaint_005be988 string

longlong func_005BE8D8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005be968;
  *DAT_005be968 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005be984;
  puVar1 = DAT_005be96c;
  *DAT_005be96c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005be970;
  puVar3 = DAT_005be970 + 3;
  *DAT_005be970 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  local_c = &DAT_005be974;
  local_14 = s_MojHeartPaint_005be988;
  local_10 = uVar2;
  uStack_18 = uVar2;
  func_0019B51C(DAT_005be9a0,DAT_005be99c,*DAT_005be998,(int)&uStack_18,DAT_005be970,&local_10,0);
  puVar1 = DAT_005be9ac;
  DAT_005be9ac[1] = s_HeartPaint_005be9b0;
  *puVar1 = uVar2;
  return (ulonglong)DAT_005be9bc << 0x20;
}


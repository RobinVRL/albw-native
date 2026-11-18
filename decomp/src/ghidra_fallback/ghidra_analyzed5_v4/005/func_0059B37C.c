#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_0059b3e8;
extern undefined4 *DAT_0059b3ec;
extern undefined4 *DAT_0059b3f0;
extern undefined DAT_0059b3f4;
extern undefined4 DAT_0059b400;
extern uint *DAT_0059b410;
extern undefined4 DAT_0059b414;
extern undefined4 *DAT_0059b418;
extern undefined4 DAT_0059b41c;
extern undefined4 DAT_0059b420;
extern char s_MapFixed_0059b404[];

// USA 0059B37C <- EU 0059B354 (Ghidra, non-matching)
// GLOBAL DAT_0059b3e8 int
// GLOBAL DAT_0059b3ec undefined4 *
// GLOBAL DAT_0059b3f0 undefined4 *
// GLOBAL DAT_0059b3f4 undefined
// GLOBAL DAT_0059b400 undefined4
// GLOBAL DAT_0059b410 uint *
// GLOBAL DAT_0059b414 undefined4
// GLOBAL DAT_0059b418 undefined4 *
// GLOBAL DAT_0059b41c undefined4
// GLOBAL DAT_0059b420 undefined4
// GLOBAL s_MapFixed_0059b404 string

undefined8 func_0059B37C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_0059b3e8;
  *(undefined4 *)(DAT_0059b3e8 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_0059b3ec;
  *DAT_0059b3ec = 0;
  puVar2[1] = 0;
  puVar2 = DAT_0059b3f0;
  puVar4 = DAT_0059b3f0 + 3;
  *DAT_0059b3f0 = 0;
  puVar2[1] = 5;
  local_10 = DAT_0059b400;
  puVar2[2] = puVar4;
  puStack_c = &DAT_0059b3f4;
  local_18 = local_10;
  local_14 = s_MapFixed_0059b404;
  uVar3 = func_0019B51C(DAT_0059b418,DAT_0059b414,*DAT_0059b410,(int)&local_18,DAT_0059b3f0,
                        &local_10,0);
  return CONCAT44(DAT_0059b420,uVar3);
}


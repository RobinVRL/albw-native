#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059d990;
extern undefined4 *DAT_0059d994;
extern undefined4 DAT_0059d998;
extern undefined4 DAT_0059d99c;
extern undefined4 *DAT_0059d9a0;
extern undefined4 DAT_0059d9a4;
extern undefined4 DAT_0059d9a8;
extern undefined DAT_0059d9ac;
extern undefined4 DAT_0059d9b0;
extern undefined4 DAT_0059d9c0;
extern uint *DAT_0059d9c4;
extern undefined4 DAT_0059d9c8;
extern undefined4 *DAT_0059d9cc;
extern undefined4 DAT_0059d9d0;
extern undefined4 DAT_0059d9d4;
extern char s_ObjArrow_0059d9b4[];

// USA 0059D904 <- EU 0059D8DC (Ghidra, non-matching)
// GLOBAL DAT_0059d990 undefined4 *
// GLOBAL DAT_0059d994 undefined4 *
// GLOBAL DAT_0059d998 undefined4
// GLOBAL DAT_0059d99c undefined4
// GLOBAL DAT_0059d9a0 undefined4 *
// GLOBAL DAT_0059d9a4 undefined4
// GLOBAL DAT_0059d9a8 undefined4
// GLOBAL DAT_0059d9ac undefined
// GLOBAL DAT_0059d9b0 undefined4
// GLOBAL DAT_0059d9c0 undefined4
// GLOBAL DAT_0059d9c4 uint *
// GLOBAL DAT_0059d9c8 undefined4
// GLOBAL DAT_0059d9cc undefined4 *
// GLOBAL DAT_0059d9d0 undefined4
// GLOBAL DAT_0059d9d4 undefined4
// GLOBAL s_ObjArrow_0059d9b4 string

undefined8 func_0059D904(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059d990;
  *DAT_0059d990 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar4 = DAT_0059d998;
  puVar1 = DAT_0059d994;
  *DAT_0059d994 = 0;
  puVar1[1] = 0;
  uVar3 = DAT_0059d9a4;
  puVar1 = DAT_0059d9a0;
  uVar2 = DAT_0059d99c;
  *DAT_0059d9a0 = uVar4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar3 = DAT_0059d9a8;
  puVar1[3] = uVar4;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[-0x9a] = 0;
  puVar1[-0x99] = 5;
  puVar1[-0x98] = puVar1 + -0x97;
  local_10 = DAT_0059d9b0;
  puStack_c = &DAT_0059d9ac;
  local_18 = DAT_0059d9b0;
  local_14 = s_ObjArrow_0059d9b4;
  uVar4 = func_0019B51C(DAT_0059d9cc,DAT_0059d9c8,*DAT_0059d9c4,(int)&local_18,DAT_0059d9c0,
                        &local_10,0);
  return CONCAT44(DAT_0059d9d4,uVar4);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059b6d8;
extern undefined4 *DAT_0059b6dc;
extern undefined4 *DAT_0059b6e0;
extern undefined DAT_0059b6e4;
extern undefined4 DAT_0059b6ec;
extern uint *DAT_0059b6fc;
extern undefined4 DAT_0059b700;
extern undefined4 *DAT_0059b704;
extern undefined4 DAT_0059b708;
extern undefined4 DAT_0059b70c;
extern char s_MassFire_0059b6f0[];

// USA 0059B66C <- EU 0059B644 (Ghidra, non-matching)
// GLOBAL DAT_0059b6d8 undefined4 *
// GLOBAL DAT_0059b6dc undefined4 *
// GLOBAL DAT_0059b6e0 undefined4 *
// GLOBAL DAT_0059b6e4 undefined
// GLOBAL DAT_0059b6ec undefined4
// GLOBAL DAT_0059b6fc uint *
// GLOBAL DAT_0059b700 undefined4
// GLOBAL DAT_0059b704 undefined4 *
// GLOBAL DAT_0059b708 undefined4
// GLOBAL DAT_0059b70c undefined4
// GLOBAL s_MassFire_0059b6f0 string

undefined8 func_0059B66C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059b6d8;
  *DAT_0059b6d8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059b6dc;
  *DAT_0059b6dc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059b6e0;
  puVar3 = DAT_0059b6e0 + 3;
  *DAT_0059b6e0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059b6ec;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059b6e4;
  local_18 = local_10;
  local_14 = s_MassFire_0059b6f0;
  uVar2 = func_0019B51C(DAT_0059b704,DAT_0059b700,*DAT_0059b6fc,(int)&local_18,DAT_0059b6e0,
                        &local_10,0);
  return CONCAT44(DAT_0059b70c,uVar2);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a6b94;
extern undefined4 *DAT_005a6b98;
extern undefined4 *DAT_005a6b9c;
extern undefined DAT_005a6ba0;
extern undefined4 DAT_005a6bac;
extern uint *DAT_005a6bbc;
extern undefined4 DAT_005a6bc0;
extern undefined4 *DAT_005a6bc4;
extern undefined4 DAT_005a6bc8;
extern undefined4 DAT_005a6bcc;
extern char s_ObjCrystal_005a6bb0[];

// USA 005A6B28 <- EU 005A6B00 (Ghidra, non-matching)
// GLOBAL DAT_005a6b94 undefined4 *
// GLOBAL DAT_005a6b98 undefined4 *
// GLOBAL DAT_005a6b9c undefined4 *
// GLOBAL DAT_005a6ba0 undefined
// GLOBAL DAT_005a6bac undefined4
// GLOBAL DAT_005a6bbc uint *
// GLOBAL DAT_005a6bc0 undefined4
// GLOBAL DAT_005a6bc4 undefined4 *
// GLOBAL DAT_005a6bc8 undefined4
// GLOBAL DAT_005a6bcc undefined4
// GLOBAL s_ObjCrystal_005a6bb0 string

undefined8 func_005A6B28(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a6b94;
  *DAT_005a6b94 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a6b98;
  *DAT_005a6b98 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a6b9c;
  puVar3 = DAT_005a6b9c + 3;
  *DAT_005a6b9c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a6bac;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a6ba0;
  local_18 = local_10;
  local_14 = s_ObjCrystal_005a6bb0;
  uVar2 = func_0019B51C(DAT_005a6bc4,DAT_005a6bc0,*DAT_005a6bbc,(int)&local_18,DAT_005a6b9c,
                        &local_10,0);
  return CONCAT44(DAT_005a6bcc,uVar2);
}


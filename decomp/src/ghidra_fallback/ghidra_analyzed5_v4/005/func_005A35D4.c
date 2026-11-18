#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a3640;
extern undefined4 *DAT_005a3644;
extern undefined4 *DAT_005a3648;
extern undefined DAT_005a364c;
extern undefined4 DAT_005a3658;
extern uint *DAT_005a3668;
extern undefined4 DAT_005a366c;
extern undefined4 *DAT_005a3670;
extern undefined4 DAT_005a3674;
extern undefined4 DAT_005a3678;
extern char s_ObjWinder_005a365c[];

// USA 005A35D4 <- EU 005A35AC (Ghidra, non-matching)
// GLOBAL DAT_005a3640 undefined4 *
// GLOBAL DAT_005a3644 undefined4 *
// GLOBAL DAT_005a3648 undefined4 *
// GLOBAL DAT_005a364c undefined
// GLOBAL DAT_005a3658 undefined4
// GLOBAL DAT_005a3668 uint *
// GLOBAL DAT_005a366c undefined4
// GLOBAL DAT_005a3670 undefined4 *
// GLOBAL DAT_005a3674 undefined4
// GLOBAL DAT_005a3678 undefined4
// GLOBAL s_ObjWinder_005a365c string

undefined8 func_005A35D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a3640;
  *DAT_005a3640 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005a3644;
  *DAT_005a3644 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a3648;
  puVar3 = DAT_005a3648 + 3;
  *DAT_005a3648 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005a3658;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005a364c;
  local_18 = local_10;
  local_14 = s_ObjWinder_005a365c;
  uVar2 = func_0019B51C(DAT_005a3670,DAT_005a366c,*DAT_005a3668,(int)&local_18,DAT_005a3648,
                        &local_10,0);
  return CONCAT44(DAT_005a3678,uVar2);
}


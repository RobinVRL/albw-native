#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b372c;
extern undefined4 *DAT_005b3730;
extern undefined4 *DAT_005b3734;
extern undefined DAT_005b3738;
extern undefined4 DAT_005b374c;
extern uint *DAT_005b3760;
extern undefined4 DAT_005b3764;
extern undefined4 *DAT_005b3768;
extern undefined4 DAT_005b376c;
extern undefined4 DAT_005b3770;
extern char s_MapPartsMove_005b3750[];

// USA 005B36C0 <- EU 005B3698 (Ghidra, non-matching)
// GLOBAL DAT_005b372c undefined4 *
// GLOBAL DAT_005b3730 undefined4 *
// GLOBAL DAT_005b3734 undefined4 *
// GLOBAL DAT_005b3738 undefined
// GLOBAL DAT_005b374c undefined4
// GLOBAL DAT_005b3760 uint *
// GLOBAL DAT_005b3764 undefined4
// GLOBAL DAT_005b3768 undefined4 *
// GLOBAL DAT_005b376c undefined4
// GLOBAL DAT_005b3770 undefined4
// GLOBAL s_MapPartsMove_005b3750 string

undefined8 func_005B36C0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b372c;
  *DAT_005b372c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b3730;
  *DAT_005b3730 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b3734;
  puVar3 = DAT_005b3734 + 3;
  *DAT_005b3734 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b374c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b3738;
  local_18 = local_10;
  local_14 = s_MapPartsMove_005b3750;
  uVar2 = func_0019B51C(DAT_005b3768,DAT_005b3764,*DAT_005b3760,(int)&local_18,DAT_005b3734,
                        &local_10,0);
  return CONCAT44(DAT_005b3770,uVar2);
}


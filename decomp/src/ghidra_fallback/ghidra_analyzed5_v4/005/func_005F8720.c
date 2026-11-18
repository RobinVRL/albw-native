#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f878c;
extern undefined4 *DAT_005f8790;
extern undefined4 *DAT_005f8794;
extern undefined DAT_005f8798;
extern undefined4 DAT_005f87a8;
extern uint *DAT_005f87c4;
extern undefined4 DAT_005f87c8;
extern undefined4 *DAT_005f87cc;
extern undefined4 DAT_005f87d0;
extern undefined4 DAT_005f87d4;
extern char s_ObjMediumGanonMagicDark_005f87ac[];

// USA 005F8720 <- EU 005F86F8 (Ghidra, non-matching)
// GLOBAL DAT_005f878c undefined4 *
// GLOBAL DAT_005f8790 undefined4 *
// GLOBAL DAT_005f8794 undefined4 *
// GLOBAL DAT_005f8798 undefined
// GLOBAL DAT_005f87a8 undefined4
// GLOBAL DAT_005f87c4 uint *
// GLOBAL DAT_005f87c8 undefined4
// GLOBAL DAT_005f87cc undefined4 *
// GLOBAL DAT_005f87d0 undefined4
// GLOBAL DAT_005f87d4 undefined4
// GLOBAL s_ObjMediumGanonMagicDark_005f87ac string

undefined8 func_005F8720(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f878c;
  *DAT_005f878c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f8790;
  *DAT_005f8790 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f8794;
  puVar3 = DAT_005f8794 + 3;
  *DAT_005f8794 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f87a8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f8798;
  local_18 = local_10;
  local_14 = s_ObjMediumGanonMagicDark_005f87ac;
  uVar2 = func_0019B51C(DAT_005f87cc,DAT_005f87c8,*DAT_005f87c4,(int)&local_18,DAT_005f8794,
                        &local_10,0);
  return CONCAT44(DAT_005f87d4,uVar2);
}


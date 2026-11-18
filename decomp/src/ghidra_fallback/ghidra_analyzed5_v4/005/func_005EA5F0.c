#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ea65c;
extern undefined4 *DAT_005ea660;
extern undefined4 *DAT_005ea664;
extern undefined DAT_005ea668;
extern undefined4 DAT_005ea67c;
extern uint *DAT_005ea694;
extern undefined4 DAT_005ea698;
extern undefined4 *DAT_005ea69c;
extern undefined4 DAT_005ea6a0;
extern undefined4 DAT_005ea6a4;
extern char s_ObjSalamanderFire_005ea680[];

// USA 005EA5F0 <- EU 005EA5C8 (Ghidra, non-matching)
// GLOBAL DAT_005ea65c undefined4 *
// GLOBAL DAT_005ea660 undefined4 *
// GLOBAL DAT_005ea664 undefined4 *
// GLOBAL DAT_005ea668 undefined
// GLOBAL DAT_005ea67c undefined4
// GLOBAL DAT_005ea694 uint *
// GLOBAL DAT_005ea698 undefined4
// GLOBAL DAT_005ea69c undefined4 *
// GLOBAL DAT_005ea6a0 undefined4
// GLOBAL DAT_005ea6a4 undefined4
// GLOBAL s_ObjSalamanderFire_005ea680 string

undefined8 func_005EA5F0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ea65c;
  *DAT_005ea65c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ea660;
  *DAT_005ea660 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ea664;
  puVar3 = DAT_005ea664 + 3;
  *DAT_005ea664 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ea67c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ea668;
  local_18 = local_10;
  local_14 = s_ObjSalamanderFire_005ea680;
  uVar2 = func_0019B51C(DAT_005ea69c,DAT_005ea698,*DAT_005ea694,(int)&local_18,DAT_005ea664,
                        &local_10,0);
  return CONCAT44(DAT_005ea6a4,uVar2);
}


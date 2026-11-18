#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005adb34;
extern undefined4 *DAT_005adb38;
extern undefined4 *DAT_005adb3c;
extern undefined DAT_005adb40;
extern undefined4 DAT_005adb54;
extern uint *DAT_005adb64;
extern undefined4 DAT_005adb68;
extern undefined4 *DAT_005adb6c;
extern undefined4 DAT_005adb70;
extern undefined4 DAT_005adb74;
extern undefined4 *DAT_005adb78;
extern undefined DAT_005adb7c;
extern uint *DAT_005adb9c;
extern undefined4 *DAT_005adba0;
extern char s_ObjPotMagicS_005adb8c[];
extern char s_ObjPotMagic_005adb58[];

// USA 005ADA54 <- EU 005ADA2C (Ghidra, non-matching)
// GLOBAL DAT_005adb34 undefined4 *
// GLOBAL DAT_005adb38 undefined4 *
// GLOBAL DAT_005adb3c undefined4 *
// GLOBAL DAT_005adb40 undefined
// GLOBAL DAT_005adb54 undefined4
// GLOBAL DAT_005adb64 uint *
// GLOBAL DAT_005adb68 undefined4
// GLOBAL DAT_005adb6c undefined4 *
// GLOBAL DAT_005adb70 undefined4
// GLOBAL DAT_005adb74 undefined4
// GLOBAL DAT_005adb78 undefined4 *
// GLOBAL DAT_005adb7c undefined
// GLOBAL DAT_005adb9c uint *
// GLOBAL DAT_005adba0 undefined4 *
// GLOBAL s_ObjPotMagicS_005adb8c string
// GLOBAL s_ObjPotMagic_005adb58 string

undefined8 func_005ADA54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005adb34;
  *DAT_005adb34 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005adb38;
  *DAT_005adb38 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005adb54;
  puVar1 = DAT_005adb3c;
  puVar3 = DAT_005adb3c + 3;
  DAT_005adb3c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005adb40;
  local_2c = s_ObjPotMagic_005adb58;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005adb6c,DAT_005adb68,*DAT_005adb64,(int)&local_30,DAT_005adb3c,&local_28,0);
  puVar1 = DAT_005adb78;
  puVar3 = DAT_005adb78 + 3;
  DAT_005adb78[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005adb7c;
  local_1c = s_ObjPotMagicS_005adb8c;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005adba0,DAT_005adb68,*DAT_005adb9c,(int)&local_20,DAT_005adb78,
                        &local_18,0);
  return CONCAT44(DAT_005adb74,uVar2);
}


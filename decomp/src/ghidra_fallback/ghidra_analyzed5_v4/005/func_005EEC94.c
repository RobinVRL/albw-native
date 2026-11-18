#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005eed00;
extern undefined4 *DAT_005eed04;
extern undefined4 *DAT_005eed08;
extern undefined DAT_005eed0c;
extern undefined4 DAT_005eed20;
extern uint *DAT_005eed38;
extern undefined4 DAT_005eed3c;
extern undefined4 *DAT_005eed40;
extern undefined4 DAT_005eed44;
extern undefined4 DAT_005eed48;
extern char s_TagCameraFocusEnemy_005eed24[];

// USA 005EEC94 <- EU 005EEC6C (Ghidra, non-matching)
// GLOBAL DAT_005eed00 undefined4 *
// GLOBAL DAT_005eed04 undefined4 *
// GLOBAL DAT_005eed08 undefined4 *
// GLOBAL DAT_005eed0c undefined
// GLOBAL DAT_005eed20 undefined4
// GLOBAL DAT_005eed38 uint *
// GLOBAL DAT_005eed3c undefined4
// GLOBAL DAT_005eed40 undefined4 *
// GLOBAL DAT_005eed44 undefined4
// GLOBAL DAT_005eed48 undefined4
// GLOBAL s_TagCameraFocusEnemy_005eed24 string

undefined8 func_005EEC94(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005eed00;
  *DAT_005eed00 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eed04;
  *DAT_005eed04 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eed08;
  puVar3 = DAT_005eed08 + 3;
  *DAT_005eed08 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005eed20;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005eed0c;
  local_18 = local_10;
  local_14 = s_TagCameraFocusEnemy_005eed24;
  uVar2 = func_0019B51C(DAT_005eed40,DAT_005eed3c,*DAT_005eed38,(int)&local_18,DAT_005eed08,
                        &local_10,0);
  return CONCAT44(DAT_005eed48,uVar2);
}


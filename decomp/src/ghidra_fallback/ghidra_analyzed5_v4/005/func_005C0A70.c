#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0af4;
extern undefined4 *DAT_005c0af8;
extern undefined DAT_005c0afc;
extern undefined4 DAT_005c0b0c;
extern uint *DAT_005c0b20;
extern undefined4 DAT_005c0b24;
extern undefined4 *DAT_005c0b28;
extern undefined4 DAT_005c0b2c;
extern undefined4 DAT_005c0b30;
extern char s_ObjMapleBroom_005c0b10[];

// USA 005C0A70 <- EU 005C0A48 (Ghidra, non-matching)
// GLOBAL DAT_005c0af4 undefined4 *
// GLOBAL DAT_005c0af8 undefined4 *
// GLOBAL DAT_005c0afc undefined
// GLOBAL DAT_005c0b0c undefined4
// GLOBAL DAT_005c0b20 uint *
// GLOBAL DAT_005c0b24 undefined4
// GLOBAL DAT_005c0b28 undefined4 *
// GLOBAL DAT_005c0b2c undefined4
// GLOBAL DAT_005c0b30 undefined4
// GLOBAL s_ObjMapleBroom_005c0b10 string

undefined8 func_005C0A70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c0af4;
  DAT_005c0af4[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar4 = func_00114608(0,0xffffffff);
  uVar2 = (undefined4)uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar2;
  puVar1 = DAT_005c0af8;
  puVar3 = DAT_005c0af8 + 3;
  *DAT_005c0af8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c0b0c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c0afc;
  local_18 = local_10;
  local_14 = s_ObjMapleBroom_005c0b10;
  uVar2 = func_0019B51C(DAT_005c0b28,DAT_005c0b24,*DAT_005c0b20,(int)&local_18,DAT_005c0af8,
                        &local_10,0);
  return CONCAT44(DAT_005c0b30,uVar2);
}


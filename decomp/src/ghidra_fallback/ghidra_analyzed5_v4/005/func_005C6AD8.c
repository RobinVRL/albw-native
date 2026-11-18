#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6b44;
extern undefined4 *DAT_005c6b48;
extern undefined4 *DAT_005c6b4c;
extern undefined DAT_005c6b50;
extern undefined4 DAT_005c6b58;
extern uint *DAT_005c6b6c;
extern undefined4 DAT_005c6b70;
extern undefined4 *DAT_005c6b74;
extern undefined4 DAT_005c6b78;
extern undefined4 DAT_005c6b7c;
extern char s_ObjMagicBottle_005c6b5c[];

// USA 005C6AD8 <- EU 005C6AB0 (Ghidra, non-matching)
// GLOBAL DAT_005c6b44 undefined4 *
// GLOBAL DAT_005c6b48 undefined4 *
// GLOBAL DAT_005c6b4c undefined4 *
// GLOBAL DAT_005c6b50 undefined
// GLOBAL DAT_005c6b58 undefined4
// GLOBAL DAT_005c6b6c uint *
// GLOBAL DAT_005c6b70 undefined4
// GLOBAL DAT_005c6b74 undefined4 *
// GLOBAL DAT_005c6b78 undefined4
// GLOBAL DAT_005c6b7c undefined4
// GLOBAL s_ObjMagicBottle_005c6b5c string

undefined8 func_005C6AD8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6b44;
  *DAT_005c6b44 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c6b48;
  *DAT_005c6b48 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c6b4c;
  puVar3 = DAT_005c6b4c + 3;
  *DAT_005c6b4c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c6b58;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c6b50;
  local_18 = local_10;
  local_14 = s_ObjMagicBottle_005c6b5c;
  uVar2 = func_0019B51C(DAT_005c6b74,DAT_005c6b70,*DAT_005c6b6c,(int)&local_18,DAT_005c6b4c,
                        &local_10,0);
  return CONCAT44(DAT_005c6b7c,uVar2);
}


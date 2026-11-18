#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6a70;
extern undefined4 *DAT_005c6a74;
extern undefined4 *DAT_005c6a78;
extern undefined DAT_005c6a7c;
extern undefined4 DAT_005c6a88;
extern uint *DAT_005c6a9c;
extern undefined4 DAT_005c6aa0;
extern undefined4 *DAT_005c6aa4;
extern undefined4 DAT_005c6aa8;
extern undefined4 DAT_005c6aac;
extern char s_ObjIceFloating_005c6a8c[];

// USA 005C6A04 <- EU 005C69DC (Ghidra, non-matching)
// GLOBAL DAT_005c6a70 undefined4 *
// GLOBAL DAT_005c6a74 undefined4 *
// GLOBAL DAT_005c6a78 undefined4 *
// GLOBAL DAT_005c6a7c undefined
// GLOBAL DAT_005c6a88 undefined4
// GLOBAL DAT_005c6a9c uint *
// GLOBAL DAT_005c6aa0 undefined4
// GLOBAL DAT_005c6aa4 undefined4 *
// GLOBAL DAT_005c6aa8 undefined4
// GLOBAL DAT_005c6aac undefined4
// GLOBAL s_ObjIceFloating_005c6a8c string

undefined8 func_005C6A04(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6a70;
  *DAT_005c6a70 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c6a74;
  *DAT_005c6a74 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c6a78;
  puVar3 = DAT_005c6a78 + 3;
  *DAT_005c6a78 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c6a88;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c6a7c;
  local_18 = local_10;
  local_14 = s_ObjIceFloating_005c6a8c;
  uVar2 = func_0019B51C(DAT_005c6aa4,DAT_005c6aa0,*DAT_005c6a9c,(int)&local_18,DAT_005c6a78,
                        &local_10,0);
  return CONCAT44(DAT_005c6aac,uVar2);
}


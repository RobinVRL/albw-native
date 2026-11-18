#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad6c0;
extern undefined4 *DAT_005ad6c4;
extern undefined4 *DAT_005ad6c8;
extern undefined DAT_005ad6cc;
extern undefined4 DAT_005ad6e8;
extern uint *DAT_005ad6f8;
extern undefined4 DAT_005ad6fc;
extern undefined4 *DAT_005ad700;
extern undefined4 DAT_005ad704;
extern undefined4 DAT_005ad708;
extern char s_ObjIceBlock_005ad6ec[];

// USA 005AD654 <- EU 005AD62C (Ghidra, non-matching)
// GLOBAL DAT_005ad6c0 undefined4 *
// GLOBAL DAT_005ad6c4 undefined4 *
// GLOBAL DAT_005ad6c8 undefined4 *
// GLOBAL DAT_005ad6cc undefined
// GLOBAL DAT_005ad6e8 undefined4
// GLOBAL DAT_005ad6f8 uint *
// GLOBAL DAT_005ad6fc undefined4
// GLOBAL DAT_005ad700 undefined4 *
// GLOBAL DAT_005ad704 undefined4
// GLOBAL DAT_005ad708 undefined4
// GLOBAL s_ObjIceBlock_005ad6ec string

undefined8 func_005AD654(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad6c0;
  *DAT_005ad6c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ad6c4;
  *DAT_005ad6c4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad6c8;
  puVar3 = DAT_005ad6c8 + 3;
  *DAT_005ad6c8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ad6e8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ad6cc;
  local_18 = local_10;
  local_14 = s_ObjIceBlock_005ad6ec;
  uVar2 = func_0019B51C(DAT_005ad700,DAT_005ad6fc,*DAT_005ad6f8,(int)&local_18,DAT_005ad6c8,
                        &local_10,0);
  return CONCAT44(DAT_005ad708,uVar2);
}


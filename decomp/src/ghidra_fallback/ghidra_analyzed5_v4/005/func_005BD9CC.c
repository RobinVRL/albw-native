#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005bda38;
extern undefined4 *DAT_005bda3c;
extern undefined4 *DAT_005bda40;
extern undefined DAT_005bda44;
extern undefined4 DAT_005bda54;
extern uint *DAT_005bda68;
extern undefined4 DAT_005bda6c;
extern undefined4 *DAT_005bda70;
extern undefined4 DAT_005bda74;
extern undefined4 DAT_005bda78;
extern char s_MapSagesPlace_005bda58[];

// USA 005BD9CC <- EU 005BD9A4 (Ghidra, non-matching)
// GLOBAL DAT_005bda38 undefined4 *
// GLOBAL DAT_005bda3c undefined4 *
// GLOBAL DAT_005bda40 undefined4 *
// GLOBAL DAT_005bda44 undefined
// GLOBAL DAT_005bda54 undefined4
// GLOBAL DAT_005bda68 uint *
// GLOBAL DAT_005bda6c undefined4
// GLOBAL DAT_005bda70 undefined4 *
// GLOBAL DAT_005bda74 undefined4
// GLOBAL DAT_005bda78 undefined4
// GLOBAL s_MapSagesPlace_005bda58 string

undefined8 func_005BD9CC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005bda38;
  *DAT_005bda38 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bda3c;
  *DAT_005bda3c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bda40;
  puVar3 = DAT_005bda40 + 3;
  *DAT_005bda40 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005bda54;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005bda44;
  local_18 = local_10;
  local_14 = s_MapSagesPlace_005bda58;
  uVar2 = func_0019B51C(DAT_005bda70,DAT_005bda6c,*DAT_005bda68,(int)&local_18,DAT_005bda40,
                        &local_10,0);
  return CONCAT44(DAT_005bda78,uVar2);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c2bc0;
extern undefined4 *DAT_005c2bc4;
extern undefined4 *DAT_005c2bc8;
extern undefined DAT_005c2bcc;
extern undefined4 DAT_005c2be0;
extern uint *DAT_005c2bf4;
extern undefined4 DAT_005c2bf8;
extern undefined4 *DAT_005c2bfc;
extern undefined4 DAT_005c2c00;
extern undefined4 DAT_005c2c04;
extern char s_AreaBellReject_005c2be4[];

// USA 005C2B54 <- EU 005C2B2C (Ghidra, non-matching)
// GLOBAL DAT_005c2bc0 undefined4 *
// GLOBAL DAT_005c2bc4 undefined4 *
// GLOBAL DAT_005c2bc8 undefined4 *
// GLOBAL DAT_005c2bcc undefined
// GLOBAL DAT_005c2be0 undefined4
// GLOBAL DAT_005c2bf4 uint *
// GLOBAL DAT_005c2bf8 undefined4
// GLOBAL DAT_005c2bfc undefined4 *
// GLOBAL DAT_005c2c00 undefined4
// GLOBAL DAT_005c2c04 undefined4
// GLOBAL s_AreaBellReject_005c2be4 string

undefined8 func_005C2B54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c2bc0;
  *DAT_005c2bc0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c2bc4;
  *DAT_005c2bc4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c2bc8;
  puVar3 = DAT_005c2bc8 + 3;
  *DAT_005c2bc8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c2be0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c2bcc;
  local_18 = local_10;
  local_14 = s_AreaBellReject_005c2be4;
  uVar2 = func_0019B51C(DAT_005c2bfc,DAT_005c2bf8,*DAT_005c2bf4,(int)&local_18,DAT_005c2bc8,
                        &local_10,0);
  return CONCAT44(DAT_005c2c04,uVar2);
}


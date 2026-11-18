#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c4b9c;
extern undefined4 *DAT_005c4ba0;
extern undefined4 *DAT_005c4ba4;
extern undefined DAT_005c4ba8;
extern undefined4 DAT_005c4bb8;
extern uint *DAT_005c4bcc;
extern undefined4 DAT_005c4bd0;
extern undefined4 *DAT_005c4bd4;
extern undefined4 DAT_005c4bd8;
extern undefined4 DAT_005c4bdc;
extern char s_MojSwitchColor_005c4bbc[];

// USA 005C4B30 <- EU 005C4B08 (Ghidra, non-matching)
// GLOBAL DAT_005c4b9c undefined4 *
// GLOBAL DAT_005c4ba0 undefined4 *
// GLOBAL DAT_005c4ba4 undefined4 *
// GLOBAL DAT_005c4ba8 undefined
// GLOBAL DAT_005c4bb8 undefined4
// GLOBAL DAT_005c4bcc uint *
// GLOBAL DAT_005c4bd0 undefined4
// GLOBAL DAT_005c4bd4 undefined4 *
// GLOBAL DAT_005c4bd8 undefined4
// GLOBAL DAT_005c4bdc undefined4
// GLOBAL s_MojSwitchColor_005c4bbc string

undefined8 func_005C4B30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c4b9c;
  *DAT_005c4b9c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c4ba0;
  *DAT_005c4ba0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c4ba4;
  puVar3 = DAT_005c4ba4 + 3;
  *DAT_005c4ba4 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c4bb8;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c4ba8;
  local_18 = local_10;
  local_14 = s_MojSwitchColor_005c4bbc;
  uVar2 = func_0019B51C(DAT_005c4bd4,DAT_005c4bd0,*DAT_005c4bcc,(int)&local_18,DAT_005c4ba4,
                        &local_10,0);
  return CONCAT44(DAT_005c4bdc,uVar2);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e69a4;
extern undefined4 *DAT_005e69a8;
extern undefined4 *DAT_005e69ac;
extern undefined DAT_005e69b0;
extern undefined4 DAT_005e69c0;
extern uint *DAT_005e69d8;
extern undefined4 DAT_005e69dc;
extern undefined4 *DAT_005e69e0;
extern undefined4 DAT_005e69e4;
extern undefined4 DAT_005e69e8;
extern char s_MojDoorHyruleGate_005e69c4[];

// USA 005E6938 <- EU 005E6910 (Ghidra, non-matching)
// GLOBAL DAT_005e69a4 undefined4 *
// GLOBAL DAT_005e69a8 undefined4 *
// GLOBAL DAT_005e69ac undefined4 *
// GLOBAL DAT_005e69b0 undefined
// GLOBAL DAT_005e69c0 undefined4
// GLOBAL DAT_005e69d8 uint *
// GLOBAL DAT_005e69dc undefined4
// GLOBAL DAT_005e69e0 undefined4 *
// GLOBAL DAT_005e69e4 undefined4
// GLOBAL DAT_005e69e8 undefined4
// GLOBAL s_MojDoorHyruleGate_005e69c4 string

undefined8 func_005E6938(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e69a4;
  *DAT_005e69a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e69a8;
  *DAT_005e69a8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e69ac;
  puVar3 = DAT_005e69ac + 3;
  *DAT_005e69ac = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e69c0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e69b0;
  local_18 = local_10;
  local_14 = s_MojDoorHyruleGate_005e69c4;
  uVar2 = func_0019B51C(DAT_005e69e0,DAT_005e69dc,*DAT_005e69d8,(int)&local_18,DAT_005e69ac,
                        &local_10,0);
  return CONCAT44(DAT_005e69e8,uVar2);
}


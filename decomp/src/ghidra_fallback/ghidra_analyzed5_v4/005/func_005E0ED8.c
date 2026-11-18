#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e0fa4;
extern undefined4 *DAT_005e0fa8;
extern undefined4 *DAT_005e0fac;
extern undefined DAT_005e0fb0;
extern undefined4 DAT_005e0fb8;
extern undefined4 DAT_005e0fc4;
extern undefined4 DAT_005e0fc8;
extern undefined4 *DAT_005e0fcc;
extern undefined4 DAT_005e0fd0;
extern undefined4 *DAT_005e0fd4;
extern undefined DAT_005e0fd8;
extern uint *DAT_005e0ffc;
extern undefined4 DAT_005e1000;
extern undefined4 *DAT_005e1004;
extern undefined4 DAT_005e1008;
extern char s_MojDoorHolocaust_005e0fe8[];
extern char s_close_005e0fbc[];

// USA 005E0ED8 <- EU 005E0EB0 (Ghidra, non-matching)
// GLOBAL DAT_005e0fa4 undefined4 *
// GLOBAL DAT_005e0fa8 undefined4 *
// GLOBAL DAT_005e0fac undefined4 *
// GLOBAL DAT_005e0fb0 undefined
// GLOBAL DAT_005e0fb8 undefined4
// GLOBAL DAT_005e0fc4 undefined4
// GLOBAL DAT_005e0fc8 undefined4
// GLOBAL DAT_005e0fcc undefined4 *
// GLOBAL DAT_005e0fd0 undefined4
// GLOBAL DAT_005e0fd4 undefined4 *
// GLOBAL DAT_005e0fd8 undefined
// GLOBAL DAT_005e0ffc uint *
// GLOBAL DAT_005e1000 undefined4
// GLOBAL DAT_005e1004 undefined4 *
// GLOBAL DAT_005e1008 undefined4
// GLOBAL s_MojDoorHolocaust_005e0fe8 string
// GLOBAL s_close_005e0fbc string

undefined8 func_005E0ED8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e0fa4;
  *DAT_005e0fa4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e0fb8;
  puVar1 = DAT_005e0fa8;
  *DAT_005e0fa8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e0fac;
  DAT_005e0fac[1] = &DAT_005e0fb0;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_close_005e0fbc;
  puVar1 = DAT_005e0fcc;
  DAT_005e0fcc[1] = &DAT_005e0fb0;
  *puVar1 = local_18;
  puVar1[2] = local_18;
  puVar1[3] = s_close_005e0fbc;
  puVar1 = DAT_005e0fd4;
  puVar3 = DAT_005e0fd4 + 3;
  *DAT_005e0fd4 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005e0fd8;
  uStack_10 = local_18;
  local_c = s_MojDoorHolocaust_005e0fe8;
  uVar2 = func_0019B51C(DAT_005e1004,DAT_005e1000,*DAT_005e0ffc,(int)&uStack_10,DAT_005e0fd4,
                        &local_18,0);
  return CONCAT44(DAT_005e1008,uVar2);
}


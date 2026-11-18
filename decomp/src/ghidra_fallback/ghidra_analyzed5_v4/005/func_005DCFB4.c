#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005dd020;
extern undefined4 *DAT_005dd024;
extern undefined4 *DAT_005dd028;
extern undefined DAT_005dd02c;
extern undefined4 DAT_005dd044;
extern uint *DAT_005dd05c;
extern undefined4 DAT_005dd060;
extern undefined4 *DAT_005dd064;
extern undefined4 DAT_005dd068;
extern undefined4 DAT_005dd06c;
extern char s_AreaCameraOffset_005dd048[];

// USA 005DCFB4 <- EU 005DCF8C (Ghidra, non-matching)
// GLOBAL DAT_005dd020 undefined4 *
// GLOBAL DAT_005dd024 undefined4 *
// GLOBAL DAT_005dd028 undefined4 *
// GLOBAL DAT_005dd02c undefined
// GLOBAL DAT_005dd044 undefined4
// GLOBAL DAT_005dd05c uint *
// GLOBAL DAT_005dd060 undefined4
// GLOBAL DAT_005dd064 undefined4 *
// GLOBAL DAT_005dd068 undefined4
// GLOBAL DAT_005dd06c undefined4
// GLOBAL s_AreaCameraOffset_005dd048 string

undefined8 func_005DCFB4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005dd020;
  *DAT_005dd020 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005dd024;
  *DAT_005dd024 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005dd028;
  puVar3 = DAT_005dd028 + 3;
  *DAT_005dd028 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005dd044;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005dd02c;
  local_18 = local_10;
  local_14 = s_AreaCameraOffset_005dd048;
  uVar2 = func_0019B51C(DAT_005dd064,DAT_005dd060,*DAT_005dd05c,(int)&local_18,DAT_005dd028,
                        &local_10,0);
  return CONCAT44(DAT_005dd06c,uVar2);
}


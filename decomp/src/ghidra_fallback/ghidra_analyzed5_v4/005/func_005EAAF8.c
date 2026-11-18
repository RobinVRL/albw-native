#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005eab64;
extern undefined4 *DAT_005eab68;
extern undefined4 *DAT_005eab6c;
extern undefined DAT_005eab70;
extern undefined4 DAT_005eab84;
extern uint *DAT_005eab9c;
extern undefined4 DAT_005eaba0;
extern undefined4 *DAT_005eaba4;
extern undefined4 DAT_005eaba8;
extern undefined4 DAT_005eabac;
extern char s_TagCameraAdjuster_005eab88[];

// USA 005EAAF8 <- EU 005EAAD0 (Ghidra, non-matching)
// GLOBAL DAT_005eab64 undefined4 *
// GLOBAL DAT_005eab68 undefined4 *
// GLOBAL DAT_005eab6c undefined4 *
// GLOBAL DAT_005eab70 undefined
// GLOBAL DAT_005eab84 undefined4
// GLOBAL DAT_005eab9c uint *
// GLOBAL DAT_005eaba0 undefined4
// GLOBAL DAT_005eaba4 undefined4 *
// GLOBAL DAT_005eaba8 undefined4
// GLOBAL DAT_005eabac undefined4
// GLOBAL s_TagCameraAdjuster_005eab88 string

undefined8 func_005EAAF8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005eab64;
  *DAT_005eab64 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eab68;
  *DAT_005eab68 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eab6c;
  puVar3 = DAT_005eab6c + 3;
  *DAT_005eab6c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005eab84;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005eab70;
  local_18 = local_10;
  local_14 = s_TagCameraAdjuster_005eab88;
  uVar2 = func_0019B51C(DAT_005eaba4,DAT_005eaba0,*DAT_005eab9c,(int)&local_18,DAT_005eab6c,
                        &local_10,0);
  return CONCAT44(DAT_005eabac,uVar2);
}


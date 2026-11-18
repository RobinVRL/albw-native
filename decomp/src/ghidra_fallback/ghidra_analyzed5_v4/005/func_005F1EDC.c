#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f1f48;
extern undefined4 *DAT_005f1f4c;
extern undefined4 *DAT_005f1f50;
extern undefined DAT_005f1f54;
extern undefined4 DAT_005f1f70;
extern uint *DAT_005f1f8c;
extern undefined4 DAT_005f1f90;
extern undefined4 *DAT_005f1f94;
extern undefined4 DAT_005f1f98;
extern undefined4 DAT_005f1f9c;
extern char s_TagCameraAddDistance_005f1f74[];

// USA 005F1EDC <- EU 005F1EB4 (Ghidra, non-matching)
// GLOBAL DAT_005f1f48 undefined4 *
// GLOBAL DAT_005f1f4c undefined4 *
// GLOBAL DAT_005f1f50 undefined4 *
// GLOBAL DAT_005f1f54 undefined
// GLOBAL DAT_005f1f70 undefined4
// GLOBAL DAT_005f1f8c uint *
// GLOBAL DAT_005f1f90 undefined4
// GLOBAL DAT_005f1f94 undefined4 *
// GLOBAL DAT_005f1f98 undefined4
// GLOBAL DAT_005f1f9c undefined4
// GLOBAL s_TagCameraAddDistance_005f1f74 string

undefined8 func_005F1EDC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f1f48;
  *DAT_005f1f48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1f4c;
  *DAT_005f1f4c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f1f50;
  puVar3 = DAT_005f1f50 + 3;
  *DAT_005f1f50 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f1f70;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f1f54;
  local_18 = local_10;
  local_14 = s_TagCameraAddDistance_005f1f74;
  uVar2 = func_0019B51C(DAT_005f1f94,DAT_005f1f90,*DAT_005f1f8c,(int)&local_18,DAT_005f1f50,
                        &local_10,0);
  return CONCAT44(DAT_005f1f9c,uVar2);
}


#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005f3228;
extern undefined4 *DAT_005f322c;
extern undefined4 *DAT_005f3230;
extern undefined DAT_005f3234;
extern undefined4 DAT_005f3250;
extern uint *DAT_005f326c;
extern undefined4 DAT_005f3270;
extern undefined4 *DAT_005f3274;
extern undefined4 DAT_005f3278;
extern undefined4 DAT_005f327c;
extern char s_AreaCameraAddDistance_005f3254[];

// USA 005F31BC <- EU 005F3194 (Ghidra, non-matching)
// GLOBAL DAT_005f3228 undefined4 *
// GLOBAL DAT_005f322c undefined4 *
// GLOBAL DAT_005f3230 undefined4 *
// GLOBAL DAT_005f3234 undefined
// GLOBAL DAT_005f3250 undefined4
// GLOBAL DAT_005f326c uint *
// GLOBAL DAT_005f3270 undefined4
// GLOBAL DAT_005f3274 undefined4 *
// GLOBAL DAT_005f3278 undefined4
// GLOBAL DAT_005f327c undefined4
// GLOBAL s_AreaCameraAddDistance_005f3254 string

undefined8 func_005F31BC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005f3228;
  *DAT_005f3228 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f322c;
  *DAT_005f322c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f3230;
  puVar3 = DAT_005f3230 + 3;
  *DAT_005f3230 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005f3250;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005f3234;
  local_18 = local_10;
  local_14 = s_AreaCameraAddDistance_005f3254;
  uVar2 = func_0019B51C(DAT_005f3274,DAT_005f3270,*DAT_005f326c,(int)&local_18,DAT_005f3230,
                        &local_10,0);
  return CONCAT44(DAT_005f327c,uVar2);
}


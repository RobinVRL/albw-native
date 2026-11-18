#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005933f0;
extern undefined4 *DAT_005933f4;
extern undefined4 *DAT_005933f8;
extern undefined DAT_005933fc;
extern undefined4 DAT_00593408;
extern uint *DAT_00593414;
extern undefined4 DAT_00593418;
extern undefined4 *DAT_0059341c;
extern undefined4 DAT_00593420;
extern undefined4 DAT_00593424;
extern undefined4 *DAT_00593428;
extern undefined DAT_0059342c;
extern uint *DAT_00593440;
extern undefined4 DAT_00593444;
extern undefined4 *DAT_00593448;
extern undefined4 *DAT_0059344c;
extern undefined DAT_00593450;
extern uint *DAT_00593470;
extern undefined4 DAT_00593474;
extern undefined4 *DAT_00593478;
extern undefined4 *DAT_0059347c;
extern undefined DAT_00593480;
extern uint *DAT_005934a0;
extern undefined4 DAT_005934a4;
extern undefined4 *DAT_005934a8;
extern char s_MojFanL_0059340c[];
extern char s_MojFanS_00593438[];
extern char s_MojOutFanL_00593464[];
extern char s_MojOutFanS_00593494[];

// USA 00593240 <- EU 00593218 (Ghidra, non-matching)
// GLOBAL DAT_005933f0 undefined4 *
// GLOBAL DAT_005933f4 undefined4 *
// GLOBAL DAT_005933f8 undefined4 *
// GLOBAL DAT_005933fc undefined
// GLOBAL DAT_00593408 undefined4
// GLOBAL DAT_00593414 uint *
// GLOBAL DAT_00593418 undefined4
// GLOBAL DAT_0059341c undefined4 *
// GLOBAL DAT_00593420 undefined4
// GLOBAL DAT_00593424 undefined4
// GLOBAL DAT_00593428 undefined4 *
// GLOBAL DAT_0059342c undefined
// GLOBAL DAT_00593440 uint *
// GLOBAL DAT_00593444 undefined4
// GLOBAL DAT_00593448 undefined4 *
// GLOBAL DAT_0059344c undefined4 *
// GLOBAL DAT_00593450 undefined
// GLOBAL DAT_00593470 uint *
// GLOBAL DAT_00593474 undefined4
// GLOBAL DAT_00593478 undefined4 *
// GLOBAL DAT_0059347c undefined4 *
// GLOBAL DAT_00593480 undefined
// GLOBAL DAT_005934a0 uint *
// GLOBAL DAT_005934a4 undefined4
// GLOBAL DAT_005934a8 undefined4 *
// GLOBAL s_MojFanL_0059340c string
// GLOBAL s_MojFanS_00593438 string
// GLOBAL s_MojOutFanL_00593464 string
// GLOBAL s_MojOutFanS_00593494 string

undefined8 func_00593240(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined * *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined * *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(char * *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined * *)(albw_frame + 0x3c))
  puVar1 = DAT_005933f0;
  *DAT_005933f0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005933f4;
  *DAT_005933f4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_00593408;
  puVar1 = DAT_005933f8;
  puVar3 = DAT_005933f8 + 3;
  DAT_005933f8[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_44 = &DAT_005933fc;
  local_4c = s_MojFanL_0059340c;
  local_48 = uVar2;
  local_50 = uVar2;
  func_0019B51C(DAT_0059341c,DAT_00593418,*DAT_00593414,(int)&local_50,DAT_005933f8,&local_48,0);
  puVar1 = DAT_00593428;
  puVar3 = DAT_00593428 + 3;
  DAT_00593428[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_34 = &DAT_0059342c;
  local_3c = s_MojFanS_00593438;
  local_38 = uVar2;
  local_40 = uVar2;
  func_0019B51C(DAT_00593448,DAT_00593444,*DAT_00593440,(int)&local_40,DAT_00593428,&local_38,0);
  puVar1 = DAT_0059344c;
  puVar3 = DAT_0059344c + 3;
  DAT_0059344c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_00593450;
  local_2c = s_MojOutFanL_00593464;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_00593478,DAT_00593474,*DAT_00593470,(int)&local_30,DAT_0059344c,&local_28,0);
  puVar1 = DAT_0059347c;
  puVar3 = DAT_0059347c + 3;
  DAT_0059347c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_00593480;
  local_1c = s_MojOutFanS_00593494;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005934a8,DAT_005934a4,*DAT_005934a0,(int)&local_20,DAT_0059347c,
                        &local_18,0);
  return CONCAT44(DAT_00593424,uVar2);
}


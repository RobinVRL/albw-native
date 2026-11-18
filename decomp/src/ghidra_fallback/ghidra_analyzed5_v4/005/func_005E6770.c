#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e6894;
extern undefined4 *DAT_005e6898;
extern undefined4 DAT_005e68a8;
extern undefined4 DAT_005e68ac;
extern undefined4 DAT_005e68b0;
extern undefined4 DAT_005e68b4;
extern undefined4 DAT_005e68b8;
extern undefined4 DAT_005e68bc;
extern undefined4 *DAT_005e68c0;
extern undefined4 DAT_005e68c4;
extern undefined4 DAT_005e68c8;
extern undefined4 DAT_005e68cc;
extern undefined4 DAT_005e68d0;
extern undefined4 *DAT_005e68d4;
extern undefined4 DAT_005e68d8;
extern undefined DAT_005e68dc;
extern undefined4 DAT_005e68fc;
extern uint *DAT_005e6900;
extern undefined4 DAT_005e6904;
extern undefined4 *DAT_005e6908;
extern undefined4 DAT_005e690c;
extern char s_MojCaveZoraSpring_005e68e8[];
extern char s_Water_Cave_005e689c[];

// USA 005E6770 <- EU 005E6748 (Ghidra, non-matching)
// GLOBAL DAT_005e6894 undefined4 *
// GLOBAL DAT_005e6898 undefined4 *
// GLOBAL DAT_005e68a8 undefined4
// GLOBAL DAT_005e68ac undefined4
// GLOBAL DAT_005e68b0 undefined4
// GLOBAL DAT_005e68b4 undefined4
// GLOBAL DAT_005e68b8 undefined4
// GLOBAL DAT_005e68bc undefined4
// GLOBAL DAT_005e68c0 undefined4 *
// GLOBAL DAT_005e68c4 undefined4
// GLOBAL DAT_005e68c8 undefined4
// GLOBAL DAT_005e68cc undefined4
// GLOBAL DAT_005e68d0 undefined4
// GLOBAL DAT_005e68d4 undefined4 *
// GLOBAL DAT_005e68d8 undefined4
// GLOBAL DAT_005e68dc undefined
// GLOBAL DAT_005e68fc undefined4
// GLOBAL DAT_005e6900 uint *
// GLOBAL DAT_005e6904 undefined4
// GLOBAL DAT_005e6908 undefined4 *
// GLOBAL DAT_005e690c undefined4
// GLOBAL s_MojCaveZoraSpring_005e68e8 string
// GLOBAL s_Water_Cave_005e689c string

undefined8 func_005E6770(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005e6894;
  *DAT_005e6894 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005e68a8;
  puVar1 = DAT_005e6898;
  *DAT_005e6898 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Water_Cave_005e689c;
  puVar1[2] = local_18;
  uVar6 = DAT_005e68d8;
  uVar5 = DAT_005e68d0;
  uVar4 = DAT_005e68c4;
  puVar1 = DAT_005e68c0;
  uVar3 = DAT_005e68bc;
  uVar2 = DAT_005e68b8;
  uVar7 = DAT_005e68b4;
  *DAT_005e68c0 = DAT_005e68b4;
  puVar1[1] = uVar2;
  puVar1[2] = uVar7;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar2;
  puVar1[6] = uVar7;
  puVar1[7] = uVar3;
  uVar2 = DAT_005e68c8;
  puVar1[8] = uVar3;
  puVar1[9] = uVar3;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar3;
  uVar4 = DAT_005e68cc;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = uVar3;
  puVar1[0xd] = uVar2;
  puVar1[0xe] = uVar4;
  puVar1 = DAT_005e68d4;
  *DAT_005e68d4 = uVar7;
  puVar1[1] = uVar6;
  puVar1[2] = uVar5;
  puVar1[3] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[-0xaa] = 0;
  puVar1[-0xa9] = 5;
  puVar1[-0xa8] = puVar1 + -0xa7;
  puStack_14 = &DAT_005e68dc;
  uStack_10 = local_18;
  local_c = s_MojCaveZoraSpring_005e68e8;
  uVar7 = func_0019B51C(DAT_005e6908,DAT_005e6904,*DAT_005e6900,(int)&uStack_10,DAT_005e68fc,
                        &local_18,0);
  return CONCAT44(DAT_005e690c,uVar7);
}


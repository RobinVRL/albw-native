#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b4148;
extern undefined4 *DAT_005b414c;
extern undefined4 *DAT_005b4150;
extern undefined DAT_005b4154;
extern undefined4 DAT_005b4164;
extern uint *DAT_005b4178;
extern undefined4 DAT_005b417c;
extern undefined4 *DAT_005b4180;
extern undefined4 DAT_005b4184;
extern undefined4 DAT_005b4188;
extern char s_MojCubeBreak_005b4168[];

// USA 005B40DC <- EU 005B40B4 (Ghidra, non-matching)
// GLOBAL DAT_005b4148 undefined4 *
// GLOBAL DAT_005b414c undefined4 *
// GLOBAL DAT_005b4150 undefined4 *
// GLOBAL DAT_005b4154 undefined
// GLOBAL DAT_005b4164 undefined4
// GLOBAL DAT_005b4178 uint *
// GLOBAL DAT_005b417c undefined4
// GLOBAL DAT_005b4180 undefined4 *
// GLOBAL DAT_005b4184 undefined4
// GLOBAL DAT_005b4188 undefined4
// GLOBAL s_MojCubeBreak_005b4168 string

undefined8 func_005B40DC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b4148;
  *DAT_005b4148 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b414c;
  *DAT_005b414c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b4150;
  puVar3 = DAT_005b4150 + 3;
  *DAT_005b4150 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b4164;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b4154;
  local_18 = local_10;
  local_14 = s_MojCubeBreak_005b4168;
  uVar2 = func_0019B51C(DAT_005b4180,DAT_005b417c,*DAT_005b4178,(int)&local_18,DAT_005b4150,
                        &local_10,0);
  return CONCAT44(DAT_005b4188,uVar2);
}


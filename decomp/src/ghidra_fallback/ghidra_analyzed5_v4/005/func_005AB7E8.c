#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ab8f8;
extern undefined4 *DAT_005ab8fc;
extern undefined4 *DAT_005ab900;
extern undefined DAT_005ab904;
extern undefined4 DAT_005ab914;
extern uint *DAT_005ab924;
extern undefined4 DAT_005ab928;
extern undefined4 *DAT_005ab92c;
extern undefined4 DAT_005ab930;
extern undefined4 DAT_005ab934;
extern undefined4 *DAT_005ab938;
extern undefined DAT_005ab93c;
extern uint *DAT_005ab964;
extern undefined4 *DAT_005ab968;
extern undefined4 *DAT_005ab96c;
extern undefined DAT_005ab970;
extern undefined DAT_005ab974;
extern uint DAT_005ab97c;
extern char s_MojPillarUpL_005ab954[];
extern char s_MojPillarUp_005ab918[];

// USA 005AB7E8 <- EU 005AB7C0 (Ghidra, non-matching)
// GLOBAL DAT_005ab8f8 undefined4 *
// GLOBAL DAT_005ab8fc undefined4 *
// GLOBAL DAT_005ab900 undefined4 *
// GLOBAL DAT_005ab904 undefined
// GLOBAL DAT_005ab914 undefined4
// GLOBAL DAT_005ab924 uint *
// GLOBAL DAT_005ab928 undefined4
// GLOBAL DAT_005ab92c undefined4 *
// GLOBAL DAT_005ab930 undefined4
// GLOBAL DAT_005ab934 undefined4
// GLOBAL DAT_005ab938 undefined4 *
// GLOBAL DAT_005ab93c undefined
// GLOBAL DAT_005ab964 uint *
// GLOBAL DAT_005ab968 undefined4 *
// GLOBAL DAT_005ab96c undefined4 *
// GLOBAL DAT_005ab970 undefined
// GLOBAL DAT_005ab974 undefined
// GLOBAL DAT_005ab97c uint
// GLOBAL s_MojPillarUpL_005ab954 string
// GLOBAL s_MojPillarUp_005ab918 string

longlong func_005AB7E8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005ab8f8;
  *DAT_005ab8f8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ab8fc;
  *DAT_005ab8fc = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ab914;
  puVar1 = DAT_005ab900;
  puVar3 = DAT_005ab900 + 3;
  DAT_005ab900[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ab904;
  local_2c = s_MojPillarUp_005ab918;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005ab92c,DAT_005ab928,*DAT_005ab924,(int)&local_30,DAT_005ab900,&local_28,0);
  puVar1 = DAT_005ab938;
  DAT_005ab938[2] = DAT_005ab938 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_14 = &DAT_005ab93c;
  local_1c = s_MojPillarUpL_005ab954;
  local_18 = uVar2;
  local_20 = uVar2;
  func_0019B51C(DAT_005ab968,DAT_005ab928,*DAT_005ab964,(int)&local_20,DAT_005ab938,&local_18,0);
  puVar1 = DAT_005ab96c;
  DAT_005ab96c[1] = &DAT_005ab970;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005ab974;
  return (ulonglong)DAT_005ab97c << 0x20;
}


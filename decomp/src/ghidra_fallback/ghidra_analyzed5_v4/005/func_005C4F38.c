#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c5018;
extern undefined4 *DAT_005c501c;
extern undefined4 *DAT_005c5020;
extern undefined DAT_005c5024;
extern undefined4 DAT_005c5030;
extern uint *DAT_005c5044;
extern undefined4 DAT_005c5048;
extern undefined4 *DAT_005c504c;
extern undefined4 DAT_005c5050;
extern undefined4 DAT_005c5054;
extern undefined4 *DAT_005c5058;
extern undefined DAT_005c505c;
extern uint *DAT_005c5078;
extern undefined4 DAT_005c507c;
extern undefined4 *DAT_005c5080;
extern char s_MojTreasureBoxL_005c5034[];
extern char s_MojTreasureBoxS_005c5068[];

// USA 005C4F38 <- EU 005C4F10 (Ghidra, non-matching)
// GLOBAL DAT_005c5018 undefined4 *
// GLOBAL DAT_005c501c undefined4 *
// GLOBAL DAT_005c5020 undefined4 *
// GLOBAL DAT_005c5024 undefined
// GLOBAL DAT_005c5030 undefined4
// GLOBAL DAT_005c5044 uint *
// GLOBAL DAT_005c5048 undefined4
// GLOBAL DAT_005c504c undefined4 *
// GLOBAL DAT_005c5050 undefined4
// GLOBAL DAT_005c5054 undefined4
// GLOBAL DAT_005c5058 undefined4 *
// GLOBAL DAT_005c505c undefined
// GLOBAL DAT_005c5078 uint *
// GLOBAL DAT_005c507c undefined4
// GLOBAL DAT_005c5080 undefined4 *
// GLOBAL s_MojTreasureBoxL_005c5034 string
// GLOBAL s_MojTreasureBoxS_005c5068 string

undefined8 func_005C4F38(void)

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
  puVar1 = DAT_005c5018;
  *DAT_005c5018 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c501c;
  *DAT_005c501c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c5030;
  puVar1 = DAT_005c5020;
  puVar3 = DAT_005c5020 + 3;
  DAT_005c5020[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005c5024;
  local_2c = s_MojTreasureBoxL_005c5034;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005c504c,DAT_005c5048,*DAT_005c5044,(int)&local_30,DAT_005c5020,&local_28,0);
  puVar1 = DAT_005c5058;
  puVar3 = DAT_005c5058 + 3;
  DAT_005c5058[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005c505c;
  local_1c = s_MojTreasureBoxS_005c5068;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005c5080,DAT_005c507c,*DAT_005c5078,(int)&local_20,DAT_005c5058,
                        &local_18,0);
  return CONCAT44(DAT_005c5054,uVar2);
}


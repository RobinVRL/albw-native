#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0038AF14(undefined1 *param_1);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern undefined4 DAT_00340940;
extern undefined4 DAT_00340944;
extern undefined4 DAT_00340948;
extern float DAT_0034094c;
extern float DAT_00340950;
extern int *DAT_00340954;

// USA 003408B4 <- EU 00340890 (Ghidra, non-matching)
// GLOBAL DAT_00340940 undefined4
// GLOBAL DAT_00340944 undefined4
// GLOBAL DAT_00340948 undefined4
// GLOBAL DAT_0034094c float
// GLOBAL DAT_00340950 float
// GLOBAL DAT_00340954 int *

undefined4 func_003408B4(int param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(uint *)(albw_frame + 0x8))
  #define iStack_94 (*(int *)(albw_frame + 0xc))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_70 (*(undefined1 *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define auStack_5c ((undefined4 *)(albw_frame + 0x44))
  #define auStack_30 ((undefined4 *)(albw_frame + 0x70))
  uVar3 = DAT_00340944;
  uVar4 = DAT_00340940;
  puVar1 = func_004331A0(auStack_30);
  pbVar2 = (byte *)func_00436384(auStack_5c,puVar1);
  func_00110D44(&local_98,pbVar2,0x2a);
  iStack_94 = param_1 + 0x14;
  local_78 = *(undefined4 *)(param_1 + 0x40);
  local_7c = *(undefined4 *)(param_1 + 0x3c);
  local_98 = 0;
  local_8c = *(undefined4 *)(param_1 + 100);
  local_84 = DAT_00340948;
  local_70 = 0;
  local_6c = uVar4;
  local_68 = uVar3;
  uStack_64 = uVar4;
  local_60 = uVar3;
  func_004A7620(*DAT_00340954,&local_98,0xff,DAT_00340950,DAT_0034094c);
  return func_0038AF14((undefined1 *)(param_1 + 0x324));
}


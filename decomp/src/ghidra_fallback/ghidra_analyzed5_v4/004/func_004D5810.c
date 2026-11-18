#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int *piRam004d5a1c;
extern uint DAT_004d5a00;
extern undefined4 DAT_004d5a04;
extern undefined4 DAT_004d5a08;
extern float DAT_004d5a0c;
extern float DAT_004d5a10;
extern float DAT_004d5a14;
extern int *DAT_004d5a18;

// USA 004D5810 <- EU 004D57E8 (Ghidra, non-matching)
// GLOBAL DAT_004d5a00 uint
// GLOBAL DAT_004d5a04 undefined4
// GLOBAL DAT_004d5a08 undefined4
// GLOBAL DAT_004d5a0c float
// GLOBAL DAT_004d5a10 float
// GLOBAL DAT_004d5a14 float
// GLOBAL DAT_004d5a18 int *
// GLOBAL UNK_004d5a1c int *

void func_004D5810(uint param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(uint *)(albw_frame + 0x0))
  #define local_bc (*(int *)(albw_frame + 0x4))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(undefined2 *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 ((byte *)(albw_frame + 0x3c))
  #define local_74 (*(uint *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(undefined1 *)(albw_frame + 0x64))
  #define local_5b (*(undefined1 *)(albw_frame + 0x65))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x74))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define fStack_38 (*(float *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  iVar4 = *(int *)(param_1 + 8);
  local_74 = DAT_004d5a00 | param_1 & 0xffff0000;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_84[5] = 0;
  local_84[6] = 0;
  local_84[7] = 0;
  local_84[8] = 0;
  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xc] = 0;
  local_84[0xd] = 0;
  local_84[0xe] = 0;
  local_84[0xf] = 0;
  local_70 = 0xff;
  uStack_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = DAT_004d5a04;
  local_5c = 0;
  local_5b = 1;
  uVar6 = DAT_004d5a04;
  func_00110D44(&local_c0,local_84,0x2a);
  piVar2 = DAT_004d5a18;
  local_bc = param_1 + 0xcc;
  local_54 = *(undefined4 *)(param_3 + 4);
  fStack_38 = *(float *)(param_3 + 8);
  uStack_4c = *(undefined4 *)(param_3 + 0xc);
  local_a0 = &local_54;
  local_50 = fStack_38 + DAT_004d5a0c;
  local_a4 = &local_3c;
  local_c0 = 0;
  local_94 = DAT_004d5a0c;
  local_ac = 7;
  local_b4 = 0;
  local_b0 = *(undefined2 *)(param_2 + 0x54);
  local_90 = uVar6;
  local_8c = uVar6;
  local_88 = uVar6;
  local_3c = local_54;
  uStack_34 = uStack_4c;
  func_004A9F98(*DAT_004d5a18,&local_c0,0xf,DAT_004d5a14,DAT_004d5a10);
  cVar1 = *(char *)(param_1 + 0x111);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x112);
  }
  if (bVar5 && cVar1 == '\0') {
    func_004CF478(iVar4,0);
  }
  else {
    func_004CF478(iVar4,0);
    func_004CF478(*(int *)(param_1 + 0xc),1);
    iVar4 = func_00588BE4(param_2);
    bVar5 = iVar4 == *piRam004d5a1c;
    if (bVar5) {
      iVar4 = *(int *)(param_1 + 0xc);
    }
    if (bVar5) {
      *(undefined4 *)(iVar4 + 0x134) = uVar6;
    }
  }
  if (((*(char *)(param_1 + 0x10c) != '\0') && (iVar4 = *(int *)(param_1 + 0xc4), iVar4 != 0)) &&
     (*(int *)(iVar4 + 0x1c) == *(int *)(param_1 + 200))) {
    iVar3 = *(int *)(iVar4 + 0x20);
    if (((iVar3 != 0) && (*(int *)(iVar4 + 0x24) == *(int *)(iVar3 + 0xc))) &&
       (0 < *(int *)(iVar3 + 4))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb | 8;
  }
  *(undefined1 *)param_1 = 4;
  if (*(char *)(param_1 + 0x10f) == '\x01') {
    *(undefined1 *)(param_1 + 0x10f) = 0;
    func_004A9120(*piVar2,param_1 + 0x18);
    func_004A8304(*piVar2,param_1 + 0x7c);
  }
  return;
}


#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern uint DAT_002c70f4;
extern undefined4 DAT_002c70f8;
extern undefined4 *DAT_002c70fc;
extern undefined4 DAT_002c7100;
extern undefined4 DAT_002c7104;
extern int *DAT_002c7108;
extern float DAT_002c710c;
extern float DAT_002c7110;
extern int *DAT_002c7114;

// USA 002C6F50 <- EU 002C6F2C (Ghidra, non-matching)
// GLOBAL DAT_002c70f4 uint
// GLOBAL DAT_002c70f8 undefined4
// GLOBAL DAT_002c70fc undefined4 *
// GLOBAL DAT_002c7100 undefined4
// GLOBAL DAT_002c7104 undefined4
// GLOBAL DAT_002c7108 int *
// GLOBAL DAT_002c710c float
// GLOBAL DAT_002c7110 float
// GLOBAL DAT_002c7114 int *

void func_002C6F50(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined2 *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c ((byte *)(albw_frame + 0x44))
  #define uStack_4c (*(uint *)(albw_frame + 0x54))
  #define local_48 (*(undefined4 *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x6d))
  #define local_30 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x78))
  if (*(short *)(param_1 + 0x464) < 1) {
    if (*(short *)(param_1 + 0x462) < 1) {
      uStack_4c = DAT_002c70f4 | param_3 & 0xffff0000;
      local_5c[0] = 0;
      local_5c[1] = 0;
      local_5c[2] = 0;
      local_5c[3] = 0;
      local_48 = 0xff;
      local_5c[4] = 0;
      local_5c[5] = 0;
      local_5c[6] = 0;
      local_5c[7] = 0;
      local_5c[8] = 0;
      local_5c[9] = 0;
      local_5c[10] = 0;
      local_5c[0xb] = 0;
      local_5c[0xc] = 0;
      local_5c[0xd] = 0;
      local_5c[0xe] = 0;
      local_5c[0xf] = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = DAT_002c70f8;
      local_34 = 0;
      local_33 = 1;
      func_00110D44(&local_98,local_5c,0x2a);
      piVar1 = DAT_002c7114;
      local_30 = *DAT_002c70fc;
      uStack_2c = DAT_002c70fc[1];
      uStack_28 = DAT_002c70fc[2];
      local_94 = *(undefined4 *)(param_1 + 0x3ec);
      local_98 = &local_30;
      local_6c = DAT_002c7100;
      local_68 = *DAT_002c70fc;
      local_64 = DAT_002c70fc[1];
      local_60 = DAT_002c70fc[2];
      local_8c = *(undefined4 *)(param_1 + 0x2cc);
      local_84 = DAT_002c7104;
      local_88 = *(undefined2 *)(param_1 + 0x54);
      iVar4 = *(int *)(param_1 + 0x458);
      if (*(char *)(*DAT_002c7108 + 0x18) == '\x13') {
        iVar4 = 1;
      }
      else if (iVar4 < 1) {
        return;
      }
      uVar3 = 0;
      fparam_1 = DAT_002c710c;
      fparam_0 = DAT_002c7110;
      while( true ) {
        if (uVar3 < *(uint *)(param_1 + 0x478)) {
          local_78 = *(int *)(param_1 + 0x47c) + uVar3 * 0x18;
        }
        else {
          local_78 = *(int *)(param_1 + 0x47c);
        }
        local_78 = local_78 + 0xc;
        if (uVar3 < *(uint *)(param_1 + 0x478)) {
          local_7c = *(int *)(param_1 + 0x47c) + uVar3 * 0x18;
        }
        else {
          local_7c = *(int *)(param_1 + 0x47c);
        }
        func_004A9F98(*piVar1,(uint *)&local_98,0xf,fparam_0,fparam_1);
        if (*(char *)(param_1 + 0x469) != '\0') break;
        uVar3 = uVar3 + 1;
        if (iVar4 <= (int)uVar3) {
          return;
        }
      }
      sVar2 = 5;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x462) + -1;
    }
    *(short *)(param_1 + 0x462) = sVar2;
  }
  return;
}


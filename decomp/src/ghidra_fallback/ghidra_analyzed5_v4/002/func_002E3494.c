#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003F7CC4(int param_1,int *param_2,undefined *param_3,int param_4,undefined1 *param_5);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_002e35c8;
extern undefined4 DAT_002e35d4;
extern undefined4 DAT_002e35d8;
extern undefined4 DAT_002e35dc;
extern int *DAT_002e35e0;
extern char s_Effect_Demo_002e35bc[];
extern char s_World_002e35cc[];
extern char s_cf_002e35bc[];

// USA 002E3494 <- EU 002E3470 (Ghidra, non-matching)
// GLOBAL DAT_002e35c8 int
// GLOBAL DAT_002e35d4 undefined4
// GLOBAL DAT_002e35d8 undefined4
// GLOBAL DAT_002e35dc undefined4
// GLOBAL DAT_002e35e0 int *
// GLOBAL s_cf_002e35bc string
// GLOBAL s_World_002e35cc string

void func_002E3494(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define iStack_a4 (*(int *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define iStack_78 (*(int *)(albw_frame + 0x38))
  #define local_74 (*(char * *)(albw_frame + 0x3c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x40))
  #define local_6f (*(undefined1 *)(albw_frame + 0x41))
  #define local_6e (*(undefined1 *)(albw_frame + 0x42))
  #define local_6d (*(undefined1 *)(albw_frame + 0x43))
  #define local_6c (*(undefined1 *)(albw_frame + 0x44))
  #define iStack_68 (*(int *)(albw_frame + 0x48))
  #define local_64 (*(char * *)(albw_frame + 0x4c))
  #define auStack_60 ((undefined4 *)(albw_frame + 0x50))
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  if (param_2 == 8 || param_2 == 0x26) {
    iStack_68 = DAT_002e35c8;
    local_64 = s_Effect_Demo_002e35bc;
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 4) == 0) {
      iStack_a4 = DAT_002e35c8;
      local_a0 = DAT_002e35d4;
      local_94 = 0x20;
      local_9c = 0;
      local_98 = 0;
      local_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
      iStack_78 = DAT_002e35c8;
      local_74 = (char *)DAT_002e35d8;
      local_70 = 7;
      local_6f = 4;
      uVar4 = 0x80;
      local_6d = 0;
      local_90 = 0x80;
      local_6c = 1;
      local_6e = 0xb;
      (**(code **)(DAT_002e35c8 + 8))();
      puVar1 = func_00689794(auStack_60,DAT_002e35dc,(uint)local_64,uVar4);
      piVar3 = DAT_002e35e0;
      local_a0 = puVar1[1];
      local_74 = s_World_002e35cc;
      puVar1 = func_001E1EDC(*DAT_002e35e0,&iStack_a4);
      iVar2 = *(int *)(param_1 + 0x30);
      if (1 < *(uint *)(param_1 + 0x2c)) {
        iVar2 = iVar2 + 8;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(*piVar3 + 0x1fa8);
      if (*(uint *)(param_1 + 0x2c) < 2) {
        piVar3 = *(int **)(param_1 + 0x30);
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x30) + 8);
      }
      func_003F7CC4(*(int *)(param_1 + 0x10),piVar3,(undefined *)puVar1[5],1,(undefined1 *)0x0);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


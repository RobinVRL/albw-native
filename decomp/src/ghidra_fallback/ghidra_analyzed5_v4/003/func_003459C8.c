#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00133790(int *param_1,int param_2);
extern int func_001E1E84(int param_1);
extern int func_0028E064(uint param_1);
extern int func_00345C54(undefined4 param_1,undefined4 param_2,byte *param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_00345bfc;
extern int *DAT_00345c00;
extern int DAT_00345c04;
extern int DAT_00345c08;
extern undefined DAT_00345c0c;
extern undefined4 DAT_00345c10;
extern undefined4 DAT_00345c14;
extern undefined1 DAT_00345c18;
extern undefined DAT_00345c24;
extern int *DAT_00345c2c;

// USA 003459C8 <- EU 003459A4 (Ghidra, non-matching)
// GLOBAL DAT_00345bfc int *
// GLOBAL DAT_00345c00 int *
// GLOBAL DAT_00345c04 int
// GLOBAL DAT_00345c08 int
// GLOBAL DAT_00345c0c undefined
// GLOBAL DAT_00345c10 undefined4
// GLOBAL DAT_00345c14 undefined4
// GLOBAL DAT_00345c18 undefined1
// GLOBAL DAT_00345c24 undefined
// GLOBAL DAT_00345c2c int *

undefined4 func_003459C8(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  _Alignas(8) unsigned char albw_frame[0x1c0];
  #define local_1b4 (*(int *)(albw_frame + 0xc))
  #define local_1b0 (*(uint * *)(albw_frame + 0x10))
  #define local_1ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_1a8 ((uint *)(albw_frame + 0x18))
  #define local_a8 (*(int *)(albw_frame + 0x118))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x11c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x120))
  #define local_9c (*(undefined4 *)(albw_frame + 0x124))
  #define local_98 (*(undefined4 *)(albw_frame + 0x128))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x130))
  #define local_8c (*(undefined4 *)(albw_frame + 0x134))
  #define local_88 (*(undefined4 *)(albw_frame + 0x138))
  #define local_84 (*(undefined4 *)(albw_frame + 0x13c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x140))
  #define local_7c (*(int *)(albw_frame + 0x144))
  #define local_78 (*(undefined4 *)(albw_frame + 0x148))
  #define local_74 (*(undefined1 *)(albw_frame + 0x14c))
  #define local_73 (*(undefined1 *)(albw_frame + 0x14d))
  #define local_72 (*(undefined1 *)(albw_frame + 0x14e))
  #define local_71 (*(undefined1 *)(albw_frame + 0x14f))
  #define local_70 (*(undefined1 *)(albw_frame + 0x150))
  #define local_6c (*(int *)(albw_frame + 0x154))
  #define local_68 (*(uint * *)(albw_frame + 0x158))
  #define local_64 (*(undefined4 *)(albw_frame + 0x15c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x160))
  #define local_5c (*(undefined1 *)(albw_frame + 0x164))
  #define local_50 (*(int *)(albw_frame + 0x170))
  #define local_4c (*(uint * *)(albw_frame + 0x174))
  #define local_48 (*(byte * *)(albw_frame + 0x178))
  #define local_34 (*(undefined4 *)(albw_frame + 0x18c))
  #define local_30 (*(int *)(albw_frame + 0x190))
  #define local_2c (*(int *)(albw_frame + 0x194))
  local_34 = func_001E1E84(*DAT_00345bfc);
  iVar1 = DAT_00345c08;
  uVar6 = 0;
  iVar7 = 0x97;
  local_48 = (byte *)(*DAT_00345c00 + 0x18);
  local_30 = (int)&local_1ac + 3;
  local_2c = DAT_00345c04;
  do {
    uVar5 = (uint)(short)iVar7;
    bVar2 = func_00345C54(param_1,uVar5,local_48);
    if (bVar2 == 0) {
      *(undefined4 *)(param_1 + 0x110 + iVar7 * 4) = 0;
    }
    else {
      local_a8 = iVar1;
      local_a4 = DAT_00345c10;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0x20;
      uStack_94 = 0;
      local_8c = 0;
      local_90 = 0;
      local_78 = DAT_00345c14;
      local_7c = iVar1;
      local_88 = 0;
      local_84 = 0;
      local_68 = (uint *)&DAT_00345c0c;
      local_74 = 7;
      local_70 = 0;
      local_80 = 0;
      local_5c = 1;
      local_6c = iVar1;
      local_1ac = 0x100;
      local_73 = 4;
      local_72 = 0;
      local_71 = 0;
      local_64 = 0;
      local_60 = 0;
      *(undefined1 *)(local_30 + 0x100) = 0;
      (*(undefined1 *)((char *)&local_1a8[0] + 0)) = 0;
      local_50 = iVar1;
      local_1b4 = local_2c;
      local_4c = (uint *)&DAT_00345c18;
      local_1b0 = local_1a8;
      (**(code **)(iVar1 + 8))(&local_50);
      uVar8 = 0;
      do {
        if (*(char *)((int)local_4c + uVar8) == '\0') {
          if ((int)uVar8 < 0x40001) goto LAB_00345af8;
          break;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x40001);
      uVar8 = 0;
LAB_00345af8:
      if (local_1ac <= (int)uVar8) {
        uVar8 = local_1ac - 1;
      }
      (**(code **)(local_50 + 8))(&local_50);
      func_0010E3C4(local_1a8,local_4c,uVar8);
      *(undefined1 *)((int)local_1a8 + uVar8) = 0;
      piVar3 = (int *)func_0028E064(uVar5);
      func_00689928(&local_1b4,piVar3,0xffffffff);
      local_4c = (uint *)&DAT_00345c24;
      local_50 = iVar1;
      func_00689928(&local_1b4,&local_50,0xffffffff);
      local_73 = 0xff;
      local_71 = 0;
      local_64 = local_34;
      local_5c = 0;
      local_68 = local_1b0;
      puVar4 = func_00504D48(*DAT_00345c2c,(int)&local_a8);
      piVar3 = (int *)func_0028E064(uVar5);
      piVar3 = (int *)func_00533304((int)puVar4,piVar3,0);
      puVar4 = (undefined4 *)(param_1 + 0x110 + iVar7 * 4);
      *puVar4 = piVar3;
      func_00133790(piVar3,*(int *)(param_1 + 0x10));
      func_00133790((int *)*puVar4,*(int *)(param_1 + 0x90));
      uVar6 = 1;
    }
    iVar7 = iVar7 + 1;
    if (0xaf < iVar7) {
      return uVar6;
    }
  } while( true );
}


#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003F7CC4(int param_1,int *param_2,undefined *param_3,int param_4,undefined1 *param_5);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_002e3430;
extern int DAT_002e3434;
extern int *DAT_002e3438;
extern int *DAT_002e343c;
extern undefined4 DAT_002e3450;
extern undefined4 DAT_002e3454;
extern undefined4 DAT_002e3460;
extern undefined4 DAT_002e3464;
extern undefined4 DAT_002e3468;
extern int *DAT_002e346c;
extern char s_Effect_JackAll_002e3440[];
extern char s_World_002e3458[];
extern char s_cf_002e3440[];

// USA 002E32DC <- EU 002E32B8 (Ghidra, non-matching)
// GLOBAL DAT_002e3430 int
// GLOBAL DAT_002e3434 int
// GLOBAL DAT_002e3438 int *
// GLOBAL DAT_002e343c int *
// GLOBAL DAT_002e3450 undefined4
// GLOBAL DAT_002e3454 undefined4
// GLOBAL DAT_002e3460 undefined4
// GLOBAL DAT_002e3464 undefined4
// GLOBAL DAT_002e3468 undefined4
// GLOBAL DAT_002e346c int *
// GLOBAL s_cf_002e3440 string
// GLOBAL s_World_002e3458 string

void func_002E32DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(int *)(albw_frame + 0xc))
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
  #define local_78 (*(int *)(albw_frame + 0x38))
  #define local_74 (*(char * *)(albw_frame + 0x3c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x40))
  #define local_6f (*(undefined1 *)(albw_frame + 0x41))
  #define local_6e (*(undefined1 *)(albw_frame + 0x42))
  #define local_6d (*(undefined1 *)(albw_frame + 0x43))
  #define local_6c (*(undefined1 *)(albw_frame + 0x44))
  #define auStack_68 ((undefined4 *)(albw_frame + 0x48))
  iVar5 = DAT_002e3434;
  if (((*(uint *)(DAT_002e3430 + 8) & 1) == 0) &&
     (iVar2 = func_00100174(DAT_002e3438), piVar1 = DAT_002e343c, iVar2 != 0)) {
    DAT_002e343c[1] = (int)s_Effect_JackAll_002e3440;
    *piVar1 = iVar5;
  }
  piVar1 = DAT_002e343c;
  if (**(int **)(*(int *)(param_1 + 0x10) + 0xc) == 0) {
    local_9c = 0;
    local_88 = 0;
    local_a0 = DAT_002e3460;
    local_94 = 0x20;
    local_98 = 0;
    local_84 = 0;
    local_74 = (char *)DAT_002e3464;
    local_70 = 7;
    local_6f = 4;
    local_a4 = iVar5;
    local_8c = 0;
    local_80 = 0;
    local_7c = 0;
    local_6d = 0;
    local_78 = iVar5;
    local_90 = 0x80;
    local_6c = 1;
    local_6e = 0xb;
    (**(code **)(*DAT_002e343c + 8))(DAT_002e343c);
    puVar3 = func_00689794(auStack_68,DAT_002e3468,piVar1[1],param_4);
    piVar1 = DAT_002e346c;
    local_a0 = puVar3[1];
    local_74 = s_World_002e3458;
    puVar3 = func_001E1EDC(*DAT_002e346c,&local_a4);
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 4) = *(undefined4 *)(*piVar1 + 0x1fa8);
    func_003F7CC4(*(int *)(param_1 + 0x10),*(int **)(param_1 + 0x30),(undefined *)puVar3[5],0,
                  (undefined1 *)0x0);
  }
  uVar4 = 0;
  do {
    iVar5 = param_1 + 0x34;
    if (uVar4 < 0xc) {
      iVar5 = iVar5 + uVar4 * 8;
    }
    uVar4 = uVar4 + 1;
    *(undefined1 *)(iVar5 + 4) = 1;
  } while ((int)uVar4 < 0xc);
  return;
}


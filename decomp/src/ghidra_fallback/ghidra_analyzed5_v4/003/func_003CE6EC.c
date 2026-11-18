#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C89CC(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C8BD8(int *param_1);
extern int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CDD84(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_003CDE88(void);
extern int func_003CDF3C(int param_1);
extern int func_003CE5EC(int *param_1,int param_2);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);
extern int func_003D3554(longlong *param_1,int *param_2);
extern int func_003D35F8(undefined4 *param_1);
extern int func_00564398(int *param_1,uint *param_2);
extern int DAT_003ce880;
extern int *DAT_003ce884;

// USA 003CE6EC <- EU 003CE6C8 (Ghidra, non-matching)
// GLOBAL DAT_003ce880 int
// GLOBAL DAT_003ce884 int *

int * func_003CE6EC(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 extraout_r1_00;
  int iVar5;
  short *psVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(uint *)(albw_frame + 0x8))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_98 ((int *)(albw_frame + 0x18))
  #define local_78 (*(int *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_6c (*(int *)(albw_frame + 0x44))
  #define local_68 (*(undefined4 *)(albw_frame + 0x48))
  #define local_64 ((ushort *)(albw_frame + 0x4c))
  #define local_3a (*(ushort *)(albw_frame + 0x76))
  #define local_38 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x80))
  #define local_2c (*(undefined2 *)(albw_frame + 0x84))
  #define local_2a (*(undefined2 *)(albw_frame + 0x86))
  #define local_28 (*(undefined4 *)(albw_frame + 0x88))
  #define local_24 (*(int *)(albw_frame + 0x8c))
  #define local_20 (*(undefined2 *)(albw_frame + 0x90))
  #define local_1e (*(undefined1 *)(albw_frame + 0x92))
  #define local_1d (*(undefined1 *)(albw_frame + 0x93))
  #define local_18 (*(uint *)(albw_frame + 0x98))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x9c))
  psVar6 = *(short **)(DAT_003ce880 + 4);
  func_003C9BCC(DAT_003ce880,param_2,param_3);
  piVar1 = (int *)func_003C89CC(psVar6,extraout_r1,0x14,0);
  if ((int)piVar1 < 0) {
    if ((((((uint)piVar1 & 0x3fc00) != 0x4400) || (((uint)piVar1 & 0x3ff) < 0xb4)) ||
        (199 < ((uint)piVar1 & 0x3ff))) && ((int)piVar1 < 0)) {
      uVar3 = func_003D302C(piVar1,0x3ce870);
      return (int *)uVar3;
    }
  }
  else {
    func_003D35F8(&local_a8);
    local_18 = local_a8;
    uStack_14 = uStack_a4;
    func_00564398(&local_6c,&local_18);
    local_78 = local_6c;
    local_74 = local_68 & 0xffffff;
    local_70 = 0;
    func_003D3554((longlong *)&local_38,&local_78);
    local_28 = func_003CDE88();
    local_2a = 0;
    func_003CDD84(&local_68,0x18,local_38,uStack_34);
    uVar4 = local_68 & 0xffff;
    iVar5 = 0;
    iVar7 = 0xb;
    puVar2 = (ushort *)&local_68;
    do {
      uVar4 = uVar4 + (*(undefined2 *)((char *)&local_68 + 2));
      (*(undefined2 *)((char *)&local_68 + 2)) = puVar2[3];
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + (uint)puVar2[2];
      puVar2 = puVar2 + 2;
    } while (iVar7 != 0);
    local_24 = uVar4 + iVar5 + (uint)local_3a;
    local_20 = (undefined2)local_78;
    local_1e = (undefined1)local_74;
    local_1d = (*(undefined1 *)((char *)&local_74 + 1));
    local_30 = 0x4f00;
    local_2c = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_98[0] = *DAT_003ce884;
    iVar5 = DAT_003ce884[8];
    *(int *)((int)local_98 + *(int *)(local_98[0] + -0x30)) = iVar5;
    local_98[1] = DAT_003ce884[9];
    func_003CDF3C((int)local_98);
    func_003CE5EC(local_98,(int)&local_30);
    piVar1 = (int *)0x0;
    if ((local_98[2] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((local_98[2] & 1U) != 0) {
        func_0010C1B8(local_98[2],extraout_r1_00,iVar5);
      }
      piVar1 = func_003C8BD8((int *)(local_98[2] & 0xfffffffe));
    }
  }
  return piVar1;
}


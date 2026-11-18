// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0014E138(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3700(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FC3C(int param_1,uint param_2,uint param_3,int param_4);
extern int func_0053FEE8(int param_1);
extern int func_00556E20(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_0029e9bc;
extern int *DAT_0029e9c0;
extern char s_Effect_0029e9c4[];

// USA 0029E798 <- EU 0029E774 (Ghidra, non-matching)
// GLOBAL DAT_0029e9bc int *
// GLOBAL DAT_0029e9c0 int *
// GLOBAL s_Effect_0029e9c4 string

undefined4 func_0029E798(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  int iVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  func_0014E138(param_1,param_2);
  piVar1 = DAT_0029e9bc;
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 5) {
    return 0;
  }
  iVar6 = 1;
  if ((*(char *)(param_1 + 0x480) != '\0') && (*(int *)(param_1 + 0x47c) == 0)) {
    iVar4 = func_0052FC3C(*DAT_0029e9bc + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),
                          (uint)*(byte *)(param_1 + 0x2d4),0);
    if (iVar4 == 0) {
      iVar6 = 0;
      sVar3 = *(short *)(param_1 + 0x482) + -1;
      *(short *)(param_1 + 0x482) = sVar3;
      if (sVar3 == 0) {
        *(undefined1 *)(param_1 + 0x480) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(iVar4 + 0x2cc);
    }
  }
  piVar2 = DAT_0029e9c0;
  iVar4 = func_00556E20(*DAT_0029e9c0);
  uVar5 = extraout_r1;
  if (iVar4 != 0) {
    iVar6 = func_0053FEE8(*piVar2);
    uVar5 = extraout_r1_00;
  }
  if (iVar6 != 0) {
    bVar7 = *(char *)(param_1 + 0x480) != '\0';
    if (bVar7) {
      uVar5 = *(uint *)(param_1 + 0x47c);
    }
    if (bVar7 && uVar5 != 0) {
      iVar6 = func_0052FBA0(*piVar1 + 0x3dbbc,uVar5);
      if (((iVar6 != 0) && (*(char *)(iVar6 + 0x2d7) == '\0')) &&
         (bVar7 = func_00588BF0(iVar6,0), !bVar7)) goto LAB_0029e950;
      *(undefined1 *)(param_1 + 0x480) = 0;
    }
    if (*(char *)(param_1 + 0x481) != '\0') {
      iVar6 = *(int *)(param_1 + 0x474);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == *(int *)(param_1 + 0x478))) {
        if ((*(uint *)(iVar6 + 0x3c) & 4) != 0 || (*(uint *)(iVar6 + 0x3c) & 0x40) != 0) {
          return 0;
        }
        iVar4 = *(int *)(iVar6 + 0x20);
        if (((iVar4 != 0) && (*(int *)(iVar6 + 0x24) == *(int *)(iVar4 + 0xc))) &&
           (0 < *(int *)(iVar4 + 4))) {
          return 0;
        }
      }
      if (*(int *)(param_1 + 0x344) != 0) {
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == *(int *)(param_1 + 0x478))) {
          func_00110848(iVar6);
        }
        func_004A1B9C(&iStack_28,*(int *)(param_1 + 0x344),(uint *)s_Effect_0029e9c4);
        *(int *)(param_1 + 0x474) = iStack_28;
        *(undefined4 *)(param_1 + 0x478) = uStack_24;
        return 0;
      }
      *(int *)(param_1 + 0x474) = 0;
      *(undefined4 *)(param_1 + 0x478) = 0;
      return 0;
    }
  }
LAB_0029e950:
  iVar6 = *(int *)(param_1 + 0x474);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) == *(int *)(param_1 + 0x478))) &&
     ((uVar5 = *(uint *)(iVar6 + 0x3c), (uVar5 & 4) != 0 || (uVar5 & 0x40) != 0 ||
      (((iVar4 = *(int *)(iVar6 + 0x20), iVar4 != 0 &&
        (*(int *)(iVar6 + 0x24) == *(int *)(iVar4 + 0xc))) && (0 < *(int *)(iVar4 + 4))))))) {
    *(uint *)(iVar6 + 0x3c) = uVar5 & 0xffffffbb | 8;
    return func_004A3700(iVar6);
  }
  return 0;
}


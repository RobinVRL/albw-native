#include "ghidra_types.h"

extern int func_0010FB48(int param_1);
extern int func_0068F1B8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5, ushort *param_6,uint param_7);
extern int func_0068F3E4(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5, ushort *param_6,uint param_7);
extern int func_0068F5E8(uint *param_1,uint *param_2,ushort *param_3,uint *param_4,int param_5, ushort *param_6);
extern uint DAT_003c87e8;
extern uint DAT_003c87ec;
extern uint DAT_003c87f0;
extern int DAT_003c87f4;
extern uint DAT_003c87f8;

// USA 003C854C <- EU 003C8528 (Ghidra, non-matching)
// GLOBAL DAT_003c87e8 uint
// GLOBAL DAT_003c87ec uint
// GLOBAL DAT_003c87f0 uint
// GLOBAL DAT_003c87f4 int
// GLOBAL DAT_003c87f8 uint

uint func_003C854C(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(uint *)(albw_frame + 0x24))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_74 (*(ushort * *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(uint *)(albw_frame + 0x34))
  #define iStack_68 (*(int *)(albw_frame + 0x38))
  #define uStack_64 (*(uint *)(albw_frame + 0x3c))
  #define local_60 (*(int *)(albw_frame + 0x40))
  #define auStack_5c ((uint *)(albw_frame + 0x44))
  #define auStack_50 ((ushort *)(albw_frame + 0x50))
  #define auStack_44 ((undefined4 *)(albw_frame + 0x5c))
  #define uStack_34 (*(uint *)(albw_frame + 0x6c))
  #define auStack_30 ((uint *)(albw_frame + 0x70))
  if (*param_3 == 4) {
    puVar3 = (ushort *)param_3[1];
  }
  else {
    puVar3 = (ushort *)0x0;
  }
  uVar4 = func_0068F5E8((uint *)(param_1 + 0x20),auStack_5c,auStack_50,&local_7c,0,puVar3);
  if (-1 < (int)uVar4) {
    uVar4 = DAT_003c87e8 ^ local_7c;
    iVar7 = local_78 * 2 >> 1;
    iVar8 = iVar7 + -1;
    if (0 < iVar8) {
      puVar3 = local_74 + -1;
      if (-1 < local_78 << 0x1f) {
        uVar4 = (uint)*local_74 ^ (uVar4 >> 5 | uVar4 << 0x1b);
        puVar3 = local_74;
      }
      uVar2 = puVar3[1];
      for (iVar8 = iVar8 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar4 = (uint)uVar2 ^ (uVar4 >> 5 | uVar4 << 0x1b);
        uVar2 = puVar3[3];
        uVar4 = (uint)puVar3[2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
        puVar3 = puVar3 + 2;
      }
    }
    iVar7 = iVar7 + -1;
    if (-1 < iVar7) {
      uVar4 = (uint)local_74[iVar7] ^ (uVar4 >> 5 | uVar4 << 0x1b);
    }
    uVar4 = func_0068F3E4((uint *)(param_1 + 0x48),&uStack_34,&uStack_70,&local_7c,uVar4,local_74,
                          local_78 << 1);
    if ((int)uVar4 < 0) {
      uVar5 = (uVar4 & 0x3fc00) >> 10;
      bVar9 = uVar5 == 0x11;
      if (bVar9) {
        uVar5 = uVar4 & 0x3ff;
      }
      if (bVar9 && uVar5 == 0x6f) {
        local_7c = DAT_003c87e8 ^ local_7c;
        iVar7 = local_78 * 2 >> 1;
        iVar8 = iVar7 + -1;
        if (0 < iVar8) {
          puVar3 = local_74 + -1;
          if (-1 < local_78 << 0x1f) {
            local_7c = (uint)*local_74 ^ (local_7c >> 5 | local_7c << 0x1b);
            puVar3 = local_74;
          }
          uVar2 = puVar3[1];
          for (iVar8 = iVar8 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar4 = (uint)uVar2 ^ (local_7c >> 5 | local_7c << 0x1b);
            uVar2 = puVar3[3];
            local_7c = (uint)puVar3[2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
            puVar3 = puVar3 + 2;
          }
        }
        iVar7 = iVar7 + -1;
        if (-1 < iVar7) {
          local_7c = (uint)local_74[iVar7] ^ (local_7c >> 5 | local_7c << 0x1b);
        }
        uVar5 = func_0068F1B8((uint *)(param_1 + 0x20),auStack_30,auStack_44,&local_7c,local_7c,
                              local_74,local_78 << 1);
        uVar4 = DAT_003c87ec;
        if ((uVar5 & 0x80000000) != 0) {
          uVar1 = (uVar5 & 0x3fc00) >> 10;
          bVar9 = uVar1 == 0x11;
          if (bVar9) {
            uVar1 = uVar5 & 0x3ff;
          }
          uVar4 = uVar5;
          if (bVar9 && uVar1 == 0x6f) {
            uVar4 = DAT_003c87f0;
          }
        }
      }
    }
    if (-1 < (int)uVar4) {
      local_a0 = local_60;
      uVar4 = 0;
      unaff_r4 = local_6c;
      unaff_r5 = iStack_68;
      unaff_r8 = uStack_64;
    }
  }
  if (-1 < (int)uVar4) {
    piVar6 = func_0010FB48(param_1 + 0xb8);
    if (piVar6 != (int *)0x0) {
      uVar4 = *(uint *)(param_1 + 0xb0);
      *piVar6 = DAT_003c87f4;
      piVar6[5] = unaff_r5 + local_a0 + (uint)CARRY4(unaff_r4,unaff_r8) +
                  (uint)CARRY4(unaff_r4 + unaff_r8,uVar4);
      piVar6[2] = uVar4 + unaff_r4;
      piVar6[1] = param_1;
      piVar6[3] = unaff_r5 + (uint)CARRY4(uVar4,unaff_r4);
      piVar6[4] = unaff_r4 + unaff_r8 + uVar4;
      piVar6[6] = *(int *)(param_1 + 4);
    }
    *param_2 = piVar6;
    uVar4 = DAT_003c87f8;
    if (piVar6 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar6 + 0x18))(piVar6,*(undefined4 *)(param_1 + 4));
      uVar4 = 0;
      if ((int)uVar5 < 0) {
        (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2);
        *param_2 = 0;
        uVar4 = uVar5;
      }
    }
  }
  return uVar4;
}


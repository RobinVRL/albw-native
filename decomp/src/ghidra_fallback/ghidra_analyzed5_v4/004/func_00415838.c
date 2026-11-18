#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_0041077C(uint param_1);
extern int func_00413124(undefined4 *param_1,int *param_2,uint param_3);
extern int func_0041336C(int param_1);
extern int func_0056AB0C(int param_1);
extern int func_0056ABDC(int param_1);
extern int func_0056C7C4(int param_1,undefined4 *param_2);
extern int func_0056C7E8(int param_1);
extern int func_0056C80C(int param_1,uint *param_2,undefined4 *param_3,uint param_4);
extern int func_0056C890(int param_1,undefined1 *param_2,uint param_3);
extern int func_0056C934(int *param_1);
extern int *DAT_00415c10;

// USA 00415838 <- EU 00415818 (Ghidra, non-matching)
// GLOBAL DAT_00415c10 int *

undefined4 func_00415838(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 ((undefined4 *)(albw_frame + 0x0))
  #define local_98 (*(undefined1 *)(albw_frame + 0x8))
  #define local_97 (*(undefined1 *)(albw_frame + 0x9))
  #define local_96 (*(undefined1 *)(albw_frame + 0xa))
  #define local_95 (*(undefined1 *)(albw_frame + 0xb))
  #define local_94 (*(byte *)(albw_frame + 0xc))
  #define local_93 (*(undefined2 *)(albw_frame + 0xd))
  #define local_90 (*(byte *)(albw_frame + 0x10))
  #define local_8f (*(char *)(albw_frame + 0x11))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(uint *)(albw_frame + 0x18))
  #define local_84 (*(int *)(albw_frame + 0x1c))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_5c (*(int *)(albw_frame + 0x44))
  #define local_58 (*(undefined2 *)(albw_frame + 0x48))
  #define local_56 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_54 (*(undefined2 *)(albw_frame + 0x4c))
  #define local_50 ((int * *)(albw_frame + 0x50))
  #define local_30 (*(undefined2 *)(albw_frame + 0x70))
  #define local_2e (*(undefined2 *)(albw_frame + 0x72))
  #define local_2c (*(undefined2 *)(albw_frame + 0x74))
  iVar4 = func_00413124(param_1,DAT_00415c10,0x4000);
  uVar8 = 0;
  if (iVar4 != 0) {
    local_50[0] = param_1 + 1;
    *(undefined4 *)(param_2 + 0x10) = param_1[4];
    *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(param_1 + 0xe);
    iVar4 = func_0056C7C4((int)param_1,(undefined4 *)&local_90);
    uVar8 = 0;
    if (iVar4 != 0) {
      uVar5 = func_0056C7E8((int)param_1);
      *(uint *)(param_1[6] + 0x2c) = uVar5;
      uVar6 = func_0041077C((uint)local_90);
      *(char *)param_1[6] = (char)uVar6;
      *(undefined4 *)(param_1[6] + 4) = local_8c;
      *(bool *)(param_1[6] + 8) = local_8f != '\0';
      *(uint *)(param_1[6] + 0xc) = local_88;
      *(int *)(param_1[6] + 0x18) = local_84;
      *(uint *)(param_1[6] + 0x1c) = local_78;
      *(int *)(param_1[6] + 0x20) = local_7c;
      *(undefined4 *)(param_1[6] + 0x24) = local_6c;
      *(undefined4 *)(param_1[6] + 0x28) = local_70;
      bVar3 = func_0056C934(local_50[0]);
      if (bVar3) {
        puVar7 = (uint *)func_0056ABDC(local_50[0][1]);
        uVar6 = *puVar7;
        uVar10 = 0;
        bVar3 = uVar6 == 4;
        if (uVar6 < 5) {
          bVar3 = uVar6 == 0;
        }
        else {
          uVar6 = 4;
        }
        if (!bVar3) {
          do {
            local_98 = 0;
            local_97 = 0;
            local_96 = 0;
            local_95 = 0;
            local_94 = 0;
            local_93 = 0;
            iVar4 = func_0056C890((int)local_50[0],&local_98,uVar10);
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = uVar10 * 0xd;
            *(undefined1 *)(param_1[6] + iVar4 + 0x34) = local_98;
            *(undefined1 *)(param_1[6] + iVar4 + 0x35) = local_97;
            *(undefined1 *)(param_1[6] + iVar4 + 0x36) = local_96;
            *(undefined1 *)(param_1[6] + iVar4 + 0x37) = local_95;
            *(byte *)(param_1[6] + iVar4 + 0x3e) = local_94;
            iVar9 = 0;
            if (local_94 != 0) {
              do {
                iVar11 = iVar9 + 0x3f;
                puVar1 = (undefined1 *)((int)&local_93 + iVar9);
                iVar9 = iVar9 + 1;
                *(undefined1 *)(param_1[6] + iVar4 + iVar11) = *puVar1;
              } while (iVar9 < (int)(uint)local_94);
            }
            *(undefined1 *)(param_1[6] + iVar4 + 0x38) = 0x7f;
            uVar10 = uVar10 + 1;
            *(undefined1 *)(param_1[6] + iVar4 + 0x39) = 0;
            *(undefined1 *)(param_1[6] + iVar4 + 0x3a) = 0;
            *(undefined1 *)(param_1[6] + iVar4 + 0x3b) = 0x40;
            *(undefined1 *)(param_1[6] + iVar4 + 0x3c) = 0;
            *(undefined1 *)(param_1[6] + iVar4 + 0x3d) = 0;
          } while (uVar10 < uVar6);
        }
      }
      cVar2 = *(char *)param_1[6];
      *(char *)(param_1 + 0x2a6) = cVar2;
      if (cVar2 == '\x03') {
        uVar6 = 0;
        if (uVar5 != 0) {
          do {
            iVar4 = func_0056C80C((int)param_1,(uint *)local_50,(undefined4 *)&local_58,uVar6);
            if (iVar4 == 0) {
              return 0;
            }
            puVar7 = (uint *)((int)param_1 + uVar6 * 0x2c + 0xa9a);
            func_001163A0(puVar7,(uint *)local_50,0x20);
            uVar10 = uVar6 + 1;
            *(undefined2 *)((int)param_1 + uVar6 * 0x2c + 0xaba) = local_30;
            *(undefined2 *)(param_1 + uVar6 * 0xb + 0x2af) = local_2e;
            *(undefined2 *)((int)param_1 + uVar6 * 0x2c + 0xabe) = local_2c;
            *(undefined2 *)(param_1 + uVar6 * 0xb + 0x2b0) = local_58;
            *(undefined2 *)((int)param_1 + uVar6 * 0x2c + 0xac2) = local_56;
            *(undefined2 *)(param_1 + uVar6 * 0xb + 0x2b1) = local_54;
            *(uint **)(param_2 + uVar6 * 4 + 0x18) = puVar7;
            uVar6 = uVar10;
          } while (uVar10 < uVar5);
        }
      }
      else if (uVar5 != 0) {
        uVar6 = uVar5 & 1;
        uVar10 = (uint)(uVar6 == 1);
        if (uVar6 == 1) {
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        for (; uVar6 < uVar5; uVar6 = uVar6 + 2) {
          iVar4 = uVar10 + 1;
          *(undefined4 *)(param_2 + uVar10 * 4 + 0x18) = 0;
          uVar10 = uVar10 + 2;
          *(undefined4 *)(param_2 + iVar4 * 4 + 0x18) = 0;
        }
      }
      iVar4 = 0;
      if (param_1[1] != 0) {
        iVar4 = func_0056AB0C(param_1[1]);
      }
      iVar4 = iVar4 + 8 + local_5c;
      uVar12 = func_00110710(local_84 - 1,local_78);
      uVar13 = func_00110710(local_88,local_78);
      (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],iVar4,0);
      param_1[0x11] = (int)uVar13;
      param_1[0x10] = (int)uVar12;
      param_1[0x12] = iVar4;
      param_1[0x13] = local_7c * uVar5 * (int)uVar13 + iVar4;
      param_1[0x14] = 0;
      if ((code *)param_1[0x30b] == (code *)0x0) {
        param_1[0x18] = 0;
      }
      else {
        local_a0[0] = 0;
        iVar4 = (*(code *)param_1[0x30b])(local_a0,param_1[0x30c]);
        if (iVar4 == 0) {
          return 0;
        }
        param_1[0x16] = local_a0[0];
        local_84 = *(int *)(param_1[6] + 0x18);
        param_1[0x18] = 0;
      }
      param_1[0x19] = local_84;
      param_1[0x17] = 0;
      func_0041336C((int)param_1);
      uVar8 = 1;
    }
  }
  return uVar8;
}


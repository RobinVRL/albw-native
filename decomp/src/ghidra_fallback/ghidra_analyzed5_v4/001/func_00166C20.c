#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001B6E54(int param_1,int param_2,int param_3,undefined4 param_4);
extern int func_003FD888(undefined4 *param_1,int *param_2);
extern int func_003FDD84(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00404550(int param_1);
extern int func_00407538(undefined4 *param_1,int *param_2,undefined4 *param_3);
extern int func_00407788(undefined4 *param_1);
extern int func_005689B4(int param_1);
extern int func_005689C4(int param_1);
extern int func_005689D8(int param_1);
extern int func_005689E8(int param_1);
extern int func_005807BC(int param_1,undefined4 param_2,int param_3,undefined *param_4);
extern int func_00689578(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_00166fd0;
extern undefined4 DAT_00166fe0;
extern undefined *DAT_00166fe4;
extern int DAT_00166fe8;
extern undefined4 DAT_001670dc;
extern undefined4 DAT_001670e0;
extern char s__s__s_bflan_00166fd4[];
extern char s_cf_00166fd4[];

// USA 00166C20 <- EU 00166C24 (Ghidra, non-matching)
// GLOBAL DAT_00166fd0 int *
// GLOBAL DAT_00166fe0 undefined4
// GLOBAL DAT_00166fe4 undefined *
// GLOBAL DAT_00166fe8 int
// GLOBAL DAT_001670dc undefined4
// GLOBAL DAT_001670e0 undefined4
// GLOBAL s_cf_00166fd4 string

void func_00166C20(int *param_1,uint param_2,int *param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_100 (*(undefined4 * *)(albw_frame + 0x0))
  #define local_f0 (*(int *)(albw_frame + 0x10))
  #define local_ec (*(int *)(albw_frame + 0x14))
  #define local_e8 (*(uint *)(albw_frame + 0x18))
  #define local_d8 (*(int *)(albw_frame + 0x28))
  #define local_d4 (*(int *)(albw_frame + 0x2c))
  #define auStack_d0 ((undefined4 *)(albw_frame + 0x30))
  #define piStack_34 (*(int * *)(albw_frame + 0xcc))
  #define uStack_30 (*(uint *)(albw_frame + 0xd0))
  #define piStack_2c (*(int * *)(albw_frame + 0xd4))
  #define local_28 (*(int *)(albw_frame + 0xd8))
  piVar12 = (int *)(*DAT_00166fd0 + 0x54);
  piStack_34 = param_1;
  uStack_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  (**(code **)(*param_3 + 8))(param_3);
  iVar13 = param_3[1];
  (**(code **)(param_1[9] + 8))(param_1 + 9);
  piVar3 = func_00689578(auStack_d0,s__s__s_bflan_00166fd4,param_1[10],iVar13);
  (**(code **)(*piVar3 + 8))(piVar3);
  piVar3 = (int *)(**(code **)(*piVar12 + 0xc))(piVar12,DAT_00166fe0,piVar3[1],0);
  if (param_2 < (uint)param_1[2]) {
    puVar14 = (undefined4 *)(param_1[3] + param_2 * 0x38);
  }
  else {
    puVar14 = (undefined4 *)param_1[3];
  }
  func_003FD888(puVar14,piVar3);
  local_100 = (undefined4 *)0x0;
  uVar1 = func_005689D8((int)puVar14);
  local_e8 = (uint)uVar1;
  if (local_e8 == 0) {
LAB_00166fec:
    puVar14[0xb] = 0;
  }
  else {
    iVar4 = func_005807BC((int)(param_1 + 5),puVar14,param_1[8],DAT_00166fe4);
    iVar13 = DAT_00166fe8;
    if ((iVar4 == 0) ||
       (local_100 = (undefined4 *)(iVar4 - param_1[8]), local_100 == (undefined4 *)0x0)) {
      iVar4 = 0;
      if (0 < (int)local_e8) {
LAB_00166d40:
        iVar5 = func_005689E8((int)puVar14);
        local_f0 = iVar13;
        iVar5 = iVar5 + iVar4 * 0x34;
        local_ec = iVar5 + 0x19;
        (**(code **)(iVar13 + 8))(&local_f0);
        iVar6 = func_003FDF90(*(int *)(*param_1 + 0x14),local_ec);
        if (iVar6 != 0) {
          iVar11 = 0;
          sVar2 = func_005689B4((int)puVar14);
          if (sVar2 != 0) {
            do {
              local_d4 = func_005689C4((int)puVar14);
              local_d8 = iVar13;
              local_d4 = local_d4 + iVar11 * 0x1c;
              (**(code **)(iVar13 + 8))(&local_d8);
              iVar7 = func_003FDF90(*(int *)(*param_1 + 0x14),local_d4);
              if (iVar7 == iVar6) {
                local_f0 = iVar13;
                piVar3 = *(int **)(*param_1 + 0x10);
                local_ec = iVar5;
                (**(code **)(iVar13 + 8))();
                piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,local_ec,1);
                if (piVar3 != (int *)0x0) {
                  if (local_100 == (undefined4 *)0x0) {
                    local_100 = (undefined4 *)func_0010BAB4(0x24);
                    if (local_100 != (undefined4 *)0x0) {
                      *local_100 = 0;
                      local_100[1] = 0;
                      uVar15 = puVar14[1];
                      uVar16 = puVar14[2];
                      uVar17 = puVar14[3];
                      local_100[2] = *puVar14;
                      local_100[3] = uVar15;
                      local_100[4] = uVar16;
                      local_100[5] = uVar17;
                      local_100[6] = 0;
                      local_100[7] = 0;
                      local_100[8] = 0;
                      func_0010B380(local_100 + 6,local_e8,(int *)0x0,4);
                    }
                    func_0010F1DC(param_1 + 5,(int *)(param_1[8] + (int)local_100));
                    param_1[7] = param_1[7] + 1;
                  }
                  uVar8 = 0;
                  if ((int)local_100[6] < 1) goto LAB_00166f14;
                  goto LAB_00166ee8;
                }
                break;
              }
              iVar11 = iVar11 + 1;
              uVar1 = func_005689B4((int)puVar14);
            } while (iVar11 < (int)(uint)uVar1);
          }
        }
        goto LAB_00166f74;
      }
      goto LAB_00166fec;
    }
LAB_00166f84:
    puVar14[0xb] = 0;
    iVar13 = 0;
    if (local_100 != (undefined4 *)0x0) {
      iVar13 = local_28;
    }
    if (local_100 != (undefined4 *)0x0 && iVar13 != 0) {
      puVar14[0xb] = local_100;
      piVar3 = func_001B6E54((int)local_100,*param_1,local_28,piVar12);
      puVar14[4] = piVar3;
      (**(code **)(*piVar3 + 0x10))(piVar3,0);
      goto LAB_00167030;
    }
  }
  piVar3 = (int *)func_00404550(*param_1);
  puVar14[4] = piVar3;
  (**(code **)(*piVar3 + 0x20))(piVar3,puVar14[1],piVar12);
  if (local_28 == 0) {
    iVar13 = 0;
    sVar2 = func_005689B4((int)puVar14);
    if (sVar2 != 0) {
      do {
        iVar4 = func_005689C4((int)puVar14);
        iVar4 = func_003FDF90(*(int *)(*param_1 + 0x14),iVar4 + iVar13 * 0x1c);
        func_003FDD84(iVar4,(int *)puVar14[4],0);
        iVar13 = iVar13 + 1;
        uVar1 = func_005689B4((int)puVar14);
      } while (iVar13 < (int)(uint)uVar1);
    }
  }
  else {
    func_003FDD84(local_28,(int *)puVar14[4],0);
  }
LAB_00167030:
  uVar16 = DAT_001670e0;
  uVar15 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(puVar14[1] + 8),(byte)(in_fpscr >> 0x15) & 3));
  puVar14[8] = uVar15;
  uVar15 = DAT_001670dc;
  *(bool *)(puVar14 + 10) = *(char *)(puVar14[1] + 10) == '\x01';
  puVar14[6] = uVar15;
  puVar14[5] = uVar15;
  puVar14[7] = uVar16;
  puVar14[9] = 0;
  return;
  while (uVar8 = uVar8 + 1, (int)uVar8 < (int)local_100[6]) {
LAB_00166ee8:
    if (uVar8 < (uint)local_100[6]) {
      iVar5 = *(int *)(local_100[8] + uVar8 * 4);
    }
    else {
      iVar5 = 0;
    }
    if (*(int **)(iVar5 + 0x44) == piVar3) goto LAB_00166f74;
  }
LAB_00166f14:
  puVar9 = (undefined4 *)func_0010BAB4(0x48);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = func_00407788(puVar9);
    puVar10[0xf] = 0;
    puVar10[0x11] = piVar3;
    puVar10[0x10] = 0;
  }
  func_00407538(puVar10,piVar3,local_100 + 2);
  if ((int)local_100[6] < (int)local_100[7]) {
    *(undefined4 **)(local_100[8] + local_100[6] * 4) = puVar10;
    local_100[6] = local_100[6] + 1;
  }
LAB_00166f74:
  iVar4 = iVar4 + 1;
  if ((int)local_e8 <= iVar4) goto LAB_00166f84;
  goto LAB_00166d40;
}


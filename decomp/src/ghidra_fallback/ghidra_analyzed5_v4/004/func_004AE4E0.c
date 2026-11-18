#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_004AF2A0(int *param_1,int param_2,undefined1 param_3,undefined4 param_4);
extern int func_004AF390(undefined4 *param_1);
extern int func_004AF3B0(undefined4 param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_0056122C(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_0058FA5C();
extern int func_00687F18(undefined4 param_1,int *param_2,int *param_3);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0069149C(undefined4 param_1,int param_2,int *param_3,uint param_4);
extern int DAT_004ae7ac;
extern int DAT_004ae7b0;
extern int DAT_004ae7bc;
extern char s__s_msbt_004ae7b4[];
extern char s_cf_004ae7b4[];

// USA 004AE4E0 <- EU 004AE4B8 (Ghidra, non-matching)
// GLOBAL DAT_004ae7ac int
// GLOBAL DAT_004ae7b0 int
// GLOBAL DAT_004ae7bc int
// GLOBAL s_cf_004ae7b4 string

void func_004AE4E0(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_r1;
  int iVar6;
  uint in_r3;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define auStack_b4 ((undefined4 *)(albw_frame + 0xc))
  #define local_68 (*(int *)(albw_frame + 0x58))
  #define local_5c (*(int *)(albw_frame + 0x64))
  #define local_58 ((uint * *)(albw_frame + 0x68))
  #define local_4c (*(int *)(albw_frame + 0x74))
  #define local_48 (*(uint * *)(albw_frame + 0x78))
  #define local_44 (*(int * *)(albw_frame + 0x7c))
  #define local_40 (*(int *)(albw_frame + 0x80))
  #define local_3c (*(uint * *)(albw_frame + 0x84))
  #define aiStack_38 ((int *)(albw_frame + 0x88))
  #define aiStack_30 ((int *)(albw_frame + 0x90))
  if (*(int *)(param_1 + 0x54) == 0) {
    func_003C7A20(aiStack_30,*(short **)(*(int *)(param_1 + 0x10) + 0x14));
    func_003C7A70(aiStack_38);
    (**(code **)(*param_2 + 8))(param_2);
    bVar1 = func_00560EF8(aiStack_30,aiStack_38,(uint *)param_2[1]);
    if (bVar1) {
      uVar2 = func_0056128C((int)aiStack_38);
      if (0 < (int)uVar2) {
        in_r3 = 0x54;
        iVar3 = func_0010CEE0(uVar2 * 0x54,(int *)0x0,4);
        if (iVar3 != 0) {
          uVar8 = uVar2 - 1;
          *(uint *)(param_1 + 0x5c) = uVar2;
          uVar7 = in_r3;
          iVar6 = extraout_r1;
          if (0 < (int)uVar8) {
            iVar6 = 0;
            uVar7 = uVar8;
          }
          *(int *)(param_1 + 0x50) = iVar3;
          in_r3 = uVar7;
          if (0 < (int)uVar8) {
            do {
              uVar7 = uVar7 - 1;
              *(int *)(iVar3 + iVar6 * 4) = iVar3 + (iVar6 + 0x15) * 4;
              iVar6 = iVar6 + 0x15;
              in_r3 = 0;
            } while (uVar7 != 0);
          }
          *(undefined4 *)(iVar3 + uVar8 * 0x54) = 0;
          *(int *)(param_1 + 0x54) = iVar3;
        }
      }
      iVar3 = 0;
      if (0 < (int)uVar2) {
        local_5c = DAT_004ae7ac;
        local_68 = DAT_004ae7b0;
        do {
          local_58[0] = (uint *)0x0;
          iVar6 = func_0056122C(aiStack_38,(int *)local_58,iVar3);
          if (iVar6 != 0) {
            func_00689794(auStack_b4,s__s_msbt_004ae7b4,(uint)local_58[0],in_r3);
            puVar4 = (undefined4 *)func_0010CF28(0x10,(int *)0x0,4);
            if (puVar4 == (undefined4 *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = func_004AF390(puVar4);
            }
            in_r3 = 0;
            iVar6 = func_004AF2A0(piVar10,(int)auStack_b4,3,0);
            if (iVar6 == 0) {
              if (piVar10 != (int *)0x0) {
                iVar6 = func_004AF3B0(piVar10);
                func_0058FA5C(iVar6);
              }
              piVar10 = (int *)0x0;
            }
            if (piVar10 != (int *)0x0) {
              piVar9 = (int *)(param_1 + 0x4c);
              local_40 = local_68;
              local_3c = local_58[0];
              if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x5c)) {
                piVar5 = *(int **)(param_1 + 0x50);
                if (piVar5 == (int *)0x0) {
                  piVar5 = (int *)0x0;
                }
                else {
                  puVar11 = (uint *)(piVar5 + 8);
                  *(int *)(param_1 + 0x50) = *piVar5;
                  piVar5[4] = local_68;
                  piVar5[5] = DAT_004ae7bc;
                  piVar5[1] = 0;
                  piVar5[2] = 0;
                  *(undefined1 *)(piVar5 + 3) = 1;
                  *piVar5 = local_5c;
                  piVar5[7] = (int)piVar9;
                  piVar5[6] = (int)piVar10;
                  local_4c = 0x31;
                  *(undefined1 *)(piVar5 + 0x14) = 0;
                  local_44 = &local_40;
                  (**(code **)(local_68 + 8))(&local_40);
                  uVar7 = 0;
                  do {
                    if (*(char *)((int)local_3c + uVar7) == '\0') {
                      if ((int)uVar7 < 0x40001) goto LAB_004ae714;
                      break;
                    }
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < 0x40001);
                  uVar7 = 0;
LAB_004ae714:
                  if (local_4c <= (int)uVar7) {
                    uVar7 = local_4c - 1;
                  }
                  local_48 = puVar11;
                  (**(code **)(local_40 + 8))(local_44);
                  func_0010E3C4(local_48,local_3c,uVar7);
                  *(undefined1 *)((int)puVar11 + uVar7) = 0;
                  piVar5[5] = (int)puVar11;
                }
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
                piVar10 = func_00687F18(piVar9,(int *)*piVar9,piVar5);
                *piVar9 = (int)piVar10;
                *(undefined1 *)(piVar10 + 3) = 0;
              }
              else {
                iVar6 = func_0069149C(piVar9,*piVar9,&local_40,in_r3);
                if ((iVar6 != 0) && ((undefined4 *)(iVar6 + 0x18) != (undefined4 *)0x0)) {
                  *(undefined4 *)(iVar6 + 0x18) = piVar10;
                }
              }
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
    }
  }
  return;
}


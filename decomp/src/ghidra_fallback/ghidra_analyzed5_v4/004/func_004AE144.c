#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
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
extern int DAT_004ae480;
extern int DAT_004ae484;
extern undefined4 DAT_004ae488;
extern int *DAT_004ae4a0;
extern undefined DAT_004ae4a4;
extern int DAT_004ae4ac;
extern char s_Byaml_Message_byaml_004ae48c[];
extern char s__s_msbt_004ae4b0[];
extern char s_cf_004ae48c[];
extern char s_cf_004ae4b0[];

// USA 004AE144 <- EU 004AE11C (Ghidra, non-matching)
// GLOBAL DAT_004ae480 int
// GLOBAL DAT_004ae484 int
// GLOBAL DAT_004ae488 undefined4
// GLOBAL DAT_004ae4a0 int *
// GLOBAL DAT_004ae4a4 undefined
// GLOBAL DAT_004ae4ac int
// GLOBAL s_cf_004ae4b0 string
// GLOBAL s_cf_004ae48c string

void func_004AE144(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int extraout_r1;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_f4 (*(int *)(albw_frame + 0xc))
  #define local_f0 (*(char * *)(albw_frame + 0x10))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_cc (*(undefined4 *)(albw_frame + 0x34))
  #define local_c8 (*(int *)(albw_frame + 0x38))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_c0 (*(undefined1 *)(albw_frame + 0x40))
  #define local_bf (*(undefined1 *)(albw_frame + 0x41))
  #define local_be (*(undefined1 *)(albw_frame + 0x42))
  #define local_bd (*(undefined1 *)(albw_frame + 0x43))
  #define local_bc (*(undefined1 *)(albw_frame + 0x44))
  #define local_ac (*(uint * *)(albw_frame + 0x54))
  #define local_a8 (*(int *)(albw_frame + 0x58))
  #define local_a4 (*(uint * *)(albw_frame + 0x5c))
  #define local_a0 (*(uint * *)(albw_frame + 0x60))
  #define auStack_9c ((undefined4 *)(albw_frame + 0x64))
  #define local_50 (*(uint * *)(albw_frame + 0xb0))
  #define local_48 (*(int * *)(albw_frame + 0xb8))
  #define local_40 (*(int *)(albw_frame + 0xc0))
  #define local_3c (*(uint * *)(albw_frame + 0xc4))
  #define aiStack_38 ((int *)(albw_frame + 0xc8))
  #define aiStack_30 ((int *)(albw_frame + 0xd0))
  iVar1 = DAT_004ae484;
  local_f4 = DAT_004ae484;
  uStack_ec = 0;
  local_e8 = 0;
  local_e4 = 0x20;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_c4 = DAT_004ae488;
  local_c0 = 7;
  local_dc = 0;
  local_c8 = DAT_004ae484;
  local_bf = 4;
  local_f0 = s_Byaml_Message_byaml_004ae48c;
  local_bd = 0;
  local_be = 0xe;
  local_d0 = 0;
  local_cc = 0;
  local_bc = 1;
  puVar3 = func_001E1EDC(*DAT_004ae4a0,&local_f4);
  *(undefined4 **)(param_1 + 0x10) = puVar3;
  func_003C7A20(aiStack_30,(short *)puVar3[5]);
  func_003C7A70(aiStack_38);
  bVar2 = func_00560EF8(aiStack_30,aiStack_38,(uint *)&DAT_004ae4a4);
  if (bVar2) {
    uVar4 = func_0056128C((int)aiStack_38);
    if (0 < (int)uVar4) {
      param_4 = 0x54;
      iVar5 = func_0010CEE0(uVar4 * 0x54,(int *)0x0,4);
      if (iVar5 != 0) {
        uVar11 = uVar4 - 1;
        *(uint *)(param_1 + 0x48) = uVar4;
        uVar8 = param_4;
        iVar7 = extraout_r1;
        if (0 < (int)uVar11) {
          iVar7 = 0;
          uVar8 = uVar11;
        }
        *(int *)(param_1 + 0x3c) = iVar5;
        param_4 = uVar8;
        if (0 < (int)uVar11) {
          do {
            uVar8 = uVar8 - 1;
            *(int *)(iVar5 + iVar7 * 4) = iVar5 + (iVar7 + 0x15) * 4;
            iVar7 = iVar7 + 0x15;
            param_4 = 0;
          } while (uVar8 != 0);
        }
        *(undefined4 *)(iVar5 + uVar11 * 0x54) = 0;
        *(int *)(param_1 + 0x40) = iVar5;
      }
    }
    iVar5 = 0;
    if (0 < (int)uVar4) {
      local_a8 = DAT_004ae4ac;
      do {
        local_ac = (uint *)0x0;
        iVar7 = func_0056122C(aiStack_38,(int *)&local_ac,iVar5);
        if (iVar7 != 0) {
          func_00689794(auStack_9c,s__s_msbt_004ae4b0,(uint)local_ac,param_4);
          puVar3 = (undefined4 *)func_0010CF28(0x10,(int *)0x0,4);
          if (puVar3 == (undefined4 *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = func_004AF390(puVar3);
          }
          param_4 = 0;
          iVar7 = func_004AF2A0(piVar10,(int)auStack_9c,1,0);
          if (iVar7 == 0) {
            if (piVar10 != (int *)0x0) {
              iVar7 = func_004AF3B0(piVar10);
              func_0058FA5C(iVar7);
            }
            piVar10 = (int *)0x0;
          }
          if (piVar10 != (int *)0x0) {
            piVar9 = (int *)(param_1 + 0x38);
            local_40 = iVar1;
            local_3c = local_ac;
            if (*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x48)) {
              piVar6 = *(int **)(param_1 + 0x3c);
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                *(int *)(param_1 + 0x3c) = *piVar6;
                iVar7 = DAT_004ae480;
                piVar6[4] = iVar1;
                piVar6[5] = iVar7;
                piVar6[1] = 0;
                piVar6[2] = 0;
                *(undefined1 *)(piVar6 + 3) = 1;
                local_a4 = (uint *)(piVar6 + 8);
                *piVar6 = local_a8;
                piVar6[7] = (int)piVar9;
                piVar6[6] = (int)piVar10;
                local_50 = (uint *)0x31;
                *(undefined1 *)(piVar6 + 0x14) = 0;
                local_a0 = local_a4;
                local_48 = &local_40;
                (**(code **)(iVar1 + 8))(&local_40);
                uVar8 = 0;
                do {
                  if (*(char *)((int)local_3c + uVar8) == '\0') {
                    if ((int)uVar8 < 0x40001) goto LAB_004ae3dc;
                    break;
                  }
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < 0x40001);
                uVar8 = 0;
LAB_004ae3dc:
                if ((int)local_50 <= (int)uVar8) {
                  uVar8 = (int)local_50 - 1;
                }
                local_50 = local_a0;
                (**(code **)(local_40 + 8))(local_48);
                func_0010E3C4(local_50,local_3c,uVar8);
                *(undefined1 *)((int)local_a0 + uVar8) = 0;
                piVar6[5] = (int)local_a4;
              }
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
              piVar10 = func_00687F18(piVar9,(int *)*piVar9,piVar6);
              *piVar9 = (int)piVar10;
              *(undefined1 *)(piVar10 + 3) = 0;
            }
            else {
              iVar7 = func_0069149C(piVar9,*piVar9,&local_40,param_4);
              if ((iVar7 != 0) && ((undefined4 *)(iVar7 + 0x18) != (undefined4 *)0x0)) {
                *(undefined4 *)(iVar7 + 0x18) = piVar10;
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  return;
}


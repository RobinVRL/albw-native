#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164A8(undefined4 *param_1,uint param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056122C(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_00687F18(undefined4 param_1,int *param_2,int *param_3);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0069149C(undefined4 param_1,int param_2,int *param_3,uint param_4);
extern uint *DAT_004aebf8;
extern uint DAT_004aebfc;
extern undefined4 DAT_004aec00;
extern int *DAT_004aec1c;
extern undefined DAT_004aec28;
extern uint *DAT_004aec30;
extern undefined *DAT_004aec34;
extern uint DAT_004aec38;
extern uint DAT_004aec44;
extern undefined DAT_004aefc0;
extern undefined DAT_004aefc8;
extern undefined4 DAT_004aefd0;
extern int DAT_004aefd4;
extern char s_Byaml_FlowChart_byaml_004aec04[];
extern char s_Entry_004aec3c[];
extern char s_Table_004aec20[];
extern char s_cf_004aec04[];

// USA 004AE81C <- EU 004AE7F4 (Ghidra, non-matching)
// GLOBAL DAT_004aebf8 uint *
// GLOBAL DAT_004aebfc uint
// GLOBAL DAT_004aec00 undefined4
// GLOBAL DAT_004aec1c int *
// GLOBAL DAT_004aec28 undefined
// GLOBAL DAT_004aec30 uint *
// GLOBAL DAT_004aec34 undefined *
// GLOBAL DAT_004aec38 uint
// GLOBAL DAT_004aec44 uint
// GLOBAL DAT_004aefc0 undefined
// GLOBAL DAT_004aefc8 undefined
// GLOBAL DAT_004aefd0 undefined4
// GLOBAL DAT_004aefd4 int
// GLOBAL s_cf_004aec04 string
// GLOBAL s_Entry_004aec3c string
// GLOBAL s_Table_004aec20 string

void func_004AE81C(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint unaff_r10;
  uint uVar15;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_128 (*(uint * *)(albw_frame + 0x8))
  #define local_124 (*(uint *)(albw_frame + 0xc))
  #define local_120 (*(uint *)(albw_frame + 0x10))
  #define local_11c (*(uint * *)(albw_frame + 0x14))
  #define local_118 (*(char * *)(albw_frame + 0x18))
  #define local_114 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_110 (*(undefined4 *)(albw_frame + 0x20))
  #define local_10c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_108 (*(undefined4 *)(albw_frame + 0x28))
  #define local_104 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x30))
  #define local_fc (*(undefined4 *)(albw_frame + 0x34))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_f4 (*(undefined4 *)(albw_frame + 0x3c))
  #define puStack_f0 (*(uint * *)(albw_frame + 0x40))
  #define local_ec (*(undefined4 *)(albw_frame + 0x44))
  #define local_e8 (*(undefined1 *)(albw_frame + 0x48))
  #define local_e7 (*(undefined1 *)(albw_frame + 0x49))
  #define local_e6 (*(undefined1 *)(albw_frame + 0x4a))
  #define local_e5 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_e4 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_e0 (*(uint * *)(albw_frame + 0x50))
  #define local_dc (*(uint * *)(albw_frame + 0x54))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x58))
  #define local_d4 (*(uint * *)(albw_frame + 0x5c))
  #define local_d0 (*(uint * *)(albw_frame + 0x60))
  #define local_cc (*(uint * *)(albw_frame + 0x64))
  #define local_c8 (*(uint * *)(albw_frame + 0x68))
  #define local_c4 (*(uint * *)(albw_frame + 0x6c))
  #define local_c0 (*(uint ** *)(albw_frame + 0x70))
  #define local_bc (*(uint * *)(albw_frame + 0x74))
  #define local_b8 (*(uint * *)(albw_frame + 0x78))
  #define local_b4 (*(uint * *)(albw_frame + 0x7c))
  #define local_b0 (*(int *)(albw_frame + 0x80))
  #define local_ac (*(undefined1 *)(albw_frame + 0x84))
  #define local_ab (*(undefined1 *)(albw_frame + 0x85))
  #define local_aa (*(undefined1 *)(albw_frame + 0x86))
  #define local_a9 (*(undefined1 *)(albw_frame + 0x87))
  #define local_a8 (*(undefined1 *)(albw_frame + 0x88))
  #define local_a0 (*(uint *)(albw_frame + 0x90))
  #define local_9c (*(uint *)(albw_frame + 0x94))
  #define aiStack_98 ((int *)(albw_frame + 0x98))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0xa0))
  #define local_8c (*(uint * *)(albw_frame + 0xa4))
  #define aiStack_40 ((int *)(albw_frame + 0xf0))
  #define aiStack_38 ((int *)(albw_frame + 0xf8))
  #define aiStack_30 ((int *)(albw_frame + 0x100))
  #define local_28 (*(int *)(albw_frame + 0x108))
  puVar1 = DAT_004aebf8;
  local_114 = 0;
  local_11c = DAT_004aebf8;
  local_110 = 0;
  local_10c = 0x20;
  uStack_108 = 0;
  local_100 = 0;
  local_104 = 0;
  local_ec = DAT_004aec00;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  puStack_f0 = DAT_004aebf8;
  local_e8 = 7;
  local_118 = s_Byaml_FlowChart_byaml_004aec04;
  local_e7 = 4;
  local_e4 = 1;
  local_e5 = 0;
  local_e6 = 0xe;
  local_28 = param_1;
  puVar3 = func_001E1EDC(*DAT_004aec1c,(int *)&local_11c);
  *(undefined4 **)(local_28 + 0x14) = puVar3;
  func_003C7A20(aiStack_38,(short *)puVar3[5]);
  func_003C7A70(aiStack_40);
  func_00560EF8(aiStack_38,aiStack_40,(uint *)s_Table_004aec20);
  func_003C7A70(aiStack_98);
  bVar2 = func_00560EF8(aiStack_40,aiStack_98,(uint *)&DAT_004aec28);
  local_128 = DAT_004aec30;
  if (bVar2) {
    puVar4 = (uint *)func_0056128C((int)aiStack_98);
    if (0 < (int)puVar4) {
      iVar5 = func_0010CEE0((int)puVar4 * 8,(int *)0x0,4);
      iVar6 = 0;
      if (iVar5 != 0) {
        param_4 = puVar4;
        iVar6 = func_00100118(iVar5,DAT_004aec34,8,(int)puVar4);
      }
      if (iVar6 != 0) {
        *(uint **)(local_28 + 0x1c) = puVar4;
        *(int *)(local_28 + 0x20) = iVar6;
      }
    }
    uVar12 = 0;
    if (0 < (int)puVar4) {
      local_120 = DAT_004aec38;
      do {
        local_cc = (uint *)0x0;
        iVar6 = func_0056122C(aiStack_98,(int *)&local_cc,uVar12);
        if (iVar6 != 0) {
          puVar7 = (uint *)func_0010BAB4(0xc);
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          else {
            local_c4 = (uint *)0x0;
            local_e0 = puVar1;
            local_dc = local_cc;
            (*(code *)puVar1[2])(&local_e0);
            iVar6 = 0;
            do {
              param_4 = (uint *)(uint)*(byte *)((int)local_dc + iVar6);
              if (param_4 == (uint *)0x0) {
                if (iVar6 < 0x40001) goto LAB_004ae9c8;
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x40001);
            iVar6 = 0;
LAB_004ae9c8:
            puVar8 = (undefined4 *)func_0010CEE0(iVar6 + 1U,(int *)local_c4,4);
            puVar3 = (undefined4 *)0x0;
            if (puVar8 != (undefined4 *)0x0) {
              puVar3 = func_001164A8(puVar8,0,iVar6 + 1U);
            }
            (*(code *)local_e0[2])(&local_e0);
            iVar6 = 0;
            do {
              if (*(char *)((int)local_dc + iVar6) == '\0') {
                if (iVar6 < 0x40001) goto LAB_004aea38;
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x40001);
            iVar6 = 0;
LAB_004aea38:
            puVar7[1] = (uint)puVar3;
            puVar7[2] = iVar6 + 1U;
            *puVar7 = (uint)local_128;
            if ((int)(iVar6 + 1U) < 1) {
              puVar7[1] = 0;
              puVar7[2] = 0;
            }
            else {
              *(undefined1 *)((int)puVar3 + iVar6) = 0;
            }
            *puVar7 = local_120;
            local_c4 = (uint *)puVar7[1];
            (*(code *)local_e0[2])(&local_e0);
            unaff_r10 = 0;
            do {
              if (*(char *)((int)local_dc + unaff_r10) == '\0') {
                if ((int)unaff_r10 < 0x40001) goto LAB_004aeab4;
                break;
              }
              unaff_r10 = unaff_r10 + 1;
            } while ((int)unaff_r10 < 0x40001);
            unaff_r10 = 0;
LAB_004aeab4:
            if ((int)puVar7[2] <= (int)unaff_r10) {
              unaff_r10 = puVar7[2] - 1;
            }
            local_bc = local_c4;
            (*(code *)local_e0[2])(&local_e0);
            func_0010E3C4(local_bc,local_dc,unaff_r10);
            *(undefined1 *)((int)local_c4 + unaff_r10) = 0;
          }
          if (uVar12 < *(uint *)(local_28 + 0x1c)) {
            puVar3 = (undefined4 *)(*(int *)(local_28 + 0x20) + uVar12 * 8);
          }
          else {
            puVar3 = *(undefined4 **)(local_28 + 0x20);
          }
          *puVar3 = puVar7;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)puVar4);
    }
  }
  bVar2 = func_00560EF8(aiStack_40,aiStack_98,(uint *)s_Entry_004aec3c);
  if (bVar2) {
    uVar12 = func_0056128C((int)aiStack_98);
    if (0 < (int)uVar12) {
      param_4 = (uint *)0x54;
      iVar6 = func_0010CEE0(uVar12 * 0x54,(int *)0x0,4);
      if (iVar6 != 0) {
        puVar7 = (uint *)(uVar12 - 1);
        *(uint *)(local_28 + 0x34) = uVar12;
        puVar4 = param_4;
        if (0 < (int)puVar7) {
          puVar4 = puVar7;
        }
        *(int *)(local_28 + 0x28) = iVar6;
        param_4 = puVar4;
        if (0 < (int)puVar7) {
          iVar5 = 0;
          do {
            puVar4 = (uint *)((int)puVar4 + -1);
            *(int *)(iVar6 + iVar5 * 4) = iVar6 + (iVar5 + 0x15) * 4;
            iVar5 = iVar5 + 0x15;
            param_4 = (uint *)0x0;
          } while (puVar4 != (uint *)0x0);
        }
        *(undefined4 *)(iVar6 + (int)puVar7 * 0x54) = 0;
        *(int *)(local_28 + 0x2c) = iVar6;
      }
    }
    if (0 < (int)uVar12) {
      unaff_r10 = DAT_004aec44;
    }
    iVar6 = 0;
    if (0 < (int)uVar12) {
      do {
        func_003C7A70(&local_b0);
        bVar2 = func_005610A8(aiStack_98,&local_b0,iVar6);
        if (bVar2) {
          local_d4 = (uint *)0x0;
          iVar5 = func_0056122C(&local_b0,(int *)&local_d4,0);
          if (iVar5 != 0) {
            local_120 = 0;
            iVar9 = func_00560FA0((int)&local_b0,&local_120,1);
            iVar5 = local_28;
            if (iVar9 != 0) {
              local_b8 = puVar1;
              piVar13 = (int *)(local_28 + 0x24);
              local_b4 = local_d4;
              if (*(int *)(local_28 + 0x30) < *(int *)(local_28 + 0x34)) {
                puVar4 = *(uint **)(local_28 + 0x28);
                if (puVar4 == (uint *)0x0) {
                  puVar4 = (uint *)0x0;
                }
                else {
                  param_4 = puVar4 + 6;
                  *(uint *)(local_28 + 0x28) = *puVar4;
                  uVar15 = DAT_004aebfc;
                  puVar4[4] = (uint)puVar1;
                  puVar4[5] = uVar15;
                  puVar4[1] = 0;
                  puVar4[2] = 0;
                  *(undefined1 *)(puVar4 + 3) = 1;
                  *puVar4 = unaff_r10;
                  local_d0 = puVar4 + 8;
                  *param_4 = local_120;
                  puVar4[7] = (uint)piVar13;
                  local_c8 = (uint *)0x31;
                  *(undefined1 *)(puVar4 + 0x14) = 0;
                  local_cc = local_d0;
                  local_c0 = &local_b8;
                  (*(code *)puVar1[2])(&local_b8);
                  uVar15 = 0;
                  do {
                    if (*(char *)((int)local_b4 + uVar15) == '\0') {
                      if ((int)uVar15 < 0x40001) goto LAB_004aed50;
                      break;
                    }
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 < 0x40001);
                  uVar15 = 0;
LAB_004aed50:
                  if ((int)local_c8 <= (int)uVar15) {
                    uVar15 = (int)local_c8 - 1;
                  }
                  local_c8 = local_d0;
                  (*(code *)local_b8[2])(local_c0);
                  func_0010E3C4(local_c8,local_b4,uVar15);
                  *(undefined1 *)((int)local_d0 + uVar15) = 0;
                  puVar4[5] = (uint)local_cc;
                }
                *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + 1;
                piVar10 = func_00687F18(piVar13,(int *)*piVar13,(int *)puVar4);
                *piVar13 = (int)piVar10;
                *(undefined1 *)(piVar10 + 3) = 0;
              }
              else {
                puVar4 = (uint *)func_0069149C(piVar13,*piVar13,(int *)&local_b8,(uint)param_4);
                bVar2 = puVar4 == (uint *)0x0;
                if (!bVar2) {
                  puVar4 = puVar4 + 6;
                  bVar2 = puVar4 == (uint *)0x0;
                }
                if (!bVar2) {
                  *puVar4 = local_120;
                }
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar12);
    }
  }
  func_003C7A70(aiStack_30);
  func_00560EF8(aiStack_38,aiStack_30,(uint *)&DAT_004aefc0);
  bVar2 = func_00560EF8(aiStack_30,aiStack_98,(uint *)&DAT_004aefc8);
  if (bVar2) {
    local_a0 = func_0056128C((int)aiStack_98);
    iVar6 = 0;
    if (0 < (int)local_a0) {
      do {
        iVar9 = 0;
        local_9c = 0;
        iVar5 = func_0056122C(aiStack_98,(int *)&local_9c,iVar6);
        if (iVar5 != 0) {
          local_128 = puVar1;
          local_124 = local_9c;
          (*(code *)puVar1[2])(&local_128);
          func_00689794(&uStack_90,DAT_004aefd0,local_124,param_4);
          local_d8 = 0;
          local_e0 = puVar1;
          local_d4 = (uint *)0x0;
          local_d0 = (uint *)0x20;
          local_cc = (uint *)0x0;
          local_c8 = (uint *)0x0;
          local_c4 = (uint *)0x0;
          local_c0 = (uint **)0x0;
          local_bc = (uint *)0x0;
          local_b8 = (uint *)0x0;
          local_b4 = puVar1;
          local_ac = 7;
          local_a9 = 0;
          local_b0 = DAT_004aefd4;
          local_ab = 0;
          local_aa = 0xe;
          local_dc = local_8c;
          local_a8 = 0;
          func_001E1EDC(*DAT_004aec1c,(int *)&local_e0);
          local_128 = puVar1;
          local_124 = local_9c;
          iVar14 = *(int *)(local_28 + 0x1c);
          iVar5 = *(int *)(local_28 + 0x20);
          if (iVar14 != 0) {
            do {
              piVar13 = *(int **)(iVar5 + iVar9 * 8);
              (**(code **)(*piVar13 + 8))(piVar13);
              (**(code **)(*piVar13 + 8))(piVar13);
              uVar12 = piVar13[1];
              (*(code *)local_128[2])(&local_128);
              if (uVar12 == local_124) {
LAB_004aefb0:
                *(undefined1 *)(iVar5 + iVar9 * 8 + 4) = 0;
                break;
              }
              param_4 = (uint *)piVar13[1];
              iVar11 = 0;
              do {
                if (*(char *)((int)param_4 + iVar11) != *(char *)(local_124 + iVar11)) break;
                if (*(char *)((int)param_4 + iVar11) == '\0') goto LAB_004aefb0;
                iVar11 = iVar11 + 1;
              } while (iVar11 < 0x40001);
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar14);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_a0);
    }
  }
  return;
}


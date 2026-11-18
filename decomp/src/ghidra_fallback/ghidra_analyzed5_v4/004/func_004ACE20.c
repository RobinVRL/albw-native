#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_00687F18(undefined4 param_1,int *param_2,int *param_3);
extern int DAT_004ad150;
extern int DAT_004ad154;
extern undefined4 DAT_004ad158;
extern int *DAT_004ad170;
extern uint DAT_004ad174;
extern int DAT_004ad178;
extern undefined DAT_004ad17c;
extern uint *DAT_004ad184;
extern char s_Byaml_MapIcon_byaml_004ad15c[];
extern char s_Param_004ad188[];
extern char s_cf_004ad15c[];

// USA 004ACE20 <- EU 004ACDF8 (Ghidra, non-matching)
// GLOBAL DAT_004ad150 int
// GLOBAL DAT_004ad154 int
// GLOBAL DAT_004ad158 undefined4
// GLOBAL DAT_004ad170 int *
// GLOBAL DAT_004ad174 uint
// GLOBAL DAT_004ad178 int
// GLOBAL DAT_004ad17c undefined
// GLOBAL DAT_004ad184 uint *
// GLOBAL s_cf_004ad15c string
// GLOBAL s_Param_004ad188 string

void func_004ACE20(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint in_r12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(uint *)(albw_frame + 0x8))
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define iStack_d0 (*(int *)(albw_frame + 0x10))
  #define local_cc (*(char * *)(albw_frame + 0x14))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a4 (*(int *)(albw_frame + 0x3c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined1 *)(albw_frame + 0x44))
  #define local_9b (*(undefined1 *)(albw_frame + 0x45))
  #define local_9a (*(undefined1 *)(albw_frame + 0x46))
  #define local_99 (*(undefined1 *)(albw_frame + 0x47))
  #define local_98 (*(undefined1 *)(albw_frame + 0x48))
  #define local_88 (*(int *)(albw_frame + 0x58))
  #define local_84 (*(uint * *)(albw_frame + 0x5c))
  #define local_70 (*(int *)(albw_frame + 0x70))
  #define local_68 (*(int * *)(albw_frame + 0x78))
  #define local_60 (*(int * *)(albw_frame + 0x80))
  #define local_5c (*(uint * *)(albw_frame + 0x84))
  #define aiStack_58 ((int *)(albw_frame + 0x88))
  #define aiStack_50 ((int *)(albw_frame + 0x90))
  #define aiStack_48 ((int *)(albw_frame + 0x98))
  local_d4 = DAT_004ad154;
  iStack_d0 = DAT_004ad154;
  uStack_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x20;
  uStack_bc = 0;
  local_ac = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = DAT_004ad154;
  uStack_a0 = DAT_004ad158;
  local_9c = 7;
  local_cc = s_Byaml_MapIcon_byaml_004ad15c;
  local_9b = 4;
  local_9a = 0;
  local_99 = 0;
  local_98 = 1;
  puVar3 = func_001E1EDC(*DAT_004ad170,&iStack_d0);
  func_003C7A20(aiStack_48,(short *)puVar3[5]);
  uVar4 = func_0056128C((int)aiStack_48);
  iVar12 = 0;
  if (0 < (int)uVar4) {
    local_60 = (int *)(param_1 + 0x5b70);
    local_70 = DAT_004ad178;
    uVar11 = DAT_004ad174;
    do {
      func_003C7A70(aiStack_50);
      bVar2 = func_005610A8(aiStack_48,aiStack_50,iVar12);
      uVar15 = uVar11;
      if (bVar2) {
        local_5c = (uint *)0x0;
        iVar5 = func_00561114(aiStack_50,(int *)&local_5c,(uint *)&DAT_004ad17c);
        uVar15 = uVar11;
        if (iVar5 != 0) {
          uVar13 = *DAT_004ad184;
          uVar14 = DAT_004ad184[1];
          func_003C7A70(aiStack_58);
          bVar2 = func_00560EF8(aiStack_50,aiStack_58,(uint *)s_Param_004ad188);
          if (bVar2) {
            local_d8 = uVar11;
            iVar5 = func_00561184((int)aiStack_58,&local_d8,0);
            if (iVar5 != 0) {
              uVar11 = local_d8;
            }
            iVar5 = func_00561184((int)aiStack_58,&local_d8,1);
            if (iVar5 != 0) {
              uVar13 = local_d8;
            }
            iVar5 = func_00561184((int)aiStack_58,&local_d8,2);
            if (iVar5 != 0) {
              uVar14 = local_d8;
            }
          }
          piVar1 = local_60;
          iVar5 = DAT_004ad150;
          local_88 = local_d4;
          local_84 = local_5c;
          if (local_60[3] < local_60[4]) {
            piVar10 = (int *)local_60[1];
            if (piVar10 != (int *)0x0) {
              local_60[1] = *piVar10;
              piVar10[4] = local_d4;
              piVar10[5] = iVar5;
              piVar10[1] = 0;
              piVar10[2] = 0;
              *(undefined1 *)(piVar10 + 3) = 1;
              puVar7 = (uint *)(piVar10 + 10);
              *piVar10 = local_70;
              piVar10[8] = uVar11;
              piVar10[6] = uVar13;
              piVar10[7] = uVar14;
              piVar10[9] = (int)local_60;
              *(undefined1 *)(piVar10 + 0x1a) = 0;
              local_68 = &local_88;
              (**(code **)(local_d4 + 8))(&local_88);
              uVar11 = 0;
              do {
                if (*(char *)((int)local_84 + uVar11) == '\0') {
                  if ((int)uVar11 < 0x40001) goto LAB_004ad044;
                  break;
                }
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < 0x40001);
              uVar11 = 0;
LAB_004ad044:
              if (0x40 < (int)uVar11) {
                uVar11 = 0x40;
              }
              (**(code **)(local_88 + 8))(local_68);
              func_0010E3C4(puVar7,local_84,uVar11);
              *(undefined1 *)((int)puVar7 + uVar11) = 0;
              piVar10[5] = (int)puVar7;
            }
            piVar1[3] = piVar1[3] + 1;
            piVar10 = func_00687F18(piVar1,(int *)*piVar1,piVar10);
            *piVar1 = (int)piVar10;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          else {
            iVar5 = *local_60;
            if (iVar5 != 0) {
LAB_004ad0b0:
              (**(code **)(local_88 + 8))(&local_88);
              (**(code **)(local_88 + 8))(&local_88);
              puVar7 = local_84;
              (**(code **)(*(int *)(iVar5 + 0x10) + 8))((int *)(iVar5 + 0x10));
              puVar8 = *(uint **)(iVar5 + 0x14);
              if (puVar7 != puVar8) {
                iVar6 = 0;
                do {
                  iVar9 = (int)*(char *)((int)local_84 + iVar6);
                  if (iVar9 == 0) {
                    in_r12 = (uint)*(byte *)((int)puVar8 + iVar6);
                  }
                  if (iVar9 == 0 && in_r12 == 0) break;
                  if (iVar9 == 0) {
LAB_004ad190:
                    iVar5 = *(int *)(iVar5 + 4);
                    goto LAB_004ad19c;
                  }
                  in_r12 = (uint)*(char *)((int)puVar8 + iVar6);
                  if (in_r12 == 0) goto LAB_004ad198;
                  if (iVar9 < (int)in_r12) goto LAB_004ad190;
                  if ((int)in_r12 < iVar9) goto LAB_004ad198;
                  iVar6 = iVar6 + 1;
                  if (0x3ffff < iVar6) break;
                } while( true );
              }
              if (iVar5 == 0) goto LAB_004ad1b4;
              puVar7 = (uint *)(iVar5 + 0x18);
              goto LAB_004ad1a8;
            }
LAB_004ad1a4:
            puVar7 = (uint *)0x0;
LAB_004ad1a8:
            if (puVar7 != (uint *)0x0) {
              puVar7[2] = uVar11;
              *puVar7 = uVar13;
              puVar7[1] = uVar14;
            }
          }
        }
      }
LAB_004ad1b4:
      iVar12 = iVar12 + 1;
      uVar11 = uVar15;
    } while (iVar12 < (int)uVar4);
  }
  return;
LAB_004ad198:
  iVar5 = *(int *)(iVar5 + 8);
LAB_004ad19c:
  if (iVar5 == 0) goto LAB_004ad1a4;
  goto LAB_004ad0b0;
}


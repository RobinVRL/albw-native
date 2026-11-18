#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0048AC68(uint param_1);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int *DAT_004f0e54;
extern undefined *DAT_004f0e58;
extern undefined1 DAT_004f0e5c;
extern uint *DAT_004f0e60;
extern int DAT_004f0e64;
extern int DAT_004f0e68;
extern int DAT_004f0e6c;
extern undefined1 DAT_004f0e70;
extern undefined *DAT_004f10dc;
extern char s_DemoActorTransSkl_004f10c8[];

// USA 004F0B30 <- EU 004F0B08 (Ghidra, non-matching)
// GLOBAL DAT_004f0e54 int *
// GLOBAL DAT_004f0e58 undefined *
// GLOBAL DAT_004f0e5c undefined1
// GLOBAL DAT_004f0e60 uint *
// GLOBAL DAT_004f0e64 int
// GLOBAL DAT_004f0e68 int
// GLOBAL DAT_004f0e6c int
// GLOBAL DAT_004f0e70 undefined1
// GLOBAL DAT_004f10dc undefined *
// GLOBAL s_DemoActorTransSkl_004f10c8 string

undefined4 func_004F0B30(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x660];
  #define aiStack_660 ((int *)(albw_frame + 0x0))
  #define local_dc (*(int *)(albw_frame + 0x584))
  #define local_d8 (*(int *)(albw_frame + 0x588))
  #define local_d4 (*(uint * *)(albw_frame + 0x58c))
  #define local_d0 (*(int *)(albw_frame + 0x590))
  #define local_cc ((undefined1 *)(albw_frame + 0x594))
  #define uStack_ac (*(undefined1 *)(albw_frame + 0x5b4))
  #define local_a4 (*(int *)(albw_frame + 0x5bc))
  #define local_a0 (*(int *)(albw_frame + 0x5c0))
  #define local_98 (*(uint * *)(albw_frame + 0x5c8))
  #define local_94 (*(uint * *)(albw_frame + 0x5cc))
  #define local_90 (*(uint * *)(albw_frame + 0x5d0))
  #define local_8c (*(int *)(albw_frame + 0x5d4))
  #define local_88 (*(uint * *)(albw_frame + 0x5d8))
  #define local_84 (*(uint * *)(albw_frame + 0x5dc))
  #define local_80 ((uint *)(albw_frame + 0x5e0))
  #define uStack_63 (*(undefined1 *)(albw_frame + 0x5fd))
  #define local_38 (*(uint * *)(albw_frame + 0x628))
  #define local_34 (*(char * *)(albw_frame + 0x62c))
  #define local_2c (*(int *)(albw_frame + 0x634))
  #define local_28 (*(int * *)(albw_frame + 0x638))
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = 1;
  }
  else {
    local_a0 = *(int *)(*DAT_004f0e54 + 0x28);
    uVar2 = 0;
    if (local_a0 != 0) {
      local_a4 = param_2[0x160];
      local_2c = param_1;
      local_28 = param_2;
      iVar3 = func_00100118((int)aiStack_660,DAT_004f0e58,0x2c,0x20);
      *(undefined4 *)(iVar3 + 0x580) = 0;
      *(undefined4 *)(iVar3 + 0x584) = 0;
      local_90 = DAT_004f0e60;
      local_98 = DAT_004f0e60;
      local_94 = (uint *)&DAT_004f0e5c;
      local_84 = (uint *)0x1e;
      uStack_63 = 0;
      local_8c = DAT_004f0e64;
      local_88 = local_80;
      (*(code *)DAT_004f0e60[2])(&local_98);
      puVar6 = (undefined1 *)0x0;
      do {
        if (*(char *)((int)local_94 + (int)puVar6) == '\0') {
          if ((int)puVar6 < 0x40001) goto LAB_004f0bfc;
          break;
        }
        puVar6 = puVar6 + 1;
      } while ((int)puVar6 < 0x40001);
      puVar6 = (undefined1 *)0x0;
LAB_004f0bfc:
      if ((int)local_84 <= (int)puVar6) {
        puVar6 = (undefined1 *)((int)local_84 + -1);
      }
      (*(code *)local_98[2])(&local_98);
      func_0010E3C4(local_80,local_94,(uint)puVar6);
      *(undefined1 *)((int)local_80 + (int)puVar6) = 0;
      iVar9 = 0;
      local_8c = DAT_004f0e68;
      do {
        iVar12 = iVar3 + iVar9 * 0x2c;
        puVar11 = *(uint **)(iVar12 + 4);
        (**(code **)(local_8c + 8))(&local_8c);
        uVar7 = 0;
        do {
          if (*(char *)((int)local_88 + uVar7) == '\0') {
            if ((int)uVar7 < 0x40001) goto LAB_004f0c88;
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 0x40001);
        uVar7 = 0;
LAB_004f0c88:
        iVar12 = *(int *)(iVar12 + 8);
        if (iVar12 <= (int)uVar7) {
          uVar7 = iVar12 - 1;
        }
        (**(code **)(local_8c + 8))(&local_8c);
        func_0010E3C4(puVar11,local_88,uVar7);
        iVar9 = iVar9 + 1;
        *(undefined1 *)((int)puVar11 + uVar7) = 0;
      } while (iVar9 < 0x20);
      local_dc = local_a0;
      local_d4 = (uint *)local_cc;
      local_d0 = 0x21;
      uStack_ac = 0;
      local_cc[0] = 0;
      local_d8 = DAT_004f0e6c;
      uVar7 = 0;
      if (0 < local_a4) {
        do {
          piVar10 = local_28 + uVar7 * 0xb;
          do {
            puVar11 = local_d4;
            (**(code **)(*piVar10 + 8))(piVar10);
            uVar8 = 0;
            do {
              if (*(char *)(piVar10[1] + uVar8) == '\0') {
                if ((int)uVar8 < 0x40001) goto LAB_004f0d7c;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < 0x40001);
            uVar8 = 0;
LAB_004f0d7c:
            if (local_d0 <= (int)uVar8) {
              uVar8 = local_d0 - 1;
            }
            (**(code **)(*piVar10 + 8))(piVar10);
            func_0010E3C4(puVar11,(uint *)piVar10[1],uVar8);
            puVar1 = local_d4;
            *(undefined1 *)((int)puVar11 + uVar8) = 0;
            local_88 = local_90;
            local_84 = (uint *)&DAT_004f0e70;
            (**(code **)(local_d8 + 8))(&local_d8);
            iVar3 = 0;
            do {
              if (*(char *)((int)local_d4 + iVar3) == '\0') {
                if (iVar3 < 0x40001) goto LAB_004f0e10;
                break;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x40001);
            iVar3 = 0;
LAB_004f0e10:
            iVar9 = iVar3;
            if (iVar3 < 0) {
              iVar9 = 0;
            }
            (*(code *)local_88[2])(&local_88);
            uVar8 = 0;
            do {
              if (*(char *)((int)local_84 + uVar8) == '\0') {
                if ((int)uVar8 < 0x40001) goto LAB_004f0e80;
                break;
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < 0x40001);
            uVar8 = 0;
LAB_004f0e80:
            if (local_d0 - iVar9 <= (int)uVar8) {
              uVar8 = (local_d0 - iVar9) - 1;
            }
            if (0 < (int)uVar8) {
              local_94 = (uint *)((int)puVar1 + iVar9);
              (*(code *)local_88[2])(&local_88);
              func_0010E3C4(local_94,local_84,uVar8);
              if (iVar3 < (int)(iVar9 + uVar8)) {
                *(undefined1 *)((int)puVar1 + iVar9 + uVar8) = 0;
              }
            }
            iVar3 = func_00533304(local_a0,&local_d8,0);
            if (iVar3 != 0) {
              *(uint *)(local_2c + 0x110) = *(uint *)(local_2c + 0x110) | 1 << (uVar7 & 0xff);
              func_0019D01C(aiStack_660,&local_d8,(int *)0x0);
            }
            uVar7 = uVar7 + 1;
            if (local_a4 <= (int)uVar7) goto LAB_004f0f1c;
            piVar10 = local_28;
          } while (0x1f < uVar7);
        } while( true );
      }
LAB_004f0f1c:
      uVar7 = func_0048AC68(*(uint *)(local_2c + 0x110));
      if (uVar7 != 0) {
        puVar4 = (undefined4 *)func_0010BAB4(0xa8);
        puVar5 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          local_38 = local_90;
          local_34 = s_DemoActorTransSkl_004f10c8;
          puVar5 = func_0016A2FC(puVar4,local_a4,&local_38,1);
        }
        *(undefined4 **)(local_2c + 0x44) = puVar5;
        if (*(int *)(local_2c + 0x44) == 0) {
          func_00100950((int)aiStack_660,DAT_004f10dc,0x2c,0x20);
          return 0;
        }
        uVar8 = 0;
        uVar7 = 0;
        if (0 < local_a4) {
          do {
            if ((*(uint *)(local_2c + 0x110) & 1 << (uVar7 & 0xff)) != 0) {
              piVar10 = aiStack_660;
              if (uVar8 < 0x20) {
                piVar10 = aiStack_660 + uVar8 * 0xb;
              }
              uVar8 = uVar8 + 1;
              iVar3 = func_00533304(local_a0,piVar10,0);
              if (iVar3 != 0) {
                func_00169688(*(uint **)(local_2c + 0x44),uVar7,piVar10,local_a0);
                func_00133870(*(int *)(local_2c + 0x44),uVar7,*(int *)(local_2c + 0x40));
              }
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < local_a4);
        }
        func_0016A02C(*(int *)(local_2c + 0x44),-1,(int *)0xffffffff,0);
        uVar7 = func_0048AC68((*(uint *)(local_2c + 0x110) & -*(uint *)(local_2c + 0x110)) - 1);
        puVar11 = (uint *)func_002C11E8((int *)&local_98,uVar7,10,0);
        func_0016898C(*(int *)(local_2c + 0x44),puVar11);
      }
      func_00100950((int)aiStack_660,DAT_004f10dc,0x2c,0x20);
      uVar2 = 1;
    }
  }
  return uVar2;
}


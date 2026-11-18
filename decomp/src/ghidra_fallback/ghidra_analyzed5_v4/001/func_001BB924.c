#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001164A8(undefined4 *param_1,uint param_2,uint param_3);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern undefined DAT_001bbcec;
extern undefined *DAT_001bbcf0;
extern uint DAT_001bbcf4;
extern undefined4 DAT_001bbcf8;
extern undefined4 DAT_001bbcfc;
extern int DAT_001bbd00;
extern undefined DAT_001bbd04;
extern undefined DAT_001bbd08;
extern undefined DAT_001bbd0c;
extern int DAT_001bbd10;
extern int DAT_001bbd14;
extern int DAT_001bbd18;
extern int DAT_001bbd1c;
extern undefined DAT_001bbf20;

// USA 001BB924 <- EU 001BB924 (Ghidra, non-matching)
// GLOBAL DAT_001bbcec undefined
// GLOBAL DAT_001bbcf0 undefined *
// GLOBAL DAT_001bbcf4 uint
// GLOBAL DAT_001bbcf8 undefined4
// GLOBAL DAT_001bbcfc undefined4
// GLOBAL DAT_001bbd00 int
// GLOBAL DAT_001bbd04 undefined
// GLOBAL DAT_001bbd08 undefined
// GLOBAL DAT_001bbd0c undefined
// GLOBAL DAT_001bbd10 int
// GLOBAL DAT_001bbd14 int
// GLOBAL DAT_001bbd18 int
// GLOBAL DAT_001bbd1c int
// GLOBAL DAT_001bbf20 undefined

void func_001BB924(undefined4 param_1,uint *param_2,int *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 ((uint * *)(albw_frame + 0xc))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(uint * *)(albw_frame + 0x1c))
  #define local_90 (*(int *)(albw_frame + 0x20))
  #define aiStack_88 ((int *)(albw_frame + 0x28))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define aiStack_78 ((int *)(albw_frame + 0x38))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_6c (*(uint * *)(albw_frame + 0x44))
  #define local_68 (*(undefined4 *)(albw_frame + 0x48))
  #define local_64 (*(uint * *)(albw_frame + 0x4c))
  #define local_60 (*(int * *)(albw_frame + 0x50))
  #define aiStack_58 ((int *)(albw_frame + 0x58))
  #define aiStack_50 ((int *)(albw_frame + 0x60))
  #define aiStack_48 ((int *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x7c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x80))
  #define piStack_2c (*(int * *)(albw_frame + 0x84))
  #define local_28 (*(int *)(albw_frame + 0x88))
  uStack_34 = param_1;
  puStack_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  func_003C7A70(aiStack_50);
  bVar1 = func_00560EF8(param_3,aiStack_50,(uint *)&DAT_001bbcec);
  if ((bVar1) && (uVar2 = func_0056128C((int)aiStack_50), 0 < (int)uVar2)) {
    iVar3 = func_0010CEE0(uVar2 * 0x38,(int *)0x0,4);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = func_00100118(iVar3,DAT_001bbcf0,0x38,uVar2);
    }
    local_70 = DAT_001bbcf8;
    if (uVar4 != 0) {
      param_2[1] = uVar4;
      local_70 = DAT_001bbcf8;
      *param_2 = uVar2;
    }
    iVar3 = 0;
    uVar10 = (ulonglong)DAT_001bbcf4;
    local_80 = DAT_001bbcfc;
    local_90 = DAT_001bbd00;
    do {
      piVar9 = (int *)(param_2[1] + iVar3 * 0x38);
      func_003C7A70(aiStack_88);
      bVar1 = func_005610A8(aiStack_50,aiStack_88,iVar3);
      if (!bVar1) {
        return;
      }
      func_003C7A70(aiStack_58);
      bVar1 = func_00560EF8(aiStack_88,aiStack_58,(uint *)&DAT_001bbd04);
      if (bVar1) {
        local_a4[0] = (uint *)uVar10;
        iVar5 = func_00561184((int)aiStack_58,(uint *)local_a4,0);
        if (iVar5 != 0) {
          *piVar9 = (int)local_a4[0];
        }
        iVar5 = func_00561184((int)aiStack_58,(uint *)local_a4,1);
        if (iVar5 != 0) {
          piVar9[1] = (int)local_a4[0];
        }
        iVar5 = func_00561184((int)aiStack_58,(uint *)local_a4,2);
        if (iVar5 != 0) {
          piVar9[2] = (int)local_a4[0];
        }
      }
      func_003C7A70(aiStack_48);
      bVar1 = func_00560EF8(aiStack_88,aiStack_48,(uint *)&DAT_001bbd08);
      if (bVar1) {
        local_a4[0] = (uint *)uVar10;
        iVar5 = func_00561184((int)aiStack_48,(uint *)local_a4,0);
        if (iVar5 != 0) {
          piVar9[3] = (int)local_a4[0];
        }
        iVar5 = func_00561184((int)aiStack_48,(uint *)local_a4,1);
        if (iVar5 != 0) {
          piVar9[4] = (int)local_a4[0];
        }
      }
      func_003C7A70(aiStack_78);
      bVar1 = func_00560EF8(aiStack_88,aiStack_78,(uint *)&DAT_001bbd0c);
      if (bVar1) {
        local_a4[0] = (uint *)0x0;
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,0);
        if (iVar5 != 0) {
          switch((int)(uintptr_t)(local_a4[0])) {
          case 0x0:
            iVar5 = 0x20000001;
            break;
          case 0x1:
            iVar5 = 0x20000002;
            break;
          case 0x2:
            iVar5 = 0x20000004;
            break;
          case 0x3:
            iVar5 = 0x20000008;
            break;
          case 0x4:
            iVar5 = 0x10;
            break;
          case 0x5:
            iVar5 = 0x20;
            break;
          case 0x6:
            iVar5 = 0x40;
            break;
          case 0x7:
            iVar5 = 0x80;
            break;
          case 0x8:
            iVar5 = 0x100;
            break;
          case 0x9:
            iVar5 = DAT_001bbd10;
            break;
          case 0xa:
            iVar5 = DAT_001bbd14;
            break;
          case 0xb:
            iVar5 = DAT_001bbd18;
            break;
          case 0xc:
            iVar5 = DAT_001bbd1c;
            break;
          default:
            iVar5 = 0x40000000;
            break;
          case 0x14:
            iVar5 = 0x100000;
            break;
          case 0x15:
            iVar5 = 0x200000;
            break;
          case 0x16:
            iVar5 = 0x400000;
          }
          piVar9[5] = iVar5;
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,1);
        if (iVar5 != 0) {
          *(short *)((int)piVar9 + 0x1a) = (short)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,2);
        if (iVar5 != 0) {
          piVar9[10] = (int)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,3);
        if (iVar5 != 0) {
          *(short *)(piVar9 + 0xb) = (short)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,4);
        if (iVar5 != 0) {
          *(char *)(piVar9 + 0xc) = (char)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,5);
        if (iVar5 != 0) {
          *(char *)((int)piVar9 + 0x31) = (char)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,6);
        if (iVar5 != 0) {
          *(short *)((int)piVar9 + 0x32) = (short)local_a4[0];
        }
        iVar5 = func_00560FA0((int)aiStack_78,(uint *)local_a4,7);
        if (iVar5 != 0) {
          *(short *)(piVar9 + 0xd) = (short)local_a4[0];
        }
        if (local_28 == 0) {
          *(undefined1 *)(piVar9 + 9) = 0;
        }
        else {
          *(undefined1 *)(piVar9 + 9) = 1;
        }
      }
      local_6c = (uint *)0x0;
      iVar5 = func_00561114(aiStack_88,(int *)&local_6c,(uint *)&DAT_001bbf20);
      if (iVar5 != 0) {
        puVar6 = (undefined4 *)func_0010BAB4(0xc);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_60 = (int *)0x0;
          local_98 = local_90;
          local_94 = local_6c;
          local_68 = 1;
          (**(code **)(local_90 + 8))(&local_98);
          iVar5 = 0;
          do {
            if (*(char *)((int)local_94 + iVar5) == '\0') {
              if (iVar5 < 0x40001) goto LAB_001bbdd4;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_001bbdd4:
          puVar7 = (undefined4 *)func_0010CEE0(iVar5 + 1U,local_60,4);
          puVar8 = (undefined4 *)0x0;
          if (puVar7 != (undefined4 *)0x0) {
            puVar8 = func_001164A8(puVar7,0,iVar5 + 1U);
          }
          (**(code **)(local_98 + 8))(&local_98);
          iVar5 = 0;
          do {
            if (*(char *)((int)local_94 + iVar5) == '\0') {
              if (iVar5 < 0x40001) goto LAB_001bbe44;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_001bbe44:
          puVar6[1] = puVar8;
          puVar6[2] = iVar5 + 1;
          *puVar6 = local_70;
          if (iVar5 + 1 < 1) {
            puVar6[1] = 0;
            puVar6[2] = 0;
          }
          else {
            *(undefined1 *)((int)puVar8 + iVar5) = 0;
          }
          *puVar6 = local_80;
          local_a4[0] = (uint *)puVar6[1];
          (**(code **)(local_98 + 8))(&local_98);
          uVar4 = 0;
          do {
            if (*(char *)((int)local_94 + uVar4) == '\0') {
              if ((int)uVar4 < 0x40001) goto LAB_001bbec0;
              break;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < 0x40001);
          uVar4 = 0;
LAB_001bbec0:
          if ((int)puVar6[2] <= (int)uVar4) {
            uVar4 = puVar6[2] - 1;
          }
          local_64 = local_a4[0];
          (**(code **)(local_98 + 8))(&local_98);
          func_0010E3C4(local_64,local_94,uVar4);
          *(undefined1 *)((int)local_a4[0] + uVar4) = 0;
        }
        piVar9[8] = (int)puVar6;
      }
      piVar9[7] = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  return;
}


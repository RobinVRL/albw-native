#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004112FC(int param_1,undefined4 param_2);
extern int func_00411D0C(int *param_1,int *param_2,int *param_3);
extern int func_004121F8(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00413060(int param_1);
extern int func_0041308C(undefined4 *param_1);
extern int func_004130D0(int *param_1);
extern int func_00413C2C(uint *param_1,char *param_2,int *param_3,uint param_4,int *param_5);
extern int func_0056C424(int *param_1,uint param_2);
extern undefined *DAT_0041b50c;

// USA 0041B2F0 <- EU 0041B2D0 (Ghidra, non-matching)
// GLOBAL DAT_0041b50c undefined *
// GLOBAL EXT_00000004 undefined
// GLOBAL EXT_00000008 undefined

undefined4 func_0041B2F0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define aiStack_2d4 ((int *)(albw_frame + 0xc))
  #define aiStack_2c8 ((int *)(albw_frame + 0x18))
  #define auStack_70 ((uint *)(albw_frame + 0x270))
  #define local_5c (*(undefined4 *)(albw_frame + 0x284))
  #define local_54 (*(undefined4 *)(albw_frame + 0x28c))
  #define local_50 (*(uint * *)(albw_frame + 0x290))
  #define local_38 ((char *)(albw_frame + 0x2a8))
  #define local_2c (*(int * *)(albw_frame + 0x2b4))
  func_0041308C(aiStack_2d4);
  func_004112FC((int)aiStack_2d4,*(undefined4 *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x2c) == 0) && (uVar6 = *(uint *)(param_1 + 0x28), uVar6 != 0xffffffff)) {
    iVar1 = func_004121F8(aiStack_2c8,uVar6,*(int **)(param_1 + 0x78),(int *)0x1,(int *)0x0);
    if (iVar1 == 0) {
LAB_0041b4f0:
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      return func_004130D0(aiStack_2d4);
    }
    uVar2 = func_0056C424(aiStack_2c8,uVar6);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  piVar5 = (int *)&SupervisorCall;
  func_00100118((int)auStack_70,DAT_0041b50c,8,4);
  local_2c = aiStack_2c8;
  uVar6 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  do {
    iVar1 = param_1 + uVar6 * 8;
    if (*(int *)(iVar1 + 0x34) == 0) {
      uVar7 = *(uint *)(iVar1 + 0x30);
      if (uVar7 != 0xffffffff) {
        piVar5 = *(int **)(param_1 + 0x78);
        iVar3 = func_004121F8(aiStack_2c8,uVar7,piVar5,(int *)&UndefinedInstruction,(int *)0x0);
        if (iVar3 != 0) {
          uVar2 = func_0056C424(aiStack_2c8,uVar7);
          *(undefined4 *)(iVar1 + 0x34) = uVar2;
          goto LAB_0041b3bc;
        }
        goto LAB_0041b4f0;
      }
    }
    else {
LAB_0041b3bc:
      bVar8 = *(int *)(iVar1 + 0x30) != -1;
      if (bVar8) {
        piVar5 = *(int **)(iVar1 + 0x34);
      }
      if (bVar8 && piVar5 != (int *)0x0) {
        piVar4 = *(int **)(param_1 + 0x20);
        if (piVar4 != (int *)0x0) {
          piVar4 = piVar4 + 3;
        }
        local_50 = auStack_70 + uVar6 * 2;
        uVar7 = func_00413C2C(local_50,local_38 + uVar6,piVar5,*(uint *)(param_1 + 0x1c),piVar4);
        if ((uVar7 == 0xffffffff) || ((1 < uVar7 && (uVar7 == 2)))) {
          iVar3 = func_00411D0C(aiStack_2c8,*(int **)(iVar1 + 0x34),*(int **)(param_1 + 0x78));
          if (iVar3 == 0) goto LAB_0041b4f0;
          piVar5 = *(int **)(iVar1 + 0x34);
          func_00413C2C(local_50,local_38 + uVar6,piVar5,*(uint *)(param_1 + 0x1c),local_2c);
        }
      }
    }
    uVar6 = uVar6 + 1;
    if (3 < uVar6) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(param_1 + 100) = auStack_70[1];
      *(char *)(param_1 + 0x74) = local_38[0];
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x3c);
      *(uint *)(param_1 + 0x68) = auStack_70[3];
      *(char *)(param_1 + 0x75) = local_38[1];
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x6c) = local_5c;
      *(char *)(param_1 + 0x76) = local_38[2];
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x70) = local_54;
      *(char *)(param_1 + 0x77) = local_38[3];
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x18) = 2;
      func_00413060((int)aiStack_2d4);
      *(undefined1 *)(param_1 + 0x7c) = 1;
      return func_004130D0(aiStack_2d4);
    }
  } while( true );
}


#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E1228(int param_1,int param_2,int *param_3);
extern int func_001E14F8(int param_1,int param_2);
extern undefined4 DAT_001e1d2c;
extern int DAT_001e1d38;
extern int DAT_001e1d3c;
extern undefined DAT_001e1d40;
extern char s_ArcHeap_001e1d30[];

// USA 001E1A88 <- EU 001E1A88 (Ghidra, non-matching)
// GLOBAL DAT_001e1d2c undefined4
// GLOBAL DAT_001e1d38 int
// GLOBAL DAT_001e1d3c int
// GLOBAL DAT_001e1d40 undefined
// GLOBAL s_ArcHeap_001e1d30 string

undefined4 * func_001E1A88(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c (*(int * *)(albw_frame + 0x14))
  #define local_68 (*(int * *)(albw_frame + 0x18))
  #define local_64 (*(int *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(int *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(int *)(albw_frame + 0x2c))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define iStack_4c (*(int *)(albw_frame + 0x34))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(int *)(albw_frame + 0x3c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x40))
  #define local_3f (*(undefined1 *)(albw_frame + 0x41))
  #define local_3e (*(undefined1 *)(albw_frame + 0x42))
  #define local_3d (*(undefined1 *)(albw_frame + 0x43))
  #define local_3c (*(undefined1 *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(char * *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined * *)(albw_frame + 0x54))
  uVar7 = 5 - *(int *)(param_1 + 0x1fa0);
  puVar2 = (undefined4 *)(param_1 + 0x10);
  if (uVar7 < 7) {
    puVar2 = puVar2 + uVar7 * 0xca;
  }
  (**(code **)(*(int *)*puVar2 + 0x28))((int *)*puVar2);
  uVar1 = DAT_001e1d2c;
  local_34 = s_ArcHeap_001e1d30;
  puVar2 = (undefined4 *)(param_1 + 0x10);
  local_38 = DAT_001e1d2c;
  if (uVar7 < 7) {
    puVar2 = puVar2 + uVar7 * 0xca;
  }
  local_6c = func_0010B954(0,(int)&local_38,(int *)*puVar2,1,0);
  iVar5 = param_1 + 0x10;
  if (uVar7 < 7) {
    iVar5 = iVar5 + uVar7 * 0x328;
  }
  *(int **)(iVar5 + 8) = local_6c;
  local_74 = uVar1;
  local_70 = param_2[1];
  local_64 = param_2[4];
  local_60 = param_2[5];
  local_5c = param_2[6];
  local_58 = param_2[7];
  local_54 = param_2[8];
  local_50 = param_2[9];
  iStack_4c = param_2[10];
  uStack_48 = uVar1;
  local_44 = param_2[0xc];
  local_40 = (undefined1)param_2[0xd];
  local_3f = *(undefined1 *)((int)param_2 + 0x35);
  local_3e = *(undefined1 *)((int)param_2 + 0x36);
  local_3d = *(undefined1 *)((int)param_2 + 0x37);
  local_3c = (undefined1)param_2[0xe];
  local_68 = local_6c;
  if (param_3 == 0) {
    puVar2 = func_001E1228(param_1,(int)&local_74,*(int **)(DAT_001e1d3c + param_1));
  }
  else {
    *(undefined1 *)(DAT_001e1d38 + param_1) = 0;
    puVar2 = func_001E14F8(param_1,(int)&local_74);
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar8 = (uint *)puVar2[0x16];
    (**(code **)(*param_2 + 8))(param_2);
    uVar6 = 0;
    do {
      if (*(char *)(param_2[1] + uVar6) == '\0') {
        if ((int)uVar6 < 0x40001) goto LAB_001e1c58;
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x40001);
    uVar6 = 0;
LAB_001e1c58:
    if ((int)puVar2[0x17] <= (int)uVar6) {
      uVar6 = puVar2[0x17] - 1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(puVar8,(uint *)param_2[1],uVar6);
    *(undefined1 *)((int)puVar8 + uVar6) = 0;
    *(undefined1 *)(puVar2 + 0x38) = 3;
    *(undefined1 *)((int)puVar2 + 0xe1) = 4;
    iVar5 = param_1 + 0x10;
    if (uVar7 < 7) {
      iVar5 = iVar5 + uVar7 * 0x328;
    }
    (**(code **)(**(int **)(iVar5 + 8) + 0x14))(*(int **)(iVar5 + 8));
    local_2c = &DAT_001e1d40;
    puVar3 = (undefined4 *)(param_1 + 0x10);
    local_30 = uVar1;
    if (uVar7 < 7) {
      puVar3 = puVar3 + uVar7 * 0xca;
    }
    piVar4 = func_0010B954(0,(int)&local_30,(int *)*puVar3,1,0);
    iVar5 = param_1 + 0x10;
    if (uVar7 < 7) {
      iVar5 = iVar5 + uVar7 * 0x328;
    }
    *(int **)(iVar5 + 4) = piVar4;
  }
  return puVar2;
}


#include "ghidra_types.h"

extern int func_0011F890(int *param_1);
extern int func_00393508(undefined1 *param_1,int *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_0043377C(int *param_1);
extern int func_00433944(int *param_1);
extern int func_00433B08(undefined4 *param_1,int param_2);
extern int func_004349EC(int *param_1);
extern int func_00434AB8(int *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EB0(int *param_1,undefined4 param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056128C(int param_1);
extern uint *DAT_00324e64;
extern uint *DAT_00324e68;
extern uint *DAT_00324e74;
extern uint *DAT_00324e78;
extern int DAT_00324e88;
extern uint *DAT_00324e8c;
extern uint *DAT_00324e90;
extern uint *DAT_00324e94;
extern uint *DAT_00324fd0;
extern uint *DAT_00324fd4;
extern uint *DAT_00324fd8;
extern uint *DAT_00324fdc;
extern char s_Collision_00324e58[];
extern char s_General_00324e50[];
extern char s_Reaction_00324e7c[];
extern char s_Shadow_00324e6c[];

// USA 00324AC4 <- EU 00324AA0 (Ghidra, non-matching)
// GLOBAL DAT_00324e64 uint *
// GLOBAL DAT_00324e68 uint *
// GLOBAL DAT_00324e74 uint *
// GLOBAL DAT_00324e78 uint *
// GLOBAL DAT_00324e88 int
// GLOBAL DAT_00324e8c uint *
// GLOBAL DAT_00324e90 uint *
// GLOBAL DAT_00324e94 uint *
// GLOBAL DAT_00324fd0 uint *
// GLOBAL DAT_00324fd4 uint *
// GLOBAL DAT_00324fd8 uint *
// GLOBAL DAT_00324fdc uint *
// GLOBAL s_Collision_00324e58 string
// GLOBAL s_General_00324e50 string
// GLOBAL s_Reaction_00324e7c string
// GLOBAL s_Shadow_00324e6c string

void func_00324AC4(int param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(uint * *)(albw_frame + 0x1c))
  #define iStack_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(uint * *)(albw_frame + 0x24))
  #define local_48 ((uint *)(albw_frame + 0x28))
  #define local_40 ((uint *)(albw_frame + 0x30))
  #define aiStack_38 ((int *)(albw_frame + 0x38))
  #define local_30 (*(uint *)(albw_frame + 0x40))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  #define local_28 (*(int * *)(albw_frame + 0x48))
  iStack_2c = param_1;
  local_28 = param_2;
  func_003C7A70(aiStack_68);
  bVar2 = func_00560EF8(local_28,aiStack_68,(uint *)s_General_00324e50);
  if (bVar2) {
    func_00393508((undefined1 *)(param_1 + 8),aiStack_68);
  }
  func_003C7A70(&iStack_50);
  bVar2 = func_00560EF8(local_28,&iStack_50,(uint *)s_Collision_00324e58);
  if (bVar2) {
    uVar3 = func_0056128C((int)&iStack_50);
    if ((int)uVar3 < 5) {
      uVar3 = 4;
    }
    iVar9 = 0;
    do {
      func_003C7A70(local_48);
      bVar2 = func_005610A8(&iStack_50,(int *)local_48,iVar9);
      if (bVar2) {
        puVar8 = (undefined2 *)(param_1 + 0x20 + iVar9 * 0x10);
        puVar8[1] = 1;
        local_40[0] = 0;
        func_00560E74((int *)local_48,local_40,DAT_00324e64);
        *puVar8 = (short)local_40[0];
        func_003C7A70(&local_58);
        bVar2 = func_00560EF8((int *)local_48,&local_58,DAT_00324e68);
        if (bVar2) {
          iVar7 = 0;
          uVar4 = func_0056128C((int)&local_58);
          if (0 < (int)uVar4) {
            do {
              func_00561184((int)&local_58,(uint *)(puVar8 + iVar7 * 2 + 2),iVar7);
              iVar7 = iVar7 + 1;
              uVar4 = func_0056128C((int)&local_58);
            } while (iVar7 < (int)uVar4);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar3);
  }
  func_003C7A70(local_40);
  bVar2 = func_00560EF8(local_28,(int *)local_40,(uint *)s_Shadow_00324e6c);
  if (bVar2) {
    uVar3 = func_0056128C((int)local_40);
    if ((int)uVar3 < 5) {
      uVar3 = 4;
    }
    iVar9 = 0;
    do {
      func_003C7A70(aiStack_38);
      bVar2 = func_005610A8((int *)local_40,aiStack_38,iVar9);
      if (bVar2) {
        puVar8 = (undefined2 *)(param_1 + 0x60 + iVar9 * 0x1c);
        *(undefined1 *)(puVar8 + 1) = 1;
        puVar1 = DAT_00324e74;
        *(undefined1 *)((int)puVar8 + 3) = 0;
        func_00560EB0(aiStack_38,(int)puVar8 + 3,puVar1);
        local_54 = (uint *)0x0;
        func_00560E74(aiStack_38,(uint *)&local_54,DAT_00324e64);
        *puVar8 = (short)local_54;
        func_003C7A70(&iStack_50);
        bVar2 = func_00560EF8(aiStack_38,&iStack_50,DAT_00324e68);
        if (bVar2) {
          iVar7 = 0;
          uVar4 = func_0056128C((int)&iStack_50);
          if (0 < (int)uVar4) {
            do {
              func_00561184((int)&iStack_50,(uint *)(puVar8 + iVar7 * 2 + 2),iVar7);
              iVar7 = iVar7 + 1;
              uVar4 = func_0056128C((int)&iStack_50);
            } while (iVar7 < (int)uVar4);
          }
        }
        func_003C7A70(local_48);
        bVar2 = func_00560EF8(aiStack_38,(int *)local_48,DAT_00324e78);
        if (bVar2) {
          iVar7 = 0;
          uVar4 = func_0056128C((int)local_48);
          if (0 < (int)uVar4) {
            do {
              func_00561184((int)local_48,(uint *)(puVar8 + iVar7 * 2 + 8),iVar7);
              iVar7 = iVar7 + 1;
              uVar4 = func_0056128C((int)local_48);
            } while (iVar7 < (int)uVar4);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar3);
  }
  func_003C7A70(local_40);
  bVar2 = func_00560EF8(local_28,(int *)local_40,(uint *)s_Reaction_00324e7c);
  if (bVar2) {
    uVar3 = func_0056128C((int)local_40);
    iVar9 = DAT_00324e88;
    if ((int)uVar3 < 5) {
      uVar3 = 4;
    }
    iVar7 = 0;
    do {
      func_003C7A70(aiStack_38);
      bVar2 = func_005610A8((int *)local_40,aiStack_38,iVar7);
      if (bVar2) {
        puVar8 = (undefined2 *)(param_1 + 0xd0 + iVar7 * 0x38);
        *(undefined4 *)(puVar8 + 0x1a) = 1;
        local_48[0] = 0;
        local_4c = (uint *)0x0;
        iVar5 = func_00560E74(aiStack_38,local_48,DAT_00324e8c);
        puVar1 = DAT_00324e90;
        if (iVar5 != 0) {
          *puVar8 = (short)local_48[0];
        }
        iVar5 = func_00561114(aiStack_38,(int *)&local_4c,puVar1);
        if (iVar5 != 0) {
          local_58 = iVar9;
          local_54 = local_4c;
          iVar5 = func_0043377C(&local_58);
          puVar8[3] = (short)iVar5;
        }
        iVar5 = func_00561114(aiStack_38,(int *)&local_4c,DAT_00324e94);
        if (iVar5 != 0) {
          local_58 = iVar9;
          local_54 = local_4c;
          iVar5 = func_00434AB8(&local_58);
          puVar8[4] = (short)iVar5;
        }
        iVar5 = func_00561114(aiStack_38,(int *)&local_4c,DAT_00324fd0);
        if (iVar5 != 0) {
          local_58 = iVar9;
          local_54 = local_4c;
          iVar5 = func_00433944(&local_58);
          puVar8[5] = (short)iVar5;
        }
        iVar5 = func_00561114(aiStack_38,(int *)&local_4c,DAT_00324fd4);
        if (iVar5 != 0) {
          local_58 = iVar9;
          local_54 = local_4c;
          uVar4 = func_004349EC(&local_58);
          puVar8[2] = (short)uVar4;
        }
        iVar5 = func_00560E74(aiStack_38,local_48,DAT_00324fd8);
        puVar1 = DAT_00324fdc;
        if (iVar5 != 0) {
          puVar8[1] = (short)local_48[0];
        }
        iVar5 = func_00561114(aiStack_38,(int *)&local_4c,puVar1);
        if (iVar5 != 0) {
          local_58 = iVar9;
          local_54 = local_4c;
          iVar5 = func_0011F890(&local_58);
          puVar8[6] = (short)iVar5;
        }
        uVar4 = 0;
        do {
          local_30 = 0;
          func_00433B08(&local_58,uVar4);
          (**(code **)(local_58 + 8))(&local_58);
          func_00560E74(aiStack_38,&local_30,local_54);
          puVar6 = puVar8 + 7;
          if (uVar4 < 0x12) {
            puVar6 = puVar6 + uVar4;
          }
          uVar4 = uVar4 + 1;
          *puVar6 = (short)local_30;
        } while ((int)uVar4 < 0x12);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar3);
  }
  return;
}


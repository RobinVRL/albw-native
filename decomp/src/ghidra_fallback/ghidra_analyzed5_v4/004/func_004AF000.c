#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_0056122C(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern uint *DAT_004af134;
extern undefined4 DAT_004af138;
extern int DAT_004af13c;
extern undefined4 DAT_004af140;
extern undefined4 DAT_004af144;
extern undefined4 DAT_004af148;
extern int *DAT_004af14c;

// USA 004AF000 <- EU 004AEFD8 (Ghidra, non-matching)
// GLOBAL DAT_004af134 uint *
// GLOBAL DAT_004af138 undefined4
// GLOBAL DAT_004af13c int
// GLOBAL DAT_004af140 undefined4
// GLOBAL DAT_004af144 undefined4
// GLOBAL DAT_004af148 undefined4
// GLOBAL DAT_004af14c int *

void func_004AF000(int param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r3;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define uStack_e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_98 (*(int *)(albw_frame + 0x58))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x68))
  #define local_84 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x70))
  #define local_7c (*(undefined4 *)(albw_frame + 0x74))
  #define local_78 (*(undefined4 *)(albw_frame + 0x78))
  #define local_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x80))
  #define local_6c (*(int *)(albw_frame + 0x84))
  #define local_68 (*(undefined4 *)(albw_frame + 0x88))
  #define local_64 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_63 (*(undefined1 *)(albw_frame + 0x8d))
  #define local_62 (*(undefined1 *)(albw_frame + 0x8e))
  #define local_61 (*(undefined1 *)(albw_frame + 0x8f))
  #define local_60 (*(undefined1 *)(albw_frame + 0x90))
  #define local_58 (*(int *)(albw_frame + 0x98))
  #define local_54 (*(uint *)(albw_frame + 0x9c))
  #define local_44 (*(uint *)(albw_frame + 0xac))
  #define aiStack_40 ((int *)(albw_frame + 0xb0))
  #define aiStack_38 ((int *)(albw_frame + 0xb8))
  #define aiStack_30 ((int *)(albw_frame + 0xc0))
  func_003C7A20(aiStack_30,*(short **)(*(int *)(param_1 + 0x14) + 0x14));
  func_003C7A70(aiStack_38);
  func_00560EF8(aiStack_30,aiStack_38,DAT_004af134);
  func_003C7A70(aiStack_40);
  (**(code **)(*param_2 + 8))(param_2);
  bVar2 = func_00560EF8(aiStack_38,aiStack_40,(uint *)param_2[1]);
  if (bVar2) {
    uVar3 = func_0056128C((int)aiStack_40);
    iVar1 = DAT_004af13c;
    iVar5 = 0;
    if (0 < (int)uVar3) {
      do {
        local_44 = 0;
        iVar4 = func_0056122C(aiStack_40,(int *)&local_44,iVar5);
        if (iVar4 != 0) {
          local_58 = iVar1;
          local_54 = local_44;
          (**(code **)(iVar1 + 8))(&local_58);
          func_00689794(&uStack_e4,DAT_004af140,local_54,in_r3);
          local_90 = 0;
          local_8c = 0;
          uStack_88 = 0x20;
          local_84 = 0;
          local_80 = 0;
          local_7c = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          iStack_98 = iVar1;
          local_64 = 7;
          local_61 = 0;
          local_68 = DAT_004af148;
          local_63 = 3;
          local_62 = 0xe;
          local_6c = iVar1;
          local_94 = local_e0;
          local_60 = 0;
          func_001E1EDC(*DAT_004af14c,&iStack_98);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
    }
  }
  return;
}


#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern int func_0056122C(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern undefined *DAT_003a5964;
extern int DAT_003a5968;

// USA 003A56A8 <- EU 003A5684 (Ghidra, non-matching)
// GLOBAL DAT_003a5964 undefined *
// GLOBAL DAT_003a5968 int

int func_003A56A8(int param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define aiStack_60 ((int *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x24))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define aiStack_40 ((int *)(albw_frame + 0x30))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 ((int *)(albw_frame + 0x40))
  iVar3 = func_00100118(param_1,DAT_003a5964,0xec,0x61);
  func_003C7A20(aiStack_40,param_3);
  uVar4 = func_0056128C((int)aiStack_40);
  iVar1 = DAT_003a5968;
  if (uVar4 == 0x61) {
    iVar7 = 0;
    do {
      func_003C7A70(aiStack_60);
      bVar2 = func_005610A8(aiStack_40,aiStack_60,iVar7);
      if (bVar2) {
        local_30[1] = 0;
        iVar5 = func_0056122C(aiStack_60,local_30 + 1,0);
        if (iVar5 != 0) {
          piVar6 = (int *)(iVar3 + iVar7 * 0xec);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x32),2);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x2c),3);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x2d),4);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x2e),5);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x2f),6);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x30),7);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x31),8);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x33),9);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x34),10);
          func_00561184((int)aiStack_60,(uint *)(piVar6 + 0x35),0xb);
          func_00560FA0((int)aiStack_60,(uint *)(piVar6 + 0x36),0xf);
          func_00560FA0((int)aiStack_60,(uint *)(piVar6 + 0x37),0x10);
          func_00560FA0((int)aiStack_60,(uint *)(piVar6 + 0x38),0x11);
          local_30[0] = 0;
          local_44 = 0;
          local_48 = 0;
          local_4c = 0;
          func_0056122C(aiStack_60,local_30,0xc);
          func_0056122C(aiStack_60,&local_44,0xd);
          func_0056122C(aiStack_60,&local_48,0xe);
          func_0056122C(aiStack_60,&local_4c,1);
          *(undefined1 *)piVar6[0xc] = 0;
          *(undefined1 *)piVar6[0x17] = 0;
          *(undefined1 *)piVar6[0x22] = 0;
          *(undefined1 *)piVar6[1] = 0;
          if (local_30[0] != 0) {
            local_34 = local_30[0];
            local_38 = iVar1;
            func_00689928(piVar6 + 0xb,&local_38,0xffffffff);
          }
          if (local_44 != 0) {
            local_34 = local_44;
            local_38 = iVar1;
            func_00689928(piVar6 + 0x16,&local_38,0xffffffff);
          }
          if (local_48 != 0) {
            local_34 = local_48;
            local_38 = iVar1;
            func_00689928(piVar6 + 0x21,&local_38,0xffffffff);
          }
          if (local_4c != 0) {
            local_34 = local_4c;
            local_38 = iVar1;
            func_00689928(piVar6,&local_38,0xffffffff);
          }
          func_00560FA0((int)aiStack_60,(uint *)(piVar6 + 0x39),0x12);
          local_68[0] = 0;
          func_00560FA0((int)aiStack_60,local_68,0x13);
          if (local_68[0] == 0) {
            *(undefined1 *)(piVar6 + 0x3a) = 0;
          }
          else if (local_68[0] == 1) {
            *(undefined1 *)(piVar6 + 0x3a) = 1;
          }
          else if (local_68[0] == 2) {
            *(undefined1 *)(piVar6 + 0x3a) = 2;
          }
          else if (local_68[0] == 3) {
            *(undefined1 *)(piVar6 + 0x3a) = 3;
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x61);
  }
  return iVar3;
}


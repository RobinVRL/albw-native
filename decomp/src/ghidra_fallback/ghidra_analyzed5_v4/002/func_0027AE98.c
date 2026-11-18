#include "ghidra_types.h"

extern int func_002766D0(int param_1);
extern int func_00279C14(int *param_1,uint param_2,int param_3,int param_4,float *param_5);
extern int func_0027BAFC(int param_1,int *param_2,float *param_3);
extern int func_003C5604(int param_1);
extern int func_003C79C0(uint param_1);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560E74(int *param_1,uint *param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern uint *DAT_0027b090;
extern uint *DAT_0027b094;
extern int *DAT_0027b098;
extern uint *DAT_0027b09c;

// USA 0027AE98 <- EU 0027AEC0 (Ghidra, non-matching)
// GLOBAL DAT_0027b090 uint *
// GLOBAL DAT_0027b094 uint *
// GLOBAL DAT_0027b098 int *
// GLOBAL DAT_0027b09c uint *

undefined4 func_0027AE98(short *param_1,float *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define aiStack_38 ((int *)(albw_frame + 0x18))
  #define aiStack_30 ((int *)(albw_frame + 0x20))
  #define aiStack_28 ((int *)(albw_frame + 0x28))
  #define local_20 (*(uint *)(albw_frame + 0x30))
  func_003C7A20(aiStack_38,param_1);
  func_003C7A70(aiStack_40);
  func_00560EF8(aiStack_38,aiStack_40,DAT_0027b090);
  uVar2 = func_0056128C((int)aiStack_40);
  iVar6 = 0;
  if (0 < (int)uVar2) {
    do {
      func_003C7A70(aiStack_30);
      func_005610A8(aiStack_40,aiStack_30,iVar6);
      local_44 = 0;
      iVar3 = func_00560E74(aiStack_30,&local_44,DAT_0027b094);
      if (iVar3 != 0) {
        func_0027BAFC(local_44 & 0xffff,aiStack_30,param_2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar2);
  }
  piVar1 = DAT_0027b098;
  if (*(int *)(*DAT_0027b098 + 0x38) != 0) {
    func_002766D0(*(int *)(*DAT_0027b098 + 0x38));
  }
  iVar6 = *(int *)(*piVar1 + 0x38);
  if (((*(float *)(iVar6 + 0x184c) < *(float *)(iVar6 + 0x1840)) ||
      (*(float *)(iVar6 + 0x1850) < *(float *)(iVar6 + 0x1844))) ||
     (*(float *)(iVar6 + 0x1854) < *(float *)(iVar6 + 0x1848))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  func_003C7A70(aiStack_30);
  func_00560EF8(aiStack_38,aiStack_30,DAT_0027b09c);
  uVar4 = func_0056128C((int)aiStack_30);
  iVar6 = 0;
  if (0 < (int)uVar4) {
    do {
      func_003C7A70(aiStack_28);
      func_005610A8(aiStack_30,aiStack_28,iVar6);
      local_20 = 0;
      iVar3 = func_00560E74(aiStack_28,&local_20,DAT_0027b094);
      if (iVar3 == 0) {
        return 0;
      }
      if (-1 < (int)local_20) {
        iVar3 = func_003C79C0(local_20 & 0xffff);
        uVar5 = func_003C5604(iVar3);
        if (-1 < (int)uVar5) {
          func_00279C14(aiStack_28,uVar5,iVar3,uVar2 ^ 1,param_2);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar4);
  }
  return 1;
}


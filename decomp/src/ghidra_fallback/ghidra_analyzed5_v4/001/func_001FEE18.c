#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int *DAT_001fefa0;
extern undefined4 DAT_001fefb8;
extern char s_DemoActorBaseVis_001fefa4[];

// USA 001FEE18 <- EU 001FEE18 (Ghidra, non-matching)
// GLOBAL DAT_001fefa0 int *
// GLOBAL DAT_001fefb8 undefined4
// GLOBAL s_DemoActorBaseVis_001fefa4 string

undefined4 func_001FEE18(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(undefined4 *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  iVar9 = param_2[0x161];
  if ((iVar9 != 0) && (iVar8 = *(int *)(*DAT_001fefa0 + 0x28), iVar8 != 0)) {
    iVar7 = param_2[0x160];
    puVar1 = (undefined4 *)func_0010BAB4(0xa8);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      local_7c = s_DemoActorBaseVis_001fefa4;
      local_80 = DAT_001fefb8;
      puVar2 = func_0016A2FC(puVar1,iVar7,&local_80,1);
    }
    param_1[4] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
      if ((iVar3 != 0) && (*(short *)(iVar3 + 0x34) == 0)) {
        *(int *)(iVar3 + 0x2c) = param_1[4];
        *(short *)(iVar3 + 0x34) = (short)iVar7;
      }
      uVar6 = 0;
      if (0 < iVar7) {
        do {
          piVar4 = param_2;
          if (uVar6 < 0x20) {
            piVar4 = param_2 + uVar6 * 0xb;
          }
          piVar4 = (int *)func_00533304(iVar8,piVar4,2);
          if (piVar4 == (int *)0x0) {
            piVar4 = param_2;
            if (uVar6 < 0x20) {
              piVar4 = param_2 + uVar6 * 0xb;
            }
            piVar4 = (int *)func_00533304(iVar9,piVar4,2);
            if (piVar4 != (int *)0x0) goto LAB_001fef34;
          }
          else {
LAB_001fef34:
            func_0016A2A4((uint *)param_1[4],uVar6,piVar4);
            func_00133870(param_1[4],uVar6,param_1[2]);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar7);
      }
      func_0016A02C(param_1[4],-1,(int *)0xffffffff,0);
      puVar5 = (uint *)func_002C11E8(aiStack_78,0,0,0);
      func_0016898C(param_1[4],puVar5);
      return 1;
    }
  }
  return 0;
}


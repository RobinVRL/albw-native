#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int *DAT_001fedfc;
extern undefined4 DAT_001fee14;
extern char s_DemoActorBaseSkl_001fee00[];

// USA 001FEC30 <- EU 001FEC30 (Ghidra, non-matching)
// GLOBAL DAT_001fedfc int *
// GLOBAL DAT_001fee14 undefined4
// GLOBAL s_DemoActorBaseSkl_001fee00 string

undefined4 func_001FEC30(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(undefined4 *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  iVar9 = param_2[0x161];
  if ((iVar9 != 0) && (iVar8 = *(int *)(*DAT_001fedfc + 0x28), iVar8 != 0)) {
    iVar7 = param_2[0x160];
    puVar1 = (undefined4 *)func_0010BAB4(0xa8);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      local_7c = s_DemoActorBaseSkl_001fee00;
      local_80 = DAT_001fee14;
      puVar2 = func_0016A2FC(puVar1,iVar7,&local_80,1);
    }
    param_1[3] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x2c) = param_1[3];
        *(short *)(iVar3 + 0x34) = (short)iVar7;
      }
      uVar6 = 0;
      if (0 < iVar7) {
        do {
          piVar5 = param_2 + uVar6 * 0xb;
          do {
            iVar3 = func_00533304(iVar8,piVar5,0);
            if (iVar3 == 0) {
              piVar5 = param_2;
              if (uVar6 < 0x20) {
                piVar5 = param_2 + uVar6 * 0xb;
              }
              iVar3 = func_00533304(iVar9,piVar5,0);
              if (iVar3 != 0) {
                piVar5 = param_2;
                if (uVar6 < 0x20) {
                  piVar5 = param_2 + uVar6 * 0xb;
                }
                func_00169688((uint *)param_1[3],uVar6,piVar5,iVar9);
                goto LAB_001fed9c;
              }
            }
            else {
              piVar5 = param_2;
              if (uVar6 < 0x20) {
                piVar5 = param_2 + uVar6 * 0xb;
              }
              func_00169688((uint *)param_1[3],uVar6,piVar5,iVar8);
LAB_001fed9c:
              func_00133870(param_1[3],uVar6,param_1[2]);
            }
            uVar6 = uVar6 + 1;
            if (iVar7 <= (int)uVar6) goto LAB_001fedb8;
            piVar5 = param_2;
          } while (0x1f < uVar6);
        } while( true );
      }
LAB_001fedb8:
      func_0016A02C(param_1[3],-1,(int *)0xffffffff,0);
      puVar4 = (uint *)func_002C11E8(aiStack_78,0,10,0);
      func_0016898C(param_1[3],puVar4);
      return 1;
    }
  }
  return 0;
}


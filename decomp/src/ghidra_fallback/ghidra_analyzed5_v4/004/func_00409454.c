#include "ghidra_types.h"

extern int func_0041343C(int param_1,uint param_2,undefined4 param_3);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C9A4(int *param_1,uint param_2);
extern int func_0056CE98(int param_1);

// USA 00409454 <- EU 00409434 (Ghidra, non-matching)

void func_00409454(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char *)(albw_frame + 0x14))
  #define aiStack_38 ((int *)(albw_frame + 0x18))
  if (((int *)param_1[0x86] != (int *)0x0) && (uVar2 = 0, *(int *)param_1[0x86] != 0)) {
    do {
      iVar6 = uVar2 * 4 + 4;
      uVar2 = uVar2 + 1;
      uVar5 = *(uint *)(param_1[0x86] + iVar6);
      bVar9 = uVar5 <= param_2;
      bVar8 = param_2 == uVar5;
      if (!bVar9 || bVar8) {
        bVar9 = param_3 <= uVar5;
        bVar8 = uVar5 == param_3;
      }
      if (!bVar9 || bVar8) {
        *(undefined4 *)(param_1[0x86] + iVar6) = 0;
      }
    } while (uVar2 < *(uint *)param_1[0x86]);
  }
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    uVar2 = func_0056CE98(iVar6);
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        local_44 = 0xffffffff;
        local_3c = '\0';
        bVar8 = func_00569AB8(iVar6,uVar5 | 0x5000000,&local_44);
        cVar1 = '\0';
        if (bVar8) {
          cVar1 = local_3c;
        }
        if ((bVar8 && cVar1 != '\0') &&
           (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_44), piVar3 != (int *)0x0))
        {
          func_004134E4(aiStack_38,piVar3,1);
          uVar7 = 0;
          if (local_40 != 0) {
            do {
              uVar4 = func_0056C9A4(aiStack_38,uVar7);
              if (((uVar4 != 0) && (param_2 <= uVar4)) && (uVar4 <= param_3)) {
                func_0041343C((int)aiStack_38,uVar7,0);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < local_40);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  return;
}


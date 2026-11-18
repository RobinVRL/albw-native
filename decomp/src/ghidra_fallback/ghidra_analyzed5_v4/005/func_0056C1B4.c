#include "ghidra_types.h"

extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C9A4(int *param_1,uint param_2);
extern int func_0056CA24(int param_1);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056C1B4 <- EU 0056C18C (Ghidra, non-matching)

undefined1 func_0056C1B4(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define aiStack_30 ((int *)(albw_frame + 0x0))
  #define local_24 (*(char *)(albw_frame + 0xc))
  #define local_20 ((undefined4 *)(albw_frame + 0x10))
  #define local_18 (*(char *)(albw_frame + 0x18))
  uVar3 = func_0056CBF8(param_1[1],param_2);
  piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  local_18 = '\0';
  local_20[0] = 0xffffffff;
  bVar1 = func_00569AB8(param_1[1],param_2,local_20);
  uVar2 = 0;
  if (bVar1) {
    if (local_18 == '\x01') {
      func_004134E4(aiStack_30,piVar4,1);
      if (param_3 == 0xffffffff) {
        uVar6 = func_0056CA24((int)aiStack_30);
        uVar7 = 0;
        if (uVar6 != 0) {
          do {
            if (local_24 == '\0') {
              return 0;
            }
            iVar5 = func_0056C9A4(aiStack_30,uVar7);
            if (iVar5 == 0) {
              return 0;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
      }
      else {
        if (local_24 == '\0') {
          return 0;
        }
        iVar5 = func_0056C9A4(aiStack_30,param_3);
        if (iVar5 == 0) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


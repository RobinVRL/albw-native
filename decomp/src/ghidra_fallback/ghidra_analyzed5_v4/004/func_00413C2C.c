#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_004134E4(int *param_1,int *param_2,int param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056A6E0(int param_1);
extern int func_0056C424(int *param_1,uint param_2);
extern int func_0056C9A4(int *param_1,uint param_2);

// USA 00413C2C <- EU 00413C0C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *

undefined4 func_00413C2C(uint *param_1,char *param_2,int *param_3,uint param_4,int *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((undefined4 *)(albw_frame + 0x0))
  #define local_48 (*(char *)(albw_frame + 0x8))
  #define aiStack_40 ((int *)(albw_frame + 0x10))
  #define local_34 (*(char *)(albw_frame + 0x1c))
  #define aiStack_30 ((int *)(albw_frame + 0x20))
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  *param_2 = '\0';
  func_00410704(aiStack_30,param_3);
  puVar1 = (uint *)func_0056A6E0((int)aiStack_30);
  if (puVar1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (*puVar1 == 0) {
    uVar2 = 1;
  }
  else {
    puVar5 = puVar1 + 1;
    if (puVar5 == (uint *)0x0) {
      return 0xfffffffe;
    }
    piVar3 = (int *)func_0056C424(param_5,*puVar5);
    if (piVar3 == (int *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_50[0] = 0xffffffff;
      local_48 = '\0';
      func_00569AB8(param_4,*puVar5,local_50);
      *param_1 = *puVar5;
      param_1[1] = (uint)piVar3;
      *param_2 = local_48;
      if (local_48 != '\0') {
        func_004134E4(aiStack_40,piVar3,1);
        uVar6 = 0;
        if (*puVar1 != 0) {
          do {
            if ((local_34 == '\0') || (iVar4 = func_0056C9A4(aiStack_40,puVar1[2]), iVar4 == 0)) {
              return 2;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *puVar1);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


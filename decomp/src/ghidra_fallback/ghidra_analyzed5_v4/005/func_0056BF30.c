#include "ghidra_types.h"

extern int func_0041297C(int *param_1,int *param_2);
extern int func_00569BBC(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056C1B4(int *param_1,uint param_2,uint param_3);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056BF30 <- EU 0056BF08 (Ghidra, non-matching)

undefined4 func_0056BF30(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(undefined1 *)(albw_frame + 0x10))
  #define local_2f (*(undefined1 *)(albw_frame + 0x11))
  #define local_2e (*(undefined1 *)(albw_frame + 0x12))
  #define local_2d (*(undefined1 *)(albw_frame + 0x13))
  #define local_2c (*(undefined1 *)(albw_frame + 0x14))
  #define aiStack_20 ((int *)(albw_frame + 0x20))
  uVar3 = func_0056CBF8(param_1[1],param_2);
  piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  if (((param_3 & 10) != 0) && (piVar4 == (int *)0x0)) {
    return 0;
  }
  if ((param_3 & 8) != 0) {
    local_30 = 0;
    local_34 = 0;
    local_2f = 0;
    iVar5 = func_00569BBC(param_1[1],param_2,&local_38);
    uVar1 = local_38;
    if (iVar5 == 0) {
      return 0;
    }
    func_0041297C(aiStack_20,piVar4);
    local_30 = 0;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    local_2c = 0;
    iVar5 = func_0056C5EC((int)aiStack_20,&local_38,uVar1,0);
    if (iVar5 == 0) {
      return 0;
    }
    cVar2 = func_0056C1B4(param_1,local_38,local_34);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}


#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined DAT_0049b2a0;
extern int DAT_0049b2a4;

// USA 0049B1BC <- EU 0049B194 (Ghidra, non-matching)
// GLOBAL DAT_0049b2a0 undefined
// GLOBAL DAT_0049b2a4 int

undefined4 func_0049B1BC(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  if (param_1[2] < 1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = 0;
    do {
      if (*(char *)(param_1[1] + iVar1) == '\0') break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  local_1c = &DAT_0049b2a0;
  local_20 = DAT_0049b2a4;
  uVar2 = func_006919D8(param_2,&local_20);
  if (uVar2 == 0xffffffff) {
    uVar3 = 0;
  }
  else {
    puVar4 = (uint *)param_1[1];
    if ((int)uVar2 < 0) {
      (**(code **)(*param_2 + 8))(param_2);
      uVar2 = 0;
      do {
        if (*(char *)(param_2[1] + uVar2) == '\0') {
          if ((int)uVar2 < 0x40001) goto LAB_0049b264;
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0x40001);
      uVar2 = 0;
    }
LAB_0049b264:
    if (param_1[2] <= (int)uVar2) {
      uVar2 = param_1[2] - 1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(puVar4,(uint *)param_2[1],uVar2);
    uVar3 = 1;
    *(undefined1 *)((int)puVar4 + uVar2) = 0;
  }
  return uVar3;
}


#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined DAT_005476f4;
extern int DAT_005476f8;

// USA 00547640 <- EU 00547618 (Ghidra, non-matching)
// GLOBAL DAT_005476f4 undefined
// GLOBAL DAT_005476f8 int

uint func_00547640(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  iVar1 = param_1;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 700);
  }
  if (param_2 != 0 && iVar1 != 0) {
    local_24 = &DAT_005476f4;
    local_28 = DAT_005476f8;
    uVar2 = func_006919D8(*(int **)(param_1 + 700),&local_28);
    if (uVar2 != 0) {
      piVar4 = *(int **)(param_1 + 700);
      puVar5 = *(uint **)(param_2 + 4);
      uVar3 = uVar2;
      if ((int)uVar2 < 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        uVar3 = 0;
        do {
          if (*(char *)(piVar4[1] + uVar3) == '\0') {
            if ((int)uVar3 < 0x40001) goto LAB_005476ac;
            break;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x40001);
        uVar3 = 0;
      }
LAB_005476ac:
      if (*(int *)(param_2 + 8) <= (int)uVar3) {
        uVar3 = *(int *)(param_2 + 8) - 1;
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      func_0010E3C4(puVar5,(uint *)piVar4[1],uVar3);
      *(undefined1 *)((int)puVar5 + uVar3) = 0;
      return uVar2;
    }
  }
  return 0xffffffff;
}


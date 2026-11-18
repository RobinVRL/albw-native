#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined DAT_00529cd0;
extern int DAT_00529cd4;

// USA 00529C1C <- EU 00529BF4 (Ghidra, non-matching)
// GLOBAL DAT_00529cd0 undefined
// GLOBAL DAT_00529cd4 int

uint func_00529C1C(int param_1,int param_2)

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
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (param_2 != 0 && iVar1 != 0) {
    local_24 = &DAT_00529cd0;
    local_28 = DAT_00529cd4;
    uVar2 = func_006919D8(*(int **)(param_1 + 0x20),&local_28);
    if (uVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x20);
      puVar5 = *(uint **)(param_2 + 4);
      uVar3 = uVar2;
      if ((int)uVar2 < 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        uVar3 = 0;
        do {
          if (*(char *)(piVar4[1] + uVar3) == '\0') {
            if ((int)uVar3 < 0x40001) goto LAB_00529c88;
            break;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0x40001);
        uVar3 = 0;
      }
LAB_00529c88:
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


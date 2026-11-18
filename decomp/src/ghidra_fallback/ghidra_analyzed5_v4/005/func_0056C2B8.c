#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_00569B68(int param_1,uint param_2,uint *param_3);
extern int func_0056A6E0(int param_1);
extern int func_0056C1B4(int *param_1,uint param_2,uint param_3);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056C2B8 <- EU 0056C290 (Ghidra, non-matching)

undefined4 func_0056C2B8(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((uint *)(albw_frame + 0x8))
  #define local_30 (*(undefined1 *)(albw_frame + 0x20))
  #define local_2f (*(undefined1 *)(albw_frame + 0x21))
  #define aiStack_2c ((int *)(albw_frame + 0x24))
  if ((param_3 & 1) != 0) {
    uVar2 = func_0056CBF8(param_1[1],param_2);
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  if ((param_3 & 0xc) != 0) {
    local_48[0] = 0;
    local_30 = 0;
    local_48[5] = 0;
    local_2f = 0;
    local_48[1] = 0xffffffff;
    local_48[2] = 0xffffffff;
    local_48[3] = 0xffffffff;
    local_48[4] = 0xffffffff;
    iVar3 = func_00569B68(param_1[1],param_2,local_48);
    if (iVar3 == 0) {
      return 0;
    }
    uVar7 = 0;
    do {
      if (local_48[uVar7 + 1] != 0xffffffff) {
        uVar2 = func_0056CBF8(param_1[1],local_48[uVar7 + 1]);
        piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
        if (((param_3 & 0xc) != 0) && (piVar4 == (int *)0x0)) {
          return 0;
        }
        if ((param_3 & 8) != 0) {
          func_00410704(aiStack_2c,piVar4);
          puVar5 = (uint *)func_0056A6E0((int)aiStack_2c);
          if (puVar5 == (uint *)0x0) {
            return 0;
          }
          uVar6 = 0;
          if (*puVar5 != 0) {
            do {
              if (*puVar5 <= uVar6) {
                return 0;
              }
              if (puVar5 + uVar6 * 2 + 1 == (uint *)0x0) {
                return 0;
              }
              cVar1 = func_0056C1B4(param_1,puVar5[uVar6 * 2 + 1],puVar5[uVar6 * 2 + 2]);
              if (cVar1 == '\0') {
                return 0;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *puVar5);
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
  }
  return 1;
}


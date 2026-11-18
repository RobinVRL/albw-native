#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_0056A6E0(int param_1);
extern int func_0056C1B4(int *param_1,uint param_2,uint param_3);
extern int func_0056CBF8(int param_1,uint param_2);

// USA 0056BE60 <- EU 0056BE38 (Ghidra, non-matching)

undefined1 func_0056BE60(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define aiStack_20 ((int *)(albw_frame + 0x0))
  uVar2 = func_0056CBF8(param_1[1],param_2);
  piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
  if (((param_3 & 0xc) != 0) && (piVar3 == (int *)0x0)) {
    return 0;
  }
  if ((param_3 & 8) != 0) {
    func_00410704(aiStack_20,piVar3);
    puVar4 = (uint *)func_0056A6E0((int)aiStack_20);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    uVar5 = 0;
    if (*puVar4 != 0) {
      do {
        if (*puVar4 <= uVar5) {
          return 0;
        }
        if (puVar4 + uVar5 * 2 + 1 == (uint *)0x0) {
          return 0;
        }
        cVar1 = func_0056C1B4(param_1,puVar4[uVar5 * 2 + 1],puVar4[uVar5 * 2 + 2]);
        if (cVar1 == '\0') {
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar4);
    }
  }
  return 1;
}


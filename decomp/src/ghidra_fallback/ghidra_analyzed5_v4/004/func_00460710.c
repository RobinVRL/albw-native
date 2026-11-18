#include "ghidra_types.h"

extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_0066DA28(undefined4 *param_1,undefined1 param_2);

// USA 00460710 <- EU 004606E8 (Ghidra, non-matching)

undefined4 func_00460710(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x74) & 1) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x98 + iVar4 * 4);
      iVar3 = (int)*(char *)(iVar2 + 0x88);
      if (iVar3 - 0x12U < 5) {
        func_0031B6A0(iVar2 + 0x20,iVar3,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0xb);
  }
  cVar1 = *(char *)(param_1 + 0x125);
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x11e) = 0;
  }
  if (*(short *)(param_1 + 0x11e) < 1) {
    if ((*(char *)(param_1 + 0x11c) != '\x01') || (*(short *)(*(int *)(param_1 + 0xa8) + 0x7e) != 2)
       ) {
      if ((*(char *)(param_1 + 0x11c) == '\x02') &&
         (*(short *)(*(int *)(param_1 + 0xb0) + 0x7e) == 2)) {
LAB_004607e4:
        return func_0066DA28((undefined4 *)(param_1 + 0x74),2);
      }
      if ((-1 < cVar1) || (*(short *)(*(int *)(param_1 + 0xa8) + 0x7e) != 2)) {
        if (cVar1 < '\x01') {
          return 0;
        }
        if (*(short *)(*(int *)(param_1 + 0xb0) + 0x7e) != 2) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0x126) = 0;
        goto LAB_004607e4;
      }
      *(undefined1 *)(param_1 + 0x126) = 0;
    }
    func_0066DA28((undefined4 *)(param_1 + 0x74),1);
  }
  else {
    *(short *)(param_1 + 0x11e) = *(short *)(param_1 + 0x11e) + -1;
  }
  return 0;
}


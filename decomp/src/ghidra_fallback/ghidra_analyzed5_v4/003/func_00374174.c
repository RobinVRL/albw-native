// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00374084(int param_1);
extern int func_00556A38(int param_1);
extern int func_00556AE0(int param_1);
extern int func_00556AEC(int param_1);
extern int *DAT_00374208;

// USA 00374174 <- EU 00374150 (Ghidra, non-matching)
// GLOBAL DAT_00374208 int *

void func_00374174(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  func_00374084(param_1);
  iVar3 = *DAT_00374208;
  if (iVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x9e6);
    if (cVar1 == '\0') {
      bVar2 = func_00556A38(iVar3);
      *(ushort *)(param_1 + 0x9cc) = (ushort)bVar2 * *(short *)(param_1 + 0x9e0);
    }
    else if (cVar1 == '\x01') {
      bVar2 = func_00556AEC(iVar3);
      *(ushort *)(param_1 + 0x9cc) = (ushort)bVar2 * *(short *)(param_1 + 0x9e2);
    }
    else if (cVar1 == '\x02') {
      bVar2 = func_00556AE0(iVar3);
      *(ushort *)(param_1 + 0x9cc) = (ushort)bVar2 * *(short *)(param_1 + 0x9e4);
    }
  }
  *(undefined1 *)(param_1 + 0x9b8) = *(undefined1 *)(param_1 + 0x9e6);
  *(undefined2 *)(param_1 + 0x9b4) = *(undefined2 *)(param_1 + 0x9cc);
  *(undefined2 *)(param_1 + 0x9b6) = 0;
  *(undefined1 *)(param_1 + 0x9b9) = *(undefined1 *)(param_1 + 0x9d2);
  *(undefined1 *)(param_1 + 0x9bb) = 1;
  return;
}


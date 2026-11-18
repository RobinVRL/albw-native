#include "ghidra_types.h"

extern int func_0043DB5C(int param_1);

// USA 0051B70C <- EU 0051B6E4 (Ghidra, non-matching)

void func_0051B70C(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    func_0043DB5C(*(int *)(param_1 + 0x80));
    if (*(int *)(param_1 + 0x80) != 0) {
      bVar3 = *(char *)(*(int *)(param_1 + 0x80) + 0x16c) != '\0';
      iVar2 = 0;
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0xd4);
      }
      if (bVar3 && iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + 0xd);
        bVar3 = cVar1 == '\0';
        if (bVar3) {
          cVar1 = *(char *)(iVar2 + 0xe);
        }
        if (bVar3 && cVar1 == '\0') {
          *(undefined1 *)(iVar2 + 0xe) = 1;
        }
        *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x94) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x8c) = 1;
      }
    }
  }
  return;
}


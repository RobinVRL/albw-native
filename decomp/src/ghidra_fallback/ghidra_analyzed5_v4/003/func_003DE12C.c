#include "ghidra_types.h"

extern int func_003DCBF8(int param_1,undefined2 param_2);
extern int func_003DD5A0(void);
extern int func_003DE7C8(int param_1);
extern int DAT_003de158;
extern int DAT_003de15c;
extern int DAT_003de160;
extern int DAT_003de164;

// USA 003DE12C <- EU 003DE10C (Ghidra, non-matching)
// GLOBAL DAT_003de158 int
// GLOBAL DAT_003de15c int
// GLOBAL DAT_003de160 int
// GLOBAL DAT_003de164 int

void func_003DE12C(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_003de158;
  if (*(char *)(DAT_003de158 + 1) == '\0' && *(char *)(DAT_003de158 + 3) == '\0') {
    if (*(char *)(DAT_003de158 + 5) != '\0') {
      func_003DD5A0();
    }
    iVar3 = DAT_003de160;
    cVar1 = *(char *)(DAT_003de15c + 0xc0);
    *(char *)(iVar2 + 4) = cVar1;
    func_003DCBF8(iVar3,(short)cVar1);
    func_003DE7C8(DAT_003de164);
    *(undefined1 *)(iVar2 + 5) = 1;
  }
  return;
}


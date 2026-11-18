#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010A7BC(int *param_1);
extern int func_003DCB3C(char *param_1,int param_2,int param_3);
extern int func_003DCE04(void);
extern int iRam003de21c;
extern char *pcRam003de220;

// USA 003DE1B0 <- EU 003DE190 (Ghidra, non-matching)
// GLOBAL UNK_003de21c int
// GLOBAL UNK_003de220 char *

void func_003DE1B0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = func_003DCE04();
  iVar1 = iRam003de21c;
  *(undefined1 *)((int)puVar2 + 0xf) = 1;
  do {
    func_0010A7BC(puVar2 + 0x10);
    if ((code *)puVar2[10] != (code *)0x0) {
      (*(code *)puVar2[10])(puVar2[0xb]);
    }
    func_003DCB3C(pcRam003de220,0,*(int *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x131c) * 8 + 0x12f0));
    func_003DCB3C(pcRam003de220,1,*(int *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x131c) * 8 + 0x12f4));
    coproc_moveto_Data_Synchronization(0);
    func_001080D4(puVar2 + 0x12);
  } while (*(char *)((int)puVar2 + 0xf) != '\0');
  return;
}


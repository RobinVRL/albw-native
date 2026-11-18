#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010C180(uint *param_1);
extern int func_003DCE04(void);
extern undefined1 *DAT_003dd158;

// USA 003DD088 <- EU 003DD068 (Ghidra, non-matching)
// GLOBAL DAT_003dd158 undefined1 *

void func_003DD088(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = func_003DCE04();
  if (*(char *)((int)puVar2 + 0xe) != '\0') {
    *(undefined1 *)((int)puVar2 + 0xf) = 0;
    software_interrupt(0x24);
    if ((int)puVar2[6] < 0) {
      func_0010A98C(puVar2[6]);
    }
    *(undefined1 *)(puVar2 + 7) = 1;
    func_0010C180(puVar2 + 6);
    if (puVar2[6] != 0) {
      software_interrupt(0x23);
      puVar2[6] = 0;
    }
    *(undefined1 *)((int)puVar2 + 0xe) = 0;
    coproc_moveto_Data_Synchronization(0);
    func_001080D4(puVar2 + 0x12);
  }
  if (*(char *)(puVar2 + 3) != '\0') {
    *(undefined1 *)((int)puVar2 + 0xd) = 0;
    software_interrupt(0x24);
    if ((int)puVar2[4] < 0) {
      func_0010A98C(puVar2[4]);
    }
    *(undefined1 *)(puVar2 + 5) = 1;
    func_0010C180(puVar2 + 4);
    if (puVar2[4] != 0) {
      software_interrupt(0x23);
      puVar2[4] = 0;
    }
    puVar1 = DAT_003dd158;
    puVar2[8] = 0;
    puVar2[10] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    puVar2[0xf] = 0xffffffff;
    *puVar1 = 1;
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  return;
}


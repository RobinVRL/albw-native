#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C180(uint *param_1);
extern undefined1 *DAT_0010afe0;
extern uint *DAT_0010afe4;
extern uint *DAT_0010afe8;

// USA 0010AF4C <- EU 0010AF4C (Ghidra, non-matching)
// GLOBAL DAT_0010afe0 undefined1 *
// GLOBAL DAT_0010afe4 uint *
// GLOBAL DAT_0010afe8 uint *

void func_0010AF4C(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = DAT_0010afe4;
  *DAT_0010afe0 = 1;
  uVar3 = *puVar1;
  software_interrupt(0x18);
  if ((int)uVar3 < 0) {
    func_0010A98C(uVar3);
  }
  puVar5 = DAT_0010afe8;
  software_interrupt(0x24);
  if ((int)*DAT_0010afe8 < 0) {
    func_0010A98C(*DAT_0010afe8);
  }
  puVar2 = DAT_0010afe8;
  *(undefined1 *)(puVar5 + 1) = 1;
  func_0010C180(puVar2);
  if (*puVar5 != 0) {
    software_interrupt(0x23);
    *DAT_0010afe8 = 0;
  }
  iVar4 = 0;
  do {
    puVar5 = puVar1 + iVar4;
    if (*puVar5 != 0) {
      software_interrupt(0x23);
      *puVar5 = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}


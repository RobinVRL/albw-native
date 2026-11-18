#include "ghidra_types.h"

extern undefined *DAT_00118e94;
extern int DAT_00118e98;

// USA 00118E80 <- EU 00118E80 (Ghidra, non-matching)
// GLOBAL DAT_00118e94 undefined *
// GLOBAL DAT_00118e98 int

int func_00118E80(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00118e98;
  pcVar1 = DAT_00118e94;
  iVar3 = DAT_00118e98 + 0x20;
  do {
    iVar3 = iVar3 + -8;
    (*pcVar1)(iVar3);
  } while (iVar2 != iVar3);
  return iVar2 + -8;
}


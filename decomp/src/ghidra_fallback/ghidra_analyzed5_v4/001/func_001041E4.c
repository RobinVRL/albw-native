#include "ghidra_types.h"

extern int func_00100070(void);
extern int DAT_00104238;
extern undefined4 DAT_0010423c;
extern undefined4 DAT_00104240;

// USA 001041E4 <- EU 001041E4 (Ghidra, non-matching)
// GLOBAL DAT_00104238 int
// GLOBAL DAT_0010423c undefined4
// GLOBAL DAT_00104240 undefined4

void func_001041E4(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar1 + 0x5c) = (undefined4 *)(iVar1 + 0x60);
  bVar3 = DAT_00104238 == 0;
  *(undefined4 *)(iVar1 + 100) = DAT_0010423c;
  uVar2 = DAT_00104240;
  *(undefined4 *)(iVar1 + 0x68) = DAT_00104240;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  if (bVar3) {
    uVar2 = 0;
  }
  *(undefined4 *)(iVar1 + 0x78) = 0;
  if (!bVar3) {
    uVar2 = func_00100070();
  }
  *(undefined4 *)(iVar1 + 0x7c) = uVar2;
  return;
}


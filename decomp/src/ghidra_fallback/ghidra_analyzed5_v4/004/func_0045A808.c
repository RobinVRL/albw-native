#include "ghidra_types.h"

extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_0045a86c;

// USA 0045A808 <- EU 0045A7E0 (Ghidra, non-matching)
// GLOBAL DAT_0045a86c int

undefined4 func_0045A808(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  bool bVar4;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045a86c + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  piVar2 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
  }
  func_0066E58C((undefined4 *)(*piVar2 + 200),'\x06');
  iVar3 = *(int *)(param_1 + 0x1c4);
  cVar1 = *(char *)(iVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0xe);
  }
  if (bVar4 && cVar1 == '\0') {
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  return func_004576CC(param_1,0,0,in_r3);
}


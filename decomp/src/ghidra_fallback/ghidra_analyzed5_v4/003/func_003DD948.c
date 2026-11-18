#include "ghidra_types.h"

extern int func_003DECE8(int param_1,int param_2,ushort *param_3);
extern int func_003DEE98(int param_1,int param_2,ushort *param_3);
extern undefined4 DAT_003dd980;
extern int DAT_003dd984;

// USA 003DD948 <- EU 003DD928 (Ghidra, non-matching)
// GLOBAL DAT_003dd980 undefined4
// GLOBAL DAT_003dd984 int

void func_003DD948(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = DAT_003dd980;
  iVar4 = 0;
  do {
    iVar2 = DAT_003dd984;
    iVar5 = (int)(char)iVar4;
    puVar3 = (ushort *)(param_1 + iVar5 * 0x14);
    *puVar3 = (ushort)uVar1;
    func_003DECE8(iVar2,iVar5,puVar3);
    iVar2 = DAT_003dd984;
    puVar3 = (ushort *)(param_1 + iVar5 * 0x34 + 0x28);
    *puVar3 = (ushort)uVar1;
    func_003DEE98(iVar2,iVar5,puVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}


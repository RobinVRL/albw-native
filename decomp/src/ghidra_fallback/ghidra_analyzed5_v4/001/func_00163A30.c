#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern undefined4 DAT_00163b44;
extern int DAT_00163b48;
extern int DAT_00163b4c;

// USA 00163A30 <- EU 00163A34 (Ghidra, non-matching)
// GLOBAL DAT_00163b44 undefined4
// GLOBAL DAT_00163b48 int
// GLOBAL DAT_00163b4c int

void func_00163A30(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_00163b44;
  if ((char)param_1[0x248] != param_2) {
    *(char *)(param_1 + 0x248) = (char)param_2;
    if (param_2 == 0) {
      func_004F88A0(param_1,(undefined2 *)param_1[0x23d]);
      func_004FC218((int)param_1,'\b',-1,(ushort)uVar1);
      func_004F9554(param_1[0x10c],0,0,1);
      func_004F9554(param_1[0x10d],0,0,1);
      iVar2 = DAT_00163b4c;
      iVar3 = param_1[0x119];
      iVar4 = param_1[0x11a];
      param_1[0x119] = iVar3;
      param_1[0x11a] = iVar4;
      param_1[0x11b] = iVar2;
      param_1[0x113] = iVar3;
      param_1[0x114] = iVar4;
      param_1[0x115] = iVar2;
      return;
    }
    func_004F88A0(param_1,(undefined2 *)param_1[0x23c]);
    func_004FC218((int)param_1,'\x05',0,(ushort)uVar1);
    func_004F9554(param_1[0x10c],5,0,1);
    func_004F9554(param_1[0x10d],5,0,1);
    iVar2 = DAT_00163b48;
    iVar3 = param_1[0x119];
    iVar4 = param_1[0x11a];
    param_1[0x119] = iVar3;
    param_1[0x11a] = iVar4;
    param_1[0x11b] = iVar2;
    param_1[0x113] = iVar3;
    param_1[0x114] = iVar4;
    param_1[0x115] = iVar2;
  }
  return;
}


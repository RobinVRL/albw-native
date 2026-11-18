#include "ghidra_types.h"

extern int func_003DE6C8(int param_1,undefined2 param_2);
extern int func_003DE70C(int param_1,int param_2,undefined2 param_3);
extern int func_003DE778(int param_1,uint param_2);
extern int func_003DEB94(int param_1,undefined2 param_2);
extern int func_003DEBDC(int param_1,float fparam_0);
extern int func_003DEC28(int param_1,uint param_2);
extern int func_003DEC7C(int param_1,int param_2,undefined2 param_3);
extern int func_003DEDCC(int param_1,int param_2,float fparam_0);
extern int func_003DEFE4(int param_1,undefined2 param_2);
extern int func_003DF430(int param_1,undefined2 param_2);
extern int func_003DF844(int param_1,uint param_2);
extern int DAT_003ddf4c;

// USA 003DDE84 <- EU 003DDE64 (Ghidra, non-matching)
// GLOBAL DAT_003ddf4c int

undefined4 func_003DDE84(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  func_003DEBDC(DAT_003ddf4c,*(float *)(param_1 + 4) * *(float *)(param_1 + 8));
  iVar2 = 0;
  do {
    iVar3 = (int)(char)iVar2;
    iVar4 = param_1 + iVar3 * 4;
    func_003DEDCC(DAT_003ddf4c,iVar3,*(float *)(iVar4 + 0xc));
    if ((*(int *)(iVar4 + 0x14) == 0) && (*(char *)(param_1 + iVar3 + 0x30) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    func_003DE70C(DAT_003ddf4c,iVar3,uVar1);
    func_003DEC7C(DAT_003ddf4c,iVar3,(short)*(char *)(param_1 + iVar3 + 0x24));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  func_003DEFE4(DAT_003ddf4c,(ushort)*(byte *)(param_1 + 2));
  func_003DEB94(DAT_003ddf4c,(ushort)*(byte *)(param_1 + 1));
  func_003DEC28(DAT_003ddf4c,(uint)*(ushort *)(param_1 + 0x28));
  func_003DF844(DAT_003ddf4c,(uint)*(byte *)(param_1 + 0x27));
  func_003DE778(DAT_003ddf4c,(uint)*(ushort *)(param_1 + 0x2a));
  func_003DF430(DAT_003ddf4c,*(undefined2 *)(param_1 + 0x32));
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return func_003DE6C8(DAT_003ddf4c,(ushort)*(byte *)(param_1 + 3));
}


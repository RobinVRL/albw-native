#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DE6C8(int param_1,undefined2 param_2);
extern int func_003DE70C(int param_1,int param_2,undefined2 param_3);
extern int func_003DE778(int param_1,uint param_2);
extern int func_003DEB94(int param_1,undefined2 param_2);
extern int func_003DEBDC(int param_1,float fparam_0);
extern int func_003DEC28(int param_1,uint param_2);
extern int func_003DEC7C(int param_1,int param_2,undefined2 param_3);
extern int func_003DEDCC(int param_1,int param_2,float fparam_0);
extern int func_003DF430(int param_1,undefined2 param_2);
extern float DAT_003ddde4;
extern int DAT_003ddde8;

// USA 003DDC50 <- EU 003DDC30 (Ghidra, non-matching)
// GLOBAL DAT_003ddde4 float
// GLOBAL DAT_003ddde8 int

undefined4 func_003DDC50(char *param_1)

{
  int iVar1;
  int iVar2;
  float fparam_0;
  
  iVar1 = DAT_003ddde8;
  fparam_0 = DAT_003ddde4;
  if (*param_1 != '\0') {
    *(float *)(param_1 + 4) = DAT_003ddde4;
    func_003DEBDC(iVar1,fparam_0 * *(float *)(param_1 + 8));
  }
  iVar1 = DAT_003ddde8;
  if (*param_1 != '\0') {
    *(float *)(param_1 + 8) = fparam_0;
    func_003DEBDC(iVar1,*(float *)(param_1 + 4) * fparam_0);
  }
  iVar1 = DAT_003ddde8;
  if (*param_1 != '\0') {
    *(float *)(param_1 + 0xc) = fparam_0;
    func_003DEDCC(iVar1,0,fparam_0);
  }
  iVar1 = DAT_003ddde8;
  if (*param_1 != '\0') {
    *(float *)(param_1 + 0x10) = fparam_0;
    func_003DEDCC(iVar1,1,fparam_0);
  }
  func_0010C0C0((int *)(param_1 + 0x34));
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  func_003DE70C(DAT_003ddde8,0,(short)param_1[0x30]);
  func_0010C160((int *)(param_1 + 0x34));
  func_0010C0C0((int *)(param_1 + 0x34));
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  func_003DE70C(DAT_003ddde8,1,(short)param_1[0x31]);
  func_0010C160((int *)(param_1 + 0x34));
  iVar1 = DAT_003ddde8;
  param_1[0x24] = '\0';
  func_003DEC7C(iVar1,0,0);
  iVar1 = DAT_003ddde8;
  param_1[0x25] = '\0';
  func_003DEC7C(iVar1,1,0);
  iVar1 = DAT_003ddde8;
  param_1[0x2a] = '\0';
  param_1[0x2b] = -0x80;
  func_003DE778(iVar1,0x8000);
  iVar1 = DAT_003ddde8;
  param_1[0x28] = -1;
  param_1[0x29] = '\x7f';
  func_003DEC28(iVar1,0x7fff);
  iVar2 = func_0010AA9C();
  iVar1 = DAT_003ddde8;
  if (iVar2 != 0) {
    param_1[1] = '\x01';
    func_003DEB94(iVar1,1);
  }
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  iVar1 = DAT_003ddde8;
  param_1[0x32] = '\x02';
  param_1[0x33] = '\0';
  func_003DF430(iVar1,2);
  param_1[3] = '\0';
  return func_003DE6C8(DAT_003ddde8,0);
}


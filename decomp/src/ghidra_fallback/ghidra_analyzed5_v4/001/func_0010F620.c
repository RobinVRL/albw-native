#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_0010FB48(int param_1);
extern int func_0010FC88(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6);
extern int *DAT_0010f6ec;
extern int DAT_0010f6f0;
extern int DAT_0010f6f4;
extern int DAT_0010f6f8;
extern undefined4 DAT_0010f6fc;
extern undefined4 DAT_0010f700;
extern int DAT_0010f704;

// USA 0010F620 <- EU 0010F620 (Ghidra, non-matching)
// GLOBAL DAT_0010f6ec int *
// GLOBAL DAT_0010f6f0 int
// GLOBAL DAT_0010f6f4 int
// GLOBAL DAT_0010f6f8 int
// GLOBAL DAT_0010f6fc undefined4
// GLOBAL DAT_0010f700 undefined4
// GLOBAL DAT_0010f704 int

undefined4 * func_0010F620(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_0010f6ec;
  func_0010C0C0(DAT_0010f6ec);
  iVar2 = DAT_0010f6f0;
  if (((*(uint *)(DAT_0010f6f0 + 0xc) & 1) == 0) &&
     (iVar3 = func_00100174((int *)(DAT_0010f6f0 + 0xc)), iVar3 != 0)) {
    piVar1[-0x3b] = 0;
    piVar1[-0x3a] = 0;
    piVar1[-0x39] = 0;
    piVar1[-0x38] = 0;
    iVar3 = DAT_0010f6f4;
    piVar1[-0x37] = 0;
    piVar1[-0x33] = 0;
    piVar1[-0x30] = 0;
    piVar1[-0x3c] = DAT_0010f6f8;
    piVar1[-0x2e] = -1;
    piVar1[-0x2f] = 0;
    func_0010FC88((int)(piVar1 + -0x3c),0x130,iVar3,0x1300,4,0);
    func_0010DEB0(piVar1 + -0x30);
  }
  iVar3 = DAT_0010f704;
  *(int *)(iVar2 + 4) = DAT_0010f704;
  puVar4 = func_0010FB48(iVar3);
  func_0010C160(piVar1);
  return puVar4;
}


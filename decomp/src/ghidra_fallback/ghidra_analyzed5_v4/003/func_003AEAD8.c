#include "ghidra_types.h"

extern int func_0025D6E4(int *param_1);
extern int func_0049116C(undefined4 *param_1);
extern int DAT_003aead8;

// USA 003AEAD8 <- EU 003AEAB4 (Ghidra, non-matching)
// GLOBAL DAT_003aead8 int

undefined4 func_003AEAD8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_003aead8;
  *param_1 = DAT_003aead8;
  param_1[6] = iVar1 + 0x54;
  puVar2 = func_0049116C(param_1 + 0x2c);
  func_0025D6E4(puVar2 + -0x2c);
  return (undefined4)param_1;
}


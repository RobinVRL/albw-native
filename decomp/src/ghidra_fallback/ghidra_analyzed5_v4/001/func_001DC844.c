#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0028C02C(int param_1,int param_2);
extern int func_0028C318(int param_1,int param_2);
extern int func_002D16D0(int param_1,int param_2);
extern int func_002D4188(int param_1,int param_2);
extern int func_004B083C(void);
extern undefined DAT_0000000b;
extern int *DAT_001dc9c4;

// USA 001DC844 <- EU 001DC844 (Ghidra, non-matching)
// GLOBAL DAT_0000000b undefined
// GLOBAL DAT_001dc9c4 int *

undefined4 func_001DC844(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6bb) = 0;
    func_0028C02C(*(int *)(param_1 + 0x600),1);
    func_0028C02C(*(int *)(param_1 + 0x600),0);
    func_002D16D0(*(int *)(param_1 + 0x604),0);
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x630);
      if (iVar1 != 0) {
        func_002D4188(iVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x19);
    func_00151148(*(int *)(param_1 + 0x60c),1);
    iVar4 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x6bb) = 1;
    func_0028C02C(*(int *)(param_1 + 0x600),0);
    func_0028C02C(*(int *)(param_1 + 0x600),0);
    func_002D16D0(*(int *)(param_1 + 0x604),0);
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x630);
      if (iVar1 != 0) {
        func_002D4188(iVar1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x19);
    func_00151148(*(int *)(param_1 + 0x60c),0);
    iVar4 = 0;
  }
  iVar1 = *DAT_001dc9c4;
  if (iVar1 != 0) {
    pcVar3 = (char *)(iVar1 + 0x18);
    uVar2 = (uint)*pcVar3;
    if (uVar2 == 2) {
      pcVar3 = *(char **)(iVar1 + 0x1c);
    }
    if ((uVar2 != 2 || pcVar3 != &DAT_0000000b) && (uVar2 != 0x16 && uVar2 != 0x17)) {
      bVar6 = 4 < uVar2;
      bVar5 = uVar2 == 5;
      if (5 < uVar2) {
        bVar6 = 3 < uVar2 - 0x16;
        bVar5 = uVar2 - 0x16 == 4;
      }
      if (((!bVar6 || bVar5) || (iVar1 = func_004B083C(), iVar1 != 0)) || (iVar4 == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      return func_0028C318(*(int *)(param_1 + 0x600),iVar4);
    }
    return func_0028C318(*(int *)(param_1 + 0x600),iVar4);
  }
  return 0;
}


#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_003D2158(int param_1,int param_2,uint param_3,int param_4);
extern int func_003D22CC(undefined4 *param_1,undefined4 *param_2);
extern int func_003D231C(undefined4 *param_1);
extern int func_0056427C(int param_1);
extern int DAT_003d1e20;

// USA 003D1D58 <- EU 003D1D34 (Ghidra, non-matching)
// GLOBAL DAT_003d1e20 int

int func_003D1D58(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_30 ((undefined4 *)(albw_frame + 0x10))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x18))
  func_003D231C(auStack_38);
  puVar2 = func_003D22CC(auStack_28,(undefined4 *)(param_1 + 0x20));
  func_0010BB00(auStack_38,puVar2);
  func_003D22CC(auStack_30,(undefined4 *)(param_1 + 0x20));
  if ((*(char *)(param_1 + 0x131) == '\0') && (iVar3 = func_0056427C((int)auStack_38), iVar3 != 0))
  {
    iVar3 = func_003D2158(param_1,param_2,param_3,param_4);
    if (-1 < iVar3) {
      iVar4 = 0x70;
      iVar3 = (int)*(char *)(param_1 + 0x130);
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0xc;
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 8 + (*(int *)(param_1 + iVar1 + 0x74) + 3U & 0xfffffffc);
        } while (iVar3 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + iVar4 + 0x20;
      *(int *)(param_1 + 8) = iVar4;
      iVar3 = 0;
    }
    return iVar3;
  }
  return DAT_003d1e20;
}


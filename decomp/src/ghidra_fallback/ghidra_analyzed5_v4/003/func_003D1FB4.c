#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern int func_003D22CC(undefined4 *param_1,undefined4 *param_2);
extern int func_003D231C(undefined4 *param_1);
extern int func_0056427C(int param_1);
extern undefined4 DAT_003d20a4;
extern undefined4 DAT_003d20a8;
extern undefined4 DAT_003d20ac;
extern undefined4 DAT_003d20b0;

// USA 003D1FB4 <- EU 003D1F90 (Ghidra, non-matching)
// GLOBAL DAT_003d20a4 undefined4
// GLOBAL DAT_003d20a8 undefined4
// GLOBAL DAT_003d20ac undefined4
// GLOBAL DAT_003d20b0 undefined4

undefined4 func_003D1FB4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_30 ((undefined4 *)(albw_frame + 0x0))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x8))
  #define auStack_20 ((undefined4 *)(albw_frame + 0x10))
  if (param_2 == 0) {
    return DAT_003d20a4;
  }
  uVar4 = DAT_003d20a8;
  if (((((param_3 & 3) == 0) && (uVar4 = DAT_003d20ac, param_3 + 0x70 < 0x19001)) && (param_3 != 0))
     && (param_3 < 0x18001)) {
    func_003D231C(auStack_30);
    puVar2 = func_003D22CC(auStack_20,(undefined4 *)(param_1 + 0x20));
    func_0010BB00(auStack_30,puVar2);
    func_003D22CC(auStack_28,(undefined4 *)(param_1 + 0x20));
    if ((*(char *)(param_1 + 0x131) != '\0') || (iVar3 = func_0056427C((int)auStack_30), iVar3 == 0)
       ) {
      return DAT_003d20b0;
    }
    iVar6 = 0x70;
    *(uint *)(param_1 + 0x134) = param_3;
    *(int *)(param_1 + 0x138) = param_2;
    *(uint *)(param_1 + 0xc) = param_3;
    iVar3 = (int)*(char *)(param_1 + 0x130);
    if (iVar3 != 0) {
      iVar5 = 0;
      do {
        iVar1 = iVar5 * 0xc;
        iVar3 = iVar3 + -1;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 8 + (*(int *)(param_1 + iVar1 + 0x74) + 3U & 0xfffffffc);
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + iVar6 + 0x20;
    *(int *)(param_1 + 8) = iVar6;
    uVar4 = 0;
  }
  return uVar4;
}


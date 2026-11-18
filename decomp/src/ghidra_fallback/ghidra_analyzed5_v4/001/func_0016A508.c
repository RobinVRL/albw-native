#include "ghidra_types.h"

extern int func_0016A65C(uint *param_1);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int DAT_0016a658;

// USA 0016A508 <- EU 0016A508 (Ghidra, non-matching)
// GLOBAL DAT_0016a658 int

void func_0016A508(uint *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define aiStack_48 ((int *)(albw_frame + 0x8))
  #define puStack_2c (*(uint * *)(albw_frame + 0x24))
  #define local_28 (*(int * *)(albw_frame + 0x28))
  puStack_2c = param_1;
  local_28 = param_2;
  func_0016A65C(param_1);
  func_003C7A70(aiStack_48);
  iVar1 = DAT_0016a658;
  iVar8 = 0;
  do {
    bVar2 = func_00560EF8(local_28,aiStack_48,*(uint **)(iVar1 + iVar8 * 4));
    if (bVar2) {
      puVar7 = param_1 + iVar8 * 2;
      uVar6 = 0;
      if (0 < (int)*puVar7) {
        do {
          iVar3 = func_00560FA0((int)aiStack_48,&local_4c,uVar6 << 2);
          if (iVar3 != 0) {
            puVar4 = (undefined1 *)puVar7[1];
            if (uVar6 < *puVar7) {
              puVar4 = puVar4 + uVar6 * 4;
            }
            *puVar4 = (char)local_4c;
          }
          iVar3 = func_00560FA0((int)aiStack_48,&local_4c,uVar6 * 4 + 1);
          if (iVar3 != 0) {
            uVar5 = puVar7[1];
            if (uVar6 < *puVar7) {
              uVar5 = uVar5 + uVar6 * 4;
            }
            *(char *)(uVar5 + 1) = (char)local_4c;
          }
          iVar3 = func_00560FA0((int)aiStack_48,&local_4c,uVar6 * 4 + 2);
          if (iVar3 != 0) {
            uVar5 = puVar7[1];
            if (uVar6 < *puVar7) {
              uVar5 = uVar5 + uVar6 * 4;
            }
            *(char *)(uVar5 + 2) = (char)local_4c;
          }
          iVar3 = func_00560FA0((int)aiStack_48,&local_4c,uVar6 * 4 + 3);
          if (iVar3 != 0) {
            uVar5 = puVar7[1];
            if (uVar6 < *puVar7) {
              uVar5 = uVar5 + uVar6 * 4;
            }
            *(char *)(uVar5 + 3) = (char)local_4c;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)*puVar7);
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  return;
}


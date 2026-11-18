#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A3700(int param_1);
extern int func_0053F5E0(int param_1);
extern undefined DAT_001dd0bc;

// USA 001DCF58 <- EU 001DCF58 (Ghidra, non-matching)
// GLOBAL DAT_001dd0bc undefined

undefined4 func_001DCF58(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  bVar1 = *(byte *)(*(int *)(param_1 + 0x604) + 0x324);
  bVar6 = (bVar1 & 1) == 0;
  bVar7 = (bVar1 & 8) == 0;
  bVar8 = bVar6 && bVar7;
  if (bVar6 && bVar7) {
    bVar8 = *(char *)(*(int *)(param_1 + 0x604) + 0x168) == '\0';
  }
  if (((bVar8) || (cVar2 = func_0053F5E0(*(int *)(param_1 + 0x614)), cVar2 == '\b')) ||
     (*(short *)(*(int *)(param_1 + 0x614) + 0x42) == 0x46)) {
    iVar3 = *(int *)(param_1 + 0x6dc);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x6e0))) &&
       ((uVar5 = *(uint *)(iVar3 + 0x3c), (uVar5 & 4) != 0 || (uVar5 & 0x40) != 0 ||
        (((iVar4 = *(int *)(iVar3 + 0x20), iVar4 != 0 &&
          (*(int *)(iVar3 + 0x24) == *(int *)(iVar4 + 0xc))) && (0 < *(int *)(iVar4 + 4))))))) {
      *(uint *)(iVar3 + 0x3c) = uVar5 & 0xffffffbb | 8;
      return func_004A3700(iVar3);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x6dc);
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x1c) != *(int *)(param_1 + 0x6e0))) ||
       (((*(uint *)(iVar3 + 0x3c) & 4) == 0 && (*(uint *)(iVar3 + 0x3c) & 0x40) == 0 &&
        (((iVar4 = *(int *)(iVar3 + 0x20), iVar4 == 0 ||
          (*(int *)(iVar3 + 0x24) != *(int *)(iVar4 + 0xc))) || (*(int *)(iVar4 + 4) < 1)))))) {
      if (*(int *)(param_1 + 0x344) == 0) {
        *(int *)(param_1 + 0x6dc) = 0;
        *(undefined4 *)(param_1 + 0x6e0) = 0;
      }
      else {
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x6e0))) {
          func_00110848(iVar3);
        }
        func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)&DAT_001dd0bc);
        *(int *)(param_1 + 0x6dc) = local_20;
        *(undefined4 *)(param_1 + 0x6e0) = uStack_1c;
      }
    }
  }
  return 0;
}


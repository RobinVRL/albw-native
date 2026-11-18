#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003D0988(int *param_1);
extern int func_003D1048(undefined4 *param_1);
extern int DAT_003d0844;
extern int DAT_003d0848;
extern int DAT_003d084c;

// USA 003D077C <- EU 003D0758 (Ghidra, non-matching)
// GLOBAL DAT_003d0844 int
// GLOBAL DAT_003d0848 int
// GLOBAL DAT_003d084c int

int func_003D077C(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_8c (*(int *)(albw_frame + 0x4))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_7c (*(byte *)(albw_frame + 0x14))
  iVar2 = func_003D0988(param_1);
  iVar1 = DAT_003d0844;
  iVar5 = 0;
  if ((iVar2 != 0) && (uVar4 = 0, iVar5 = 0, param_1[6] != 0)) {
    do {
      iVar3 = func_003D1048(param_1 + uVar4 * 4 + 7);
      iVar2 = iVar1;
      if (iVar3 != 0) {
        local_8c = 0;
        func_00110490(auStack_88,0x60);
        iVar2 = (**(code **)(*param_1 + 0x34))(param_1,auStack_88,0x60,&local_8c,iVar3,2,0x12);
        if ((DAT_003d0848 != iVar2 * 0x400000) && (local_8c == 0)) {
          iVar2 = DAT_003d084c;
        }
      }
      if ((-1 < iVar2) && ((((uint)local_7c & param_2 & 0xffffff7f) != 0 || (param_2 == 0)))) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[6]);
  }
  return iVar5;
}


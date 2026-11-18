#include "ghidra_types.h"

extern int func_00537DB4(int param_1,int *param_2);
extern int DAT_00296a58;
extern int DAT_00296a5c;

// USA 0029699C <- EU 002969C4 (Ghidra, non-matching)
// GLOBAL DAT_00296a58 int
// GLOBAL DAT_00296a5c int

void func_0029699C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = DAT_00296a5c;
  iVar1 = DAT_00296a58;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x18) - iVar5;
  iVar6 = (param_1 + 0x14) - *(int *)(param_1 + 0x20);
  if (iVar4 != iVar6) {
    while( true ) {
      local_1c = *(undefined4 *)(iVar1 + 0x18);
      local_20 = iVar2;
      iVar3 = func_00537DB4(iVar4,&local_20);
      if (iVar3 != 0) break;
      iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5;
      if (iVar4 == iVar6) {
        return;
      }
    }
    *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + 1;
  }
  return;
}


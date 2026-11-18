#include "ghidra_types.h"

extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_00537DB4(int param_1,int *param_2);
extern int DAT_00296188;
extern int DAT_0029618c;
extern float DAT_00296190;
extern float DAT_00296194;

// USA 002960B4 <- EU 002960DC (Ghidra, non-matching)
// GLOBAL DAT_00296188 int
// GLOBAL DAT_0029618c int
// GLOBAL DAT_00296190 float
// GLOBAL DAT_00296194 float

void func_002960B4(int param_1)

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
  iVar2 = DAT_0029618c;
  iVar1 = DAT_00296188;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x18) - iVar5;
    iVar6 = (param_1 + 0x14) - iVar5;
    if (iVar4 != iVar6) {
      while( true ) {
        local_1c = *(undefined4 *)(iVar1 + 8);
        local_20 = iVar2;
        iVar3 = func_00537DB4(iVar4,&local_20);
        if (iVar3 != 0) break;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5;
        if (iVar4 == iVar6) {
          return;
        }
      }
      func_00258038(iVar4,1,0x1e,DAT_00296190);
      func_00258038(iVar4,2,0x1e,DAT_00296194);
    }
  }
  return;
}


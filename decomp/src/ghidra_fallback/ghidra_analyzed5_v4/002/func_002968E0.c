#include "ghidra_types.h"

extern int func_00258038(int param_1,uint param_2,undefined4 param_3,float fparam_0);
extern int func_00537DB4(int param_1,int *param_2);
extern int DAT_002969b4;
extern int DAT_002969b8;
extern float DAT_002969bc;
extern float DAT_002969c0;

// USA 002968E0 <- EU 00296908 (Ghidra, non-matching)
// GLOBAL DAT_002969b4 int
// GLOBAL DAT_002969b8 int
// GLOBAL DAT_002969bc float
// GLOBAL DAT_002969c0 float

void func_002968E0(int param_1)

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
  iVar2 = DAT_002969b8;
  iVar1 = DAT_002969b4;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar5 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x18) - iVar5;
    iVar6 = (param_1 + 0x14) - iVar5;
    if (iVar4 != iVar6) {
      while( true ) {
        local_1c = *(undefined4 *)(iVar1 + 0x1c);
        local_20 = iVar2;
        iVar3 = func_00537DB4(iVar4,&local_20);
        if (iVar3 != 0) break;
        iVar4 = *(int *)(iVar4 + iVar5 + 4) - iVar5;
        if (iVar4 == iVar6) {
          return;
        }
      }
      func_00258038(iVar4,1,0x78,DAT_002969bc);
      func_00258038(iVar4,2,0x78,DAT_002969c0);
    }
  }
  return;
}


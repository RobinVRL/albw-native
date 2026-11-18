#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001A1040(int param_1,uint param_2);
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern int func_0065A330(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0019ece8;
extern undefined4 DAT_0019ecec;

// USA 0019EBFC <- EU 0019EBFC (Ghidra, non-matching)
// GLOBAL DAT_0019ece8 float *
// GLOBAL DAT_0019ecec undefined4

undefined4 func_0019EBFC(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = (uint *)(param_1 + 0x11d4);
  if (*(char *)(param_1 + 0x1225) == '\0') {
    if (*(char *)(param_1 + 0x1222) == '\0') {
      if (*(uint *)(param_1 + 0x11d8) <= *puVar4) {
        func_001A1040(param_1,2);
        *(undefined1 *)(param_1 + 0x1222) = 1;
        return 0;
      }
      *puVar4 = *puVar4 + 1;
    }
    else {
      iVar3 = func_0058A8F0(param_1);
      if (iVar3 != 0) {
        return func_0065A330((undefined4 *)(param_1 + 0x9d0),1);
      }
    }
  }
  else {
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) {
      func_00115C54((float *)(param_1 + 0x11a8),(float *)(param_1 + 0x3d0),DAT_0019ece8);
      *(undefined1 *)(param_1 + 0x9bc) = 2;
      *(float **)(param_1 + 0x8f0) = (float *)(param_1 + 0x11a8);
      func_0036BFD0(param_1 + 0x8c8,0xffffffff,0xffffffff);
      uVar1 = DAT_0019ecec;
      *(undefined4 *)(param_1 + 0x11d8) = 3;
      *(undefined4 *)(param_1 + 0x11dc) = uVar1;
      *puVar4 = 0;
      *(undefined1 *)(param_1 + 0x1225) = 0;
    }
  }
  return 0;
}


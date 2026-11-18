#include "ghidra_types.h"

extern int func_0012FC20(int param_1,int param_2,uint param_3);
extern int func_00130C1C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4);
extern int func_002FE918(int param_1);
extern int func_00323158(undefined4 param_1,uint param_2,int param_3);
extern int func_0057D5C4(int *param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int DAT_00132774;
extern int DAT_00132778;
extern int DAT_0013277c;
extern int *DAT_00132780;

// USA 001326D8 <- EU 001326D8 (Ghidra, non-matching)
// GLOBAL DAT_00132774 int
// GLOBAL DAT_00132778 int
// GLOBAL DAT_0013277c int
// GLOBAL DAT_00132780 int *

void func_001326D8(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  cVar1 = *(char *)(param_1 + DAT_00132774);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x44);
  if (*(char *)(*(int *)(param_1 + 0x44) + 0x47) != '\0') {
    func_006003D8(0x208,&iStack_18);
    func_0012FC20(param_1,param_2,1);
    piVar2 = func_0057D5C4(*(int **)(DAT_00132778 + param_1));
    func_00130C1C(param_1,(undefined4 *)(*(int *)(DAT_0013277c + param_1) + 4),piVar2,(int *)0x0);
    if (cVar1 != '\0') {
      func_00323158(*(undefined4 *)(*DAT_00132780 + 0x1c),2,0);
    }
    func_002FE918(*(int *)(param_1 + 0x4c));
  }
  return;
}


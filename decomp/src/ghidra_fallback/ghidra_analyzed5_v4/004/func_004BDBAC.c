#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);

// USA 004BDBAC <- EU 004BDB84 (Ghidra, non-matching)

void func_004BDBAC(int param_1,int param_2)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  piVar1 = *(int **)(param_1 + 0x78c);
  if (piVar1 != (int *)0x0) {
    if (*(char *)(param_1 + 0x910) == '\x02') {
      func_001512B4((int)piVar1,(float *)(param_1 + 0x888));
    }
    else {
      func_001512E8(piVar1);
    }
    if (*(float *)(*(int *)(param_1 + 0x78c) + 0x10) != *(float *)(*(int *)(param_1 + 0x78c) + 0x18)
       ) {
      if (*(uint *)(param_1 + 0x82c) != *(uint *)(param_1 + 1000) || param_2 != 0) {
        func_00491624(afStack_30,0,*(uint *)(param_1 + 1000),0);
        func_0015133C(*(int *)(param_1 + 0x78c),afStack_30);
      }
      *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(param_1 + 1000);
    }
  }
  return;
}


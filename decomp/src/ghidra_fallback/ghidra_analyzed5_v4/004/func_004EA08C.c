#include "ghidra_types.h"

extern int func_00297140(int param_1,int *param_2);
extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int func_00689024(undefined4 *param_1);

// USA 004EA08C <- EU 004EA064 (Ghidra, non-matching)

void func_004EA08C(int param_1,char *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  if (*param_2 == '\b') {
    func_00689024(aiStack_58);
    func_005382AC(*(undefined4 *)(param_1 + 0x50),aiStack_58,param_2,1);
    func_00297140(*(int *)(param_1 + 0x4c),aiStack_58);
  }
  return;
}

